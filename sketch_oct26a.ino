int n = 0 ;
void setup()
{
  pinMode(11 , OUTPUT);
  pinMode(7 , OUTPUT);
  pinMode(5 , OUTPUT);
  pinMode(3 , OUTPUT);
}

void loop()
{
  for ( n = 0 ; n <= 15 ; n++ ){
    digitalWrite ( 3 , n - ((n/2) * 2)) ;
    digitalWrite ( 5 , (n / 2) - ((n/4) * 2)) ;
    digitalWrite ( 7 , (n / 4) - ((n/8) * 2)) ;
    digitalWrite ( 11 , (n / 8) - ((n/16) * 2)) ;
    delay ( 1000 ) ;
  }
    
}