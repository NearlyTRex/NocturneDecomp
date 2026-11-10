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
                    (0x01C6E360,this_ptr->on_fire_condition);
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
  core_mission_cpp_FUN_004f6f10(0x01D81080,this_ptr,1);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
  core_fire_cpp_FUN_004a36e0
            (0x01C73654,&(this_ptr->flame).base.location,0x41800000,0x44bb8000,0x40800000,0);
  return;
}
