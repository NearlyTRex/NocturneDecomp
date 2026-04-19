// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0
// Address: 00522eb0
// MANUAL RECONSTRUCTION
// Address Range: [[00522eb0, 00523518]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_00522eb0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

{
  char cVar2;
  int iVar2;
  int iVar3;
  CDemonActorType *pCVar3;
  CHero *pCVar4;
  CDemonActor *actor;
  int iVar5;
  char (*pacVar6) [256];
  CDemonActor *pCVar7;
  char *pcVar4;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar5;
  CDemonActor *pCVar6;
  byte bVar11;
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
  char cVar1;
  CGore *this_ptr_00;
  
  bVar11 = 0;
  core_mission_cpp_CDemonMission_clearMissionData_FUN_00522d30(this_ptr);
  if (load_flags == 0) {
    core_mission_cpp_CDemonMission_freeAllAssets_FUN_005248e0(this_ptr);
  }
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf(file_handle,"%d,%d\n",&this_ptr->mission_version_num,&local_2c);
  if (7 < this_ptr->mission_version_num) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xe2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)",this_ptr->mission_version_num,7);
  }
  if (local_2c < 4) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xe5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("This mission uses actor format version %d, which we don't support anymore!",local_2c);
  }
  if (this_ptr->mission_version_num < 2) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0xea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("No name in mission");
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  _fscanf(file_handle,"%s\n",this_ptr->mission_name);
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  _fscanf(file_handle,"%d\n",&this_ptr->num_sets);
  if (0 < this_ptr->num_sets) {
    pacVar6 = this_ptr->set_names;
    do {
      iVar3 = iVar3 + 1;
      _fscanf(file_handle,"%s\n",*pacVar6);
      pacVar6 = pacVar6 + 1;
    } while (iVar3 < this_ptr->num_sets);
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0();
  if (2 < this_ptr->mission_version_num) {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
                    /* this is the count of the different actor types (113) */
    _fscanf(file_handle,"%d\n",&local_20);
    iVar3 = 0;
    if (0 < local_20) {
      do {
        memcpy(local_158,g_DefaultActorTypeClass,100);
                    /* this reads actorClassName, actorClassType (version num) */
        _fscanf(file_handle,"%s %d\n",local_158,&local_1c);
        pCVar3 = core_actor_cpp_getActorClassByName_FUN_0040c3c0(local_158);
        if (pCVar3 != (CDemonActorType *)0x0) {
          if (pCVar3->type_id < local_1c) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 0x108;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!",local_158,local_1c,pCVar3->type_id);
          }
          *(int *)pCVar3->type_info = local_1c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_20);
    }
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
                    /* this looks like it might be getting actorCount */
  _fscanf(file_handle,"%d\n",&local_28);
  local_24 = 0;
  if (this_ptr->mission_version_num < 6) {
    this_ptr->has_inventory_actors = 0;
  }
  else {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
                    /* this pulls the inventory actor count */
    _fscanf(file_handle,"%d\n",&local_24);
    this_ptr->has_inventory_actors = 1;
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  this_ptr->actor_lookup_count = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  local_14 = 0;
  while (local_14 < local_28 + local_24) {
    memcpy(local_90,g_DefaultMissionActorClass,100);
    memcpy(local_f4,g_DefaultMissionActorName,100);
                    /* this pulls in the actor className and name fields */
    _fscanf(file_handle,"%s \"%[^\"]\"\n",local_90,local_f4);
    pcVar9 = local_f4;
    actor = core_actor_cpp_createActorByName_FUN_0040c430(local_90);
    local_18 = actor;
    pCVar6 = actor;
    do {
      cVar1 = *pcVar9;
      pCVar6->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pCVar6->actor_name[1] = cVar2;
      pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
    } while (cVar2 != '\0');
    core_mission_cpp_CDemonMission_addActorToList_FUN_00523b70(this_ptr,actor);
    if (local_14 == local_28) {
      this_ptr->next_inventory_actor = actor;
    }
                    /* looks like the max actor count is 1999 */
    if (1999 < this_ptr->actor_lookup_count) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x135;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = local_18;
    local_14 = local_14 + 1;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  pCVar7 = this_ptr->first_actor;
  iVar3 = 0;
  if (0 < local_28) {
    do {
      if (pCVar7 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\mission.cpp";
        g_CurrentLineNumber = 0x142;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040b050(pCVar7,file_handle);
      iVar3 = iVar3 + 1;
      pCVar7 = pCVar7->next_actor;
    } while (iVar3 < local_28);
  }
  if (this_ptr->has_inventory_actors != 0) {
    pCVar7 = this_ptr->first_actor;
    iVar3 = 0;
    if (0 < local_28) {
      do {
        if (pCVar7 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\mission.cpp";
          g_CurrentLineNumber = 0x14e;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #2!");
        }
        pCVar4 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790
                                    (pCVar7,g_CHeroClassInfo.name_hash);
        if (pCVar4 != (CHero *)0x0) {
          core_inv_cpp_CInventory_loadItems_FUN_004ff740(&pCVar4->inventory);
        }
        iVar3 = iVar3 + 1;
        pCVar7 = pCVar7->next_actor;
      } while (iVar3 < local_28);
    }
    this_ptr->has_inventory_actors = 0;
  }
  if (pCVar7 != (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x155;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #3!");
  }
  if (this_ptr->next_inventory_actor != (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x156;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::load - actor list count mismatch #4!");
  }
  this_ptr->actor_lookup_count = 0;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x15f);
  if (this_ptr->skip_gore_load_flag == 0) {
    if (this_ptr->mission_version_num < 4) {
      do {
        iVar3 = _fgetc(file_handle);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
      do {
        iVar3 = _fgetc(file_handle);
        if (iVar3 < 0) break;
      } while (iVar3 != 10);
    }
    this_ptr_00 = g_CGorePtr;
    this_ptr->current_set_index = -1;
    core_gore_cpp_CGore_reset_FUN_004ed760(this_ptr_00);
    if (6 < this_ptr->mission_version_num) {
      core_gore_cpp_CGore_load_FUN_004ee1e0(g_CGorePtr,file_handle);
      return;
    }
  }
  return;
}
