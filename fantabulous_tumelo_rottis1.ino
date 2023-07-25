// C++ code
//
int seven_seg[]={13,12,11,10,9,8,7};
int j=0;
int i=0 ;
int num =0;
int num_array[10][7]={{1,1,1,1,1,1,0},//0
{0,1,1,0,0,0,0},//1
{1,1,0,1,1,0,1},//2
{1,1,1,1,0,0,1},//3
{0,1,1,0,0,1,1},//4
{1,0,1,1,0,1,1},//5
{1,0,1,1,1,1,1},//6
{1,1,1,0,0,0,0},//7
{1,1,1,1,1,1,1},//8
{1,1,1,1,0,1,1},//9
                        };
 
  
  void setup()
{
    for (int i = 0; i<=8; i++){
      pinMode(seven_seg[i],OUTPUT);
    }
}
void loop()
{
  for(num=0;num<=9;num++){
   printNumber (num);
   delay (1000);
  }
}
                 
void printNumber(int number){
  int pin;
  for (int j=0;j<7;j++){
    pin +seven_seg[j];
      digitalWrite(pin,num_array[number][j]);
  }
}