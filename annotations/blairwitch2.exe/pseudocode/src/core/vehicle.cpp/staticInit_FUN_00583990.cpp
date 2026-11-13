// Name: core_vehicle.cpp_staticInit_FUN_00583990
// Address: 00583990
// Address Range: [[00583990, 005839b3]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_staticInit_FUN_00583990(void)

#include "nocturne.h"

void __cdecl core_vehicle_cpp_staticInit_FUN_00583990(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CVehicleClassInfo,"CVehicle",
             core_vehicle_cpp_factoryFuncVehicle_FUN_005839c0,&g_CVehicleClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
