// Name: core_battery.cpp_CBattery_load_FUN_00418000
// Address: 00418000
// Address Range: [[00418000, 0041804b]]
// Convention: unknown
// Signature: void core_battery_cpp_CBattery_load_FUN_00418000(void)

#include "nocturne.h"

/* Signature: void actors_other_battery.cpp_CBattery_load(CBattery* param_1, uint param_2,
   char* param_3, char* param_4) */

void core_battery_cpp_CBattery_load_FUN_00418000(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            (&in_stack_00000004[2].location.position.z,"rechargeTime");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].location.area_id,"dischargeTime");
  return;
}
