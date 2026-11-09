// Name: core_bindevil.cpp_staticInit_FUN_0040f720
// Address: 0040f720
// Address Range: [[0040f720, 0040f743]]
// Convention: unknown
// Signature: void core_bindevil_cpp_staticInit_FUN_0040f720(void)

#include "nocturne.h"

void core_bindevil_cpp_staticInit_FUN_0040f720(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBindEvilClassInfo,"CBindEvil",
             core_bindevil_cpp_factoryFuncBindEvil_FUN_0040f750,&g_CBindEvilClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
