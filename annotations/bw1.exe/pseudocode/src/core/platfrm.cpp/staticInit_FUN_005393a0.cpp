// Name: core_platfrm.cpp_staticInit_FUN_005393a0
// Address: 005393a0
// Address Range: [[005393a0, 005393c3]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_staticInit_FUN_005393a0(void)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_staticInit_FUN_005393a0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CPlatformClassInfo,"CPlatform",
             core_platfrm_cpp_factoryFuncPlatform_FUN_005393d0,&g_CPlatformClassVersion,0xb,
             &g_CDemonActorClassInfo);
  return;
}
