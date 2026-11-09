// Name: core_litecone.cpp_staticInit_FUN_004e3f60
// Address: 004e3f60
// Address Range: [[004e3f60, 004e3f83]]
// Convention: unknown
// Signature: void core_litecone_cpp_staticInit_FUN_004e3f60(void)

#include "nocturne.h"

void core_litecone_cpp_staticInit_FUN_004e3f60(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CLightConeClassInfo,"CLightCone",
             core_litecone_cpp_factoryFuncLightCone_FUN_004e3f90,&g_CLightConeClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}
