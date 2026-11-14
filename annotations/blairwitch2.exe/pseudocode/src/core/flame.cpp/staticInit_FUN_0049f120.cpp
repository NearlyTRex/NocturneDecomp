// Name: core_flame.cpp_staticInit_FUN_0049f120
// Address: 0049f120
// Address Range: [[0049f120, 0049f143]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_staticInit_FUN_0049f120(void)

#include "nocturne.h"

void __cdecl core_flame_cpp_staticInit_FUN_0049f120(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CFlameClassInfo,"CFlame",core_flame_cpp_factoryFuncFlame_FUN_0049f150,
             &g_CFlameClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
