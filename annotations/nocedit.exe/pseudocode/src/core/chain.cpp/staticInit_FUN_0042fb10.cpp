// Name: core_chain.cpp_staticInit_FUN_0042fb10
// Address: 0042fb10
// Address Range: [[0042fb10, 0042fb33]]
// Convention: __cdecl
// Signature: CDemonActorType * core_chain.cpp_staticInit_FUN_0042fb10(void)

#include "nocturne.h"

CDemonActorType * __cdecl core_chain_cpp_staticInit_FUN_0042fb10(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CChainClassInfo,"CChain",core_chain_cpp_FUN_0042fb40,
                      &g_CChainClassVersion,4,&g_CDemonActorClassInfo);
  return pCVar1;
}
