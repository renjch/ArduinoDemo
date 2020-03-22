int BASE = 2 ;  //第一颗LED 接的 I/O 脚
int NUM = 6;   //LED 的个数

void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   //设定数字I/O脚为输出
   }
}

void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);    //设定数字I/O脚输出为"低"，即逐渐关灯
     delay(200);        //延迟
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);    //设定数字I/O脚输出为"高"，即逐渐开灯
     delay(200);        //延迟
   }  
}
