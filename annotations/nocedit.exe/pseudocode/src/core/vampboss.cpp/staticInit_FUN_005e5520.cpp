// Name: core_vampboss.cpp_staticInit_FUN_005e5520
// Address: 005e5520
// Address Range: [[005e5520, 005e5543]]
// Convention: __cdecl
// Signature: CDemonActorType * core_vampboss.cpp_staticInit_FUN_005e5520(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_vampboss_cpp_staticInit_FUN_005e5520(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CVampireBossClassInfo,"CVampireBoss",
                      core_vampboss_cpp_FUN_005e5550,&g_CVampireBossVersion,4,&g_CEnemyClassInfo);
  return pCVar1;
}
