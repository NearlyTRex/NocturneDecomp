// Name: core_colonel.cpp_staticInit_FUN_0043f770
// Address: 0043f770
// Address Range: [[0043f770, 0043f793]]
// Convention: __cdecl
// Signature: CDemonActorType * core_colonel.cpp_staticInit_FUN_0043f770(void)
// Globals:
//   TerminatedCString s_CColonel_00618b71
//   int g_CColonelClassVersion = 0x1
//   CDemonActorType g_CColonelClassInfo
//   CDemonActorType g_CHeroClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_colonel_cpp_staticInit_FUN_0043f770(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CColonelClassInfo,"CColonel",core_colonel_cpp_FUN_0043f7a0,
                      &g_CColonelClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 0043f770: PUSH 0x2db87d4
//   Label: core_colonel.cpp_staticInit_FUN_0043f770
//   XREF to: 02db87d4 (DATA)
// 0043f775: PUSH 0x1
// 0043f777: PUSH 0x66e8bc
//   XREF to: 0066e8bc (DATA)
// 0043f77c: PUSH 0x43f7a0
//   XREF to: 0043f7a0 (DATA)
// 0043f781: PUSH 0x618b71
//   XREF to: 00618b71 (DATA)
// 0043f786: PUSH 0x83b168
//   XREF to: 0083b168 (DATA)
// 0043f78b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0043f790: ADD ESP,0x18
// 0043f793: RET
