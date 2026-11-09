// Name: core_battery.cpp_CBattery_setup_FUN_0040f500
// Address: 0040f500
// Address Range: [[0040f500, 0040f528]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_setup_FUN_0040f500(CBattery *this_ptr)

#include "nocturne.h"

void __cdecl core_battery_cpp_CBattery_setup_FUN_0040f500(CBattery *this_ptr)

{
  core_actor_cpp_FUN_00408890((CDemonActor *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  *(uint *)&this_ptr->field_0x2d4 = 0;
  return;
}
