// Name: core_mission.cpp_CDemonMission_writeFile_FUN_0051ac40
// Address: 0051ac40
// Address Range: [[0051ac40, 0051af9f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_0051ac40(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_writeFile_FUN_0051ac40(CDemonMission *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  float *this_ptr_00;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  char (*pacVar5) [256];
  float *pfVar6;
  int iVar7;
  int iVar8;
  
  this_ptr->mission_version_num = 7;
  FUN_005c03c0(file_handle,"// mission version, actor version\n");
  FUN_005c03c0(file_handle,"%d,%d\n",this_ptr->mission_version_num,4);
  FUN_005c03c0(file_handle,"// Root name of mission\n");
  FUN_005c03c0(file_handle,&DAT_005e94f7,this_ptr->mission_name);
  FUN_005c03c0(file_handle,"// setList\n");
  iVar7 = 0;
  FUN_005c03c0(file_handle,&DAT_005e9507,this_ptr->num_sets);
  if (0 < this_ptr->num_sets) {
    pacVar5 = this_ptr->set_names;
    do {
      iVar7 = iVar7 + 1;
      FUN_005c03c0(file_handle,&DAT_005e950b,pacVar5);
      pacVar5 = pacVar5 + 1;
    } while (iVar7 < this_ptr->num_sets);
  }
  FUN_005c03c0(file_handle,"// actorTypeList\n");
  FUN_005c03c0(file_handle,&DAT_005e9521,DAT_007c3044);
  core_actor_cpp_syncActorTypeIDs_FUN_0040c630();
  iVar7 = 0;
  if (0 < DAT_007c3044) {
    iVar8 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007c3048 + iVar8);
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 1;
      FUN_005c03c0(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34))
      ;
    } while (iVar7 < DAT_007c3044);
  }
  FUN_005c03c0(file_handle,"// actor count\n");
  iVar7 = core_mission_cpp_CDemonMission_countActors_FUN_0051b280(this_ptr);
  FUN_005c03c0(file_handle,&DAT_005e953c,iVar7);
  iVar7 = 0;
  FUN_005c03c0(file_handle,"// inventory actor count\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      iVar7 = iVar7 + pCVar3[0x179].runtime_state;
    }
  }
  FUN_005c03c0(file_handle,&DAT_005e955a,iVar7);
  FUN_005c03c0(file_handle,"// actor name list\n");
  pCVar2 = this_ptr->first_actor;
  this_ptr->actor_lookup_count = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = pCVar2;
    pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(pCVar2);
    FUN_005c03c0(file_handle,"%s \"%s\"\n",pcVar4,pCVar3);
    if (5999 < this_ptr->actor_lookup_count) {
      _DAT_01d1d400 = "..\\core\\mission.cpp";
      _DAT_01d1d404 = 0x1f0;
      core_main_c_FUN_005030e0("Too many actors");
    }
    this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = pCVar2;
    this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
  }
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c600(pCVar2,g_CHeroClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      this_ptr_00 = &pCVar3[0x179].orient_matrix.m[1].z;
      pfVar6 = this_ptr_00;
      for (iVar7 = 0; iVar7 < pCVar3[0x179].runtime_state; iVar7 = iVar7 + 1) {
        if (5999 < this_ptr->actor_lookup_count) {
          _DAT_01d1d400 = "..\\core\\mission.cpp";
          _DAT_01d1d404 = 0x1fb;
          core_main_c_FUN_005030e0("Too many actors");
        }
        this_ptr->actor_lookup_table[this_ptr->actor_lookup_count] = (CDemonActor *)pfVar6[5];
        pfVar6 = pfVar6 + 1;
        this_ptr->actor_lookup_count = this_ptr->actor_lookup_count + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004f9750((CInventory *)this_ptr_00,file_handle);
    }
  }
  FUN_005c03c0(file_handle,"// actor data list\n");
  for (pCVar2 = this_ptr->first_actor; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040adb0(pCVar2,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004e6730(g_CGorePtr,file_handle);
  this_ptr->actor_lookup_count = 0;
  return;
}
