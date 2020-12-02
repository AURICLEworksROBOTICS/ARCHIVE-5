// visit our website : https://sites.google.com/view/auricle-robotics/home
int s2 = 7 ;
int s1 = 5 ;
int m2 = 3 ;
int m1 = 2 ;
void setup() // visit our website : https://sites.google.com/view/auricle-robotics/home

{
   pinMode ( m1 , OUTPUT ) ;
       pinMode ( m2 , OUTPUT ) ;
            pinMode ( s1 , OUTPUT ) ;
                pinMode ( s2 , OUTPUT ) ;

}

void loop() // visit our website : https://sites.google.com/view/auricle-robotics/home

{
  if       { digitalWrite ( s1,LOW);
                digitalWrite ( s2,LOW); }

 do {
 digitalWrite ( m1,HIGH);
          digitalWrite ( m2,HIGH);
  }
  if {
 
      digitalWrite ( s1,HIGH);
          digitalWrite ( s2,HIGH); }
 do { 
           digitalWrite ( s1,LOW);
                    digitalWrite ( s2,LOW);
 }

 //.....................
 
  if      { digitalWrite ( s1,LOW);
               digitalWrite ( s2,HIGH); }

 do          {
                 digitalWrite ( m1,HIGH);
                        digitalWrite ( m2,LOW);
  }
  if {
 
                    digitalWrite ( s1,HIGH);
                         digitalWrite ( s2,LOW); }
 do                { 
                         digitalWrite ( s1,LOW);
                                  digitalWrite ( s2,HIGH);
 }


// visit our website : https://sites.google.com/view/auricle-robotics/home

}
