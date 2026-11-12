// Name: core_mission.cpp_CDemonMission_process_FUN_0051b8d0
// Address: 0051b8d0
// Address Range: [[0051b8d0, 0051ba55]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_0051b8d0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_0051b8d0(CDemonMission *this_ptr)

{
  CDemonMission *pCVar1;
  int iVar2;
  CAlphaBitmap local_24;
  
  if (this_ptr->delete_queue_count != 0) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    if (0 < this_ptr->delete_queue_count) {
      do {
        iVar2 = iVar2 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0
                  (this_ptr,pCVar1->delete_queue_actors[0],pCVar1->delete_queue_flags[0]);
        pCVar1 = (CDemonMission *)&pCVar1->num_sets;
      } while (iVar2 < this_ptr->delete_queue_count);
    }
    this_ptr->delete_queue_count = 0;
  }
  core_mission_cpp_FUN_0051b7b0(this_ptr);
  if (-1 < (this_ptr->pending_teleport).area_id) {
    iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    *(float *)(iVar2 + 0x20) = (this_ptr->pending_teleport).position.x;
    *(float *)(iVar2 + 0x24) = (this_ptr->pending_teleport).position.y;
    *(float *)(iVar2 + 0x28) = (this_ptr->pending_teleport).position.z;
    *(int *)(iVar2 + 0x2c) = (this_ptr->pending_teleport).area_id;
    if ((this_ptr->pending_teleport).area_id != this_ptr->current_set_index) {
      engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_24);
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&local_24);
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_24,&DAT_01d33b88,0x280,0x1e0);
      iVar2 = 0;
      do {
        engine_special_cpp_FUN_00581f50();
        engine_alphabit_cpp_FUN_0040d9a0(&local_24);
        engine_special_cpp_unlockFrame_FUN_00581fa0(0);
        iVar2 = iVar2 + 1;
        wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      } while (iVar2 < 3);
      core_mission_cpp_FUN_0051b610(this_ptr,(this_ptr->pending_teleport).area_id);
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
