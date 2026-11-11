// Name: core_mission.cpp_CDemonMission_writeFile_FUN_004f6410
// Address: 004f6410
// Address Range: [[004f6410, 004f676f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004f6410(CDemonMission *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  char (*pacVar4) [256];
  CInventory *pCVar5;
  int iVar6;
  int iVar7;
  CDemonActor *pCVar8;
  
  this_ptr->mission_version_num = 7;
  FUN_005a3140(file_handle,"// mission version, actor version\n");
  FUN_005a3140(file_handle,"%d,%d\n",this_ptr->mission_version_num,4);
  FUN_005a3140(file_handle,"// Root name of mission\n");
  FUN_005a3140(file_handle,&DAT_005c87f9,this_ptr->mission_name);
  FUN_005a3140(file_handle,"// setList\n");
  iVar6 = 0;
  FUN_005a3140(file_handle,&DAT_005c8809,this_ptr->num_sets);
  if (0 < this_ptr->num_sets) {
    pacVar4 = this_ptr->set_names;
    do {
      iVar6 = iVar6 + 1;
      FUN_005a3140(file_handle,&DAT_005c880d,pacVar4);
      pacVar4 = pacVar4 + 1;
    } while (iVar6 < this_ptr->num_sets);
  }
  FUN_005a3140(file_handle,"// actorTypeList\n");
  FUN_005a3140(file_handle,&DAT_005c8823,DAT_007df9c4);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c870();
  iVar6 = 0;
  if (0 < DAT_007df9c4) {
    iVar7 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007df9c8 + iVar7);
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 1;
      FUN_005a3140(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34))
      ;
    } while (iVar6 < DAT_007df9c4);
  }
  FUN_005a3140(file_handle,"// actor count\n");
  iVar6 = core_mission_cpp_CDemonMission_countActors_FUN_004f6a50(this_ptr);
  FUN_005a3140(file_handle,&DAT_005c883e,iVar6);
  iVar6 = 0;
  FUN_005a3140(file_handle,"// inventory actor count\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    iVar7 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CHeroClassInfo.name_hash);
    if (iVar7 != 0) {
      iVar6 = iVar6 + *(int *)(iVar7 + 0x206f8);
    }
  }
  FUN_005a3140(file_handle,&DAT_005c885c,iVar6);
  FUN_005a3140(file_handle,"// actor name list\n");
  pCVar2 = this_ptr->first_actor;
  this_ptr->actor_lookup_count = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar8 = pCVar2;
    pcVar3 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar2);
    FUN_005a3140(file_handle,"%s \"%s\"\n",pcVar3,pCVar8);
    if (5999 < this_ptr->actor_lookup_count) {
      _DAT_01d71de0 = "..\\core\\mission.cpp";
      _DAT_01d71de4 = 0x1f0;
      core_main_c_FUN_004e4330("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar2;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    iVar6 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar2,g_CHeroClassInfo.name_hash);
    if (iVar6 != 0) {
      pCVar5 = (CInventory *)(iVar6 + 0x206e8);
      for (iVar7 = 0; iVar7 < *(int *)(iVar6 + 0x206f8); iVar7 = iVar7 + 1) {
        if (5999 < this_ptr->actor_lookup_count) {
          _DAT_01d71de0 = "..\\core\\mission.cpp";
          _DAT_01d71de4 = 0x1fb;
          core_main_c_FUN_004e4330("Too many actors");
        }
        this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar5->items[0];
        pCVar5 = (CInventory *)&pCVar5->owner;
        this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004dc700((CInventory *)(iVar6 + 0x206e8),file_handle);
    }
  }
  FUN_005a3140(file_handle,"// actor data list\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040aff0(pCVar2,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004cf0c0(g_CGorePtr,file_handle);
  this_ptr->actor_lookup_count = 0;
  return;
}
