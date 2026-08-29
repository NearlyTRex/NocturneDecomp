// Name: core_mission.cpp_CDemonMission_process_FUN_00524250
// Address: 00524250
// MANUAL RECONSTRUCTION
// Address Range: [[00524250, 0052439c]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_00524250(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_process_FUN_00524250(CDemonMission *this_ptr)

{
  CHero *pCVar1;
  int iVar3;

  if (this_ptr->delete_queue_count != 0) {
    iVar3 = 0;
    if (0 < this_ptr->delete_queue_count) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (this_ptr->delete_queue_actors[iVar3],"..\\core\\mission.cpp",1131);
        core_mission_cpp_CDemonMission_removeActor_FUN_00523f20
                  (this_ptr,this_ptr->delete_queue_actors[iVar3],this_ptr->delete_queue_flags[iVar3]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < this_ptr->delete_queue_count);
    }
    this_ptr->delete_queue_count = 0;
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(this_ptr);
  if (-1 < (this_ptr->pending_teleport).area_id) {
#if NOCTURNE_AUTHENTIC_NETPLAY
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    (pCVar1->base).base.location.position = (this_ptr->pending_teleport).position;
    (pCVar1->base).base.location.area_id = (this_ptr->pending_teleport).area_id;
#else
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      pCVar1 = g_HeroActors[iVar3];
      if ((pCVar1 != (CHero *)0x0) && (-1 < (pCVar1->base).base.location.area_id)) {
        (pCVar1->base).base.location.position = (this_ptr->pending_teleport).position;
        (pCVar1->base).base.location.area_id = (this_ptr->pending_teleport).area_id;
      }
    }
#endif
    if ((this_ptr->pending_teleport).area_id != this_ptr->current_set_index) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Changing sets...",0,0);
      engine_2d_c_drawText_FUN_00401fd0("Insert wipe here...",0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_mission_cpp_CDemonMission_loadSet_FUN_00523fb0
                (this_ptr,(this_ptr->pending_teleport).area_id);
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
      g_CScriptPtr->focus_actor_changed = 2;
    }
    (this_ptr->pending_teleport).area_id = -1;
    (this_ptr->pending_teleport).position.x = 0.0;
    (this_ptr->pending_teleport).position.y = 0.0;
    (this_ptr->pending_teleport).position.z = 0.0;
  }
  return;
}
