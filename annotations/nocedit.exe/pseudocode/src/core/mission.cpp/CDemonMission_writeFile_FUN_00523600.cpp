// Name: core_mission.cpp_CDemonMission_writeFile_FUN_00523600
// Address: 00523600
// Address Range: [[00523600, 0052398f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_00523600(CDemonMission *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  int iVar5;
  CInventory *pCVar6;
  char (*pacVar7) [256];
  int iVar8;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x1ae);
  if (this_ptr->actors_prepared == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Preparing actors...");
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
  }
  this_ptr->mission_version_num = 7;
  _fprintf(file_handle,"// mission version, actor version\n");
  _fprintf(file_handle,"%d,%d\n",this_ptr->mission_version_num,4);
  _fprintf(file_handle,"// Root name of mission\n");
  _fprintf(file_handle,"%s\n",this_ptr->mission_name);
  _fprintf(file_handle,"// setList\n");
  iVar5 = 0;
  _fprintf(file_handle,"%d\n",this_ptr->num_sets);
  if (0 < this_ptr->num_sets) {
    pacVar7 = this_ptr->set_names;
    do {
      iVar5 = iVar5 + 1;
      _fprintf(file_handle,"%s\n",pacVar7);
      pacVar7 = pacVar7 + 1;
    } while (iVar5 < this_ptr->num_sets);
  }
  _fprintf(file_handle,"// actorTypeList\n");
  _fprintf(file_handle,"%d\n",g_NumActorClassTypes);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  iVar5 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar8 = 0;
    do {
      piVar1 = (int *)((int)g_ActorClassRegistrations + iVar8);
      iVar8 = iVar8 + 4;
      iVar5 = iVar5 + 1;
      _fprintf(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34));
    } while (iVar5 < g_NumActorClassTypes);
  }
  _fprintf(file_handle,"// actor count\n");
  iVar5 = core_mission_cpp_CDemonMission_countActors_FUN_00523cc0(this_ptr);
  _fprintf(file_handle,"%d\n",iVar5);
  iVar5 = 0;
  _fprintf(file_handle,"// inventory actor count\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      iVar5 = iVar5 + *(int *)(pCVar3[0x176].create_event + 0x38);
    }
  }
  _fprintf(file_handle,"%d\n",iVar5);
  _fprintf(file_handle,"// actor name list\n");
  pCVar2 = this_ptr->first_actor;
  this_ptr->actor_lookup_count = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = pCVar2;
    pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(pCVar2);
    _fprintf(file_handle,"%s \"%s\"\n",pcVar4,pCVar3);
    if (1999 < this_ptr->actor_lookup_count) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x1e9;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar2;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      pCVar6 = (CInventory *)(pCVar3[0x176].create_event + 0x30);
      for (iVar5 = 0; iVar5 < *(int *)(pCVar3[0x176].create_event + 0x38); iVar5 = iVar5 + 1) {
        if (1999 < this_ptr->actor_lookup_count) {
          g_CurrentFilename = "..\\core\\mission.cpp";
          g_CurrentLineNumber = 500;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actors");
        }
        this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar6->items[0];
        pCVar6 = (CInventory *)&pCVar6->owner;
        this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004ff3b0
                ((CInventory *)(pCVar3[0x176].create_event + 0x30),file_handle);
    }
  }
  _fprintf(file_handle,"// actor data list\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040af30(pCVar2,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004ee290(g_CGorePtr,file_handle);
  this_ptr->actor_lookup_count = 0;
  return;
}
