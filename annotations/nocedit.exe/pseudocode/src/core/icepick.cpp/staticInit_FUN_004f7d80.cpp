// Name: core_icepick.cpp_staticInit_FUN_004f7d80
// Address: 004f7d80
// Address Range: [[004f7d80, 004f7da3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_icepick.cpp_staticInit_FUN_004f7d80(void)
// Globals:
//   TerminatedCString s_CIcePick_0062f58b
//   int g_CIcePickClassVersion = 0x1
//   CDemonActorType g_CHeroClassInfo
//   CDemonActorType g_CIcePickClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_icepick_cpp_staticInit_FUN_004f7d80(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CIcePickClassInfo,"CIcePick",core_icepick_cpp_FUN_004f7db0,
                      &g_CIcePickClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f7d80: PUSH 0x2db87d4
//   Label: core_icepick.cpp_staticInit_FUN_004f7d80
//   XREF to: 02db87d4 (DATA)
// 004f7d85: PUSH 0x1
// 004f7d87: PUSH 0x67cca8
//   XREF to: 0067cca8 (DATA)
// 004f7d8c: PUSH 0x4f7db0
//   XREF to: 004f7db0 (DATA)
// 004f7d91: PUSH 0x62f58b
//   XREF to: 0062f58b (DATA)
// 004f7d96: PUSH 0x2db89b8
//   XREF to: 02db89b8 (DATA)
// 004f7d9b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f7da0: ADD ESP,0x18
// 004f7da3: RET
