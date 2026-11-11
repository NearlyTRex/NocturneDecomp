// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0
// Address: 004f5cc0
// Address Range: [[004f5cc0, 004f6328]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004f5cc0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004f5cc0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

{
  char cVar1;
  CGore *this_ptr_00;
  int iVar2;
  CDemonActor *actor;
  int iVar3;
  char (*pacVar4) [256];
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
  core_mission_cpp_FUN_004f5b80(this_ptr);
  if (load_flags == 0) {
    core_mission_cpp_FUN_004f76f0(this_ptr);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,"%d,%d\n",&this_ptr->mission_version_num,&local_2c);
  if (7 < this_ptr->mission_version_num) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xe9;
    core_main_c_FUN_004e4330("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",this_ptr->mission_version_num,7);
  }
  if (local_2c < 4) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xec;
    core_main_c_FUN_004e4330("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if (this_ptr->mission_version_num < 2) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0xf1;
    core_main_c_FUN_004e4330("No name in mission");
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,&DAT_005c8516,this_ptr->mission_name);
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  _fscanf(file_handle,&DAT_005c851a,&this_ptr->num_sets);
  if (0 < this_ptr->num_sets) {
    pacVar4 = this_ptr->set_names;
    do {
      iVar2 = iVar2 + 1;
      _fscanf(file_handle,&DAT_005c851e,pacVar4);
      pacVar4 = pacVar4 + 1;
    } while (iVar2 < this_ptr->num_sets);
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040c8a0();
  if (2 < this_ptr->mission_version_num) {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,&DAT_005c8522,&local_20);
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
        iVar3 = core_actor_cpp_getActorClassByName_FUN_0040c480(local_158);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 0x34) < local_1c) {
            _DAT_01d71de0 = "..\\core\\mission.cpp";
            _DAT_01d71de4 = 0x10f;
            core_main_c_FUN_004e4330
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
  _fscanf(file_handle,&DAT_005c85aa,&local_28);
  local_24 = 0;
  if (this_ptr->mission_version_num < 6) {
    this_ptr->has_inventory_actors = 0;
  }
  else {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,&DAT_005c85ae,&local_24);
    this_ptr->has_inventory_actors = 1;
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  this_ptr->actor_lookup_count = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar6 = &DAT_006005a0;
    puVar8 = local_90;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    puVar6 = &DAT_00600608;
    pcVar7 = local_f4;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
    }
    _fscanf(file_handle,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar7 = local_f4;
    actor = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0(local_90);
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
    core_mission_cpp_CDemonMission_addActorToList_FUN_004f6930(this_ptr,actor);
    if (local_14 == local_28) {
      this_ptr->next_inventory_actor = actor;
    }
    if (5999 < this_ptr->actor_lookup_count) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x13c;
      core_main_c_FUN_004e4330("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = local_18;
    local_14 = local_14 + 1;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  pCVar5 = this_ptr->first_actor;
  iVar2 = 0;
  if (0 < local_28) {
    do {
      if (pCVar5 == (CDemonActor *)0x0) {
        _DAT_01d71de0 = "..\\core\\mission.cpp";
        _DAT_01d71de4 = 0x149;
        core_main_c_FUN_004e4330("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040b110(pCVar5,file_handle);
      iVar2 = iVar2 + 1;
      pCVar5 = pCVar5->next_actor;
    } while (iVar2 < local_28);
  }
  if (this_ptr->has_inventory_actors != 0) {
    pCVar5 = this_ptr->first_actor;
    iVar2 = 0;
    if (0 < local_28) {
      do {
        if (pCVar5 == (CDemonActor *)0x0) {
          _DAT_01d71de0 = "..\\core\\mission.cpp";
          _DAT_01d71de4 = 0x155;
          core_main_c_FUN_004e4330("CDemonMission::load - actor list count mismatch #2!");
        }
        iVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar5,g_CHeroClassInfo.name_hash);
        if (iVar3 != 0) {
          core_inv_cpp_CInventory_loadItems_FUN_004dca90((CInventory *)(iVar3 + 0x206e8));
        }
        iVar2 = iVar2 + 1;
        pCVar5 = pCVar5->next_actor;
      } while (iVar2 < local_28);
    }
    this_ptr->has_inventory_actors = 0;
  }
  if (pCVar5 != (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x15c;
    core_main_c_FUN_004e4330("CDemonMission::load - actor list count mismatch #3!");
  }
  if (this_ptr->next_inventory_actor != (CDemonActor *)0x0) {
    _DAT_01d71de0 = "..\\core\\mission.cpp";
    _DAT_01d71de4 = 0x15d;
    core_main_c_FUN_004e4330("CDemonMission::load - actor list count mismatch #4!");
  }
  this_ptr->actor_lookup_count = 0;
  if (this_ptr->mission_version_num < 4) {
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
  this_ptr->current_set_index = -1;
  core_gore_cpp_CGore_reset_FUN_004ce560(this_ptr_00);
  if (6 < this_ptr->mission_version_num) {
    core_gore_cpp_CGore_load_FUN_004cf010(g_CGorePtr,file_handle);
    return;
  }
  return;
}
