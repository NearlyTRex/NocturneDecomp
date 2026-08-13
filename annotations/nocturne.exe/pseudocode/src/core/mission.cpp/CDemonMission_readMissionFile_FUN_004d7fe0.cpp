// Name: core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0
// Address: 004d7fe0
// Address Range: [[004d7fe0, 004d8630]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_readMissionFile_FUN_004d7fe0(CDemonMission *this_ptr,_FILE *file_handle,int load_flags)

{
  char cVar1;
  CGore *this_ptr_00;
  int iVar2;
  CDemonActorType *pCVar3;
  CDemonActor *pCVar4;
  int iVar5;
  char (*pacVar6) [256];
  CDemonActor *pCVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char acStack_154 [100];
  char acStack_f0 [100];
  char acStack_8c [100];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CDemonActor *local_14;
  
  bVar11 = 0;
  core_mission_cpp_CDemonMission_FUN_004d7ea0(this_ptr);
  if (load_flags == 0) {
    core_mission_cpp_CDemonMission_freeAllAssets_FUN_004d9900(this_ptr);
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf((_FILE *)load_flags,"%d,%d\n",&this_ptr->mission_version_num,&local_28);
  if (7 < this_ptr->mission_version_num) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 226;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid mission version number: %d, current version is %d.  (You probably have an old .exe)");
  }
  if (local_28 < 4) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 229;
    core_main_c_displayErrorAndQuit_FUN_004c8440("This mission uses actor format version %d, which we don't support anymore!");
  }
  if (this_ptr->mission_version_num < 2) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 234;
    core_main_c_displayErrorAndQuit_FUN_004c8440("No name in mission");
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf((_FILE *)load_flags,"%s\n",this_ptr->mission_name);
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  _fscanf((_FILE *)load_flags,"%d\n",&this_ptr->num_sets);
  if (0 < this_ptr->num_sets) {
    pacVar6 = this_ptr->set_names;
    do {
      iVar2 = iVar2 + 1;
      _fscanf((_FILE *)load_flags,"%s\n",pacVar6);
      pacVar6 = pacVar6 + 1;
    } while (iVar2 < this_ptr->num_sets);
  }
  core_actor_cpp_resetActorTypeInfo_FUN_0040d8f0();
  if (2 < this_ptr->mission_version_num) {
    do {
      iVar2 = _fgetc((_FILE *)load_flags);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf((_FILE *)load_flags,"%d\n",&local_1c);
    iVar2 = 0;
    if (0 < local_1c) {
      do {
        pcVar9 = "corrupt!";
        pcVar10 = acStack_154;
        for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(uint *)pcVar10 = *(uint *)pcVar9;
          pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
          pcVar10 = (char *)((int)pcVar10 + ((uint)bVar11 * -2 + 1) * 4);
        }
        _fscanf((_FILE *)load_flags,"%s %d\n",acStack_154,&local_18);
        pCVar3 = core_actor_cpp_getActorClassByName_FUN_0040d4d0(acStack_154);
        if (pCVar3 != (CDemonActorType *)0x0) {
          if (pCVar3->type_id < local_18) {
            g_CurrentFilename = "..\\core\\mission.cpp";
            g_CurrentLineNumber = 264;
            core_main_c_displayErrorAndQuit_FUN_004c8440("Actor type %s is saved in mission in format version %d, but the latest version this .EXE supports is %d!");
          }
          *(int *)pCVar3->type_info = local_18;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_1c);
    }
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  _fscanf((_FILE *)load_flags,"%d\n",&local_24);
  local_20 = 0;
  if (this_ptr->mission_version_num < 6) {
    this_ptr->has_inventory_actors = 0;
  }
  else {
    do {
      iVar2 = _fgetc((_FILE *)load_flags);
      if (iVar2 < 0) break;
    } while (iVar2 != 10);
    _fscanf((_FILE *)load_flags,"%d\n",&local_20);
    this_ptr->has_inventory_actors = 1;
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  this_ptr->actor_lookup_count = 0;
  this_ptr->next_inventory_actor = (CDemonActor *)0x0;
  for (iVar2 = 0; iVar2 < local_24 + local_20; iVar2 = iVar2 + 1) {
    puVar8 = &DAT_005bb000;
    pcVar9 = acStack_8c;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pcVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
    }
    puVar8 = &DAT_005bb068;
    pcVar9 = acStack_f0;
    for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pcVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
    }
    _fscanf((_FILE *)load_flags,"%s \"%[^\"]\"\n",acStack_8c,acStack_f0);
    pcVar9 = acStack_f0;
    pCVar4 = core_actor_cpp_createActorByName_FUN_0040d540(acStack_8c);
    local_14 = pCVar4;
    pCVar7 = pCVar4;
    do {
      cVar1 = *pcVar9;
      pCVar7->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pCVar7->actor_name[1] = cVar1;
      pCVar7 = (CDemonActor *)(pCVar7->actor_name + 2);
    } while (cVar1 != '\0');
    core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(this_ptr,pCVar4);
    if (iVar2 == local_24) {
      this_ptr->next_inventory_actor = pCVar4;
    }
    if (1999 < this_ptr->actor_lookup_count) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 309;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = local_14;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  do {
    iVar2 = _fgetc((_FILE *)load_flags);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  pCVar7 = this_ptr->first_actor;
  iVar2 = 0;
  if (0 < local_24) {
    do {
      if (pCVar7 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\mission.cpp";
        g_CurrentLineNumber = 322;
        core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::load - actor list count mismatch #1!");
      }
      core_actor_cpp_CDemonActor_load_FUN_0040c160(pCVar7,(_FILE *)load_flags);
      iVar2 = iVar2 + 1;
      pCVar7 = pCVar7->next_actor;
    } while (iVar2 < local_24);
  }
  if (this_ptr->has_inventory_actors != 0) {
    pCVar7 = this_ptr->first_actor;
    iVar2 = 0;
    if (0 < local_24) {
      do {
        if (pCVar7 == (CDemonActor *)0x0) {
          g_CurrentFilename = "..\\core\\mission.cpp";
          g_CurrentLineNumber = 334;
          core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::load - actor list count mismatch #2!");
        }
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                           (pCVar7,g_CHeroActorType_01cae0ec.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_loadItems_FUN_004c14d0
                    ((CInventory *)&pCVar4[0x17e].orient_matrix.m[0].y);
        }
        iVar2 = iVar2 + 1;
        pCVar7 = pCVar7->next_actor;
      } while (iVar2 < local_24);
    }
    this_ptr->has_inventory_actors = 0;
  }
  if (pCVar7 != (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 341;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::load - actor list count mismatch #3!");
  }
  if (this_ptr->next_inventory_actor != (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 342;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonMission::load - actor list count mismatch #4!");
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
  this_ptr_00 = g_CGore_PTR_005b96c4;
  this_ptr->current_set_index = -1;
  core_gore_cpp_CGore_reset_FUN_004afdb0(this_ptr_00);
  if (6 < this_ptr->mission_version_num) {
    core_gore_cpp_CGore_load_FUN_004b0820(g_CGore_PTR_005b96c4,(_FILE *)load_flags);
    return;
  }
  return;
}
