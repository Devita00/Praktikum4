#include <Keypad.h>     // memasukkan library keypad
const byte ROWS = 4;    //jumlah baris pada keypad
const byte COLS = 4;    //jumlah kolom pada keypad
char keys[ROWS][COLS] = {
  {'7','8','9', '/'},       //mengidentifikasikan key ditiap baris dan kolom
  {'4','5','6','x'},        //penamaan key sesuai dengan key pada keypad yang 
  {'1','2','3','-'},        //digunakan
  {'*','0','#','+'}
};
byte rowPins[ROWS] = {13, 12, 11, 10};  //menghubungkan pin baris pada keypad ke board arduino
byte colPins[COLS] = {9, 8, 7, 6};      //menghubungkan pin baris pada keypad ke board arduino
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );   //mendeklarasikan variabel yang berisi library
int KeyCheck = 0;
void setup() 
{
  Serial.begin(9600);   
}
void loop() 
{
  char key = keypad.getKey();   //perintah untuk mengambil data input pada keypad
    if (key)
  {
    if(key == '1'){KeyCheck = 1; Serial.print("1");}    //membuat kondisi membandingkan data input dengan
    if(key == '2'){KeyCheck = 1; Serial.print("2");}    //karakter tertentu dan jika hasilnya true akan dicetak di
    if(key == '3'){KeyCheck = 1; Serial.print("3");}    //virtual terminal data yang sudah diinput 
    
    if(key == '4'){KeyCheck = 1; Serial.print("4");}
    if(key == '5'){KeyCheck = 1; Serial.print("5");}
    if(key == '6'){KeyCheck = 1; Serial.print("6");}
    if(KeyCheck == 0){Serial.print(key);}
    KeyCheck = 0; 
  }
}
