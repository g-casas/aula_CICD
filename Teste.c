#include <stdio.h>
#include <assert.h>

void testar(){
  assert(1 == 1);
  printf("Passou no Teste");
}

int main(){
  testar();
  return 0;
}
