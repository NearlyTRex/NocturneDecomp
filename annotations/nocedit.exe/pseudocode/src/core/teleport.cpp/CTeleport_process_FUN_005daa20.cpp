// Name: core_teleport.cpp_CTeleport_process_FUN_005daa20
// Address: 005daa20
// Address Range: [[005daa20, 005daac8]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_process_FUN_005daa20(CTeleport *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_process_FUN_005daa20(CTeleport *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_2c;
  CVector3f local_14;
  
  if (this_ptr->destination != (CDemonActor *)0x0) {
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&this_ptr->base,&local_14,
                        &(g_HeroActors[g_LocalHeroIndex]->base).base.location.position);
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_2c);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      core_mission_cpp_CDemonMission_setTeleportTarget_FUN_00524070
                (g_CDemonMissionPtr,&this_ptr->destination->location);
      return;
    }
  }
  return;
}
