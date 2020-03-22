int buzzer = 9; //定义蜂鸣器的输出引脚为9
int R_guangming = 0;//定义光敏电阻的输入引脚
int val;
void setup() 
{ 
pinMode(buzzer,OUTPUT);//设置连接蜂鸣器的引脚为输出
} 
void voice_out(int del)//声音的频率控制函数
{
 delay(del);//通过改变延时来改变频率，很简单
 digitalWrite(buzzer,HIGH);
 delay(del);
 digitalWrite(buzzer,LOW);
}
void loop() 
{ 
  val=analogRead(R_guangming);  //读取模拟接口0 的值，并将其赋给val
  if(val<700)
   {
    voice_out(val); //把读到的val值传给频率控制函数
   }
}


