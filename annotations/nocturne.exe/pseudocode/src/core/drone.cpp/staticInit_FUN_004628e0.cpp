// Name: core_drone.cpp_staticInit_FUN_004628e0
// Address: 004628e0
// Address Range: [[004628e0, 00462903]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_staticInit_FUN_004628e0(void)

#include "nocturne.h"

void __cdecl core_drone_cpp_staticInit_FUN_004628e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CDroneClassInfo,"CDrone",core_drone_cpp_factoryFuncDrone_FUN_00462910,
             &g_CDroneClassVersion,2,&g_CEnemyClassInfo);
  return;
}
