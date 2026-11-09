// Name: crt_unknown.c_FUN_005bf5d7
// Address: 005bf5d7
// Address Range: [[005bf5d7, 005bf5db]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf5d7(void)

#include "nocturne.h"

void FUN_005bf5d7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
