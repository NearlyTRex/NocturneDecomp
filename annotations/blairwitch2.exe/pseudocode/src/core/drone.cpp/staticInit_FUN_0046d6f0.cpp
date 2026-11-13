// Name: core_drone.cpp_staticInit_FUN_0046d6f0
// Address: 0046d6f0
// Address Range: [[0046d6f0, 0046d713]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_staticInit_FUN_0046d6f0(void)

#include "nocturne.h"

void __cdecl core_drone_cpp_staticInit_FUN_0046d6f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDroneClassInfo,"ACDrone" + 1,core_drone_cpp_factoryFuncDrone_FUN_0046d720,
             &g_CDroneClassVersion,2,&g_CEnemyClassInfo);
  return;
}
