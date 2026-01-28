// Name: core_vehicle.cpp_staticInit_FUN_005e78d0
// Address: 005e78d0
// Address Range: [[005e78d0, 005e78f3]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_staticInit_FUN_005e78d0(void)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_staticInit_FUN_005e78d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CVehicleClassInfo,"CVehicle",core_vehicle_cpp_factoryFunc_FUN_005e7900,
             &g_CVehicleClassVersion,3,&g_CDemonActorClassInfo);
  return;
}
