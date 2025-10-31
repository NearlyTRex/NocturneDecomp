// Name: core_svetlana.cpp_staticInit_FUN_005d87e0
// Address: 005d87e0
// Address Range: [[005d87e0, 005d8803]]
// Convention: __cdecl
// Signature: CDemonActorType * core_svetlana.cpp_staticInit_FUN_005d87e0(void)
// Globals:
//   TerminatedCString s_CSvetlana_006548da
//   int g_CSvetlanaClassVersion = 0x1
//   CDemonActorType g_CHeroClassInfo
//   CDemonActorType g_CSvetlanaClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_svetlana_cpp_staticInit_FUN_005d87e0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSvetlanaClassInfo,"CSvetlana",core_svetlana_cpp_FUN_005d8810,
                      &g_CSvetlanaClassVersion,1,&g_CHeroClassInfo);
  return pCVar1;
}


// Assembly code:
// 005d87e0: PUSH 0x2db87d4
//   Label: core_svetlana.cpp_staticInit_FUN_005d87e0
//   XREF to: 02db87d4 (DATA)
// 005d87e5: PUSH 0x1
// 005d87e7: PUSH 0x684238
//   XREF to: 00684238 (DATA)
// 005d87ec: PUSH 0x5d8810
//   XREF to: 005d8810 (DATA)
// 005d87f1: PUSH 0x6548da
//   XREF to: 006548da (DATA)
// 005d87f6: PUSH 0x3f6cbdc
//   XREF to: 03f6cbdc (DATA)
// 005d87fb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005d8800: ADD ESP,0x18
// 005d8803: RET
