// Name: core_flame.cpp_staticInit_FUN_004c9a30
// Address: 004c9a30
// Address Range: [[004c9a30, 004c9a53]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flame.cpp_staticInit_FUN_004c9a30(void)
// Globals:
//   TerminatedCString s_CFlame_0062a0d6
//   int g_CFlameClassVersion = 0x7
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CFlameClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_flame_cpp_staticInit_FUN_004c9a30(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFlameClassInfo,"CFlame",core_flame_cpp_FUN_004c9a60,
                      &g_CFlameClassVersion,7,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004c9a30: PUSH 0x821ff8
//   Label: core_flame.cpp_staticInit_FUN_004c9a30
//   XREF to: 00821ff8 (DATA)
// 004c9a35: PUSH 0x7
// 004c9a37: PUSH 0x67b4c0
//   XREF to: 0067b4c0 (DATA)
// 004c9a3c: PUSH 0x4c9a60
//   XREF to: 004c9a60 (DATA)
// 004c9a41: PUSH 0x62a0d6
//   XREF to: 0062a0d6 (DATA)
// 004c9a46: PUSH 0x2d7a6c4
//   XREF to: 02d7a6c4 (DATA)
// 004c9a4b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004c9a50: ADD ESP,0x18
// 004c9a53: RET
