// Name: core_mission.cpp_CDemonMission_process_FUN_004d92a0
// Address: 004d92a0
// Address Range: [[004d92a0, 004d93cc]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_004d92a0(CDemonMission *this_ptr)

{
  CHero *pCVar1;
  CDemonMission *pCVar2;
  int iVar3;
  
  if (this_ptr->delete_queue_count != 0) {
    iVar3 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->delete_queue_count) {
      do {
        iVar3 = iVar3 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90
                  (this_ptr,pCVar2->delete_queue_actors[0],pCVar2->delete_queue_flags[0]);
        pCVar2 = (CDemonMission *)&pCVar2->is_in_editor;
      } while (iVar3 < this_ptr->delete_queue_count);
    }
    this_ptr->delete_queue_count = 0;
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004d9180(this_ptr);
  if (-1 < (this_ptr->pending_teleport).area_id) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    (pCVar1->base).base.location.position.x = (this_ptr->pending_teleport).position.x;
    (pCVar1->base).base.location.position.y = (this_ptr->pending_teleport).position.y;
    (pCVar1->base).base.location.position.z = (this_ptr->pending_teleport).position.z;
    (pCVar1->base).base.location.area_id = (this_ptr->pending_teleport).area_id;
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
