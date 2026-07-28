// Name: FUN_0056c256
// Address: 0056c256
// Address Range: [[0056c256, 0056c27a]]
// Convention: unknown
// Signature: void FUN_0056c256(void)

#include "nocturne.h"

void FUN_0056c256(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
