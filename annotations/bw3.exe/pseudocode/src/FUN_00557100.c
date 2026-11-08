// Name: FUN_00557100
// Address: 00557100
// Address Range: [[00557100, 00557136]]
// Convention: unknown
// Signature: void FUN_00557100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557100(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  FUN_00558e90();
  iVar1 = _DAT_02cf28b8;
  *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2858) = param_1;
  *(uint *)(iVar1 * 4 + 0x2cf2860) = param_2;
  *(uint *)(iVar1 * 4 + 0x2cf2868) = param_3;
  DAT_02cf3424 = DAT_02cf3424 | 4;
  FUN_00556fd0();
  return;
}
