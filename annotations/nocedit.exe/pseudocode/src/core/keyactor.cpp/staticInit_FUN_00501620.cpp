// Name: core_keyactor.cpp_staticInit_FUN_00501620
// Address: 00501620
// Address Range: [[00501620, 00501643]]
// Convention: __cdecl
// Signature: void core_keyactor.cpp_staticInit_FUN_00501620(void)
// Globals:
//   TerminatedCString s_CKeyActor_00630c15
//   undefined4 g_CKeyActorClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CKeyActorClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_keyactor_cpp_staticInit_FUN_00501620(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CKeyActorClassInfo,"CKeyActor",core_keyactor_cpp_FUN_00501650,
             &g_CKeyActorClassVersion,3,&g_CDemonActorClassInfo);
  return;
}


// Assembly code:
// 00501620: PUSH 0x821ff8
//   Label: core_keyactor.cpp_staticInit_FUN_00501620
//   XREF to: 00821ff8 (DATA)
// 00501625: PUSH 0x3
// 00501627: PUSH 0x67cf2c
//   XREF to: 0067cf2c (DATA)
// 0050162c: PUSH 0x501650
//   XREF to: 00501650 (DATA)
// 00501631: PUSH 0x630c15
//   XREF to: 00630c15 (DATA)
// 00501636: PUSH 0x2dcd798
//   XREF to: 02dcd798 (DATA)
// 0050163b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00501640: ADD ESP,0x18
// 00501643: RET
