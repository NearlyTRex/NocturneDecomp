// Name: crt_unknown.c_FUN_005bf67b
// Address: 005bf67b
// Address Range: [[005bf67b, 005bf67f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf67b(void)

#include "nocturne.h"

void FUN_005bf67b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
