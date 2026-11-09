// Name: crt_unknown.c_FUN_005c7b27
// Address: 005c7b27
// Address Range: [[005c7b27, 005c7b2b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c7b27(void)

#include "nocturne.h"

void FUN_005c7b27(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
