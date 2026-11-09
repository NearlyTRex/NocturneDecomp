// Name: core_vehicle.cpp_staticInit_FUN_005a75c0
// Address: 005a75c0
// Address Range: [[005a75c0, 005a75e3]]
// Convention: unknown
// Signature: void core_vehicle_cpp_staticInit_FUN_005a75c0(void)

#include "nocturne.h"

void core_vehicle_cpp_staticInit_FUN_005a75c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CVehicleClassInfo,"CVehicle",
             core_vehicle_cpp_factoryFuncVehicle_FUN_005a75f0,&g_CVehicleClassVersion,3,
             &g_CDemonActorClassInfo);
  return;
}
