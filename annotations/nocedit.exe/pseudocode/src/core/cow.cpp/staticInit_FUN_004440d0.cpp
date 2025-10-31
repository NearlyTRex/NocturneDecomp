// Name: core_cow.cpp_staticInit_FUN_004440d0
// Address: 004440d0
// Address Range: [[004440d0, 004440f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_cow.cpp_staticInit_FUN_004440d0(void)
// Globals:
//   TerminatedCString s_CZombieCow_00619455
//   int g_CZombieCowClassVersion = 0x2
//   CDemonActorType g_CZombieCowClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_cow_cpp_staticInit_FUN_004440d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CZombieCowClassInfo,"CZombieCow",core_cow_cpp_FUN_00444100,
                      &g_CZombieCowClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 004440d0: PUSH 0x2cf2bb8
//   Label: core_cow.cpp_staticInit_FUN_004440d0
//   XREF to: 02cf2bb8 (DATA)
// 004440d5: PUSH 0x2
// 004440d7: PUSH 0x66ec60
//   XREF to: 0066ec60 (DATA)
// 004440dc: PUSH 0x444100
//   XREF to: 00444100 (DATA)
// 004440e1: PUSH 0x619455
//   XREF to: 00619455 (DATA)
// 004440e6: PUSH 0x83c19c
//   XREF to: 0083c19c (DATA)
// 004440eb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004440f0: ADD ESP,0x18
// 004440f3: RET
