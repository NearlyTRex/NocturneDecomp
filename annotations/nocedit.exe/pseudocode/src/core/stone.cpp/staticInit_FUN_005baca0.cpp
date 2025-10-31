// Name: core_stone.cpp_staticInit_FUN_005baca0
// Address: 005baca0
// Address Range: [[005baca0, 005bacc3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_stone.cpp_staticInit_FUN_005baca0(void)
// Globals:
//   TerminatedCString s_CTempleStone_0065313b
//   int g_CTempleStoneClassVersion = 0x1
//   CDemonActorType g_CBoxActorClassInfo
//   CDemonActorType g_CTempleStoneClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_stone_cpp_staticInit_FUN_005baca0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTempleStoneClassInfo,"CTempleStone",core_stone_cpp_FUN_005bacd0,
                      &g_CTempleStoneClassVersion,1,&g_CBoxActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005baca0: PUSH 0x8229b0
//   Label: core_stone.cpp_staticInit_FUN_005baca0
//   XREF to: 008229b0 (DATA)
// 005baca5: PUSH 0x1
// 005baca7: PUSH 0x6841a4
//   XREF to: 006841a4 (DATA)
// 005bacac: PUSH 0x5bacd0
//   XREF to: 005bacd0 (DATA)
// 005bacb1: PUSH 0x65313b
//   XREF to: 0065313b (DATA)
// 005bacb6: PUSH 0x3f6ba60
//   XREF to: 03f6ba60 (DATA)
// 005bacbb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005bacc0: ADD ESP,0x18
// 005bacc3: RET
