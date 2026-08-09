// Name: core_flies.cpp_staticInit_FUN_0048ee90
// Address: 0048ee90
// Address Range: [[0048ee90, 0048eeb3]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_staticInit_FUN_0048ee90(void)

#include "nocturne.h"

void __cdecl core_flies_cpp_staticInit_FUN_0048ee90(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CFliesActorType_01c70718,"CFlies",
             core_flies_cpp_factoryFuncFlies_FUN_0048eec0,&g_INT_005b9210,3,
             &g_CDemonActorActorType_00763e48);
  return;
}
