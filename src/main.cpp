#include <Arduino.h>

int userinput()
{ // user input from Serial monitor
  int data;
  Serial.flush();
  // long t = millis();
  while (!Serial.available())
  {
    // if (millis() - t > 1000)
    // {
    //   t = millis();
    //   Serial.println("!");
    // }
  }
  String str = "";
  while (Serial.available())
  {
    char c = Serial.read();
    if (c == '\n')
      break;
    str += c;
  }
  Serial.println(str);
  data = str.toInt(); // Read integer type data
  return data;
}

void check_number(unsigned int number)
{
  // if (number > 1)
  // {

  // do
  // {
  //   (number % 2 == 0 && number > 1) ? number /= 2 : number = ((number * 3) + 1);
  //   //(number % 2 == 0 && number != 1) ? number /= 2 : number = ((number * 3) + 1);

  //   // if (number % 2 == 0) // Check_Even
  //   // {
  //   //   number = number / 2;
  //   //   Serial.printf("Enen number%d: ", number);
  //   // }
  //   // else if (number % 2 != 0)
  //   // {
  //   //   number = (number * 3) + 1;
  //   //   Serial.printf("odd number%d: ", number);
  //   // }

  // } while (number != 1);
  // Serial.printf("functn number is %d:", number);
  
  while (number != 1)
  {
   (number % 2 == 0 ) ? number /= 2 : number = ((number * 3) + 1);
 
  }
  Serial.printf("functn number is %d:", number);

}

// else
// {
//   Serial.printf("You Putt 1");
// }
//}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println(" Enter your Number:");
}

void loop()
{ // put your main code here, to run repeatedly:
  unsigned int numb;
  numb = userinput();
  check_number(numb);
  while (1)
    ;
}