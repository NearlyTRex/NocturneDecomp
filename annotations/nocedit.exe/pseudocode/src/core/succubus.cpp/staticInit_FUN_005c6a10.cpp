// Name: core_succubus.cpp_staticInit_FUN_005c6a10
// Address: 005c6a10
// Address Range: [[005c6a10, 005c6a33]]
// Convention: __cdecl
// Signature: CDemonActorType * core_succubus.cpp_staticInit_FUN_005c6a10(void)
// Globals:
//   TerminatedCString s_CSuccubus_00653fb9
//   int g_CSuccubusClassVersion = 0x1
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CSuccubusClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_succubus_cpp_staticInit_FUN_005c6a10(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSuccubusClassInfo,"CSuccubus",core_succubus_cpp_FUN_005c6a40,
                      &g_CSuccubusClassVersion,1,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 005c6a10: PUSH 0x2cf2bb8
//   Label: core_succubus.cpp_staticInit_FUN_005c6a10
//   XREF to: 02cf2bb8 (DATA)
// 005c6a15: PUSH 0x1
// 005c6a17: PUSH 0x6841d4
//   XREF to: 006841d4 (DATA)
// 005c6a1c: PUSH 0x5c6a40
//   XREF to: 005c6a40 (DATA)
// 005c6a21: PUSH 0x653fb9
//   XREF to: 00653fb9 (DATA)
// 005c6a26: PUSH 0x3f6bb98
//   XREF to: 03f6bb98 (DATA)
// 005c6a2b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005c6a30: ADD ESP,0x18
// 005c6a33: RET
