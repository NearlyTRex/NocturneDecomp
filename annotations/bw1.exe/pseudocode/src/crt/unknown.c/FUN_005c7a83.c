// Name: crt_unknown.c_FUN_005c7a83
// Address: 005c7a83
// Address Range: [[005c7a83, 005c7a87]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c7a83(void)

#include "nocturne.h"

void FUN_005c7a83(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
