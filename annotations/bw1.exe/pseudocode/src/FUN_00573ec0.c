// Name: FUN_00573ec0
// Address: 00573ec0
// Address Range: [[00573ec0, 00573f17]]
// Convention: unknown
// Signature: void FUN_00573ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00573ec0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  
  FUN_00575d20();
  iVar1 = _DAT_02c7fc88;
  *(uint *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8) = param_1;
  *(uint *)(iVar1 * 8 + 0x2c7fbfc) = param_2;
  *(uint *)(&DAT_02c7fc08 + iVar1 * 8) = param_3;
  *(uint *)(iVar1 * 8 + 0x2c7fc0c) = param_4;
  *(uint *)(&DAT_02c7fc18 + iVar1 * 8) = param_5;
  *(uint *)(iVar1 * 8 + 0x2c7fc1c) = param_6;
  DAT_02c807f4 = DAT_02c807f4 | 2;
  FUN_00573e70();
  return;
}
