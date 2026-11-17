// Name: core_mission.cpp_CDemonMission_writeFile_FUN_004f6410
// Address: 004f6410
// Address Range: [[004f6410, 004f676f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(CDemonMission *this_ptr,_FILE *file_handle)

{
  CInventory *this_ptr_00;
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  CInventory *pCVar3;
  int iVar4;
  
  this_ptr->mission_version_num = 7;
  _fprintf(file_handle,"// mission version, actor version\n");
  _fprintf(file_handle,"%d,%d\n");
  _fprintf(file_handle,"// Root name of mission\n");
  _fprintf(file_handle,"%s\n");
  _fprintf(file_handle,"// setList\n");
  iVar4 = 0;
  _fprintf(file_handle,"%d\n");
  if (0 < this_ptr->num_sets) {
    do {
      iVar4 = iVar4 + 1;
      _fprintf(file_handle,"%s\n");
    } while (iVar4 < this_ptr->num_sets);
  }
  _fprintf(file_handle,"// actorTypeList\n");
  _fprintf(file_handle,"%d\n");
  core_actor_cpp_syncActorTypeIDs_FUN_0040c870();
  iVar4 = 0;
  if (0 < g_NumActorClassTypes) {
    do {
      iVar4 = iVar4 + 1;
      _fprintf(file_handle,"%s %d\n");
    } while (iVar4 < g_NumActorClassTypes);
  }
  _fprintf(file_handle,"// actor count\n");
  core_mission_cpp_CDemonMission_countActors_FUN_004f6a50(this_ptr);
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// inventory actor count\n");
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CHeroClassInfo.name_hash);
  }
  _fprintf(file_handle,"%d\n");
  _fprintf(file_handle,"// actor name list\n");
  pCVar1 = this_ptr->first_actor;
  this_ptr->actor_lookup_count = 0;
  for (; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar1);
    _fprintf(file_handle,"%s \"%s\"\n");
    if (5999 < this_ptr->actor_lookup_count) {
      g_CHAR_PTR_01d71de0 = "..\\core\\mission.cpp";
      g_INT_01d71de4 = 0x1f0;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar1;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    pCVar2 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CHeroClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      this_ptr_00 = (CInventory *)((int)&pCVar2[0x182].orient + 8);
      pCVar3 = this_ptr_00;
      for (iVar4 = 0; iVar4 < (int)pCVar2[0x182].orient_matrix.m[1].x; iVar4 = iVar4 + 1) {
        if (5999 < this_ptr->actor_lookup_count) {
          g_CHAR_PTR_01d71de0 = "..\\core\\mission.cpp";
          g_INT_01d71de4 = 0x1fb;
          core_main_c_displayErrorAndQuit_FUN_004e4330("Too many actors");
        }
        this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar3->items[0];
        pCVar3 = (CInventory *)&pCVar3->owner;
        this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004dc700(this_ptr_00,file_handle);
    }
  }
  _fprintf(file_handle,"// actor data list\n");
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040aff0(pCVar1,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004cf0c0(g_CGorePtr,file_handle);
  this_ptr->actor_lookup_count = 0;
  return;
}
