/**********************************************************************************
**                                                                               **
**                              Avisador Acústic                                 **
**                                                                               **
** Teodor Dediu                                                                  **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int ldr0 = A1;         // donar nom al pin A0 de l’Arduino
int valLdr0;                 // guardar valor del ldr  
int freq;                    // freqüència del xiulet
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);               // definir el pin 9 com una sortida
}
//********** Loop *****************************************************************
void loop()
{
 valLdr0 = analogRead(ldr0);   // llegir valor ldr

  freq = map(freq, 0, 1023, 2000, 0);   // mapejar valor de 0-1023 a 2000-10

  
  
  tone(xiulet, valLdr0, 100);   // xiulet de durada 100ms
  delay(100+100);            // esperar xiulet + silenci
                        
}
//********** Funcions *************************************************************
