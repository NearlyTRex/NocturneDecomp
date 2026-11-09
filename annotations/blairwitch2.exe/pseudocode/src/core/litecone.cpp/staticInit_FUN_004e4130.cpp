// Name: core_litecone.cpp_staticInit_FUN_004e4130
// Address: 004e4130
// Address Range: [[004e4130, 004e4153]]
// Convention: unknown
// Signature: void core_litecone_cpp_staticInit_FUN_004e4130(void)

#include "nocturne.h"

void core_litecone_cpp_staticInit_FUN_004e4130(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CLightConeClassInfo,"?CLightCone" + 1,
             core_litecone_cpp_factoryFuncLightCone_FUN_004e4160,&g_CLightConeClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}
