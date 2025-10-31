// Name: core_smiley.cpp_staticInit_FUN_005a23c0
// Address: 005a23c0
// Address Range: [[005a23c0, 005a23e3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_smiley.cpp_staticInit_FUN_005a23c0(void)
// Globals:
//   TerminatedCString s_CSmiley_0064f14a
//   int g_CSmileyClassVersion = 0x1
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CSmileyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_smiley_cpp_staticInit_FUN_005a23c0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSmileyClassInfo,"CSmiley",core_smiley_cpp_FUN_005a23f0,
                      &g_CSmileyClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 005a23c0: PUSH 0x2cf2bb8
//   Label: core_smiley.cpp_staticInit_FUN_005a23c0
//   XREF to: 02cf2bb8 (DATA)
// 005a23c5: PUSH 0x1
// 005a23c7: PUSH 0x681abc
//   XREF to: 00681abc (DATA)
// 005a23cc: PUSH 0x5a23f0
//   XREF to: 005a23f0 (DATA)
// 005a23d1: PUSH 0x64f14a
//   XREF to: 0064f14a (DATA)
// 005a23d6: PUSH 0x3f48fd0
//   XREF to: 03f48fd0 (DATA)
// 005a23db: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005a23e0: ADD ESP,0x18
// 005a23e3: RET
