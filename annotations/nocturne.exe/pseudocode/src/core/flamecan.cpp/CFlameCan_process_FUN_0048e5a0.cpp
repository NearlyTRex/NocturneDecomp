// Name: core_flamecan.cpp_CFlameCan_process_FUN_0048e5a0
// Address: 0048e5a0
// Address Range: [[0048e5a0, 0048e6cd]]
// Convention: unknown
// Signature: void core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(CFlameCan *param_1,float param_2)

#include "nocturne.h"

void core_flamecan_cpp_CFlameCan_process_FUN_0048e5a0(CFlameCan *param_1,float param_2)

{
  int iVar1;
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
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,param_1->on_fire_condition);
  if (iVar1 == 0) {
    if (param_1->on_fire == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_0048e550(param_1);
    if (param_1->on_fire == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_0048d0c0(&param_1->flame,param_2);
  param_2 = param_1->time_to_explode - param_2;
  param_1->time_to_explode = param_2;
  if (0.0 < param_2) {
    return;
  }
  core_mission_cpp_FUN_004d9110(0x01CC9450,param_1,1);
  (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_40);
  fStack_10 = local_40.max.x - local_40.min.x;
  fStack_1c = fStack_10 * 0.5f;
  fStack_c = local_40.max.y - local_40.min.y;
  fStack_8 = local_40.max.z - local_40.min.z;
  fStack_18 = fStack_c * 0.5f;
  fStack_14 = fStack_8 * 0.5f;
  fStack_28 = (param_1->base).location.position.x + fStack_1c;
  fStack_24 = (param_1->base).location.position.y + fStack_18;
  fStack_20 = (param_1->base).location.position.z + fStack_14;
  core_fire_cpp_FUN_0048c0d0
            (0x01C08D04,&(param_1->flame).base.location,0x41800000,0x44bb8000,0x40800000);
  return;
}
