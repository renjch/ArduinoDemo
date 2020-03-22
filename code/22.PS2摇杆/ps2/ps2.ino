#include <LiquidCrystal.h>   //调用arduino自带的LiquidCrystal库	
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);//设置接口	
int xpotPin = 0;  //设置模拟口0为X的信号输入端口
int ypotPin = 1;  //设置模拟口1为Y的信号输入端口
int xval=0;    //设置变量
int yval=0;	
void setup()
{
  pinMode(xpotPin,INPUT);//
  pinMode(ypotPin,INPUT);//
  lcd.begin(16, 2);  //初始化LCD
  delay(1000); //延时1000ms
}	
void loop ()
{	
  xval = analogRead(xpotPin);   //xval变量为从0信号口读取到的数值
  yval = analogRead(ypotPin);   //yval变量为从1信号口读取到的数值
  lcd.clear(); //清屏
  lcd.setCursor(0, 0) ; //设置光标位置为第一行第一个位置
  lcd.print("X=");      //使屏幕显示文字X=
  lcd.print(xval);
  lcd.setCursor(7, 0) ; //设置光标位置为第一行第八个位置
  lcd.print("Y=");      //使屏幕显示文字Y=
  lcd.print(yval);	
  delay(100);                     //延时0.1秒，这里也就是刷新速度。	
}
