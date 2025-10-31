// Name: core_scat.cpp_staticInit_FUN_00556e00
// Address: 00556e00
// Address Range: [[00556e00, 00556e23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_scat.cpp_staticInit_FUN_00556e00(void)
// Globals:
//   TerminatedCString s_CScat_006411f4
//   int g_CScatClassVersion = 0x1
//   CDemonActorType g_CHeroClassInfo
//   CDemonActorType g_CScatClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_scat_cpp_staticInit_FUN_00556e00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CScatClassInfo,"CScat",core_scat_cpp_FUN_00556e90,
                      &g_CScatClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 00556e00: PUSH 0x2db87d4
//   Label: core_scat.cpp_staticInit_FUN_00556e00
//   XREF to: 02db87d4 (DATA)
// 00556e05: PUSH 0x1
// 00556e07: PUSH 0x680cfc
//   XREF to: 00680cfc (DATA)
// 00556e0c: PUSH 0x556e90
//   XREF to: 00556e90 (DATA)
// 00556e11: PUSH 0x6411f4
//   XREF to: 006411f4 (DATA)
// 00556e16: PUSH 0x31061a4
//   XREF to: 031061a4 (DATA)
// 00556e1b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00556e20: ADD ESP,0x18
// 00556e23: RET
