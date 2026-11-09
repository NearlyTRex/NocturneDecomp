// Name: crt_unknown.c_FUN_005aa9b6
// Address: 005aa9b6
// Address Range: [[005aa9b6, 005aa9ba]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aa9b6(void)

#include "nocturne.h"

void FUN_005aa9b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
