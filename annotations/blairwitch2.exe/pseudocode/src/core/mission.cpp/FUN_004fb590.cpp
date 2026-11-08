// Name: FUN_004fb590
// Address: 004fb590
// Address Range: [[004fb590, 004fbbf8]]
// Convention: unknown
// Signature: void FUN_004fb590(undefined4 *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fb590(uint *param_1,uint param_2,int param_3)

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
  FUN_004fb450(param_1);
  if (param_3 == 0) {
    FUN_004fcf50(param_1);
  }
  do {
    iVar3 = FUN_005b8180(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005b8100(param_2,"%d,%d\n",param_1 + 0x403,&local_2c);
  if (7 < (int)param_1[0x403]) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xe6;
    FUN_004e4500("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",param_1[0x403],7);
  }
  if (local_2c < 4) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xe9;
    FUN_004e4500("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if ((int)param_1[0x403] < 2) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xee;
    FUN_004e4500("No name in mission");
  }
  do {
    iVar3 = FUN_005b8180(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005b8100(param_2,&DAT_005de1d1,param_1 + 0x405);
  do {
    iVar3 = FUN_005b8180(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  FUN_005b8100(param_2,&DAT_005de1d5,param_1 + 1);
  if (0 < (int)param_1[1]) {
    puVar7 = param_1 + 2;
    do {
      iVar3 = iVar3 + 1;
      FUN_005b8100(param_2,&DAT_005de1d9,puVar7);
      puVar7 = puVar7 + 0x40;
    } while (iVar3 < (int)param_1[1]);
  }
  FUN_0040c950();
  if (2 < (int)param_1[0x403]) {
    do {
      iVar3 = FUN_005b8180(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    FUN_005b8100(param_2,&DAT_005de1dd,&local_20);
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
        FUN_005b8100(param_2,"%s %d\n",local_158,&local_1c);
        iVar6 = FUN_0040c530(local_158);
        if (iVar6 != 0) {
          if (*(int *)(iVar6 + 0x34) < local_1c) {
            _DAT_01d046a0 = "..\\core\\mission.cpp";
            _DAT_01d046a4 = 0x10c;
            FUN_004e4500("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,
                         *(int *)(iVar6 + 0x34));
          }
          **(int **)(iVar6 + 0x30) = local_1c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
  }
  do {
    iVar3 = FUN_005b8180(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  FUN_005b8100(param_2,&DAT_005de265,&local_28);
  local_24 = 0;
  if ((int)param_1[0x403] < 6) {
    param_1[0x404] = 0;
  }
  else {
    do {
      iVar3 = FUN_005b8180(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    FUN_005b8100(param_2,&DAT_005de269,&local_24);
    param_1[0x404] = 1;
  }
  do {
    iVar3 = FUN_005b8180(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  param_1[0x516] = 0;
  param_1[0x515] = 0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar7 = &DAT_006181e0;
    puVar9 = local_90;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    puVar7 = &DAT_00618248;
    pcVar8 = local_f4;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    FUN_005b8100(param_2,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar8 = local_f4;
    pcVar5 = (char *)FUN_0040c5a0(local_90);
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
    FUN_004fc200(param_1,pcVar5);
    if (local_14 == local_28) {
      param_1[0x515] = pcVar5;
    }
    if (2999 < (int)param_1[0x516]) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x139;
      FUN_004e4500("Too many actors");
    }
    param_1[param_1[0x516] + 0x517] = local_18;
    local_14 = local_14 + 1;
    param_1[0x516] = param_1[0x516] + 1;
  }
  do {
    iVar3 = FUN_005b8180(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = param_1[0x445];
  iVar6 = 0;
  if (0 < local_28) {
    do {
      if (iVar3 == 0) {
        _DAT_01d046a0 = "..\\core\\mission.cpp";
        _DAT_01d046a4 = 0x146;
        FUN_004e4500("CDemonMission::load - actor list count mismatch #1!");
      }
      FUN_0040b1c0(iVar3,param_2);
      iVar6 = iVar6 + 1;
      iVar3 = *(int *)(iVar3 + 0x14c);
    } while (iVar6 < local_28);
  }
  if (param_1[0x404] != 0) {
    iVar3 = param_1[0x445];
    iVar6 = 0;
    if (0 < local_28) {
      do {
        if (iVar3 == 0) {
          _DAT_01d046a0 = "..\\core\\mission.cpp";
          _DAT_01d046a4 = 0x152;
          FUN_004e4500("CDemonMission::load - actor list count mismatch #2!");
        }
        iVar4 = FUN_0040c8f0(iVar3,_DAT_01cedf50);
        if (iVar4 != 0) {
          FUN_004dc810(iVar4 + 0x2437c);
        }
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(iVar3 + 0x14c);
      } while (iVar6 < local_28);
    }
    param_1[0x404] = 0;
  }
  if (iVar3 != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x159;
    FUN_004e4500("CDemonMission::load - actor list count mismatch #3!");
  }
  if (param_1[0x515] != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x15a;
    FUN_004e4500("CDemonMission::load - actor list count mismatch #4!");
  }
  param_1[0x516] = 0;
  if ((int)param_1[0x403] < 4) {
    do {
      iVar3 = FUN_005b8180(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    do {
      iVar3 = FUN_005b8180(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
  }
  uVar2 = 0x01CB8284;
  *param_1 = 0xffffffff;
  FUN_004c93f0(uVar2);
  if (6 < (int)param_1[0x403]) {
    FUN_004c9e70(0x01CB8284,param_2);
    return;
  }
  return;
}
