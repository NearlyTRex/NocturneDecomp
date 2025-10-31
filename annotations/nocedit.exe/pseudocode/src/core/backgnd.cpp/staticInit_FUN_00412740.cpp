// Name: core_backgnd.cpp_staticInit_FUN_00412740
// Address: 00412740
// Address Range: [[00412740, 00412763]]
// Convention: __cdecl
// Signature: CDemonActorType * core_backgnd.cpp_staticInit_FUN_00412740(void)
// Globals:
//   TerminatedCString s_CBackgroundActor_00614e2e
//   int g_CBackgroundActorClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CBackgroundActorClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_backgnd_cpp_staticInit_FUN_00412740(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBackgroundActorClassInfo,"CBackgroundActor",
                      core_backgnd_cpp_FUN_00412770,&g_CBackgroundActorClassVersion,2,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00412740: PUSH 0x821ff8
//   Label: core_backgnd.cpp_staticInit_FUN_00412740
//   XREF to: 00821ff8 (DATA)
// 00412745: PUSH 0x2
// 00412747: PUSH 0x66e440
//   XREF to: 0066e440 (DATA)
// 0041274c: PUSH 0x412770
//   XREF to: 00412770 (DATA)
// 00412751: PUSH 0x614e2e
//   XREF to: 00614e2e (DATA)
// 00412756: PUSH 0x82245c
//   XREF to: 0082245c (DATA)
// 0041275b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00412760: ADD ESP,0x18
// 00412763: RET
