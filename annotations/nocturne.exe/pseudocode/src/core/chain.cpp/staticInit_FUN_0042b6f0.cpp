// Name: core_chain.cpp_staticInit_FUN_0042b6f0
// Address: 0042b6f0
// Address Range: [[0042b6f0, 0042b713]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_staticInit_FUN_0042b6f0(void)

#include "nocturne.h"

void __cdecl core_chain_cpp_staticInit_FUN_0042b6f0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CChainClassInfo,"CChain",core_chain_cpp_factoryFuncChain_FUN_0042b720,
             &g_CChainClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
