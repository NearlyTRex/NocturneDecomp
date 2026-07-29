// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0
// Address: 004d7fe0
// Address Range: [[004d7fe0, 004d8630]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

{
  char cVar1;
  int iVar2;
  CDemonActorType *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  CDemonActor *pCVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  char local_158 [100];
  char local_f4 [100];
  char local_90 [100];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CDemonActor *local_18;
  int local_14;
  
  bVar10 = 0;
  core_mission_cpp_FUN_004d7ea0(this_ptr);
  if (load_flags == 0) {
    core_mission_cpp_FUN_004d9900(this_ptr);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,"%d,%d\n");
  if (7 < this_ptr->mission_version_num) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0xe2;
    core_main_c_FUN_004c8440("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",this_ptr->mission_version_num,7);
  }
  if (local_2c < 4) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0xe5;
    core_main_c_FUN_004c8440("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if (this_ptr->mission_version_num < 2) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0xea;
    core_main_c_FUN_004c8440("No name in mission");
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,"%s\n");
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  _fscanf(file_handle,"%d\n");
  if (0 < *(int *)(this_ptr->mission_name + 0xcc)) {
    do {
      iVar2 = iVar2 + 1;
      _fscanf(file_handle,"%s\n");
    } while (iVar2 < *(int *)(this_ptr->mission_name + 0xcc));
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040d8f0();
  if (2 < this_ptr->mission_version_num) {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,"%d\n");
    iVar2 = 0;
    if (0 < local_20) {
      do {
        pcVar8 = "corrupt!";
        pcVar9 = local_158;
        for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pcVar9 = *(uint *)pcVar8;
          pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
          pcVar9 = (char *)((int)pcVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        _fscanf(file_handle,"%s %d\n");
        pCVar3 = core_actor_cpp_getActorClassByName_FUN_0040d4d0(local_158);
        if (pCVar3 != (CDemonActorType *)0x0) {
          if (pCVar3->type_id < local_1c) {
            PTR_01cc4800 = "..\\core\\mission.cpp";
            INT_01cc4804 = 0x108;
            core_main_c_FUN_004c8440
                      ("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,pCVar3->type_id);
          }
          *(int *)pCVar3->type_info = local_1c;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_20);
    }
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,"%d\n");
  local_24 = 0;
  if (this_ptr->mission_version_num < 6) {
    this_ptr->has_inventory_actors = 0;
  }
  else {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf(file_handle,"%d\n");
    this_ptr->has_inventory_actors = 1;
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  this_ptr->delete_queue_flags[0x59] = 0;
  this_ptr->delete_queue_flags[0x58] = 0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    puVar7 = &DAT_005bb000;
    pcVar8 = local_90;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
    puVar7 = &DAT_005bb068;
    pcVar8 = local_f4;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
    }
    _fscanf(file_handle,"%s \"%[^\"]\"\n");
    pcVar8 = local_f4;
    pCVar4 = core_actor_cpp_createActorByName_FUN_0040d540(local_90);
    local_18 = pCVar4;
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
    core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(this_ptr,pCVar4);
    if (local_14 == local_28) {
      this_ptr->delete_queue_flags[0x58] = (uint)pCVar4;
    }
    if (1999 < (int)this_ptr->delete_queue_flags[0x59]) {
      PTR_01cc4800 = "..\\core\\mission.cpp";
      INT_01cc4804 = 0x135;
      core_main_c_FUN_004c8440("Too many actors");
    }
    this_ptr->delete_queue_flags[this_ptr->delete_queue_flags[0x59] + 0x5a] = (uint)local_18;
    local_14 = local_14 + 1;
    this_ptr->delete_queue_flags[0x59] = this_ptr->delete_queue_flags[0x59] + 1;
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  pCVar6 = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
  iVar2 = 0;
  if (0 < local_28) {
    do {
      if (pCVar6 == (CDemonActor *)0x0) {
        PTR_01cc4800 = "..\\core\\mission.cpp";
        INT_01cc4804 = 0x142;
        core_main_c_FUN_004c8440("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040c160(pCVar6,file_handle);
      iVar2 = iVar2 + 1;
      pCVar6 = pCVar6->next_actor;
    } while (iVar2 < local_28);
  }
  if (this_ptr->has_inventory_actors != 0) {
    pCVar6 = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
    iVar2 = 0;
    if (0 < local_28) {
      do {
        if (pCVar6 == (CDemonActor *)0x0) {
          PTR_01cc4800 = "..\\core\\mission.cpp";
          INT_01cc4804 = 0x14e;
          core_main_c_FUN_004c8440("CDemonMission::load - actor list count mismatch #2!");
        }
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (pCVar6,g_CHeroActorType_01cae0ec.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_loadItems_FUN_004c14d0
                    ((CInventory *)&pCVar4[0x17e].orient_matrix.m[0].y);
        }
        iVar2 = iVar2 + 1;
        pCVar6 = pCVar6->next_actor;
      } while (iVar2 < local_28);
    }
    this_ptr->has_inventory_actors = 0;
  }
  if (pCVar6 != (CDemonActor *)0x0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x155;
    core_main_c_FUN_004c8440("CDemonMission::load - actor list count mismatch #3!");
  }
  if (this_ptr->delete_queue_flags[0x58] != 0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x156;
    core_main_c_FUN_004c8440("CDemonMission::load - actor list count mismatch #4!");
  }
  iVar2 = this_ptr->mission_version_num;
  this_ptr->delete_queue_flags[0x59] = 0;
  if (iVar2 < 4) {
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    do {
      iVar2 = _fgetc(file_handle);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
  }
  iVar2 = INT_005b96c4;
  this_ptr->current_set_index = -1;
  core_gore_cpp_CGore_reset_FUN_004afdb0((CGore *)iVar2);
  if (6 < this_ptr->mission_version_num) {
    core_gore_cpp_CGore_load_FUN_004b0820((CGore *)INT_005b96c4,file_handle);
    return;
  }
  return;
}
