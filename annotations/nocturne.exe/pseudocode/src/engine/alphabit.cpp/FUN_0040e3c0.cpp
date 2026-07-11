// Name: FUN_0040e3c0
// Address: 0040e3c0
// Address Range: [[0040e3c0, 0040e708]]
// Convention: unknown
// Signature: void FUN_0040e3c0(int *param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e3c0(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte local_114 [256];
  int local_14;
  
  FUN_0040e360(param_1);
  param_1[3] = param_3;
  param_1[4] = param_4;
  iVar1 = FUN_005635b0(param_3 * param_4);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "@..\\engine\\alphabit.cpp" + 1;
    _DAT_01cc4804 = 0x53;
    FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  iVar1 = FUN_005635b0(param_3 * param_4);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x56;
    FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  iVar1 = FUN_005635b0(0x400);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x59;
    FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  FUN_00563c90(local_114,"%s.raw",param_2);
  local_14 = FUN_00456a60(&DAT_00578151,local_114,&DAT_0057814e);
  if (local_14 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x5f;
    FUN_004c8440("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar1 = local_14;
  FUN_005636d0(*param_1,param_3,param_4,local_14);
  FUN_00563380(iVar1);
  FUN_00563c90(local_114,"%s.act",param_2);
  local_14 = FUN_00456a60(&DAT_00578199,local_114,&DAT_00578196);
  if (local_14 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x65;
    FUN_004c8440("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar1 = 0;
  do {
    iVar2 = FUN_00564570(local_14);
    iVar3 = FUN_00564570(local_14);
    uVar4 = FUN_00564570(local_14);
    if (DAT_005b7624 == 0x20) {
      uVar5 = iVar3 << (DAT_01c00630 & 0x1f) | iVar2 << (DAT_01c00624 & 0x1f);
      uVar4 = uVar4 << (DAT_01c0063c & 0x1f);
    }
    else {
      uVar5 = iVar2 << 0x10 | iVar3 << 8;
    }
    iVar2 = iVar1 + 4;
    *(uint *)(iVar1 + param_1[2]) = uVar5 | uVar4;
    iVar1 = iVar2;
  } while (iVar2 != 0x400);
  FUN_00563380(local_14);
  FUN_00563c90(local_114,"%s.opa",param_2);
  iVar1 = FUN_00456a60(&DAT_005781e1,local_114,&DAT_005781de);
  if (iVar1 == 0) {
    param_3 = param_3 * param_4;
    iVar1 = 0;
    if (0 < param_3) {
      do {
        while (*(int *)(param_1[2] + (uint)*(byte *)(*param_1 + iVar1) * 4) != 0) {
          *(byte *)(param_1[1] + iVar1) = 0xff;
          iVar1 = iVar1 + 1;
          if (param_3 <= iVar1) {
            return;
          }
        }
        *(byte *)(param_1[1] + iVar1) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_3);
    }
    return;
  }
  FUN_005636d0(param_1[1],param_3,param_4,iVar1);
  FUN_00563380(iVar1);
  return;
}
