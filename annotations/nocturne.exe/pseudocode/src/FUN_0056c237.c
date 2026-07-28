// Name: FUN_0056c237
// Address: 0056c237
// Address Range: [[0056c237, 0056c255]]
// Convention: unknown
// Signature: void FUN_0056c237(void)

#include "nocturne.h"

void FUN_0056c237(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
