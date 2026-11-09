// Name: crt_unknown.c_FUN_005c7aa2
// Address: 005c7aa2
// Address Range: [[005c7aa2, 005c7aa6]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c7aa2(void)

#include "nocturne.h"

void FUN_005c7aa2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
