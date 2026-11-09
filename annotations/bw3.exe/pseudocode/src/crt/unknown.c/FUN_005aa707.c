// Name: crt_unknown.c_FUN_005aa707
// Address: 005aa707
// Address Range: [[005aa707, 005aa70b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aa707(void)

#include "nocturne.h"

void FUN_005aa707(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
