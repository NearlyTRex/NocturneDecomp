// Name: FUN_004e7860
// Address: 004e7860
// Address Range: [[004e7860, 004e7cfb]]
// Convention: unknown
// Signature: int FUN_004e7860(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e7860(uint *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  byte local_f0 [200];
  int local_28;
  uint *local_24;
  int local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  
  uVar1 = _DAT_01549aac;
  local_18 = _DAT_01549aac;
  if (param_5 != 0) {
    FUN_004b0a20(_DAT_01549aac,param_5,0xaf,param_4,0x9a,0);
    iVar2 = FUN_004b30f0(uVar1,0x58);
    param_4 = param_4 + iVar2 * 2;
    local_18 = _DAT_01549ab0;
  }
  local_20 = 0;
  if (0 < param_2) {
    local_24 = param_1;
    do {
      uVar1 = local_18;
      FUN_004b2a80(local_18,*local_24);
      local_28 = FUN_004b30f0(uVar1,0x58);
      if (param_5 == 0) {
        if (local_20 == 0) {
          param_4 = 0xea;
          local_14 = 0x11c;
        }
        else if (local_20 == 1) {
          local_14 = 0x10d;
          param_4 = 0x112;
        }
        else if (local_20 == 2) {
          param_4 = 0x13a;
          local_14 = 0x122;
        }
        else if (local_20 == 3) {
          param_4 = 0x162;
          local_14 = 0x124;
        }
      }
      else {
        local_14 = 0xaf;
      }
      if ((local_20 == *param_3) && (iVar2 = FUN_004f99b0(0x1d72cb0), iVar2 != 0)) {
        iVar2 = 0;
        local_1c = local_24;
        do {
          uVar3 = FUN_005a35cc();
          uVar4 = FUN_005a35cc();
          iVar5 = FUN_005a35cc();
          FUN_00406bf0((uint)((longlong)iVar5 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar5 * 48000) >> 0x20) << 0x10);
          iVar2 = iVar2 + 1;
          FUN_004b0a20(local_18,*local_1c,((uVar3 & 3) - 2) + local_14,((uVar4 & 3) - 2) + param_4,
                       0xab,0xffffffff);
        } while (iVar2 < 5);
      }
      FUN_00406bf0(48000);
      FUN_004b0a20(local_18,*local_24,local_14,param_4,0x9a,0xffffffff);
      param_4 = param_4 + local_28;
      if (param_5 == 0) {
        param_4 = param_4 + local_28;
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  FUN_00406bf0(0xffff);
  FUN_005a28c0(local_f0,"Blair Witch Volume III: The Elly Kedward Tale (c) 2000 Ritual Entertainment, Ver %1.2f",0xc28f5c29,0x3ff028f5);
  if (_DAT_01dd4890 == 0) {
    iVar2 = FUN_004b2a80(_DAT_01549ab4,local_f0);
    iVar5 = FUN_004b2b30(_DAT_01549ab4,local_f0);
  }
  else {
    iVar2 = FUN_004b2a80(_DAT_01549ab4,local_f0);
    iVar5 = FUN_004b2b30(_DAT_01549ab4,local_f0);
  }
  FUN_004b0a20(_DAT_01549ab4,local_f0,0x26b - iVar2,0x1df - iVar5,0xf8,0);
  pcVar7 = (char *)param_1[*param_3];
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == ':') goto LAB_004e7adc;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == ':') goto LAB_004e7adc;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004e7adc:
  _DAT_01d737e4 = 0;
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x48);
  if (iVar2 != 0) {
    _DAT_01d737e4 = 1;
    iVar2 = *param_3;
    *param_3 = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *param_3 = param_2 + -1;
    }
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x50);
  if (iVar2 != 0) {
    iVar2 = *param_3;
    _DAT_01d737e4 = 1;
    *param_3 = iVar2 + 1;
    if (param_2 <= iVar2 + 1) {
      *param_3 = 0;
    }
  }
  if (pcVar6 != (char *)0x0) {
    _DAT_01d737d4 = 0;
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4b);
    if (iVar2 != 0) {
      _DAT_01d737d4 = 1;
      return *param_3;
    }
    iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4d);
    if (iVar2 != 0) goto LAB_004e7bab;
  }
  iVar2 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
  if (iVar2 == 0) {
    return -1;
  }
LAB_004e7bab:
  return *param_3;
}
