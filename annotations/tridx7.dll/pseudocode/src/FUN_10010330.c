// Name: FUN_10010330
// Address: 10010330
// Address Range: [[10010330, 10010357]]
// Convention: unknown
// Signature: undefined4 FUN_10010330(undefined4 param_1)

#include "nocturne.h"

uint FUN_10010330(uint param_1)

{
  uint uVar1;
  
  __lock(0xb);
  uVar1 = FUN_10010360(param_1);
  FUN_10005a10(0xb);
  return uVar1;
}
