// Name: core_flamecan.cpp_FUN_004a0920
// Address: 004a0920
// Address Range: [[004a0920, 004a09e3]]
// Convention: unknown
// Signature: void core_flamecan_cpp_FUN_004a0920(CFlameCan *param_1,float param_2)

#include "nocturne.h"

void core_flamecan_cpp_FUN_004a0920(CFlameCan *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,&param_1->field_0x438);
  if (iVar1 == 0) {
    if (*(int *)&param_1->field_0x430 == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(param_1);
    if (*(int *)&param_1->field_0x430 == 0) {
      return;
    }
  }
  core_flame_cpp_CFlame_process_FUN_0049f2e0((CFlame *)&param_1->field_0x49c,param_2);
  param_2 = *(float *)&param_1->field_0x434 - param_2;
  *(float *)&param_1->field_0x434 = param_2;
  if (0.0 < param_2) {
    return;
  }
  core_mission_cpp_FUN_004fc7b0(0x01D182F0,param_1,1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
  core_fire_cpp_CFireEffect_createExplosion_FUN_0049e360
            (0x01C3DEB4,(CVector3f *)&param_1->field_0x4bc,16.0,1500.0,4.0);
  return;
}
