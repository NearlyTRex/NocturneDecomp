// Name: core_actor.cpp_staticInit_FUN_00408320
// Address: 00408320
// Address Range: [[00408320, 0040833d]]
// Convention: __cdecl
// Signature: void core_actor.cpp_staticInit_FUN_00408320(void)
// Globals:
//   TerminatedCString s_CDemonActor_00613548
//   int g_CDemonActorClassVersion = 0x7
//   CDemonActorType g_CDemonActorClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_actor_cpp_staticInit_FUN_00408320(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CDemonActorClassInfo,"CDemonActor",(void *)0x0,&g_CDemonActorClassVersion,7
             ,(CDemonActorType *)0x0);
  return;
}


// Assembly code:
// 00408320: PUSH 0x0
//   Label: core_actor.cpp_staticInit_FUN_00408320
// 00408322: PUSH 0x7
// 00408324: PUSH 0x66e170
//   XREF to: 0066e170 (DATA)
// 00408329: PUSH 0x0
// 0040832b: PUSH 0x613548
//   XREF to: 00613548 (DATA)
// 00408330: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 00408335: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0040833a: ADD ESP,0x18
// 0040833d: RET
