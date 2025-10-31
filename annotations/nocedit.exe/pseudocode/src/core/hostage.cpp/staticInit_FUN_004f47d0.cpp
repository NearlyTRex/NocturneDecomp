// Name: core_hostage.cpp_staticInit_FUN_004f47d0
// Address: 004f47d0
// Address Range: [[004f47d0, 004f47f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hostage.cpp_staticInit_FUN_004f47d0(void)
// Globals:
//   TerminatedCString s_CHostage_0062ee12
//   undefined4 g_CHostageClassVersion
//   CDemonActorType g_CHostageClassInfo
//   CDemonActorType g_CNPCClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_hostage_cpp_staticInit_FUN_004f47d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHostageClassInfo,"CHostage",core_hostage_cpp_FUN_004f4800,
                      &g_CHostageClassVersion,0xc,&g_CNPCClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f47d0: PUSH 0x2fd8ce0
//   Label: core_hostage.cpp_staticInit_FUN_004f47d0
//   XREF to: 02fd8ce0 (DATA)
// 004f47d5: PUSH 0xc
// 004f47d7: PUSH 0x67cc5c
//   XREF to: 0067cc5c (DATA)
// 004f47dc: PUSH 0x4f4800
//   XREF to: 004f4800 (DATA)
// 004f47e1: PUSH 0x62ee12
//   XREF to: 0062ee12 (DATA)
// 004f47e6: PUSH 0x2db888c
//   XREF to: 02db888c (DATA)
// 004f47eb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f47f0: ADD ESP,0x18
// 004f47f3: RET
