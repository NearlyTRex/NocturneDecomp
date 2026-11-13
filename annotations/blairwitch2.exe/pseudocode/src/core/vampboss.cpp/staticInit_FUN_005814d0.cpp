// Name: core_vampboss.cpp_staticInit_FUN_005814d0
// Address: 005814d0
// Address Range: [[005814d0, 005814f3]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_staticInit_FUN_005814d0(void)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_staticInit_FUN_005814d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CVampireBossClassInfo,"?CVampireBoss" + 1,
             core_vampboss_cpp_factoryFuncVampireBoss_FUN_00581500,&g_CVampireBossClassVersion,4,
             &g_CEnemyClassInfo);
  return;
}
