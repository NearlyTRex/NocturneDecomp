// Name: core_mission.cpp_CDemonMission_process_FUN_004d92a0
// Address: 004d92a0
// Address Range: [[004d92a0, 004d93cc]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(CDemonMission *this_ptr)

{
  int iVar1;
  char (*pacVar2) [256];
  CDemonMission *pCVar3;
  int iVar4;
  
  iVar1 = *(int *)(this_ptr->set_names[3] + 0xe4);
  if (iVar1 != 0) {
    iVar4 = 0;
    pCVar3 = this_ptr;
    if (0 < iVar1) {
      do {
        iVar4 = iVar4 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90
                  (this_ptr,*(CDemonActor **)(pCVar3->set_names[3] + 0xe8),
                   (int)pCVar3->delete_queue_actors[0x57]);
        pCVar3 = (CDemonMission *)&pCVar3->is_in_editor;
      } while (iVar4 < *(int *)(this_ptr->set_names[3] + 0xe4));
    }
    pacVar2 = this_ptr->set_names;
    *(char *)((int)(pacVar2 + 3) + 0xe4) = '\0';
    *(char *)((int)(pacVar2 + 3) + 0xe5) = '\0';
    *(char *)((int)(pacVar2 + 3) + 0xe6) = '\0';
    *(char *)((int)(pacVar2 + 3) + 0xe7) = '\0';
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(this_ptr);
  if (-1 < *(int *)(this_ptr->set_names[3] + 0xe0)) {
    iVar1 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    *(uint *)(iVar1 + 0x20) = *(uint *)(this_ptr->set_names[3] + 0xd4);
    *(uint *)(iVar1 + 0x24) = *(uint *)(this_ptr->set_names[3] + 0xd8);
    *(uint *)(iVar1 + 0x28) = *(uint *)(this_ptr->set_names[3] + 0xdc);
    *(uint *)(iVar1 + 0x2c) = *(uint *)(this_ptr->set_names[3] + 0xe0);
    if (*(int *)(this_ptr->set_names[3] + 0xe0) != this_ptr->current_set_index) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      engine_2d_c_drawText_FUN_00402600("Changing sets...",0,0);
      engine_2d_c_drawText_FUN_00402600("Insert wipe here...",0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
                (this_ptr,*(int *)(this_ptr->set_names[3] + 0xe0));
      core_set_cpp_FUN_0050ad20(0x01E57284);
      core_set_cpp_CDemonSet_initScene_FUN_005084c0(0x01E57284);
      *(uint *)(0x01E56DA0 + 0x10) = 2;
    }
    pacVar2 = this_ptr->set_names;
    *(char *)((int)(pacVar2 + 3) + 0xe0) = -1;
    *(char *)((int)(pacVar2 + 3) + 0xe1) = -1;
    *(char *)((int)(pacVar2 + 3) + 0xe2) = -1;
    *(char *)((int)(pacVar2 + 3) + 0xe3) = -1;
    pacVar2 = this_ptr->set_names;
    *(char *)((int)(pacVar2 + 3) + 0xdc) = '\0';
    *(char *)((int)(pacVar2 + 3) + 0xdd) = '\0';
    *(char *)((int)(pacVar2 + 3) + 0xde) = '\0';
    *(char *)((int)(pacVar2 + 3) + 0xdf) = '\0';
    *(uint *)(this_ptr->set_names[3] + 0xd8) = *(uint *)(this_ptr->set_names[3] + 0xdc);
    *(uint *)(this_ptr->set_names[3] + 0xd4) = *(uint *)(this_ptr->set_names[3] + 0xd8);
  }
  return;
}
