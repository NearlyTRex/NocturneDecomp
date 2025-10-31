// Name: core_mimic.cpp_staticInit_FUN_0051f100
// Address: 0051f100
// Address Range: [[0051f100, 0051f123]]
// Convention: __cdecl
// Signature: CDemonActorType * core_mimic.cpp_staticInit_FUN_0051f100(void)
// Globals:
//   TerminatedCString s_CMimic_0063853b
//   int g_CMimicClassVersion = 0x3
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CMimicClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_mimic_cpp_staticInit_FUN_0051f100(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMimicClassInfo,"CMimic",core_mimic_cpp_FUN_0051f190,
                      &g_CMimicClassVersion,3,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 0051f100: PUSH 0x2cf2bb8
//   Label: core_mimic.cpp_staticInit_FUN_0051f100
//   XREF to: 02cf2bb8 (DATA)
// 0051f105: PUSH 0x3
// 0051f107: PUSH 0x67d510
//   XREF to: 0067d510 (DATA)
// 0051f10c: PUSH 0x51f190
//   XREF to: 0051f190 (DATA)
// 0051f111: PUSH 0x63853b
//   XREF to: 0063853b (DATA)
// 0051f116: PUSH 0x2f3333c
//   XREF to: 02f3333c (DATA)
// 0051f11b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0051f120: ADD ESP,0x18
// 0051f123: RET
