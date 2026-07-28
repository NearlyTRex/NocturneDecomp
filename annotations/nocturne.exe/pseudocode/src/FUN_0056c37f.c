// Name: FUN_0056c37f
// Address: 0056c37f
// Address Range: [[0056c37f, 0056c39d]]
// Convention: unknown
// Signature: void FUN_0056c37f(void)

#include "nocturne.h"

void FUN_0056c37f(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
