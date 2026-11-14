// Name: core_bird.cpp_staticInit_FUN_00415190
// Address: 00415190
// Address Range: [[00415190, 004151b3]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_staticInit_FUN_00415190(void)

#include "nocturne.h"

void __cdecl core_bird_cpp_staticInit_FUN_00415190(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBirdClassInfo,(char *)0x5d3c8d,core_bird_cpp_factoryFuncBird_FUN_004151c0,
             &g_CBirdClassVersion,1,&g_CCharacterClassInfo);
  return;
}
