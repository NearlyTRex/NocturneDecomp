// Name: FUN_004b56a0
// Address: 004b56a0
// Address Range: [[004b56a0, 004b580a] [004b5810, 004b59dd]]
// Convention: unknown
// Signature: void FUN_004b56a0(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b56a0(uint param_1,float *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  float afStackY_1024 [996];
  char acStack_70 [52];
  float local_3c;
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int local_18;
  float *local_14;
  
  bVar6 = 0;
  if ((*(float *)(param_3 + 4) < (float)_DAT_005df5ec) &&
     (_DAT_005df5f4 < (double)*(float *)(param_3 + 4))) {
    local_18 = 1;
    local_14 = (float *)&DAT_01c6eaa8;
    if ((param_5 == 0) ||
       (iVar1 = (**(code **)(*(int *)(param_5 + 0x154) + 0x4c))(param_5), iVar1 != 0)) {
      if ((local_18 != 0) && (iVar1 = 0, 0 < _DAT_01c6eaa0)) {
        do {
          afStack_38[0] = param_2[1] - local_14[1];
          afStack_38[1] = param_2[2] - local_14[2];
          local_3c = *param_2 - *local_14;
          afStack_38[2] = *param_2 - *local_14;
          afStack_38[(uint)bVar6 * -2 + 3] = afStack_38[(uint)bVar6 * -2];
          afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          if (afStack_38 + 5 != afStack_38 + 2) {
            fStack_24 = afStack_38[2];
            fStack_20 = afStack_38[3];
            fStack_1c = fStack_28;
          }
          if (fStack_1c * fStack_1c + fStack_24 * fStack_24 + fStack_20 * fStack_20 <
              (float)_DAT_005df5fc) goto LAB_004b57a0;
          iVar1 = iVar1 + 1;
          local_14 = local_14 + 0xf;
        } while (iVar1 < _DAT_01c6eaa0);
      }
      if (local_18 != 0) {
        uVar3 = FUN_004b4ac0();
        FUN_004ac3e0(uVar3,param_2,param_3,param_5);
      }
    }
  }
LAB_004b57a0:
  iVar1 = FUN_00453390(0x1fe37ec,param_2,0x3f000000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = _DAT_01c58a9c * 0x2c;
      _DAT_01c58a9c = _DAT_01c58a9c + 1;
      if (0x7ff < _DAT_01c58a9c) {
        _DAT_01c58a9c = 0;
      }
      iVar1 = iVar1 + 1;
      FUN_004abeb0(&DAT_01c58aa0 + iVar2,param_2,0x3e99999a,0,0xffff);
    } while (iVar1 < 8);
    switch(param_4) {
    case 2:
    case 5:
    case 8:
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_004b59e0(param_1,param_2,0,0x20000,0x10000,0,0xffff);
      } while (iVar1 < 8);
    }
  }
  puVar4 = &DAT_0061cb70;
  pcVar5 = acStack_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  *(ushort *)pcVar5 = *(ushort *)puVar4;
  switch(param_4) {
  case 2:
  case 8:
    iVar1 = FUN_0040cd00(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004e7010(2);
      FUN_005bfb40(acStack_70,"ric-%s!?.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 3:
  case 4:
    iVar1 = FUN_0040cd00(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004e7010(3);
      FUN_005bfb40(acStack_70,"ric-%s.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 5:
    iVar1 = FUN_0040cd00(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004e7010(5);
      FUN_005bfb40(acStack_70,"ric-%s!?.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 7:
    iVar1 = FUN_0040cd00(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004e7010(7);
      FUN_005bfb40(acStack_70,"ric-%s!?.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
  }
  if (acStack_70[0] == '\0') {
    return;
  }
LAB_004b59bb:
  FUN_0057d940(0x02C82A60,0,acStack_70,param_2,0x3e2e147b);
  return;
}
