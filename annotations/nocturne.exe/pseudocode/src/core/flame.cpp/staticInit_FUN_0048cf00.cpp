// Name: core_flame.cpp_staticInit_FUN_0048cf00
// Address: 0048cf00
// Address Range: [[0048cf00, 0048cf23]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_staticInit_FUN_0048cf00(void)

#include "nocturne.h"

void __cdecl core_flame_cpp_staticInit_FUN_0048cf00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFlameClassInfo,"CFlame",core_flame_cpp_factoryFuncFlame_FUN_0048cf30,
             &g_CFlameClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
