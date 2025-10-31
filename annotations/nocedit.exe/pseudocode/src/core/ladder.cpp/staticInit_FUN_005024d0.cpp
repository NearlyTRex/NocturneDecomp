// Name: core_ladder.cpp_staticInit_FUN_005024d0
// Address: 005024d0
// Address Range: [[005024d0, 005024f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_ladder.cpp_staticInit_FUN_005024d0(void)
// Globals:
//   TerminatedCString s_CLadder_00630df0
//   int g_CLadderClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CLadderClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_ladder_cpp_staticInit_FUN_005024d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLadderClassInfo,"CLadder",core_ladder_cpp_FUN_00502500,
                      &g_CLadderClassVersion,2,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005024d0: PUSH 0x821ff8
//   Label: core_ladder.cpp_staticInit_FUN_005024d0
//   XREF to: 00821ff8 (DATA)
// 005024d5: PUSH 0x2
// 005024d7: PUSH 0x67cf48
//   XREF to: 0067cf48 (DATA)
// 005024dc: PUSH 0x502500
//   XREF to: 00502500 (DATA)
// 005024e1: PUSH 0x630df0
//   XREF to: 00630df0 (DATA)
// 005024e6: PUSH 0x2dcd7d8
//   XREF to: 02dcd7d8 (DATA)
// 005024eb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005024f0: ADD ESP,0x18
// 005024f3: RET
