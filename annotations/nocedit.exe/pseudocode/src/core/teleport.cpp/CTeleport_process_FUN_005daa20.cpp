// Name: core_teleport.cpp_CTeleport_process_FUN_005daa20
// Address: 005daa20
// Address Range: [[005daa20, 005daac8]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_process_FUN_005daa20(CTeleport * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_process_FUN_005daa20(CTeleport *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  CVector3f local_14;
  
  if (*(int *)(this_ptr->field1_0x158 + 0xc) != 0) {
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&this_ptr->base_actor,&local_14,
                        &(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.location.
                         position);
    pCVar2 = (*((this_ptr->base_actor).vtable._ub)->getBoundingBox)
                       (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffd4);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      core_mission_cpp_CDemonMission_FUN_00524070(g_CDemonMissionPtr);
      return;
    }
  }
  return;
}
