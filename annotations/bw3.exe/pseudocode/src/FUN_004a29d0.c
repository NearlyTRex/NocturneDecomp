// Name: FUN_004a29d0
// Address: 004a29d0
// Address Range: [[004a29d0, 004a2a96]]
// Convention: unknown
// Signature: void FUN_004a29d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a29d0(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cba2b4 + 1;
  iVar1 = _DAT_01cba2b4 * 0x5c;
  _DAT_01cba2b4 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01cba2b4 = 0;
  }
  (*(code *)**(uint **)(&DAT_01cba2f4 + iVar1))(iVar1 + 0x1cba2b8,param_2,param_3);
  iVar2 = FUN_0040cea0(0xc000,0xffff);
  *(uint *)(iVar1 + 0x1cba2f8) =
       (uint)((longlong)param_5 * (longlong)iVar2) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20) << 0x10;
  *(uint *)(iVar1 + 0x1cba2fc) = param_4;
  *(uint *)(iVar1 + 0x1cba30c) = param_6;
  *(uint *)(iVar1 + 0x1cba310) = param_7;
  *(uint *)(iVar1 + 0x1cba300) = param_8;
  *(uint *)(iVar1 + 0x1cba308) = param_9;
  *(uint *)(iVar1 + 0x1cba304) = 0;
  *(uint *)(iVar1 + 0x1cba2cc) = 0;
  *(uint *)(iVar1 + 0x1cba2c8) = *(uint *)(iVar1 + 0x1cba2cc);
  *(uint *)(iVar1 + 0x1cba2c4) = *(uint *)(iVar1 + 0x1cba2c8);
  *(uint *)(iVar1 + 0x1cba2d8) = 0;
  *(uint *)(iVar1 + 0x1cba2d4) = *(uint *)(iVar1 + 0x1cba2d8);
  *(uint *)(iVar1 + 0x1cba2d0) = *(uint *)(iVar1 + 0x1cba2d4);
  return;
}
