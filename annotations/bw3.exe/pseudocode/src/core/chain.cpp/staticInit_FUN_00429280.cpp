// Name: core_chain.cpp_staticInit_FUN_00429280
// Address: 00429280
// Address Range: [[00429280, 004292a3]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_staticInit_FUN_00429280(void)

#include "nocturne.h"

void __cdecl core_chain_cpp_staticInit_FUN_00429280(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CChainClassInfo,"?CChain" + 1,core_chain_cpp_factoryFuncChain_FUN_004292b0,
             &g_CChainClassVersion,4,&g_CDemonActorClassInfo);
  return;
}
