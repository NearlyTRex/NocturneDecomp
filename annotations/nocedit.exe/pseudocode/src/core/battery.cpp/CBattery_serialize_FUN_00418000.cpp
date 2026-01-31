// Name: core_battery.cpp_CBattery_serialize_FUN_00418000
// Address: 00418000
// Address Range: [[00418000, 0041804b]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_serialize_FUN_00418000(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_serialize_FUN_00418000(CBattery *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->recharge_time,"rechargeTime");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->discharge_time,"dischargeTime");
  return;
}
