// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0
// Address: 004d7fe0
// Address Range: [[004d7fe0, 004d8630]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(undefined4 *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(uint *param_1,uint param_2,int param_3)

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
  FUN_004d7ea0(param_1);
  if (param_3 == 0) {
    FUN_004d9900(param_1);
  }
  do {
    iVar3 = _fgetc(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  _fscanf(param_2,"%d,%d\n",param_1 + 2,&local_2c);
  if (7 < (int)param_1[2]) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0xe2;
    FUN_004c8440("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",param_1[2],7);
  }
  if (local_2c < 4) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0xe5;
    FUN_004c8440("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if ((int)param_1[2] < 2) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0xea;
    FUN_004c8440("No name in mission");
  }
  do {
    iVar3 = _fgetc(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  _fscanf(param_2,"%s\n",param_1 + 4);
  do {
    iVar3 = _fgetc(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  _fscanf(param_2,"%d\n",param_1 + 0x44);
  if (0 < (int)param_1[0x44]) {
    puVar7 = param_1 + 0x45;
    do {
      iVar3 = iVar3 + 1;
      _fscanf(param_2,"%s\n",puVar7);
      puVar7 = puVar7 + 0x40;
    } while (iVar3 < (int)param_1[0x44]);
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040d8f0();
  if (2 < (int)param_1[2]) {
    do {
      iVar3 = _fgetc(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    _fscanf(param_2,"%d\n",&local_20);
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
        _fscanf(param_2,"%s %d\n",local_158,&local_1c);
        iVar6 = core_actor_cpp_getActorClassByName_FUN_0040d4d0(local_158);
        if (iVar6 != 0) {
          if (*(int *)(iVar6 + 0x34) < local_1c) {
            _DAT_01cc4800 = "..\\core\\mission.cpp";
            _DAT_01cc4804 = 0x108;
            FUN_004c8440("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,
                         *(int *)(iVar6 + 0x34));
          }
          **(int **)(iVar6 + 0x30) = local_1c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
  }
  do {
    iVar3 = _fgetc(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  _fscanf(param_2,"%d\n",&local_28);
  local_24 = 0;
  if ((int)param_1[2] < 6) {
    param_1[3] = 0;
  }
  else {
    do {
      iVar3 = _fgetc(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    _fscanf(param_2,"%d\n",&local_24);
    param_1[3] = 1;
  }
  do {
    iVar3 = _fgetc(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  param_1[0x216] = 0;
  param_1[0x215] = 0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar7 = &DAT_005bb000;
    puVar9 = local_90;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    puVar7 = &DAT_005bb068;
    pcVar8 = local_f4;
    for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    _fscanf(param_2,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar8 = local_f4;
    pcVar5 = (char *)core_actor_cpp_createActorByName_FUN_0040d540(local_90);
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
    core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(param_1,pcVar5);
    if (local_14 == local_28) {
      param_1[0x215] = pcVar5;
    }
    if (1999 < (int)param_1[0x216]) {
      _DAT_01cc4800 = "..\\core\\mission.cpp";
      _DAT_01cc4804 = 0x135;
      FUN_004c8440("Too many actors");
    }
    param_1[param_1[0x216] + 0x217] = local_18;
    local_14 = local_14 + 1;
    param_1[0x216] = param_1[0x216] + 1;
  }
  do {
    iVar3 = _fgetc(param_2);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = param_1[0x145];
  iVar6 = 0;
  if (0 < local_28) {
    do {
      if (iVar3 == 0) {
        _DAT_01cc4800 = "..\\core\\mission.cpp";
        _DAT_01cc4804 = 0x142;
        FUN_004c8440("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040c160(iVar3,param_2);
      iVar6 = iVar6 + 1;
      iVar3 = *(int *)(iVar3 + 0x144);
    } while (iVar6 < local_28);
  }
  if (param_1[3] != 0) {
    iVar3 = param_1[0x145];
    iVar6 = 0;
    if (0 < local_28) {
      do {
        if (iVar3 == 0) {
          _DAT_01cc4800 = "..\\core\\mission.cpp";
          _DAT_01cc4804 = 0x14e;
          FUN_004c8440("CDemonMission::load - actor list count mismatch #2!");
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar3,_DAT_01cae124);
        if (iVar4 != 0) {
          core_inv_cpp_CInventory_loadItems_FUN_004c14d0(iVar4 + 0x1f5a0);
        }
        iVar6 = iVar6 + 1;
        iVar3 = *(int *)(iVar3 + 0x144);
      } while (iVar6 < local_28);
    }
    param_1[3] = 0;
  }
  if (iVar3 != 0) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0x155;
    FUN_004c8440("CDemonMission::load - actor list count mismatch #3!");
  }
  if (param_1[0x215] != 0) {
    _DAT_01cc4800 = "..\\core\\mission.cpp";
    _DAT_01cc4804 = 0x156;
    FUN_004c8440("CDemonMission::load - actor list count mismatch #4!");
  }
  param_1[0x216] = 0;
  if ((int)param_1[2] < 4) {
    do {
      iVar3 = _fgetc(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    do {
      iVar3 = _fgetc(param_2);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
  }
  uVar2 = 0x01C78C7C;
  *param_1 = 0xffffffff;
  core_gore_cpp_CGore_reset_FUN_004afdb0(uVar2);
  if (6 < (int)param_1[2]) {
    core_gore_cpp_CGore_load_FUN_004b0820(0x01C78C7C,param_2);
    return;
  }
  return;
}
