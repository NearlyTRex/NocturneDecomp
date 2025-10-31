// Name: core_stairs.cpp_staticInit_FUN_005b9b00
// Address: 005b9b00
// Address Range: [[005b9b00, 005b9b23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_stairs.cpp_staticInit_FUN_005b9b00(void)
// Globals:
//   TerminatedCString s_CStairs_0065303a
//   int g_CStairsClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CStairsClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_stairs_cpp_staticInit_FUN_005b9b00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CStairsClassInfo,"CStairs",core_stairs_cpp_FUN_005b9b30,
                      &g_CStairsClassVersion,2,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005b9b00: PUSH 0x821ff8
//   Label: core_stairs.cpp_staticInit_FUN_005b9b00
//   XREF to: 00821ff8 (DATA)
// 005b9b05: PUSH 0x2
// 005b9b07: PUSH 0x684190
//   XREF to: 00684190 (DATA)
// 005b9b0c: PUSH 0x5b9b30
//   XREF to: 005b9b30 (DATA)
// 005b9b11: PUSH 0x65303a
//   XREF to: 0065303a (DATA)
// 005b9b16: PUSH 0x3f6ba24
//   XREF to: 03f6ba24 (DATA)
// 005b9b1b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005b9b20: ADD ESP,0x18
// 005b9b23: RET
