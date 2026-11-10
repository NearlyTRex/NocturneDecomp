// Name: core_flamecan.cpp_CFlameCan_process_FUN_004b91d0
// Address: 004b91d0
// Address Range: [[004b91d0, 004b9293]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004b91d0(CFlameCan *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004b91d0(CFlameCan *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->on_fire_condition);
  if (iVar2 == 0) {
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(this_ptr);
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_004b7b90(&this_ptr->flame,delta_time);
  fVar1 = this_ptr->time_to_explode - delta_time;
  this_ptr->time_to_explode = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  core_mission_cpp_FUN_0051b740(0x01D2C900,this_ptr,1);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
  core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
            (0x01C57074,&(this_ptr->flame).base.location.position,16.0,1500.0,4.0);
  return;
}
