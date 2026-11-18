// Name: core_gasmask.cpp_staticInit_FUN_004a89b0
// Address: 004a89b0
// Address Range: [[004a89b0, 004a89d3]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_staticInit_FUN_004a89b0(void)

#include "nocturne.h"

void __cdecl core_gasmask_cpp_staticInit_FUN_004a89b0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CGasMaskClassInfo,"CGasMask",
             core_gasmask_cpp_factoryFuncGasMask_FUN_004a89e0,&INT_005b963c,1,
             &g_CDemonActorClassInfo);
  return;
}
