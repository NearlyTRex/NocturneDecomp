// Name: FUN_0042cbe0
// Address: 0042cbe0
// Address Range: [[0042cbe0, 0042cc2d]]
// Convention: unknown
// Signature: void FUN_0042cbe0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042cbe0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  FUN_00409cc0(param_1,param_2,param_3);
  uVar1 = _DAT_005fd614;
  *(uint *)(param_1 + 0x2520) = 0;
  *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
  *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
  *(uint *)(param_1 + 0x2504) = uVar1;
  return;
}
