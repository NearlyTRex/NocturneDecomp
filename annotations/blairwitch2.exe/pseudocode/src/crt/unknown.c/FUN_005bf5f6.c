// Name: crt_unknown.c_FUN_005bf5f6
// Address: 005bf5f6
// Address Range: [[005bf5f6, 005bf5fa]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf5f6(void)

#include "nocturne.h"

void FUN_005bf5f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
