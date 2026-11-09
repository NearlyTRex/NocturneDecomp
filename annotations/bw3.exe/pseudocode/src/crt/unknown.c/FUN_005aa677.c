// Name: crt_unknown.c_FUN_005aa677
// Address: 005aa677
// Address Range: [[005aa677, 005aa67b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aa677(void)

#include "nocturne.h"

void FUN_005aa677(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
