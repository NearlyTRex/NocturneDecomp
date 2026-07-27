// Name: core_battery.cpp_staticInit_FUN_00414d20
// Address: 00414d20
// Address Range: [[00414d20, 00414d43]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_staticInit_FUN_00414d20(void)

#include "nocturne.h"

void __cdecl core_battery_cpp_staticInit_FUN_00414d20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBatteryActorType_00764674,"CBattery",core_battery_cpp_FUN_00414d50,
             &g_INT_005acfd0,1,&g_CDemonActorActorType_00763e48);
  return;
}
