// Name: core_burncrss.cpp_staticInit_FUN_004243d0
// Address: 004243d0
// Address Range: [[004243d0, 004243f3]]
// Convention: unknown
// Signature: void core_burncrss_cpp_staticInit_FUN_004243d0(void)

#include "nocturne.h"

void core_burncrss_cpp_staticInit_FUN_004243d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBurncrossClassInfo,"CBurncross",
             core_burncrss_cpp_factoryFuncBurncross_FUN_00424400,&g_CBurncrossClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
