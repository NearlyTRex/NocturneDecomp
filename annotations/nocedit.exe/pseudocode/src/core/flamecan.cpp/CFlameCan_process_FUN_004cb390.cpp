// Name: core_flamecan.cpp_CFlameCan_process_FUN_004cb390
// Address: 004cb390
// Address Range: [[004cb390, 004cb4bd]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004cb390(CFlameCan *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_flamecan_cpp_CFlameCan_process_FUN_004cb390(CFlameCan *this_ptr,float delta_time)

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
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->on_fire_condition);
  if (iVar2 == 0) {
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_FUN_004cb340(this_ptr);
    if (this_ptr->on_fire == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_004c9c00((CFlame *)this_ptr->unk,delta_time);
  fVar1 = this_ptr->time_to_explode - delta_time;
  this_ptr->time_to_explode = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
            (g_CDemonMissionPtr,&this_ptr->base,1);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_40);
  fStack_8 = local_40.max.z - local_40.min.z;
  fStack_14 = fStack_8 * 0.5f;
  fStack_10 = (fStack_28 - local_40.max.x) * 0.5f;
  fStack_c = (fStack_24 - local_40.max.y) * 0.5f;
  fStack_20 = (this_ptr->base).location.position.x + fStack_14;
  fStack_1c = (this_ptr->base).location.position.y + fStack_10;
  fStack_18 = (this_ptr->base).location.position.z + fStack_c;
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  return;
}
