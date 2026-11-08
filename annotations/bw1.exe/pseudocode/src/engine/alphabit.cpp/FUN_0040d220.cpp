// Name: FUN_0040d220
// Address: 0040d220
// Address Range: [[0040d220, 0040d4ae]]
// Convention: unknown
// Signature: void FUN_0040d220(int *param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d220(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte local_114 [256];
  int local_14;
  
  FUN_0040d0e0(param_1,param_3,param_4);
  FUN_005bfb40(local_114,"%s.raw",param_2);
  local_14 = FUN_00479180(&DAT_005d2fa5,local_114,&DAT_005d2fa2);
  if (local_14 == 0) {
    _DAT_01d1d400 = "..\\engine\\alphabit.cpp";
    _DAT_01d1d404 = 0xe1;
    FUN_005030e0("CAlphaBitmap::load - Can't open %s",local_114);
  }
  FUN_005c0b10(*param_1,param_3,param_4,local_14);
  FUN_005c0d10(local_14);
  FUN_005bfb40(local_114,"%s.act",param_2);
  local_14 = FUN_00479180(&DAT_005d2fed,local_114,&DAT_005d2fea);
  if (local_14 == 0) {
    _DAT_01d1d400 = "..\\engine\\alphabit.cpp";
    _DAT_01d1d404 = 0xe7;
    FUN_005030e0("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar4 = 0;
  do {
    iVar1 = FUN_005c0530(local_14);
    iVar2 = FUN_005c0530(local_14);
    uVar3 = FUN_005c0530(local_14);
    if (DAT_0061b4a0 == 0x20) {
      uVar5 = iVar1 << (DAT_01c4e9d4 & 0x1f) | iVar2 << (DAT_01c4e9e0 & 0x1f);
      uVar3 = uVar3 << (DAT_01c4e9ec & 0x1f);
    }
    else {
      uVar5 = iVar1 << 0x10 | iVar2 << 8;
    }
    iVar1 = iVar4 + 4;
    *(uint *)(iVar4 + param_1[2]) = uVar5 | uVar3;
    iVar4 = iVar1;
  } while (iVar1 != 0x400);
  FUN_005c0d10(local_14);
  FUN_005bfb40(local_114,"%s.opa",param_2);
  iVar4 = FUN_00479180(&DAT_005d3035,local_114,&DAT_005d3032);
  if (iVar4 == 0) {
    param_3 = param_3 * param_4;
    iVar4 = 0;
    if (0 < param_3) {
      do {
        while (*(int *)(param_1[2] + (uint)*(byte *)(*param_1 + iVar4) * 4) != 0) {
          *(byte *)(param_1[1] + iVar4) = 0xff;
          iVar4 = iVar4 + 1;
          if (param_3 <= iVar4) {
            return;
          }
        }
        *(byte *)(param_1[1] + iVar4) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
    return;
  }
  FUN_005c0b10(param_1[1],param_3,param_4,iVar4);
  FUN_005c0d10(iVar4);
  return;
}
