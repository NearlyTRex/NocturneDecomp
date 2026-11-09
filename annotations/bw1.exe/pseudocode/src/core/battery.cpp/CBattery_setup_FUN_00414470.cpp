// Name: core_battery.cpp_CBattery_setup_FUN_00414470
// Address: 00414470
// Address Range: [[00414470, 00414498]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_setup_FUN_00414470(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_setup_FUN_00414470(CBattery *this_ptr)

{
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x2d4 = 0;
  return;
}
