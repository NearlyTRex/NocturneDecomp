// Name: core_vampboss.cpp_staticInit_FUN_005e5520
// Address: 005e5520
// Address Range: [[005e5520, 005e5543]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_staticInit_FUN_005e5520(void)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_staticInit_FUN_005e5520(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CVampireBossClassInfo,"CVampireBoss",
             core_vampboss_cpp_factoryFuncVampireBoss_FUN_005e5550,&g_CVampireBossVersion,4,
             &g_CEnemyClassInfo);
  return;
}
