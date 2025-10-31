// Name: core_imp.cpp_staticInit_FUN_004f9830
// Address: 004f9830
// Address Range: [[004f9830, 004f9853]]
// Convention: __cdecl
// Signature: CDemonActorType * core_imp.cpp_staticInit_FUN_004f9830(void)
// Globals:
//   TerminatedCString s_CImp_0062f81e
//   int g_CImpClassVersion = 0x1
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CImpClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_imp_cpp_staticInit_FUN_004f9830(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CImpClassInfo,"CImp",core_imp_cpp_FUN_004f9860,&g_CImpClassVersion
                      ,1,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f9830: PUSH 0x2cf2bb8
//   Label: core_imp.cpp_staticInit_FUN_004f9830
//   XREF to: 02cf2bb8 (DATA)
// 004f9835: PUSH 0x1
// 004f9837: PUSH 0x67ccbc
//   XREF to: 0067ccbc (DATA)
// 004f983c: PUSH 0x4f9860
//   XREF to: 004f9860 (DATA)
// 004f9841: PUSH 0x62f81e
//   XREF to: 0062f81e (DATA)
// 004f9846: PUSH 0x2db8a24
//   XREF to: 02db8a24 (DATA)
// 004f984b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f9850: ADD ESP,0x18
// 004f9853: RET
