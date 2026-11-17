// Name: core_mission.cpp_CDemonMission_process_FUN_0051b8d0
// Address: 0051b8d0
// Address Range: [[0051b8d0, 0051ba55]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_0051b8d0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_0051b8d0(CDemonMission *this_ptr)

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
        core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0
                  (this_ptr,pCVar2->delete_queue_actors[0],pCVar2->delete_queue_flags[0]);
        pCVar2 = (CDemonMission *)&pCVar2->num_sets;
      } while (iVar3 < this_ptr->delete_queue_count);
    }
    this_ptr->delete_queue_count = 0;
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_0051b7b0(this_ptr);
  if (-1 < (this_ptr->pending_teleport).area_id) {
    pCVar1 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
    (pCVar1->base).base.location.position.x = (this_ptr->pending_teleport).position.x;
    (pCVar1->base).base.location.position.y = (this_ptr->pending_teleport).position.y;
    (pCVar1->base).base.location.position.z = (this_ptr->pending_teleport).position.z;
    (pCVar1->base).base.location.area_id = (this_ptr->pending_teleport).area_id;
    if ((this_ptr->pending_teleport).area_id != this_ptr->current_set_index) {
      engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_24);
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&local_24);
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_24,&g_CHAR_01d33b88,0x280,0x1e0);
      iVar3 = 0;
      do {
        engine_special_cpp_lockFrame_FUN_00581f50();
        engine_alphabit_cpp_CAlphaBitmap_displayFullScreen_FUN_0040d9a0(&local_24);
        engine_special_cpp_unlockFrame_FUN_00581fa0(0);
        iVar3 = iVar3 + 1;
        wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      } while (iVar3 < 3);
      core_mission_cpp_CDemonMission_loadSet_FUN_0051b610
                (this_ptr,(this_ptr->pending_teleport).area_id);
      core_set_cpp_CDemonSet_clearLights_FUN_00551b90(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_initScene_FUN_0054ec60(g_CDemonSetPtr);
      g_CScriptPtr->focus_actor_changed = 2;
      engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_24,0);
    }
    this_ptr->teleport_requested = 0;
    (this_ptr->pending_teleport).area_id = -1;
    (this_ptr->pending_teleport).position.z = 0.0;
    (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
    (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
  }
  return;
}
