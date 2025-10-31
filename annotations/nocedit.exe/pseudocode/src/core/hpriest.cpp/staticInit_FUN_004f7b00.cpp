// Name: core_hpriest.cpp_staticInit_FUN_004f7b00
// Address: 004f7b00
// Address Range: [[004f7b00, 004f7b23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hpriest.cpp_staticInit_FUN_004f7b00(void)
// Globals:
//   TerminatedCString s_CHighPriestOfGardath_0062f534
//   int g_CHighPriestOfGardathClassVersion = 0x1
//   CDemonActorType g_CHighPriestOfGardathClassInfo
//   CDemonActorType g_CNPCClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_hpriest_cpp_staticInit_FUN_004f7b00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHighPriestOfGardathClassInfo,"CHighPriestOfGardath",
                      core_hpriest_cpp_FUN_004f7b30,&g_CHighPriestOfGardathClassVersion,1,
                      &g_CNPCClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f7b00: PUSH 0x2fd8ce0
//   Label: core_hpriest.cpp_staticInit_FUN_004f7b00
//   XREF to: 02fd8ce0 (DATA)
// 004f7b05: PUSH 0x1
// 004f7b07: PUSH 0x67cc88
//   XREF to: 0067cc88 (DATA)
// 004f7b0c: PUSH 0x4f7b30
//   XREF to: 004f7b30 (DATA)
// 004f7b11: PUSH 0x62f534
//   XREF to: 0062f534 (DATA)
// 004f7b16: PUSH 0x2db8934
//   XREF to: 02db8934 (DATA)
// 004f7b1b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f7b20: ADD ESP,0x18
// 004f7b23: RET
