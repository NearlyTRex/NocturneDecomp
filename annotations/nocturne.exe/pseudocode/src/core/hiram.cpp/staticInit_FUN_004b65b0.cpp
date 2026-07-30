// Name: core_hiram.cpp_staticInit_FUN_004b65b0
// Address: 004b65b0
// Address Range: [[004b65b0, 004b65d3]]
// Convention: __cdecl
// Signature: void __cdecl core_hiram_cpp_staticInit_FUN_004b65b0(void)

#include "nocturne.h"

void __cdecl core_hiram_cpp_staticInit_FUN_004b65b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CHiramActorType_01cae164,"CHiram",core_hiram_cpp_factoryFunc_FUN_004b65e0,
             &INT_005ba960,1,&g_CNPCActorType_01d46820);
  return;
}
