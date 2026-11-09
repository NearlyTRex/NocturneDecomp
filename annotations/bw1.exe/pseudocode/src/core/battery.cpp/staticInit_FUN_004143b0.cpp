// Name: core_battery.cpp_staticInit_FUN_004143b0
// Address: 004143b0
// Address Range: [[004143b0, 004143d3]]
// Convention: unknown
// Signature: void core_battery_cpp_staticInit_FUN_004143b0(void)

#include "nocturne.h"

void core_battery_cpp_staticInit_FUN_004143b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBatteryClassInfo,"@CBattery" + 1,
             core_battery_cpp_factoryFuncBattery_FUN_004143e0,&g_CBatteryClassVersion,1,
             &g_CDemonActorClassInfo);
  return;
}
