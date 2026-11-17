// Name: core_battery.cpp_staticInit_FUN_00414d20
// Address: 00414d20
// Address Range: [[00414d20, 00414d43]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_staticInit_FUN_00414d20(void)

#include "nocturne.h"

void __cdecl core_battery_cpp_staticInit_FUN_00414d20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBatteryClassInfo,"CBattery",
             core_battery_cpp_factoryFuncBattery_FUN_00414d50,&g_CBatteryClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
