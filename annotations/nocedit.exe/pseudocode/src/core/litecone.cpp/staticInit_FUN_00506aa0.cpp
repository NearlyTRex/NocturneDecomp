// Name: core_litecone.cpp_staticInit_FUN_00506aa0
// Address: 00506aa0
// Address Range: [[00506aa0, 00506ac3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_litecone.cpp_staticInit_FUN_00506aa0(void)
// Globals:
//   TerminatedCString s_CLightCone_00631536
//   int g_CLightConeClassVersion = 0x2
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CLightConeClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_litecone_cpp_staticInit_FUN_00506aa0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLightConeClassInfo,"CLightCone",core_litecone_cpp_FUN_00506ad0,
                      &g_CLightConeClassVersion,2,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00506aa0: PUSH 0x821ff8
//   Label: core_litecone.cpp_staticInit_FUN_00506aa0
//   XREF to: 00821ff8 (DATA)
// 00506aa5: PUSH 0x2
// 00506aa7: PUSH 0x67cff0
//   XREF to: 0067cff0 (DATA)
// 00506aac: PUSH 0x506ad0
//   XREF to: 00506ad0 (DATA)
// 00506ab1: PUSH 0x631536
//   XREF to: 00631536 (DATA)
// 00506ab6: PUSH 0x2dd30f4
//   XREF to: 02dd30f4 (DATA)
// 00506abb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00506ac0: ADD ESP,0x18
// 00506ac3: RET
