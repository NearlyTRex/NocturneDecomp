// Name: crt_unknown.c_FUN_005c795a
// Address: 005c795a
// Address Range: [[005c795a, 005c795e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c795a(void)

#include "nocturne.h"

void FUN_005c795a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
