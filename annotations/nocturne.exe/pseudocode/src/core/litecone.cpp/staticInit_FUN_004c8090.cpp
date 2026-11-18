// Name: core_litecone.cpp_staticInit_FUN_004c8090
// Address: 004c8090
// Address Range: [[004c8090, 004c80b3]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_staticInit_FUN_004c8090(void)

#include "nocturne.h"

void __cdecl core_litecone_cpp_staticInit_FUN_004c8090(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CLightConeClassInfo,"CLightCone",
             core_litecone_cpp_factoryFuncLightCone_FUN_004c80c0,&g_CLightConeClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}
