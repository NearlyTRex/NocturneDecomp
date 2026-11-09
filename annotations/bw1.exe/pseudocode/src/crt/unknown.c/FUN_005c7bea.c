// Name: crt_unknown.c_FUN_005c7bea
// Address: 005c7bea
// Address Range: [[005c7bea, 005c7bee]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c7bea(void)

#include "nocturne.h"

void FUN_005c7bea(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
