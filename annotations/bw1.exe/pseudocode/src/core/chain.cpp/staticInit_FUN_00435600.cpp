// Name: core_chain.cpp_staticInit_FUN_00435600
// Address: 00435600
// Address Range: [[00435600, 00435623]]
// Convention: unknown
// Signature: void core_chain_cpp_staticInit_FUN_00435600(void)

#include "nocturne.h"

void core_chain_cpp_staticInit_FUN_00435600(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CChainClassInfo," BCChain" + 2,core_chain_cpp_factoryFuncChain_FUN_00435630,
             &g_CChainClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
