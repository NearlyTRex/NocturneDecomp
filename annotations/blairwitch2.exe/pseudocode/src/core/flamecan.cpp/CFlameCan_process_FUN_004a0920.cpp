// Name: core_flamecan.cpp_CFlameCan_process_FUN_004a0920
// Address: 004a0920
// Address Range: [[004a0920, 004a09e3]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004a0920(CFlameCan *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004a0920(CFlameCan *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->on_fire_condition);
  if (iVar2 == 0) {
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(this_ptr);
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_0049f2e0(&this_ptr->flame,delta_time);
  fVar1 = this_ptr->time_to_explode - delta_time;
  this_ptr->time_to_explode = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_004fc7b0(0x01D182F0,this_ptr,1);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
  core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360
            (0x01C3DEB4,&(this_ptr->flame).base.location.position,16.0,1500.0,4.0);
  return;
}
