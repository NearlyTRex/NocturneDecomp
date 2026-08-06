// Name: core_flame.cpp_staticInit_FUN_0048cf00
// Address: 0048cf00
// Address Range: [[0048cf00, 0048cf23]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_staticInit_FUN_0048cf00(void)

#include "nocturne.h"

void __cdecl core_flame_cpp_staticInit_FUN_0048cf00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFlameActorType_01c70618,"CFlame",core_flame_cpp_factoryFunc_FUN_0048cf30,
             &g_INT_005b91c0,7,&g_CDemonActorActorType_00763e48);
  return;
}
