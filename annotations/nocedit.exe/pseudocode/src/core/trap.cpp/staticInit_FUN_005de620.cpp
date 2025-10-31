// Name: core_trap.cpp_staticInit_FUN_005de620
// Address: 005de620
// Address Range: [[005de620, 005de643]]
// Convention: __cdecl
// Signature: CDemonActorType * core_trap.cpp_staticInit_FUN_005de620(void)
// Globals:
//   TerminatedCString s_CTrap_00655515
//   int g_CTrapClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CTrapClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_trap_cpp_staticInit_FUN_005de620(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTrapClassInfo,"CTrap",core_trap_cpp_FUN_005de650,
                      &g_CTrapClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005de620: PUSH 0x821ff8
//   Label: core_trap.cpp_staticInit_FUN_005de620
//   XREF to: 00821ff8 (DATA)
// 005de625: PUSH 0x1
// 005de627: PUSH 0x684324
//   XREF to: 00684324 (DATA)
// 005de62c: PUSH 0x5de650
//   XREF to: 005de650 (DATA)
// 005de631: PUSH 0x655515
//   XREF to: 00655515 (DATA)
// 005de636: PUSH 0x3f873e0
//   XREF to: 03f873e0 (DATA)
// 005de63b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005de640: ADD ESP,0x18
// 005de643: RET
