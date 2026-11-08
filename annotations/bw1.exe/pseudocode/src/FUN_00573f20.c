// Name: FUN_00573f20
// Address: 00573f20
// Address Range: [[00573f20, 00573f98]]
// Convention: unknown
// Signature: void FUN_00573f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573f20(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  FUN_00575d20();
  iVar1 = _DAT_02c7fc88;
  *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc40) = param_1;
  *(uint *)(iVar1 * 4 + 0x2c7fc48) = param_2;
  *(uint *)(iVar1 * 4 + 0x2c7fc50) = param_3;
  *(uint *)(iVar1 * 4 + 0x2c7fc58) = param_4;
  *(uint *)(iVar1 * 4 + 0x2c7fc60) = param_5;
  *(uint *)(iVar1 * 4 + 0x2c7fc68) = param_6;
  *(uint *)(iVar1 * 4 + 0x2c7fc70) = param_7;
  *(uint *)(iVar1 * 4 + 0x2c7fc78) = param_8;
  *(uint *)(iVar1 * 4 + 0x2c7fc80) = param_9;
  DAT_02c807f7 = DAT_02c807f7 | 0x20;
  FUN_00573e70();
  return;
}
