// Name: core_mission.cpp_FUN_004d8720
// Address: 004d8720
// Address Range: [[004d8720, 004d8a9f]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004d8720(CDemonMission *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_004d8720(CDemonMission *this_ptr,_FILE *file_handle)

{
  int *piVar1;
  float *this_ptr_00;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  
  if (this_ptr->delete_queue_flags[0x57] == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
              (0x01BCD074,"Preparing actors...");
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(this_ptr);
  }
  this_ptr->mission_version_num = 7;
  _fprintf(file_handle,"// mission version, actor version\n");
  _fprintf(file_handle,"%d,%d\n",this_ptr->mission_version_num,4);
  _fprintf(file_handle,"// Root name of mission\n");
  _fprintf(file_handle,"%s\n",&this_ptr->current_camera_index);
  _fprintf(file_handle,"// setList\n");
  iVar5 = 0;
  _fprintf(file_handle,"%d\n",*(uint *)(this_ptr->mission_name + 0xcc));
  if (0 < *(int *)(this_ptr->mission_name + 0xcc)) {
    pcVar4 = this_ptr->mission_name + 0xd0;
    do {
      iVar5 = iVar5 + 1;
      _fprintf(file_handle,"%s\n",pcVar4);
      pcVar4 = pcVar4 + 0x100;
    } while (iVar5 < *(int *)(this_ptr->mission_name + 0xcc));
  }
  _fprintf(file_handle,"// actorTypeList\n");
  _fprintf(file_handle,"%d\n",DAT_00763e94);
  core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0();
  iVar5 = 0;
  if (0 < DAT_00763e94) {
    iVar7 = 0;
    do {
      piVar1 = (int *)((int)&DAT_00763e98 + iVar7);
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 1;
      _fprintf(file_handle,"%s %d\n",*piVar1,*(uint *)(*piVar1 + 0x34));
    } while (iVar5 < DAT_00763e94);
  }
  _fprintf(file_handle,"// actor count\n");
  iVar5 = core_mission_cpp_CDemonMission_countActors_FUN_004d8d80(this_ptr);
  _fprintf(file_handle,"%d\n",iVar5);
  iVar5 = 0;
  _fprintf(file_handle,"// inventory actor count\n");
  for (pCVar2 = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc); pCVar2 != (CDemonActor *)0x0;
      pCVar2 = pCVar2->next_actor) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar2,g_CHeroActorType_01cae0ec.name_hash)
    ;
    if (pCVar3 != (CDemonActor *)0x0) {
      iVar5 = iVar5 + (int)pCVar3[0x17e].orient_matrix.m[1].x;
    }
  }
  _fprintf(file_handle,"%d\n",iVar5);
  _fprintf(file_handle,"// actor name list\n");
  pCVar2 = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
  this_ptr->delete_queue_flags[0x59] = 0;
  for (; pCVar2 != (CDemonActor *)0x0; pCVar2 = pCVar2->next_actor) {
    pCVar3 = pCVar2;
    pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(pCVar2);
    _fprintf(file_handle,"%s \"%s\"\n",pcVar4,pCVar3);
    if (1999 < (int)this_ptr->delete_queue_flags[0x59]) {
      PTR_01cc4800 = "..\\core\\mission.cpp";
      INT_01cc4804 = 0x1e9;
      core_main_c_FUN_004c8440("Too many actors");
    }
    this_ptr->delete_queue_flags[this_ptr->delete_queue_flags[0x59] + 0x5a] = (uint)pCVar2;
    this_ptr->delete_queue_flags[0x59] = this_ptr->delete_queue_flags[0x59] + 1;
  }
  for (pCVar2 = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc); pCVar2 != (CDemonActor *)0x0;
      pCVar2 = pCVar2->next_actor) {
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar2,g_CHeroActorType_01cae0ec.name_hash)
    ;
    if (pCVar3 != (CDemonActor *)0x0) {
      this_ptr_00 = &pCVar3[0x17e].orient_matrix.m[0].y;
      pfVar6 = this_ptr_00;
      for (iVar5 = 0; iVar5 < (int)pCVar3[0x17e].orient_matrix.m[1].x; iVar5 = iVar5 + 1) {
        if (1999 < (int)this_ptr->delete_queue_flags[0x59]) {
          PTR_01cc4800 = "..\\core\\mission.cpp";
          INT_01cc4804 = 500;
          core_main_c_FUN_004c8440("Too many actors");
        }
        this_ptr->delete_queue_flags[this_ptr->delete_queue_flags[0x59] + 0x5a] = (uint)pfVar6[3];
        pfVar6 = pfVar6 + 1;
        this_ptr->delete_queue_flags[0x59] = this_ptr->delete_queue_flags[0x59] + 1;
      }
      core_inv_cpp_CInventory_saveItems_FUN_004c1140((CInventory *)this_ptr_00,file_handle);
    }
  }
  _fprintf(file_handle,"// actor data list\n");
  for (pCVar2 = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc); pCVar2 != (CDemonActor *)0x0;
      pCVar2 = pCVar2->next_actor) {
    core_actor_cpp_CDemonActor_save_FUN_0040c040(pCVar2,file_handle);
  }
  core_gore_cpp_CGore_save_FUN_004b08d0((CGore *)INT_005b96c4,file_handle);
  this_ptr->delete_queue_flags[0x59] = 0;
  return;
}
