// Name: core_haystack.cpp_staticInit_FUN_004f0ba0
// Address: 004f0ba0
// Address Range: [[004f0ba0, 004f0bc3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_haystack.cpp_staticInit_FUN_004f0ba0(void)
// Globals:
//   TerminatedCString s_CHaystack_0062e7db
//   int g_CHaystackClassVersion = 0x1
//   CDemonActorType g_CHaystackClassInfo
//   CDemonActorType g_CHeroClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_haystack_cpp_staticInit_FUN_004f0ba0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHaystackClassInfo,"CHaystack",core_haystack_cpp_FUN_004f0bd0,
                      &g_CHaystackClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f0ba0: PUSH 0x2db87d4
//   Label: core_haystack.cpp_staticInit_FUN_004f0ba0
//   XREF to: 02db87d4 (DATA)
// 004f0ba5: PUSH 0x1
// 004f0ba7: PUSH 0x67cbec
//   XREF to: 0067cbec (DATA)
// 004f0bac: PUSH 0x4f0bd0
//   XREF to: 004f0bd0 (DATA)
// 004f0bb1: PUSH 0x62e7db
//   XREF to: 0062e7db (DATA)
// 004f0bb6: PUSH 0x2db8744
//   XREF to: 02db8744 (DATA)
// 004f0bbb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f0bc0: ADD ESP,0x18
// 004f0bc3: RET
