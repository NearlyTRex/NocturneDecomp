// Name: FUN_10010c20
// Address: 10010c20
// Address Range: [[10010c20, 10010c47]]
// Convention: unknown
// Signature: undefined4 FUN_10010c20(undefined4 param_1)

#include "nocturne.h"

uint FUN_10010c20(uint param_1)

{
  uint uVar1;
  
  __lock(0xc);
  uVar1 = FUN_10010c50(param_1);
  FUN_10005a10(0xc);
  return uVar1;
}
