// Name: FUN_0051a4f0
// Address: 0051a4f0
// Address Range: [[0051a4f0, 0051ab58]]
// Convention: unknown
// Signature: void FUN_0051a4f0(undefined4 *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051a4f0(uint *param_1,uint param_2,int param_3)

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
  FUN_0051a3b0(param_1);
  if (param_3 == 0) {
    FUN_0051bf10(param_1);
  }
  do {
    iVar3 = FUN_005c0530(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005c04b0(param_2,"%d,%d\n",param_1 + 0x403,&local_2c);
  if (7 < (int)param_1[0x403]) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xe9;
    FUN_005030e0("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",param_1[0x403],7);
  }
  if (local_2c < 4) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xec;
    FUN_005030e0("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if ((int)param_1[0x403] < 2) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xf1;
    FUN_005030e0("No name in mission");
  }
  do {
    iVar3 = FUN_005c0530(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005c04b0(param_2,&DAT_005e9214,param_1 + 0x406);
  do {
    iVar3 = FUN_005c0530(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  FUN_005c04b0(param_2,&DAT_005e9218,param_1 + 1);
  if (0 < (int)param_1[1]) {
    puVar7 = param_1 + 2;
    do {
      iVar3 = iVar3 + 1;
      FUN_005c04b0(param_2,&DAT_005e921c,puVar7);
      puVar7 = puVar7 + 0x40;
    } while (iVar3 < (int)param_1[1]);
  }
  FUN_0040c660();
  if (2 < (int)param_1[0x403]) {
    do {
      iVar3 = FUN_005c0530(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    FUN_005c04b0(param_2,&DAT_005e9220,&local_20);
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
        FUN_005c04b0(param_2,"%s %d\n",local_158,&local_1c);
        iVar6 = FUN_0040c240(local_158);
        if (iVar6 != 0) {
          if (*(int *)(iVar6 + 0x34) < local_1c) {
            _DAT_01d1d400 = "..\\core\\mission.cpp";
            _DAT_01d1d404 = 0x10f;
            FUN_005030e0("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,
                         *(int *)(iVar6 + 0x34));
          }
          **(int **)(iVar6 + 0x30) = local_1c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
  }
  do {
    iVar3 = FUN_005c0530(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005c04b0(param_2,&DAT_005e92a8,&local_28);
  local_24 = 0;
  if ((int)param_1[0x403] < 6) {
    param_1[0x404] = 0;
  }
  else {
    do {
      iVar3 = FUN_005c0530(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    FUN_005c04b0(param_2,&DAT_005e92ac,&local_24);
    param_1[0x404] = 1;
  }
  do {
    iVar3 = FUN_005c0530(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  param_1[0x517] = 0;
  param_1[0x516] = 0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar7 = &DAT_0061f6c0;
    puVar9 = local_90;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    puVar7 = &DAT_0061f728;
    pcVar8 = local_f4;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    FUN_005c04b0(param_2,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar8 = local_f4;
    pcVar5 = (char *)FUN_0040c2b0(local_90);
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
    FUN_0051b160(param_1,pcVar5);
    if (local_14 == local_28) {
      param_1[0x516] = pcVar5;
    }
    if (5999 < (int)param_1[0x517]) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x13c;
      FUN_005030e0("Too many actors");
    }
    param_1[param_1[0x517] + 0x518] = local_18;
    local_14 = local_14 + 1;
    param_1[0x517] = param_1[0x517] + 1;
  }
  do {
    iVar3 = FUN_005c0530(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = param_1[0x446];
  iVar6 = 0;
  if (0 < local_28) {
    do {
      if (iVar3 == 0) {
        _DAT_01d1d400 = "..\\core\\mission.cpp";
        _DAT_01d1d404 = 0x149;
        FUN_005030e0("CDemonMission::load - actor list count mismatch #1!");
      }
      FUN_0040aed0(iVar3,param_2);
      iVar6 = iVar6 + 1;
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar6 < local_28);
  }
  if (param_1[0x404] != 0) {
    iVar3 = param_1[0x446];
    iVar6 = 0;
    if (0 < local_28) {
      do {
        if (iVar3 == 0) {
          _DAT_01d1d400 = "..\\core\\mission.cpp";
          _DAT_01d1d404 = 0x155;
          FUN_005030e0("CDemonMission::load - actor list count mismatch #2!");
        }
        iVar4 = FUN_0040c600(iVar3,_DAT_01d06b10);
        if (iVar4 != 0) {
          FUN_004f9ae0(iVar4 + 0x1fae8);
        }
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(iVar3 + 0x14c);
      } while (iVar6 < local_28);
    }
    param_1[0x404] = 0;
  }
  if (iVar3 != 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x15c;
    FUN_005030e0("CDemonMission::load - actor list count mismatch #3!");
  }
  if (param_1[0x516] != 0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x15d;
    FUN_005030e0("CDemonMission::load - actor list count mismatch #4!");
  }
  param_1[0x517] = 0;
  if ((int)param_1[0x403] < 4) {
    do {
      iVar3 = FUN_005c0530(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    do {
      iVar3 = FUN_005c0530(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
  }
  uVar2 = 0x01CD0E3C;
  *param_1 = 0xffffffff;
  FUN_004e5c00(uVar2);
  if (6 < (int)param_1[0x403]) {
    FUN_004e6680(0x01CD0E3C,param_2);
    return;
  }
  return;
}
