// Name: FUN_0056c04b
// Address: 0056c04b
// Address Range: [[0056c04b, 0056c069]]
// Convention: unknown
// Signature: void FUN_0056c04b(void)

#include "nocturne.h"

void FUN_0056c04b(void)

{
  code *pcVar1;
  float10 in_ST1;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST1,in_ST3);
  return;
}
