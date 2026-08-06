// Name: core_mission.cpp_CDemonMission_process_FUN_004d92a0
// Address: 004d92a0
// Address Range: [[004d92a0, 004d93cc]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(CDemonMission *this_ptr)

{
  CDemonMission *pCVar1;
  int iVar2;
  
  if (this_ptr->delete_queue_count != 0) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    if (0 < this_ptr->delete_queue_count) {
      do {
        iVar2 = iVar2 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90
                  (this_ptr,pCVar1->delete_queue_actors[0],pCVar1->delete_queue_flags[0]);
        pCVar1 = (CDemonMission *)&pCVar1->is_in_editor;
      } while (iVar2 < this_ptr->delete_queue_count);
    }
    this_ptr->delete_queue_count = 0;
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(this_ptr);
  if (-1 < (this_ptr->pending_teleport).area_id) {
    iVar2 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    *(float *)(iVar2 + 0x20) = (this_ptr->pending_teleport).position.x;
    *(float *)(iVar2 + 0x24) = (this_ptr->pending_teleport).position.y;
    *(float *)(iVar2 + 0x28) = (this_ptr->pending_teleport).position.z;
    *(int *)(iVar2 + 0x2c) = (this_ptr->pending_teleport).area_id;
    if ((this_ptr->pending_teleport).area_id != this_ptr->current_set_index) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      engine_2d_c_drawText_FUN_00402600("Changing sets...",0,0);
      engine_2d_c_drawText_FUN_00402600("Insert wipe here...",0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
                (this_ptr,(this_ptr->pending_teleport).area_id);
      core_set_cpp_CDemonSet_FUN_0050ad20(g_CDemonSet_PTR_005be368);
      core_set_cpp_CDemonSet_initScene_FUN_005084c0(g_CDemonSet_PTR_005be368);
      *(uint *)(0x01E56DA0 + 0x10) = 2;
    }
    (this_ptr->pending_teleport).area_id = -1;
    (this_ptr->pending_teleport).position.z = 0.0;
    (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
    (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
  }
  return;
}
