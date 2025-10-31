// Name: core_chain.cpp_staticInit_FUN_0042fb10
// Address: 0042fb10
// Address Range: [[0042fb10, 0042fb33]]
// Convention: __cdecl
// Signature: CDemonActorType * core_chain.cpp_staticInit_FUN_0042fb10(void)
// Globals:
//   TerminatedCString s_CChain_0061778a
//   int g_CChainClassVersion = 0x4
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CChainClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_chain_cpp_staticInit_FUN_0042fb10(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CChainClassInfo,"CChain",core_chain_cpp_FUN_0042fb40,
                      &g_CChainClassVersion,4,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 0042fb10: PUSH 0x821ff8
//   Label: core_chain.cpp_staticInit_FUN_0042fb10
//   XREF to: 00821ff8 (DATA)
// 0042fb15: PUSH 0x4
// 0042fb17: PUSH 0x66e7d0
//   XREF to: 0066e7d0 (DATA)
// 0042fb1c: PUSH 0x42fb40
//   XREF to: 0042fb40 (DATA)
// 0042fb21: PUSH 0x61778a
//   XREF to: 0061778a (DATA)
// 0042fb26: PUSH 0x823de4
//   XREF to: 00823de4 (DATA)
// 0042fb2b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0042fb30: ADD ESP,0x18
// 0042fb33: RET
