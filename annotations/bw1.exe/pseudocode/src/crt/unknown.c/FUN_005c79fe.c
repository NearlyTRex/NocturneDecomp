// Name: crt_unknown.c_FUN_005c79fe
// Address: 005c79fe
// Address Range: [[005c79fe, 005c7a02]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c79fe(void)

#include "nocturne.h"

void FUN_005c79fe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
