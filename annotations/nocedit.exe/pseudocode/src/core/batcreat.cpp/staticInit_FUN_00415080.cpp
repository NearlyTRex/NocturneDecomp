// Name: core_batcreat.cpp_staticInit_FUN_00415080
// Address: 00415080
// Address Range: [[00415080, 004150a3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_batcreat.cpp_staticInit_FUN_00415080(void)
// Globals:
//   TerminatedCString s_CBatCreature_00615449
//   int g_CBatCreatureClassVersion = 0x1
//   CDemonActorType g_CBatCreatureClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_batcreat_cpp_staticInit_FUN_00415080(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBatCreatureClassInfo,"CBatCreature",
                      core_batcreat_cpp_constructor_FUN_004150b0,&g_CBatCreatureClassVersion,1,
                      &g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00415080: PUSH 0x2cf2bb8
//   Label: core_batcreat.cpp_staticInit_FUN_00415080
//   XREF to: 02cf2bb8 (DATA)
// 00415085: PUSH 0x1
// 00415087: PUSH 0x66e4c4
//   XREF to: 0066e4c4 (DATA)
// 0041508c: PUSH 0x4150b0
//   XREF to: 004150b0 (DATA)
// 00415091: PUSH 0x615449
//   XREF to: 00615449 (DATA)
// 00415096: PUSH 0x82277c
//   XREF to: 0082277c (DATA)
// 0041509b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004150a0: ADD ESP,0x18
// 004150a3: RET
