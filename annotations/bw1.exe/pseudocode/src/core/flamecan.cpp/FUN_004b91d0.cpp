// Name: core_flamecan.cpp_FUN_004b91d0
// Address: 004b91d0
// Address Range: [[004b91d0, 004b9293]]
// Convention: unknown
// Signature: void core_flamecan_cpp_FUN_004b91d0(CFlameCan *param_1,float param_2)

#include "nocturne.h"

void core_flamecan_cpp_FUN_004b91d0(CFlameCan *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&param_1->field_0x2dc);
  if (iVar1 == 0) {
    if (*(int *)&param_1->field_0x2d4 == 0) {
      return;
    }
  }
  else {
    core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(param_1);
    if (*(int *)&param_1->field_0x2d4 == 0) {
      return;
    }
  }
  core_flame_cpp_FUN_004b7b90((CFlame *)&param_1->field_0x340,param_2);
  param_2 = *(float *)&param_1->field_0x2d8 - param_2;
  *(float *)&param_1->field_0x2d8 = param_2;
  if (0.0 < param_2) {
    return;
  }
  core_mission_cpp_FUN_0051b740(0x01D2C900,param_1,1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
            (0x01C57074,(CVector3f *)&param_1->field_0x360,16.0,1500.0,4.0);
  return;
}
