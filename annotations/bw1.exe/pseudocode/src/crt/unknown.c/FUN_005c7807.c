// Name: crt_unknown.c_FUN_005c7807
// Address: 005c7807
// Address Range: [[005c7807, 005c780b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c7807(void)

#include "nocturne.h"

void FUN_005c7807(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
