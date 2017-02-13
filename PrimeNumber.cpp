boolean is_prime(int a){
  int k=0;
  for(int i=1; i<=a; i++){
    if(a%i == 0) k++;
  }
  if(k==2) return True;
  else return False;
}
