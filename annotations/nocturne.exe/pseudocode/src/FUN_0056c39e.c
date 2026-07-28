// Name: FUN_0056c39e
// Address: 0056c39e
// Address Range: [[0056c39e, 0056c3c2]]
// Convention: unknown
// Signature: void FUN_0056c39e(void)

#include "nocturne.h"

void FUN_0056c39e(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
