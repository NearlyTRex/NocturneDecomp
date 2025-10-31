// Name: core_spike.cpp_staticInit_FUN_005b81b0
// Address: 005b81b0
// Address Range: [[005b81b0, 005b81d3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_spike.cpp_staticInit_FUN_005b81b0(void)
// Globals:
//   TerminatedCString s_CSpike_00652dc8
//   int g_CSpikeClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CSpikeClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_spike_cpp_staticInit_FUN_005b81b0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSpikeClassInfo,"CSpike",core_spike_cpp_FUN_005b81e0,
                      &g_CSpikeClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005b81b0: PUSH 0x821ff8
//   Label: core_spike.cpp_staticInit_FUN_005b81b0
//   XREF to: 00821ff8 (DATA)
// 005b81b5: PUSH 0x1
// 005b81b7: PUSH 0x684158
//   XREF to: 00684158 (DATA)
// 005b81bc: PUSH 0x5b81e0
//   XREF to: 005b81e0 (DATA)
// 005b81c1: PUSH 0x652dc8
//   XREF to: 00652dc8 (DATA)
// 005b81c6: PUSH 0x3f6b9a4
//   XREF to: 03f6b9a4 (DATA)
// 005b81cb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005b81d0: ADD ESP,0x18
// 005b81d3: RET
