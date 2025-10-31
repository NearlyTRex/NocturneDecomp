// Name: core_crate.cpp_staticInit_FUN_00448460
// Address: 00448460
// Address Range: [[00448460, 00448483]]
// Convention: __cdecl
// Signature: CDemonActorType * core_crate.cpp_staticInit_FUN_00448460(void)
// Globals:
//   TerminatedCString s_CCrate_00619ada
//   int g_CCrateClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CCrateClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_crate_cpp_staticInit_FUN_00448460(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CCrateClassInfo,"CCrate",core_crate_cpp_FUN_00448490,
                      &g_CCrateClassVersion,2,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00448460: PUSH 0x821ff8
//   Label: core_crate.cpp_staticInit_FUN_00448460
//   XREF to: 00821ff8 (DATA)
// 00448465: PUSH 0x2
// 00448467: PUSH 0x66ec78
//   XREF to: 0066ec78 (DATA)
// 0044846c: PUSH 0x448490
//   XREF to: 00448490 (DATA)
// 00448471: PUSH 0x619ada
//   XREF to: 00619ada (DATA)
// 00448476: PUSH 0x887944
//   XREF to: 00887944 (DATA)
// 0044847b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00448480: ADD ESP,0x18
// 00448483: RET
