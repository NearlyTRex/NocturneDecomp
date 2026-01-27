// Name: core_chain.cpp_staticInit_FUN_0042fb10
// Address: 0042fb10
// Address Range: [[0042fb10, 0042fb33]]
// Convention: __cdecl
// Signature: void core_chain.cpp_staticInit_FUN_0042fb10(void)

#include "nocturne.h"

void __cdecl core_chain_cpp_staticInit_FUN_0042fb10(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CChainClassInfo,"CChain",core_chain_cpp_factoryFunc_FUN_0042fb40,
             &g_CChainClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
