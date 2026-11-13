// Name: core_helldog.cpp_staticInit_FUN_005ab9e0
// Address: 005ab9e0
// Address Range: [[005ab9e0, 005aba03]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_staticInit_FUN_005ab9e0(void)

#include "nocturne.h"

void __cdecl core_helldog_cpp_staticInit_FUN_005ab9e0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDogClassInfo,(char *)0x5f0cbe,core_helldog_cpp_factoryFuncDog_FUN_005aba10,
             &g_CDogClassVersion,2,&g_CBasicEnemyClassInfo);
  return;
}
