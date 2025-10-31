// Name: core_barrier.cpp_staticInit_FUN_00414150
// Address: 00414150
// Address Range: [[00414150, 00414173]]
// Convention: __cdecl
// Signature: CDemonActorType * core_barrier.cpp_staticInit_FUN_00414150(void)
// Globals:
//   TerminatedCString s_CBarrier_0061513f
//   int g_CBarrierClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CBarrierClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_barrier_cpp_staticInit_FUN_00414150(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBarrierClassInfo,"CBarrier",
                      core_barrier_cpp_constructor_FUN_00414180,&g_CBarrierClassVersion,2,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00414150: PUSH 0x821ff8
//   Label: core_barrier.cpp_staticInit_FUN_00414150
//   XREF to: 00821ff8 (DATA)
// 00414155: PUSH 0x2
// 00414157: PUSH 0x66e4a0
//   XREF to: 0066e4a0 (DATA)
// 0041415c: PUSH 0x414180
//   XREF to: 00414180 (DATA)
// 00414161: PUSH 0x61513f
//   XREF to: 0061513f (DATA)
// 00414166: PUSH 0x8226d4
//   XREF to: 008226d4 (DATA)
// 0041416b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00414170: ADD ESP,0x18
// 00414173: RET
