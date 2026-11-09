// Name: core_lantern.cpp_staticInit_FUN_0059cb70
// Address: 0059cb70
// Address Range: [[0059cb70, 0059cb93]]
// Convention: unknown
// Signature: void core_lantern_cpp_staticInit_FUN_0059cb70(void)

#include "nocturne.h"

void core_lantern_cpp_staticInit_FUN_0059cb70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CLanternClassInfo,"CLantern",
             core_lantern_cpp_factoryFuncLantern_FUN_0059cba0,&g_CLanternClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
