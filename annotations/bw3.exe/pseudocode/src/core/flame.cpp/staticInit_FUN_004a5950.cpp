// Name: core_flame.cpp_staticInit_FUN_004a5950
// Address: 004a5950
// Address Range: [[004a5950, 004a5973]]
// Convention: unknown
// Signature: void core_flame_cpp_staticInit_FUN_004a5950(void)

#include "nocturne.h"

void core_flame_cpp_staticInit_FUN_004a5950(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CFlameClassInfo,"CFlame",core_flame_cpp_factoryFuncFlame_FUN_004a5980,
             &g_CFlameClassVersion,7,&g_CDemonActorClassInfo);
  return;
}
