// Name: FUN_004f5cc0
// Address: 004f5cc0
// Address Range: [[004f5cc0, 004f6328]]
// Convention: unknown
// Signature: void FUN_004f5cc0(undefined4 *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f5cc0(uint *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  byte bVar11;
  uint local_158 [25];
  char local_f4 [100];
  uint local_90 [25];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  int local_14;
  
  bVar11 = 0;
  FUN_004f5b80(param_1);
  if (param_3 == 0) {
    FUN_004f76f0(param_1);
  }
  do {
    iVar3 = FUN_005a32b0(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005a3230(param_2,"%d,%d\n",param_1 + 0x403,&local_2c);
  if (7 < (int)param_1[0x403]) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xe9;
    FUN_004e4330("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",param_1[0x403],7);
  }
  if (local_2c < 4) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xec;
    FUN_004e4330("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if ((int)param_1[0x403] < 2) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xf1;
    FUN_004e4330("No name in mission");
  }
  do {
    iVar3 = FUN_005a32b0(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005a3230(param_2,&DAT_005c8516,param_1 + 0x4cf);
  do {
    iVar3 = FUN_005a32b0(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  FUN_005a3230(param_2,&DAT_005c851a,param_1 + 1);
  if (0 < (int)param_1[1]) {
    puVar7 = param_1 + 2;
    do {
      iVar3 = iVar3 + 1;
      FUN_005a3230(param_2,&DAT_005c851e,puVar7);
      puVar7 = puVar7 + 0x40;
    } while (iVar3 < (int)param_1[1]);
  }
  FUN_0040c8a0();
  if (2 < (int)param_1[0x403]) {
    do {
      iVar3 = FUN_005a32b0(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    FUN_005a3230(param_2,&DAT_005c8522,&local_20);
    iVar3 = 0;
    if (0 < local_20) {
      do {
        pcVar8 = "corrupt!";
        puVar7 = local_158;
        for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        }
        FUN_005a3230(param_2,"%s %d\n",local_158,&local_1c);
        iVar6 = FUN_0040c480(local_158);
        if (iVar6 != 0) {
          if (*(int *)(iVar6 + 0x34) < local_1c) {
            _DAT_01d71de0 = "..\\core\\mission.cpp";
            _DAT_01d71de4 = 0x10f;
            FUN_004e4330("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,
                         *(int *)(iVar6 + 0x34));
          }
          **(int **)(iVar6 + 0x30) = local_1c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
  }
  do {
    iVar3 = FUN_005a32b0(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005a3230(param_2,&DAT_005c85aa,&local_28);
  local_24 = 0;
  if ((int)param_1[0x403] < 6) {
    param_1[0x404] = 0;
  }
  else {
    do {
      iVar3 = FUN_005a32b0(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    FUN_005a3230(param_2,&DAT_005c85ae,&local_24);
    param_1[0x404] = 1;
  }
  do {
    iVar3 = FUN_005a32b0(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  param_1[0x517] = 0;
  param_1[0x516] = 0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar7 = &DAT_006005a0;
    puVar9 = local_90;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    puVar7 = &DAT_00600608;
    pcVar8 = local_f4;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    FUN_005a3230(param_2,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar8 = local_f4;
    pcVar5 = (char *)FUN_0040c4f0(local_90);
    local_18 = pcVar5;
    pcVar10 = pcVar5;
    do {
      cVar1 = *pcVar8;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    FUN_004f6930(param_1,pcVar5);
    if (local_14 == local_28) {
      param_1[0x516] = pcVar5;
    }
    if (5999 < (int)param_1[0x517]) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x13c;
      FUN_004e4330("Too many actors");
    }
    param_1[param_1[0x517] + 0x518] = local_18;
    local_14 = local_14 + 1;
    param_1[0x517] = param_1[0x517] + 1;
  }
  do {
    iVar3 = FUN_005a32b0(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = param_1[0x50f];
  iVar6 = 0;
  if (0 < local_28) {
    do {
      if (iVar3 == 0) {
        _DAT_01d71de0 = "..\\core\\mission.cpp";
        _DAT_01d71de4 = 0x149;
        FUN_004e4330("CDemonMission::load - actor list count mismatch #1!");
      }
      FUN_0040b110(iVar3,param_2);
      iVar6 = iVar6 + 1;
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar6 < local_28);
  }
  if (param_1[0x404] != 0) {
    iVar3 = param_1[0x50f];
    iVar6 = 0;
    if (0 < local_28) {
      do {
        if (iVar3 == 0) {
          _DAT_01d71de0 = "..\\core\\mission.cpp";
          _DAT_01d71de4 = 0x155;
          FUN_004e4330("CDemonMission::load - actor list count mismatch #2!");
        }
        iVar4 = FUN_0040c840(iVar3,_DAT_01d5ba70);
        if (iVar4 != 0) {
          FUN_004dca90(iVar4 + 0x206e8);
        }
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(iVar3 + 0x14c);
      } while (iVar6 < local_28);
    }
    param_1[0x404] = 0;
  }
  if (iVar3 != 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x15c;
    FUN_004e4330("CDemonMission::load - actor list count mismatch #3!");
  }
  if (param_1[0x516] != 0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x15d;
    FUN_004e4330("CDemonMission::load - actor list count mismatch #4!");
  }
  param_1[0x517] = 0;
  if ((int)param_1[0x403] < 4) {
    do {
      iVar3 = FUN_005a32b0(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    do {
      iVar3 = FUN_005a32b0(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
  }
  uVar2 = 0x01D22E44;
  *param_1 = 0xffffffff;
  FUN_004ce560(uVar2);
  if (6 < (int)param_1[0x403]) {
    FUN_004cf010(0x01D22E44,param_2);
    return;
  }
  return;
}
