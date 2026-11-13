// Name: core_hellhag.cpp_staticInit_FUN_005aa5a0
// Address: 005aa5a0
// Address Range: [[005aa5a0, 005aa5c3]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_staticInit_FUN_005aa5a0(void)

#include "nocturne.h"

void __cdecl core_hellhag_cpp_staticInit_FUN_005aa5a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CHagClassInfo,(char *)0x5f0aee,core_hellhag_cpp_factoryFuncHag_FUN_005aa5d0,
             &g_CHagClassVersion,1,&g_CBasicEnemyClassInfo);
  return;
}
