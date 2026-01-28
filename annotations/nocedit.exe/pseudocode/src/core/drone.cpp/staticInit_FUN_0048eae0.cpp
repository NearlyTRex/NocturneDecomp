// Name: core_drone.cpp_staticInit_FUN_0048eae0
// Address: 0048eae0
// Address Range: [[0048eae0, 0048eb03]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_staticInit_FUN_0048eae0(void)

#include "nocturne.h"

void __cdecl core_drone_cpp_staticInit_FUN_0048eae0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDroneClassInfo,"CDrone",core_drone_cpp_factoryFunc_FUN_0048eb10,
             &g_CDroneClassVersion,2,&g_CEnemyClassInfo);
  return;
}
