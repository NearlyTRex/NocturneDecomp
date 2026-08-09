// Name: core_litecone.cpp_staticInit_FUN_00506aa0
// Address: 00506aa0
// Address Range: [[00506aa0, 00506ac3]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_staticInit_FUN_00506aa0(void)

#include "nocturne.h"

void __cdecl core_litecone_cpp_staticInit_FUN_00506aa0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CLightConeClassInfo,"CLightCone",
             core_litecone_cpp_factoryFuncLightCone_FUN_00506ad0,&g_CLightConeClassVersion,2,
             &g_CDemonActorClassInfo);
  return;
}
