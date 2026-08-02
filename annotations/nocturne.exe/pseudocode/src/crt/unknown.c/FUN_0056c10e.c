// Name: crt_unknown.c_FUN_0056c10e
// Address: 0056c10e
// Address Range: [[0056c10e, 0056c112]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056c10e(void)

#include "nocturne.h"

void FUN_0056c10e(void)

{
  code *pcVar1;
  float10 in_ST1;
  float10 in_ST2;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST1);
  return;
}
