// Name: core_batman.cpp_staticInit_FUN_004163e0
// Address: 004163e0
// Address Range: [[004163e0, 00416403]]
// Convention: __cdecl
// Signature: CDemonActorType * core_batman.cpp_staticInit_FUN_004163e0(void)
// Globals:
//   TerminatedCString s_CBatman_006156c5
//   undefined4 g_CBatmanClassVersion
//   CDemonActorType g_CBatmanClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_batman_cpp_staticInit_FUN_004163e0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBatmanClassInfo,"CBatman",core_batman_cpp_FUN_00416410,
                      &g_CBatmanClassVersion,3,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 004163e0: PUSH 0x2cf2bb8
//   Label: core_batman.cpp_staticInit_FUN_004163e0
//   XREF to: 02cf2bb8 (DATA)
// 004163e5: PUSH 0x3
// 004163e7: PUSH 0x66e4dc
//   XREF to: 0066e4dc (DATA)
// 004163ec: PUSH 0x416410
//   XREF to: 00416410 (DATA)
// 004163f1: PUSH 0x6156c5
//   XREF to: 006156c5 (DATA)
// 004163f6: PUSH 0x8227e8
//   XREF to: 008227e8 (DATA)
// 004163fb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00416400: ADD ESP,0x18
// 00416403: RET
