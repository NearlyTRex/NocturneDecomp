// Name: core_vampboss.cpp_staticInit_FUN_005e5520
// Address: 005e5520
// Address Range: [[005e5520, 005e5543]]
// Convention: __cdecl
// Signature: CDemonActorType * core_vampboss.cpp_staticInit_FUN_005e5520(void)
// Globals:
//   TerminatedCString s_CVampireBoss_00656aa3
//   int g_CVampireBossVersion = 0x4
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CVampireBossClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_vampboss_cpp_staticInit_FUN_005e5520(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CVampireBossClassInfo,"CVampireBoss",
                      core_vampboss_cpp_FUN_005e5550,&g_CVampireBossVersion,4,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 005e5520: PUSH 0x2cf2bb8
//   Label: core_vampboss.cpp_staticInit_FUN_005e5520
//   XREF to: 02cf2bb8 (DATA)
// 005e5525: PUSH 0x4
// 005e5527: PUSH 0x684464
//   XREF to: 00684464 (DATA)
// 005e552c: PUSH 0x5e5550
//   XREF to: 005e5550 (DATA)
// 005e5531: PUSH 0x656aa3
//   XREF to: 00656aa3 (DATA)
// 005e5536: PUSH 0x3f8751c
//   XREF to: 03f8751c (DATA)
// 005e553b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005e5540: ADD ESP,0x18
// 005e5543: RET
