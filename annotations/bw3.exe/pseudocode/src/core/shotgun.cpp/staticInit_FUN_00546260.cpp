// Name: core_shotgun.cpp_staticInit_FUN_00546260
// Address: 00546260
// Address Range: [[00546260, 00546283]]
// Convention: unknown
// Signature: void core_shotgun_cpp_staticInit_FUN_00546260(void)

#include "nocturne.h"

void core_shotgun_cpp_staticInit_FUN_00546260(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CShadowscClassInfo,"CShadowsc",
             core_shotgun_cpp_factoryFuncShadowsc_FUN_00546290,&g_CShadowscClassVersion,1,
             &g_CEnemyClassInfo);
  return;
}
