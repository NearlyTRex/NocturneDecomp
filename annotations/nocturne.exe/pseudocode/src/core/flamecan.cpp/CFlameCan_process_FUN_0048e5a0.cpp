// Name: core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0
// Address: 0048e5a0
// Address Range: [[0048e5a0, 0048e6cd]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(CFlameCan *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(CFlameCan *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D local_40;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,this_ptr->on_fire_condition);
  if (iVar2 == 0) {
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(this_ptr);
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_0048d0c0(&this_ptr->flame,delta_time);
  fVar1 = this_ptr->time_to_explode - delta_time;
  this_ptr->time_to_explode = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_004d9110
            (g_CDemonMission_PTR_005baf90,&this_ptr->base,1);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_40);
  fStack_10 = local_40.max.x - local_40.min.x;
  fStack_1c = fStack_10 * 0.5f;
  fStack_c = local_40.max.y - local_40.min.y;
  fStack_8 = local_40.max.z - local_40.min.z;
  fStack_18 = fStack_c * 0.5f;
  fStack_14 = fStack_8 * 0.5f;
  fStack_28 = (this_ptr->base).location.position.x + fStack_1c;
  fStack_24 = (this_ptr->base).location.position.y + fStack_18;
  fStack_20 = (this_ptr->base).location.position.z + fStack_14;
  core_fire_cpp_CFireEffect_createExplosion_FUN_0048c0d0
            (g_CFireEffect_PTR_005b80f0,&(this_ptr->flame).base.location.position,16.0,1500.0,4.0);
  return;
}
