// Name: core_bird.cpp_staticInit_FUN_0040f990
// Address: 0040f990
// Address Range: [[0040f990, 0040f9b3]]
// Convention: unknown
// Signature: void core_bird_cpp_staticInit_FUN_0040f990(void)

#include "nocturne.h"

void core_bird_cpp_staticInit_FUN_0040f990(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBirdClassInfo,(char *)0x5b6375,core_bird_cpp_factoryFuncBird_FUN_0040f9c0,
             &g_CBirdClassVersion,1,&g_CCharacterClassInfo);
  return;
}
