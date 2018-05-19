/**********************************************************************************
**                                                                               **
**                              Avisador Acústic                                 **
**                                                                               **
** Joan Josep Morneo                                                             **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int xiulet = 9;             // donar nom al pin 9 de l’Arduino
const int ldr0 = A0;              // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;              // donar nom al pin A0 de l’Arduino
const int ldr2 = A2;              // donar nom al pin A0 de l’Arduino
int valLdr0;                      // guardar valor del ldr  
int valLdr1;                      // guardar valor del ldr  
int valLdr2;                      // guardar valor del ldr  
//********** Setup ****************************************************************
void setup()
{
pinMode(xiulet, OUTPUT);          // definir el pin 9 com una sortida
}
//********** Loop *****************************************************************
void loop()
{
valLdr0 = analogRead(ldr0);            // llegir valor ldr 0
valLdr0 = map(valLdr0,0,1023,0,255);   // mapejar valor de 0-1023 a 0-255   
tone(xiulet,500,valLdr0);              // xiulet de durada 100ms
delay(valLdr0);                        // temps de pausa del xiulet

valLdr1 = analogRead(ldr1);            // llegir valor ldr 1
valLdr1 = map(valLdr1,0,1023,0,255);   // mapejar valor de 0-1023 a 0-255
tone(xiulet, 750, valLdr1);            // xiulet de durada 100ms
delay(valLdr1);                        // temps de pausa del xiulet

valLdr2 = analogRead(ldr2);            // llegir valor ldr 2
valLdr2 = map(valLdr2,0,1023,0,255);   // mapejar valor de 0-1023 a 0-255
tone(xiulet,1000,valLdr2);             // xiulet de durada 100ms
delay(valLdr2);                        // temps de pausa del xiulet 
}
//********** Funcions *************************************************************
