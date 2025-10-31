// Name: core_hotdemon.cpp_staticInit_FUN_004f6c30
// Address: 004f6c30
// Address Range: [[004f6c30, 004f6c53]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hotdemon.cpp_staticInit_FUN_004f6c30(void)
// Globals:
//   TerminatedCString s_CHotDemon_0062f338
//   int g_CHotDemonClassVersion = 0x1
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CHotDemonClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_hotdemon_cpp_staticInit_FUN_004f6c30(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHotDemonClassInfo,"CHotDemon",core_hotdemon_cpp_FUN_004f6c60,
                      &g_CHotDemonClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f6c30: PUSH 0x2cf2bb8
//   Label: core_hotdemon.cpp_staticInit_FUN_004f6c30
//   XREF to: 02cf2bb8 (DATA)
// 004f6c35: PUSH 0x1
// 004f6c37: PUSH 0x67cc70
//   XREF to: 0067cc70 (DATA)
// 004f6c3c: PUSH 0x4f6c60
//   XREF to: 004f6c60 (DATA)
// 004f6c41: PUSH 0x62f338
//   XREF to: 0062f338 (DATA)
// 004f6c46: PUSH 0x2db88f8
//   XREF to: 02db88f8 (DATA)
// 004f6c4b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f6c50: ADD ESP,0x18
// 004f6c53: RET
