// Name: core_bugs.cpp_staticInit_FUN_00424c40
// Address: 00424c40
// Address Range: [[00424c40, 00424c63]]
// Convention: __cdecl
// Signature: CDemonActorType * core_bugs.cpp_staticInit_FUN_00424c40(void)
// Globals:
//   TerminatedCString s_CBugs_00616cc3
//   int g_CBugsClassVersion = 0x1
//   CDemonActorType g_CBugsClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_bugs_cpp_staticInit_FUN_00424c40(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBugsClassInfo,"CBugs",core_bugs_cpp_FUN_00424c70,
                      &g_CBugsClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00424c40: PUSH 0x2cf2bb8
//   Label: core_bugs.cpp_staticInit_FUN_00424c40
//   XREF to: 02cf2bb8 (DATA)
// 00424c45: PUSH 0x1
// 00424c47: PUSH 0x66e65c
//   XREF to: 0066e65c (DATA)
// 00424c4c: PUSH 0x424c70
//   XREF to: 00424c70 (DATA)
// 00424c51: PUSH 0x616cc3
//   XREF to: 00616cc3 (DATA)
// 00424c56: PUSH 0x823a38
//   XREF to: 00823a38 (DATA)
// 00424c5b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00424c60: ADD ESP,0x18
// 00424c63: RET
