// Name: core_elephant.cpp_staticInit_FUN_00486b40
// Address: 00486b40
// Address Range: [[00486b40, 00486b63]]
// Convention: unknown
// Signature: void core_elephant_cpp_staticInit_FUN_00486b40(void)

#include "nocturne.h"

void core_elephant_cpp_staticInit_FUN_00486b40(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CElephantGunClassInfo,"CElephantGun",
             core_elephant_cpp_factoryFuncElephantGun_FUN_00486b70,&g_CElephantGunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
