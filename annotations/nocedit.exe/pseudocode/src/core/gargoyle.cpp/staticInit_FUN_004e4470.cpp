// Name: core_gargoyle.cpp_staticInit_FUN_004e4470
// Address: 004e4470
// Address Range: [[004e4470, 004e4493]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gargoyle.cpp_staticInit_FUN_004e4470(void)
// Globals:
//   TerminatedCString s_CGargoyle_0062d7b7
//   int g_CGargoyleClassVersion = 0x2
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CGargoyleClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_gargoyle_cpp_staticInit_FUN_004e4470(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGargoyleClassInfo,"CGargoyle",core_gargoyle_cpp_FUN_004e44a0,
                      &g_CGargoyleClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 004e4470: PUSH 0x2cf2bb8
//   Label: core_gargoyle.cpp_staticInit_FUN_004e4470
//   XREF to: 02cf2bb8 (DATA)
// 004e4475: PUSH 0x2
// 004e4477: PUSH 0x67b900
//   XREF to: 0067b900 (DATA)
// 004e447c: PUSH 0x4e44a0
//   XREF to: 004e44a0 (DATA)
// 004e4481: PUSH 0x62d7b7
//   XREF to: 0062d7b7 (DATA)
// 004e4486: PUSH 0x2d83230
//   XREF to: 02d83230 (DATA)
// 004e448b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004e4490: ADD ESP,0x18
// 004e4493: RET
