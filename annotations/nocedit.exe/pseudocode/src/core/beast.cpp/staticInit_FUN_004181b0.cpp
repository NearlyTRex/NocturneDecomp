// Name: core_beast.cpp_staticInit_FUN_004181b0
// Address: 004181b0
// Address Range: [[004181b0, 004181d3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_beast.cpp_staticInit_FUN_004181b0(void)
// Globals:
//   TerminatedCString s_CBeast_00615a55
//   int g_CBeastClassVersion = 0x1
//   CDemonActorType g_CBeastClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_beast_cpp_staticInit_FUN_004181b0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBeastClassInfo,"CBeast",core_beast_cpp_constructor_FUN_004181e0,
                      &g_CBeastClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 004181b0: PUSH 0x2cf2bb8
//   Label: core_beast.cpp_staticInit_FUN_004181b0
//   XREF to: 02cf2bb8 (DATA)
// 004181b5: PUSH 0x1
// 004181b7: PUSH 0x66e504
//   XREF to: 0066e504 (DATA)
// 004181bc: PUSH 0x4181e0
//   XREF to: 004181e0 (DATA)
// 004181c1: PUSH 0x615a55
//   XREF to: 00615a55 (DATA)
// 004181c6: PUSH 0x822860
//   XREF to: 00822860 (DATA)
// 004181cb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004181d0: ADD ESP,0x18
// 004181d3: RET
