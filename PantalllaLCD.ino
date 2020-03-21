#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const int ledRojo= 8;
const int ledAmarillo = 9;
const int ledVerde = 10;

//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x3F,16,2);  //

void setup() {
  // Inicializar el LCD
  lcd.init();
  
  //Encender la luz de fondo.
  lcd.backlight();

    // Escribimos el Mensaje en el LCD.
 // lcd.print("Hola Mundo");

  //Inicializar leds
  pinMode(ledRojo,OUTPUT);

  pinMode(ledAmarillo,OUTPUT);

  pinMode(ledVerde,OUTPUT);
   
  

}

void loop() {
   // Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
  //lcd.setCursor(0, 1);
   // Escribimos el número de segundos trascurridos
   
  //lcd.print(millis()/1000);
  //lcd.print(" Segundos");

  //Encendemos led Rojo
  digitalWrite(ledRojo,HIGH);
  lcd.print("Rojo Encencido");
  lcd.setCursor(0,1);
  lcd.print("Alto!");
  delay(3000);
  lcd.clear();
  digitalWrite(ledRojo,LOW);

  //Encendemos led Amarillo
  digitalWrite(ledAmarillo,HIGH);
  lcd.print("Amarillo Encenci");
  lcd.setCursor(0,1);
  lcd.print("do");
  lcd.print(" Precaucion!");
  delay(3000);
  lcd.clear();
  digitalWrite(ledAmarillo,LOW);

  //Verde Encendido
  //Encendemos led Amarillo
  digitalWrite(ledVerde,HIGH);
  lcd.print("Verde Encencido");
  lcd.setCursor(0,1);
  lcd.print("Adelante!");
  delay(3000);
  lcd.clear();
   digitalWrite(ledVerde,LOW);

  
 
}
