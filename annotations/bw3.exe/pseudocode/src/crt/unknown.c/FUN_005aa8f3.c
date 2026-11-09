// Name: crt_unknown.c_FUN_005aa8f3
// Address: 005aa8f3
// Address Range: [[005aa8f3, 005aa8f7]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aa8f3(void)

#include "nocturne.h"

void FUN_005aa8f3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
