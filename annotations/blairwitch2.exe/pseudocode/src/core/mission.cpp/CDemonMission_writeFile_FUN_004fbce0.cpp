// Name: core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0
// Address: 004fbce0
// Address Range: [[004fbce0, 004fc03f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004fbce0(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_004fbce0(CDemonMission *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  char (*pacVar5) [256];
  CVector3i *pCVar6;
  int iVar7;
  int iVar8;
  
  this_ptr->mission_version_num = 7;
  FUN_005b8010(file_handle,"// mission version, actor version\n");
  FUN_005b8010(file_handle,"%d,%d\n",this_ptr->mission_version_num,4);
  FUN_005b8010(file_handle,"// Root name of mission\n");
  FUN_005b8010(file_handle,&DAT_005de4b4,this_ptr->mission_name);
  FUN_005b8010(file_handle,"// setList\n");
  iVar7 = 0;
  FUN_005b8010(file_handle,&DAT_005de4c4,this_ptr->num_sets);
  if (0 < this_ptr->num_sets) {
    pacVar5 = this_ptr->set_names;
    do {
      iVar7 = iVar7 + 1;
      FUN_005b8010(file_handle,&DAT_005de4c8,pacVar5);
      pacVar5 = pacVar5 + 1;
    } while (iVar7 < this_ptr->num_sets);
  }
  FUN_005b8010(file_handle,"// actorTypeList\n");
  FUN_005b8010(file_handle,&DAT_005de4de,DAT_007bc044);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c920();
  iVar7 = 0;
  if (0 < DAT_007bc044) {
    iVar8 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007bc048 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      FUN_005b8010(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34))
      ;
    } while (iVar7 < DAT_007bc044);
  }
  FUN_005b8010(file_handle,"// actor count\n");
  iVar7 = core_mission_cpp_CDemonMission_countActors_FUN_004fc320(this_ptr);
  FUN_005b8010(file_handle,&DAT_005de4f9,iVar7);
  iVar7 = 0;
  FUN_005b8010(file_handle,"// inventory actor count\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      iVar7 = iVar7 + pCVar3[0xd6].blood_effect_timer;
    }
  }
  FUN_005b8010(file_handle,&DAT_005de517,iVar7);
  FUN_005b8010(file_handle,"// actor name list\n");
  pCVar2 = this_ptr->first_actor;
  this_ptr->actor_lookup_count = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    uVar4 = core_actor_cpp_FUN_00408a50(pCVar2,pCVar2);
    FUN_005b8010(file_handle,"%s \"%s\"\n",uVar4);
    if (2999 < this_ptr->actor_lookup_count) {
      _DAT_01d046a0 = "..\\core\\mission.cpp";
      _DAT_01d046a4 = 0x1ed;
      core_main_c_FUN_004e4500("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar2;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      pCVar6 = (CVector3i *)&pCVar3[0xd6].process_disabled;
      for (iVar7 = 0; iVar7 < pCVar3[0xd6].blood_effect_timer; iVar7 = iVar7 + 1) {
        if (2999 < this_ptr->actor_lookup_count) {
          _DAT_01d046a0 = "..\\core\\mission.cpp";
          _DAT_01d046a4 = 0x1f8;
          core_main_c_FUN_004e4500("Too many actors");
        }
        this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] =
             *(CDemonActor **)((int)(pCVar6 + 1) + 8);
        pCVar6 = (CVector3i *)&pCVar6->y;
        this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004dc460
                ((CInventory *)&pCVar3[0xd6].process_disabled,file_handle);
    }
  }
  FUN_005b8010(file_handle,"// actor data list\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040b0a0(pCVar2,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004c9f20(g_CGorePtr,file_handle);
  this_ptr->actor_lookup_count = 0;
  return;
}
