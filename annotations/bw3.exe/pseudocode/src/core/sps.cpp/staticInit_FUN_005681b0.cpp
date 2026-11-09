// Name: core_sps.cpp_staticInit_FUN_005681b0
// Address: 005681b0
// Address Range: [[005681b0, 005681d3]]
// Convention: unknown
// Signature: void core_sps_cpp_staticInit_FUN_005681b0(void)

#include "nocturne.h"

void core_sps_cpp_staticInit_FUN_005681b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CSpsClassInfo,(char *)0x5d5c5e,core_sps_cpp_factoryFuncSps_FUN_005681e0,
             &g_CSpsClassVersion,1,&g_CWeaponClassInfo);
  return;
}
