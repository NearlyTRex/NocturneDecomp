// Name: core_flamecan.cpp_CFlameCan_process_FUN_004a7160
// Address: 004a7160
// Address Range: [[004a7160, 004a7225]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004a7160(CFlameCan *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004a7160(CFlameCan *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (g_CEventListPtr,this_ptr->on_fire_condition);
  if (iVar2 == 0) {
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_004a7110(this_ptr);
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_004a5b10(&this_ptr->flame,delta_time);
  fVar1 = this_ptr->time_to_explode - delta_time;
  this_ptr->time_to_explode = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10
            (g_CDemonMission_PTR_00600530,&this_ptr->base,1);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
  core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
            (g_CFireEffect_PTR_005fc5a0,&(this_ptr->flame).base.location.position,16.0,1500.0,4.0,0)
  ;
  return;
}
