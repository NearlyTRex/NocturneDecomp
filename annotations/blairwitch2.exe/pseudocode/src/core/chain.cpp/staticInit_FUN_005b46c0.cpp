// Name: core_chain.cpp_staticInit_FUN_005b46c0
// Address: 005b46c0
// Address Range: [[005b46c0, 005b46e3]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_staticInit_FUN_005b46c0(void)

#include "nocturne.h"

void __cdecl core_chain_cpp_staticInit_FUN_005b46c0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CChainClassInfo,"@@CChain" + 2,core_chain_cpp_factoryFuncChain_FUN_005b46f0,
             &g_CChainClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
