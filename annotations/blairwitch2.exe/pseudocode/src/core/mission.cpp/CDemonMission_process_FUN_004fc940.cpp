// Name: core_mission.cpp_CDemonMission_process_FUN_004fc940
// Address: 004fc940
// Address Range: [[004fc940, 004fca82]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_004fc940(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_004fc940(CDemonMission *this_ptr)

{
  CHero *pCVar1;
  CDemonMission *pCVar2;
  int iVar3;
  CAlphaBitmap local_24;
  
  if (this_ptr->delete_queue_count != 0) {
    iVar3 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->delete_queue_count) {
      do {
        iVar3 = iVar3 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_004fc570
                  (this_ptr,pCVar2->delete_queue_actors[0],pCVar2->delete_queue_flags[0]);
        pCVar2 = (CDemonMission *)&pCVar2->num_sets;
      } while (iVar3 < this_ptr->delete_queue_count);
    }
    this_ptr->delete_queue_count = 0;
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_004fc820(this_ptr);
  if (-1 < (this_ptr->pending_teleport).area_id) {
    pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4];
    (pCVar1->base).base.location.position.x = (this_ptr->pending_teleport).position.x;
    (pCVar1->base).base.location.position.y = (this_ptr->pending_teleport).position.y;
    (pCVar1->base).base.location.position.z = (this_ptr->pending_teleport).position.z;
    (pCVar1->base).base.location.area_id = (this_ptr->pending_teleport).area_id;
    if ((this_ptr->pending_teleport).area_id != this_ptr->current_set_index) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&local_24);
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&local_24);
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0
                (this_ptr,(this_ptr->pending_teleport).area_id);
      core_set_cpp_CDemonSet_clearLights_FUN_005308e0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_initScene_FUN_0052d980(g_CDemonSetPtr);
      g_CScriptPtr->focus_actor_changed = 2;
      engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&local_24,0);
    }
    (this_ptr->pending_teleport).area_id = -1;
    (this_ptr->pending_teleport).position.z = 0.0;
    (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
    (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
  }
  return;
}
