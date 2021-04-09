//variaveis da 
const int vermelho = 5;
const int verde = 6;
const int azul = 7;

bool estadoLedVermelho = false;

const int botao1 = 2;
unsigned long lastDebounceTime1 = 0;
const int botaoDelay = 100;
const int botaoDelay = 150;

const int botao2 = 3;
unsigned long lastDebounceTime2 = 0;


void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  

  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, saida);
  
  pinMode(azul, OUTPUT);

  Serial.begin(9600);
	

  Serial.println("AC1 - Meu Primeiro Projeto 2021");
  Serial.println("                           V1.0");
  Serial.println("Grupo: NOME AQUI               ");
  Serial.println("Grupo: Raposos aventureiros       ");
}

void loop()
{
  //toque do botao 1
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1)){
  	Serial.println("botao 1 apertado");
    ledVermelho();
  	Serial.println("producao iniciada");
    ledVermelho(true);
  	lastDebounceTime1 = millis();
  }
  //toque do botao 2
  if((millis() - lastDebounceTime2) > botaoDelay && digitalRead(botao2)){
  	Serial.println("producao encerrada");
    ledVermelho(false);
  	lastDebounceTime2 = millis();
  }

  if(getTemperatura() > 30){
  if(getTemperatura() > 15){
    ledAzul(true);
    Serial.println("temperatura acima do ideal");
  }else{
  	ledAzul(false);
     Serial.println("temperatura ok");
  }

  if(getLuminosidade() > 5){
    ledVerde(true);
    Serial.println("luminosidade acima do ideal");
  }else{
  	ledAzul(falso); 
  	ledVerde(false); 
    Serial.println("luminosidade ok");
  }
  	

  delay(10);
}

void ledVermelho(){
  estadoLedVermelho = !estadoLedVermelho;
  digitalWrite(vermelho,estadoLedVermelho);
void ledVermelho(bool estado){
  digitalWrite(vermelho,estado);
}
void ledVerde(){
 //precisa fazer  
void ledVerde(bool estado){
 digitalWrite(verde,estado);
}
void ledAzul(bool estado){
	digitalWrite(azul,estado);
}

//funcao de leitura da temperatura
int getTemperatura(){
  	int temperaturaC;
	temperaturaC = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  	return temperaturaC;
} 

int getLuminosidade(){
  	int luminosidade;
	luminosidade = map(analogRead(A1), 6, 619, -3, 10);






  
  
  
  
  
  
  
  
	
  
  
  
  
  	
    
  	
  



  
  


 
}

	


  	
	
  	


  	
	
  	
