// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0
// Address: 0051a4f0
// Address Range: [[0051a4f0, 0051ab58]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_0051a4f0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_0051a4f0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

{
  char cVar1;
  CGore *this_ptr_00;
  int iVar2;
  CDemonActorType *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CDemonActor *pCVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char acStack_154 [100];
  char acStack_f0 [100];
  char acStack_8c [100];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CDemonActor *local_14;
  
  bVar10 = 0;
  core_mission_cpp_CDemonMission_clearMissionData_FUN_0051a3b0(this_ptr);
  if (load_flags == 0) {
    core_mission_cpp_CDemonMission_freeAllAssets_FUN_0051bf10(this_ptr);
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf((_FILE *)load_flags,"%d,%d\n");
  if (7 < this_ptr->mission_version_num) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xe9;
    core_main_c_FUN_005030e0("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",this_ptr->mission_version_num,7);
  }
  if (local_28 < 4) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xec;
    core_main_c_FUN_005030e0("This mission uses actor format version %d, which we don't support anymore!",local_28);
  }
  if (this_ptr->mission_version_num < 2) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0xf1;
    core_main_c_FUN_005030e0("No name in mission");
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf((_FILE *)load_flags,&DAT_005e9214);
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  _fscanf((_FILE *)load_flags,&DAT_005e9218);
  if (0 < this_ptr->num_sets) {
    do {
      iVar2 = iVar2 + 1;
      _fscanf((_FILE *)load_flags,&DAT_005e921c);
    } while (iVar2 < this_ptr->num_sets);
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040c660();
  if (2 < this_ptr->mission_version_num) {
    do {
      iVar2 = _fgetc((_FILE *)load_flags);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf((_FILE *)load_flags,&DAT_005e9220);
    iVar2 = 0;
    if (0 < local_1c) {
      do {
        pcVar8 = "corrupt!";
        pcVar9 = acStack_154;
        for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pcVar9 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
          pcVar9 = (char *)((int)pcVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        _fscanf((_FILE *)load_flags,"%s %d\n");
        pCVar3 = core_actor_cpp_getActorClassByName_FUN_0040c240(acStack_154);
        if (pCVar3 != (CDemonActorType *)0x0) {
          if (pCVar3->latest_version < local_18) {
            _DAT_01d1d400 = "..\\core\\mission.cpp";
            _DAT_01d1d404 = 0x10f;
            core_main_c_FUN_005030e0
                      ("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",acStack_154,local_18,
                       pCVar3->latest_version);
          }
          *pCVar3->archive_version = local_18;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_1c);
    }
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf((_FILE *)load_flags,&DAT_005e92a8);
  local_20 = 0;
  if (this_ptr->mission_version_num < 6) {
    this_ptr->has_inventory_actors = 0;
  }
  else {
    do {
      iVar2 = _fgetc((_FILE *)load_flags);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf((_FILE *)load_flags,&DAT_005e92ac);
    this_ptr->has_inventory_actors = 1;
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  this_ptr->actor_lookup_count = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  for (iVar2 = 0; iVar2 < local_24 + local_20; iVar2 = iVar2 + 1) {
    puVar7 = &DAT_0061f6c0;
    pcVar8 = acStack_8c;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
    puVar7 = &DAT_0061f728;
    pcVar8 = acStack_f0;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
    _fscanf((_FILE *)load_flags,"%s \"%[^\"]\"\n");
    pcVar8 = acStack_f0;
    pCVar4 = core_actor_cpp_createActorByName_FUN_0040c2b0(acStack_8c);
    local_14 = pCVar4;
    pCVar6 = pCVar4;
    do {
      cVar1 = *pcVar8;
      pCVar6->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pCVar6->actor_name[1] = cVar1;
      pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
    } while (cVar1 != '\0');
    core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(this_ptr,pCVar4);
    if (iVar2 == local_24) {
      this_ptr->next_inventory_actor = pCVar4;
    }
    if (5999 < this_ptr->actor_lookup_count) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x13c;
      core_main_c_FUN_005030e0("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = local_14;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  pCVar6 = this_ptr->first_actor;
  iVar2 = 0;
  if (0 < local_24) {
    do {
      if (pCVar6 == (CDemonActor *)0x0) {
        _DAT_01d1d400 = "..\\core\\mission.cpp";
        _DAT_01d1d404 = 0x149;
        core_main_c_FUN_005030e0("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040aed0(pCVar6,(_FILE *)load_flags);
      iVar2 = iVar2 + 1;
      pCVar6 = pCVar6->next_actor;
    } while (iVar2 < local_24);
  }
  if (this_ptr->has_inventory_actors != 0) {
    pCVar6 = this_ptr->first_actor;
    iVar2 = 0;
    if (0 < local_24) {
      do {
        if (pCVar6 == (CDemonActor *)0x0) {
          _DAT_01d1d400 = "..\\core\\mission.cpp";
          _DAT_01d1d404 = 0x155;
          core_main_c_FUN_005030e0("CDemonMission::load - actor list count mismatch #2!");
        }
        pCVar4 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar6,g_CHeroClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_loadItems_FUN_004f9ae0
                    ((CInventory *)&pCVar4[0x179].orient_matrix.m[1].z);
        }
        iVar2 = iVar2 + 1;
        pCVar6 = pCVar6->next_actor;
      } while (iVar2 < local_24);
    }
    this_ptr->has_inventory_actors = 0;
  }
  if (pCVar6 != (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x15c;
    core_main_c_FUN_005030e0("CDemonMission::load - actor list count mismatch #3!");
  }
  if (this_ptr->next_inventory_actor != (CDemonActor *)0x0) {
    _DAT_01d1d400 = "..\\core\\mission.cpp";
    _DAT_01d1d404 = 0x15d;
    core_main_c_FUN_005030e0("CDemonMission::load - actor list count mismatch #4!");
  }
  this_ptr->actor_lookup_count = 0;
  if (this_ptr->mission_version_num < 4) {
    do {
      iVar2 = _fgetc((_FILE *)load_flags);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    do {
      iVar2 = _fgetc((_FILE *)load_flags);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
  }
  this_ptr_00 = g_CGorePtr;
  this_ptr->current_set_index = -1;
  core_gore_cpp_CGore_reset_FUN_004e5c00(this_ptr_00);
  if (6 < this_ptr->mission_version_num) {
    core_gore_cpp_CGore_load_FUN_004e6680(g_CGorePtr,(_FILE *)load_flags);
    return;
  }
  return;
}
