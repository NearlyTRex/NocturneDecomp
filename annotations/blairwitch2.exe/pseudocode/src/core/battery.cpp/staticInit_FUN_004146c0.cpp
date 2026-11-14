// Name: core_battery.cpp_staticInit_FUN_004146c0
// Address: 004146c0
// Address Range: [[004146c0, 004146e3]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_staticInit_FUN_004146c0(void)

#include "nocturne.h"

void __cdecl core_battery_cpp_staticInit_FUN_004146c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBatteryClassInfo,"@CBattery" + 1,
             core_battery_cpp_factoryFuncBattery_FUN_004146f0,&g_CBatteryClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
