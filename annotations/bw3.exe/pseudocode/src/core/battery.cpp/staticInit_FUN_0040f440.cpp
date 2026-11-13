// Name: core_battery.cpp_staticInit_FUN_0040f440
// Address: 0040f440
// Address Range: [[0040f440, 0040f463]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_staticInit_FUN_0040f440(void)

#include "nocturne.h"

void __cdecl core_battery_cpp_staticInit_FUN_0040f440(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBatteryClassInfo,"?CBattery" + 1,
             core_battery_cpp_factoryFuncBattery_FUN_0040f470,&g_CBatteryClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
