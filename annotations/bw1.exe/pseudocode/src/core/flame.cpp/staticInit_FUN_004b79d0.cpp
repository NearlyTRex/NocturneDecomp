// Name: core_flame.cpp_staticInit_FUN_004b79d0
// Address: 004b79d0
// Address Range: [[004b79d0, 004b79f3]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_staticInit_FUN_004b79d0(void)

#include "nocturne.h"

void __cdecl core_flame_cpp_staticInit_FUN_004b79d0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CFlameClassInfo,"CFlame",core_flame_cpp_factoryFuncFlame_FUN_004b7a00,
             &g_CFlameClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
