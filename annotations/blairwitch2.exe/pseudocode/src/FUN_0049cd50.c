// Name: FUN_0049cd50
// Address: 0049cd50
// Address Range: [[0049cd50, 0049ceba] [0049cec0, 0049d08d]]
// Convention: unknown
// Signature: void FUN_0049cd50(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cd50(uint param_1,float *param_2,int param_3,uint param_4,int param_5)

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
  if ((*(float *)(param_3 + 4) < (float)_DAT_005d57aa) &&
     (_DAT_005d57b2 < (double)*(float *)(param_3 + 4))) {
    local_18 = 1;
    local_14 = (float *)&DAT_01c558e8;
    if ((param_5 == 0) ||
       (iVar1 = (**(code **)(*(int *)(param_5 + 0x2b0) + 0x54))(param_5), iVar1 != 0)) {
      if ((local_18 != 0) && (iVar1 = 0, 0 < _DAT_01c558e0)) {
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
              (float)_DAT_005d57ba) goto LAB_0049ce50;
          iVar1 = iVar1 + 1;
          local_14 = local_14 + 0xf;
        } while (iVar1 < _DAT_01c558e0);
      }
      if (local_18 != 0) {
        uVar3 = FUN_0049c120();
        FUN_00493a40(uVar3,param_2,param_3,param_5);
      }
    }
  }
LAB_0049ce50:
  iVar1 = FUN_00441cd0(0x1fc7838,param_2,0x3f000000);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = _DAT_01c3f8dc * 0x2c;
      _DAT_01c3f8dc = _DAT_01c3f8dc + 1;
      if (0x7ff < _DAT_01c3f8dc) {
        _DAT_01c3f8dc = 0;
      }
      iVar1 = iVar1 + 1;
      FUN_00493510(&DAT_01c3f8e0 + iVar2,param_2,0x3e99999a,0,0xffff);
    } while (iVar1 < 8);
    switch(param_4) {
    case 2:
    case 5:
    case 8:
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_0049d090(param_1,param_2,0,0x20000,0x10000,0,0xffff);
      } while (iVar1 < 8);
    }
  }
  puVar4 = &DAT_00615890;
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
    iVar1 = FUN_0040d060(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004ca7c0(2);
      FUN_005b7790(acStack_70,"ric-%s!?.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
    break;
  case 3:
  case 4:
    iVar1 = FUN_0040d060(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004ca7c0(3);
      FUN_005b7790(acStack_70,"ric-%s.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
    break;
  case 5:
    iVar1 = FUN_0040d060(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004ca7c0(5);
      FUN_005b7790(acStack_70,"ric-%s!?.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
    break;
  case 7:
    iVar1 = FUN_0040d060(0x3e2aaaab);
    if (iVar1 != 0) {
      uVar3 = FUN_004ca7c0(7);
      FUN_005b7790(acStack_70,"ric-%s!?.wav",uVar3);
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
  }
  if (acStack_70[0] == '\0') {
    return;
  }
LAB_0049d06b:
  FUN_0055aef0(0x0264B290,0,acStack_70,param_2,0x3e2e147b);
  return;
}
