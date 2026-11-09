// Name: core_litecone.cpp_staticInit_FUN_00502d10
// Address: 00502d10
// Address Range: [[00502d10, 00502d33]]
// Convention: unknown
// Signature: void core_litecone_cpp_staticInit_FUN_00502d10(void)

#include "nocturne.h"

void core_litecone_cpp_staticInit_FUN_00502d10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CLightConeClassInfo,"CLightCone",
             core_litecone_cpp_factoryFuncLightCone_FUN_00502d40,&g_CLightConeClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}
