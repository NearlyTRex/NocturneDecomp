// Name: FUN_00516cb0
// Address: 00516cb0
// Address Range: [[00516cb0, 00516cf0]]
// Convention: unknown
// Signature: undefined4 FUN_00516cb0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00516cb0(uint param_1,uint param_2)

{
  uint uVar1;
  byte auStack_100 [256];
  
  FUN_0042c6f0(param_2,auStack_100);
  uVar1 = FUN_00516d00(param_1,auStack_100);
  return uVar1;
}
