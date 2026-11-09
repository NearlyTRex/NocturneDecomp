// Name: core_lightpis.cpp_staticInit_FUN_005015b0
// Address: 005015b0
// Address Range: [[005015b0, 005015d3]]
// Convention: unknown
// Signature: void core_lightpis_cpp_staticInit_FUN_005015b0(void)

#include "nocturne.h"

void core_lightpis_cpp_staticInit_FUN_005015b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CLightPisClassInfo,"CLightPis",
             core_lightpis_cpp_factoryFuncLightPis_FUN_005015e0,&g_CLightPisClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
