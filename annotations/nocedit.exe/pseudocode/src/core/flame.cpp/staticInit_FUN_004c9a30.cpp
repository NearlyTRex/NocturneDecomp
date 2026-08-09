// Name: core_flame.cpp_staticInit_FUN_004c9a30
// Address: 004c9a30
// Address Range: [[004c9a30, 004c9a53]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_staticInit_FUN_004c9a30(void)

#include "nocturne.h"

void __cdecl core_flame_cpp_staticInit_FUN_004c9a30(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CFlameClassInfo,"CFlame",core_flame_cpp_factoryFuncFlame_FUN_004c9a60,
             &g_CFlameClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
