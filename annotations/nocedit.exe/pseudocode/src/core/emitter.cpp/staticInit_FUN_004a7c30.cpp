// Name: core_emitter.cpp_staticInit_FUN_004a7c30
// Address: 004a7c30
// Address Range: [[004a7c30, 004a7c53]]
// Convention: __cdecl
// Signature: CDemonActorType * core_emitter.cpp_staticInit_FUN_004a7c30(void)
// Globals:
//   TerminatedCString s_CEmitter_0062404a
//   undefined4 g_CEmitterClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CEmitterClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_emitter_cpp_staticInit_FUN_004a7c30(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CEmitterClassInfo,"CEmitter",core_emitter_cpp_FUN_004a7c60,
                      &g_CEmitterClassVersion,7,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004a7c30: PUSH 0x821ff8
//   Label: core_emitter.cpp_staticInit_FUN_004a7c30
//   XREF to: 00821ff8 (DATA)
// 004a7c35: PUSH 0x7
// 004a7c37: PUSH 0x679354
//   XREF to: 00679354 (DATA)
// 004a7c3c: PUSH 0x4a7c60
//   XREF to: 004a7c60 (DATA)
// 004a7c41: PUSH 0x62404a
//   XREF to: 0062404a (DATA)
// 004a7c46: PUSH 0x2cf2b7c
//   XREF to: 02cf2b7c (DATA)
// 004a7c4b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004a7c50: ADD ESP,0x18
// 004a7c53: RET
