// Name: crt_unknown.c_FUN_005bf69a
// Address: 005bf69a
// Address Range: [[005bf69a, 005bf69e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf69a(void)

#include "nocturne.h"

void FUN_005bf69a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
