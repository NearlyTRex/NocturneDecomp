// Name: crt_unknown.c_FUN_0056bfbb
// Address: 0056bfbb
// Address Range: [[0056bfbb, 0056bfbf]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056bfbb(void)

#include "nocturne.h"

void FUN_0056bfbb(void)

{
  code *pcVar1;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fdiv(in_ST2,in_ST3);
  return;
}
