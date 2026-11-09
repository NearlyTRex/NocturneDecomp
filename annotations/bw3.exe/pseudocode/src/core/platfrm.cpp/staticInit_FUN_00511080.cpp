// Name: core_platfrm.cpp_staticInit_FUN_00511080
// Address: 00511080
// Address Range: [[00511080, 005110a3]]
// Convention: unknown
// Signature: void core_platfrm_cpp_staticInit_FUN_00511080(void)

#include "nocturne.h"

void core_platfrm_cpp_staticInit_FUN_00511080(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CPlatformClassInfo,"CPlatform",
             core_platfrm_cpp_factoryFuncPlatform_FUN_005110b0,&g_CPlatformClassVersion,0xb,
             &g_CDemonActorClassInfo);
  return;
}
