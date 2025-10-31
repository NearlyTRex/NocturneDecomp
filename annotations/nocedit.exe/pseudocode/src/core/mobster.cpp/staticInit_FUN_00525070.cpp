// Name: core_mobster.cpp_staticInit_FUN_00525070
// Address: 00525070
// Address Range: [[00525070, 00525093]]
// Convention: __cdecl
// Signature: CDemonActorType * core_mobster.cpp_staticInit_FUN_00525070(void)
// Globals:
//   TerminatedCString s_CMobster_00639686
//   undefined4 g_CMobsterClassVersion
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CMobsterClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_mobster_cpp_staticInit_FUN_00525070(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMobsterClassInfo,"CMobster",core_mobster_cpp_FUN_005251c0,
                      &g_CMobsterClassVersion,7,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00525070: PUSH 0x2cf2bb8
//   Label: core_mobster.cpp_staticInit_FUN_00525070
//   XREF to: 02cf2bb8 (DATA)
// 00525075: PUSH 0x7
// 00525077: PUSH 0x67d6e4
//   XREF to: 0067d6e4 (DATA)
// 0052507c: PUSH 0x5251c0
//   XREF to: 005251c0 (DATA)
// 00525081: PUSH 0x639686
//   XREF to: 00639686 (DATA)
// 00525086: PUSH 0x2f37ef8
//   XREF to: 02f37ef8 (DATA)
// 0052508b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00525090: ADD ESP,0x18
// 00525093: RET
