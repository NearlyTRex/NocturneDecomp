// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590
// Address: 004fb590
// Address Range: [[004fb590, 004fbbf8]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004fb590(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004fb590(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

{
  char cVar1;
  CGore *this_ptr_00;
  int iVar2;
  CDemonActor *actor;
  int iVar3;
  CDemonMission *pCVar4;
  CDemonActor *pCVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  byte bVar9;
  uint local_158 [25];
  char local_f4 [100];
  uint local_90 [25];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CDemonActor *local_18;
  int local_14;
  
  bVar9 = 0;
  core_mission_cpp_FUN_004fb450(this_ptr);
  if (load_flags == 0) {
    core_mission_cpp_FUN_004fcf50(this_ptr);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,"%d,%d\n",this_ptr + 0x100c,&local_2c);
  if (7 < *(int *)(this_ptr + 0x100c)) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xe6;
    core_main_c_FUN_004e4500("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",*(int *)(this_ptr + 0x100c),7);
  }
  if (local_2c < 4) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xe9;
    core_main_c_FUN_004e4500("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if (*(int *)(this_ptr + 0x100c) < 2) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0xee;
    core_main_c_FUN_004e4500("No name in mission");
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005de1d1,this_ptr + 0x1014);
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  _fscanf(file_handle,&DAT_005de1d5,this_ptr + 4);
  if (0 < *(int *)(this_ptr + 4)) {
    pCVar4 = this_ptr + 8;
    do {
      iVar2 = iVar2 + 1;
      _fscanf(file_handle,&DAT_005de1d9,pCVar4);
      pCVar4 = pCVar4 + 0x100;
    } while (iVar2 < *(int *)(this_ptr + 4));
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040c950();
  if (2 < *(int *)(this_ptr + 0x100c)) {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,&DAT_005de1dd,&local_20);
    iVar2 = 0;
    if (0 < local_20) {
      do {
        pcVar7 = "corrupt!";
        puVar6 = local_158;
        for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *(uint *)pcVar7;
          pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
          puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        }
        _fscanf(file_handle,"%s %d\n",local_158,&local_1c);
        iVar3 = core_actor_cpp_getActorClassByName_FUN_0040c530(local_158);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0x34) < local_1c) {
            _DAT_01d046a0 = "..\\core\\mission.cpp";
            _DAT_01d046a4 = 0x10c;
            core_main_c_FUN_004e4500
                      ("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,*(int *)(iVar3 + 0x34)
                      );
          }
          **(int **)(iVar3 + 0x30) = local_1c;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_20);
    }
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005de265,&local_28);
  local_24 = 0;
  if (*(int *)(this_ptr + 0x100c) < 6) {
    *(uint *)(this_ptr + 0x1010) = 0;
  }
  else {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,&DAT_005de269,&local_24);
    *(uint *)(this_ptr + 0x1010) = 1;
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  *(uint *)(this_ptr + 0x1458) = 0;
  *(uint *)(this_ptr + 0x1454) = 0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar6 = &DAT_006181e0;
    puVar8 = local_90;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    puVar6 = &DAT_00618248;
    pcVar7 = local_f4;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
    }
    _fscanf(file_handle,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar7 = local_f4;
    actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c5a0(local_90);
    local_18 = actor;
    pCVar5 = actor;
    do {
      cVar1 = *pcVar7;
      pCVar5->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pCVar5->actor_name[1] = cVar1;
      pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
    } while (cVar1 != '\0');
    core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(this_ptr,actor);
    if (local_14 == local_28) {
      *(CDemonActor **)(this_ptr + 0x1454) = actor;
    }
    if (2999 < *(int *)(this_ptr + 0x1458)) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x139;
      core_main_c_FUN_004e4500("Too many actors");
    }
    *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x1458) * 4 + 0x145c) = local_18;
    local_14 = local_14 + 1;
    *(int *)(this_ptr + 0x1458) = *(int *)(this_ptr + 0x1458) + 1;
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  pCVar5 = *(CDemonActor **)(this_ptr + 0x1114);
  iVar2 = 0;
  if (0 < local_28) {
    do {
      if (pCVar5 == (CDemonActor *)0x0) {
        _DAT_01d046a0 = "..\\core\\mission.cpp";
        _DAT_01d046a4 = 0x146;
        core_main_c_FUN_004e4500("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040b1c0(pCVar5,file_handle);
      iVar2 = iVar2 + 1;
      pCVar5 = *(CDemonActor **)&pCVar5->field_0x14c;
    } while (iVar2 < local_28);
  }
  if (*(int *)(this_ptr + 0x1010) != 0) {
    pCVar5 = *(CDemonActor **)(this_ptr + 0x1114);
    iVar2 = 0;
    if (0 < local_28) {
      do {
        if (pCVar5 == (CDemonActor *)0x0) {
          _DAT_01d046a0 = "..\\core\\mission.cpp";
          _DAT_01d046a4 = 0x152;
          core_main_c_FUN_004e4500("CDemonMission::load - actor list count mismatch #2!");
        }
        iVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar5,g_CHeroClassInfo.name_hash);
        if (iVar3 != 0) {
          core_inv_cpp_CInventory_loadItems_FUN_004dc810((CInventory *)(iVar3 + 0x2437c));
        }
        iVar2 = iVar2 + 1;
        pCVar5 = *(CDemonActor **)&pCVar5->field_0x14c;
      } while (iVar2 < local_28);
    }
    *(uint *)(this_ptr + 0x1010) = 0;
  }
  if (pCVar5 != (CDemonActor *)0x0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x159;
    core_main_c_FUN_004e4500("CDemonMission::load - actor list count mismatch #3!");
  }
  if (*(int *)(this_ptr + 0x1454) != 0) {
    _DAT_01d046a0 = "..\\core\\mission.cpp";
    _DAT_01d046a4 = 0x15a;
    core_main_c_FUN_004e4500("CDemonMission::load - actor list count mismatch #4!");
  }
  *(uint *)(this_ptr + 0x1458) = 0;
  if (*(int *)(this_ptr + 0x100c) < 4) {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
  }
  this_ptr_00 = g_CGorePtr;
  *(uint *)this_ptr = 0xffffffff;
  core_gore_cpp_CGore_reset_FUN_004c93f0(this_ptr_00);
  if (6 < *(int *)(this_ptr + 0x100c)) {
    core_gore_cpp_CGore_load_FUN_004c9e70(g_CGorePtr,file_handle);
    return;
  }
  return;
}
