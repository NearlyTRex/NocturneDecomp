// Name: FUN_00574410
// Address: 00574410
// Address Range: [[00574410, 0057469f]]
// Convention: unknown
// Signature: undefined4 FUN_00574410(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00574410(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char local_140;
  byte local_13f [255];
  byte local_40 [44];
  uint local_14;
  
  bVar8 = 0;
  FUN_00575d20();
  iVar5 = 0;
  do {
    if (0 < *(int *)(iVar5 + 0x2c79104)) {
      iVar3 = FUN_005c04e0((uint *)(iVar5 + 0x2c78ff4),param_1);
      if (iVar3 == 0) {
        puVar6 = (uint *)(iVar5 + 0x2c78ff4);
        for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_1 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          param_1 = param_1 + (uint)bVar8 * -2 + 1;
        }
        FUN_00573e70();
        return 1;
      }
    }
    iVar5 = iVar5 + 0x1b0;
  } while (iVar5 < 0x6c00);
  FUN_00573e70();
  iVar5 = FUN_00478fb0("sound",param_1);
  if (iVar5 < 1) {
    return 0;
  }
  FUN_00479580(param_1,0,0,0,&local_140);
  if (local_140 == '.') {
    uVar4 = 0xffffffff;
    pcVar7 = &local_140;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    FUN_005c25d0(&local_140,local_13f,~uVar4 - 1);
  }
  iVar5 = FUN_005c04e0(&local_140,&DAT_005f4125);
  if (iVar5 != 0) {
    iVar5 = FUN_005c04e0(&local_140,&DAT_005f412f);
    if (iVar5 == 0) {
      if ((DAT_02c745b8 & 1) == 0) {
        DAT_02c745b8 = DAT_02c745b8 | 1;
        FUN_0052ae40(0x2c6bf88);
        FUN_005c1093(&DAT_006232d4);
      }
      FUN_0052aea0(0x2c6bf88,param_1);
      param_1[0x41] = 0x10;
      param_1[0x42] = _DAT_02c6c08c;
      uVar2 = _DAT_02c6c088;
      param_1[0x44] = 0xffffffff;
      param_1[0x43] = uVar2;
      FUN_0052b100(0x2c6bf88);
    }
    else {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0x12c0;
      FUN_005030e0("Unknown sample file format extension: %s",param_1);
    }
LAB_00574568:
    FUN_0056e130(param_1);
    if (0 < (int)param_1[0x44]) {
      return 1;
    }
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x12cb;
    FUN_005030e0("getSampleInfo - can't determine length for %s",param_1);
    return 1;
  }
  FUN_005a08d0(local_40);
  iVar5 = FUN_005a0fd0(local_40,"sound",param_1,1);
  if (iVar5 != 0) {
    local_14 = FUN_005a0d50(local_40);
    iVar5 = FUN_0056db10(local_40,&local_14,param_1);
    if (iVar5 != 0) {
      FUN_005a0dc0(local_40);
      FUN_005a0a50(local_40,0);
      goto LAB_00574568;
    }
  }
  FUN_005a0a50(local_40,0);
  return 0;
}
