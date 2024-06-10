// C++ code
//
const int shift=3;
char encryptChar(char ch){
  if(ch>='a'&&ch<='z'){
    ch=(ch-'a'+shift)%26+'a';
  }
  else if(ch>='A'&&ch<='Z'){
    ch=(ch-'A'+shift)%26+'A';
  }
  return ch;
}
void setup()
{
 Serial.begin(9600);
  Serial.print("Enter the input string:");
 
}

void loop()
{
  if(Serial.available()>0){
    String input=Serial.readString();
    String encryptedMessage="";
    for(int i=0;i<input.length();i++){
      encryptedMessage+=encryptChar(input[i]);
    }
    Serial.println("Encrypted message:");
    Serial.println(encryptedMessage);
    Serial.println("Enter another String:");
  }
}