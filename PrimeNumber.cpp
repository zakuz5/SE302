boolean is_prime(int a){
  int k=0;
  for(int i=2; i<a/2; i++){
    if(a%i == 0) k++;
  }
  if(k==0) return True;
  else return False;
}
