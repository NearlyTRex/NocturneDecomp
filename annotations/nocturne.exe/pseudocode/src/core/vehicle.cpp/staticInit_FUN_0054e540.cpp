// Name: core_vehicle.cpp_staticInit_FUN_0054e540
// Address: 0054e540
// Address Range: [[0054e540, 0054e563]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_staticInit_FUN_0054e540(void)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_staticInit_FUN_0054e540(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CVehicleClassInfo,"CVehicle",
             core_vehicle_cpp_factoryFuncVehicle_FUN_0054e570,&g_CVehicleClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
