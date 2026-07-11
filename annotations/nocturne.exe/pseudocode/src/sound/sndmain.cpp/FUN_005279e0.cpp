// Name: FUN_005279e0
// Address: 005279e0
// Address Range: [[005279e0, 00527c27]]
// Convention: unknown
// Signature: undefined4 FUN_005279e0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005279e0(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char local_114;
  byte local_113 [255];
  uint local_14;
  
  bVar8 = 0;
  FUN_00528800();
  iVar5 = 0;
  do {
    if (0 < *(int *)(iVar5 + 0x2dc1fec)) {
      iVar3 = FUN_00564520((uint *)(iVar5 + 0x2dc1edc),param_1);
      if (iVar3 == 0) {
        puVar6 = (uint *)(iVar5 + 0x2dc1edc);
        for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_1 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          param_1 = param_1 + (uint)bVar8 * -2 + 1;
        }
        FUN_00528890();
        return 1;
      }
    }
    iVar5 = iVar5 + 0x168;
  } while (iVar5 < 0x5a00);
  FUN_00528890();
  iVar5 = FUN_004568c0("sound",param_1);
  if (0 < iVar5) {
    FUN_00566498(param_1,0,0,0,&local_114);
    if (local_114 == '.') {
      uVar4 = 0xffffffff;
      pcVar7 = &local_114;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      FUN_00566170(&local_114,local_113,~uVar4 - 1);
    }
    iVar5 = FUN_00564520(&local_114,&DAT_0059373a);
    if (iVar5 != 0) {
      iVar5 = FUN_00564520(&local_114,&DAT_00593747);
      if (iVar5 == 0) {
        if ((DAT_02dbd348 & 1) == 0) {
          DAT_02dbd348 = DAT_02dbd348 | 1;
          FUN_004e7d90(0x2db4d18);
          FUN_00564bb0(&DAT_005bea44);
        }
        FUN_004e7df0(0x2db4d18,param_1);
        param_1[0x41] = 0x10;
        param_1[0x42] = _DAT_02db4e1c;
        uVar2 = _DAT_02db4e18;
        param_1[0x44] = 0xffffffff;
        param_1[0x43] = uVar2;
        FUN_004e8260(0x2db4d18);
      }
      else {
        _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
        _DAT_01cc4804 = 0x1084;
        FUN_004c8440("Unknown sample file format extension: %s",param_1);
      }
LAB_00527b18:
      FUN_00521e10(param_1);
      if (0 < (int)param_1[0x44]) {
        return 1;
      }
      _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
      _DAT_01cc4804 = 0x108f;
      FUN_004c8440("getSampleInfo - can't determine length for %s",param_1);
      return 1;
    }
    iVar5 = FUN_00456a60("sound",param_1,&DAT_0059373e);
    if (iVar5 != 0) {
      local_14 = FUN_00566e70(iVar5);
      iVar3 = FUN_00521830(iVar5,&local_14,param_1);
      if (iVar3 != 0) {
        FUN_00563380(iVar5);
        goto LAB_00527b18;
      }
    }
    if (iVar5 != 0) {
      FUN_00563380(iVar5);
      return 0;
    }
  }
  return 0;
}
