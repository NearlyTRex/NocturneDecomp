// Name: core_flamegun.cpp_staticInit_FUN_004cb810
// Address: 004cb810
// Address Range: [[004cb810, 004cb833]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flamegun.cpp_staticInit_FUN_004cb810(void)
// Globals:
//   TerminatedCString s_CFlameThrower_0062a36b
//   int g_CFlameThrowerClassVersion = 0x1
//   CDemonActorType g_CFlameThrowerClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_flamegun_cpp_staticInit_FUN_004cb810(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFlameThrowerClassInfo,"CFlameThrower",
                      core_flamegun_cpp_FUN_004cb840,&g_CFlameThrowerClassVersion,1,
                      &g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 004cb810: PUSH 0x3f95d40
//   Label: core_flamegun.cpp_staticInit_FUN_004cb810
//   XREF to: 03f95d40 (DATA)
// 004cb815: PUSH 0x1
// 004cb817: PUSH 0x67b4dc
//   XREF to: 0067b4dc (DATA)
// 004cb81c: PUSH 0x4cb840
//   XREF to: 004cb840 (DATA)
// 004cb821: PUSH 0x62a36b
//   XREF to: 0062a36b (DATA)
// 004cb826: PUSH 0x2d7a73c
//   XREF to: 02d7a73c (DATA)
// 004cb82b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004cb830: ADD ESP,0x18
// 004cb833: RET
