// Name: core_flies.cpp_staticInit_FUN_004cbcf0
// Address: 004cbcf0
// Address Range: [[004cbcf0, 004cbd13]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flies.cpp_staticInit_FUN_004cbcf0(void)
// Globals:
//   TerminatedCString s_CFlies_0062a3d6
//   int g_CFliesClassVersion = 0x3
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CFliesClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_flies_cpp_staticInit_FUN_004cbcf0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFliesClassInfo,"CFlies",core_flies_cpp_FUN_004cbd20,
                      &g_CFliesClassVersion,3,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004cbcf0: PUSH 0x821ff8
//   Label: core_flies.cpp_staticInit_FUN_004cbcf0
//   XREF to: 00821ff8 (DATA)
// 004cbcf5: PUSH 0x3
// 004cbcf7: PUSH 0x67b510
//   XREF to: 0067b510 (DATA)
// 004cbcfc: PUSH 0x4cbd20
//   XREF to: 004cbd20 (DATA)
// 004cbd01: PUSH 0x62a3d6
//   XREF to: 0062a3d6 (DATA)
// 004cbd06: PUSH 0x2d7a7c4
//   XREF to: 02d7a7c4 (DATA)
// 004cbd0b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004cbd10: ADD ESP,0x18
// 004cbd13: RET
