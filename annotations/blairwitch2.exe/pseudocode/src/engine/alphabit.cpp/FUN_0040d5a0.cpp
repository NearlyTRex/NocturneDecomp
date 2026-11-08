// Name: FUN_0040d5a0
// Address: 0040d5a0
// Address Range: [[0040d5a0, 0040d8f8]]
// Convention: unknown
// Signature: void FUN_0040d5a0(int *param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d5a0(int *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  byte local_124 [256];
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  FUN_0040d460(param_1,param_3,param_4);
  FUN_005b7790(local_124,"%s.raw",param_2);
  local_14 = FUN_00460c70(&DAT_005cb02a,local_124,&DAT_005cb027);
  if (local_14 == 0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xe1;
    FUN_004e4500("CAlphaBitmap::load - Can't open %s",local_124);
  }
  FUN_005b87c0(*param_1,param_3,param_4,local_14);
  FUN_005b89c0(local_14);
  FUN_005b7790(local_124,"%s.act",param_2);
  local_14 = FUN_00460c70(&DAT_005cb072,local_124,&DAT_005cb06f);
  if (local_14 == 0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xe7;
    FUN_004e4500("CAlphaBitmap::load - Can't open %s",local_124);
  }
  local_18 = 0;
  do {
    uVar1 = FUN_005b8180(local_14);
    uVar2 = FUN_005b8180(local_14);
    uVar3 = FUN_005b8180(local_14);
    if (DAT_006141c0 == 0x10) {
      local_24 = uVar1 / _DAT_01c35818;
      local_20 = uVar2 / _DAT_01c35824;
      local_1c = uVar3 / _DAT_01c35830;
      uVar3 = (uint)(ushort)((ushort)(local_1c << (DAT_01c3582c & 0x1f)) |
                            (ushort)(local_20 << (DAT_01c35820 & 0x1f)) |
                            (ushort)(local_24 << (DAT_01c35814 & 0x1f)));
      puVar4 = (uint *)(param_1[2] + local_18);
    }
    else if (DAT_006141c0 == 0x20) {
      uVar3 = uVar3 << (DAT_01c3582c & 0x1f) |
              uVar1 << (DAT_01c35814 & 0x1f) | uVar2 << (DAT_01c35820 & 0x1f);
      puVar4 = (uint *)(param_1[2] + local_18);
    }
    else {
      uVar3 = uVar1 << 0x10 | uVar2 << 8 | uVar3;
      puVar4 = (uint *)(param_1[2] + local_18);
    }
    *puVar4 = uVar3;
    local_18 = local_18 + 4;
  } while (local_18 != 0x400);
  FUN_005b89c0(local_14);
  FUN_005b7790(local_124,"%s.opa",param_2);
  iVar5 = FUN_00460c70(&DAT_005cb0ba,local_124,&DAT_005cb0b7);
  if (iVar5 == 0) {
    param_3 = param_3 * param_4;
    iVar5 = 0;
    if (0 < param_3) {
      do {
        while (*(int *)(param_1[2] + (uint)*(byte *)(*param_1 + iVar5) * 4) != 0) {
          *(byte *)(param_1[1] + iVar5) = 0xff;
          iVar5 = iVar5 + 1;
          if (param_3 <= iVar5) {
            return;
          }
        }
        *(byte *)(param_1[1] + iVar5) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_3);
    }
    return;
  }
  FUN_005b87c0(param_1[1],param_3,param_4,iVar5);
  FUN_005b89c0(iVar5);
  return;
}
