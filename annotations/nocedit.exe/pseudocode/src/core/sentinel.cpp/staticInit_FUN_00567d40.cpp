// Name: core_sentinel.cpp_staticInit_FUN_00567d40
// Address: 00567d40
// Address Range: [[00567d40, 00567d63]]
// Convention: __cdecl
// Signature: CDemonActorType * core_sentinel.cpp_staticInit_FUN_00567d40(void)
// Globals:
//   TerminatedCString s_CSentinel_006456fa
//   int g_CSentinelClassVersion = 0x2
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CSentinelClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_sentinel_cpp_staticInit_FUN_00567d40(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CSentinelClassInfo,"CSentinel",core_sentinel_cpp_FUN_00567d70,
                      &g_CSentinelClassVersion,2,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 00567d40: PUSH 0x2cf2bb8
//   Label: core_sentinel.cpp_staticInit_FUN_00567d40
//   XREF to: 02cf2bb8 (DATA)
// 00567d45: PUSH 0x2
// 00567d47: PUSH 0x681070
//   XREF to: 00681070 (DATA)
// 00567d4c: PUSH 0x567d70
//   XREF to: 00567d70 (DATA)
// 00567d51: PUSH 0x6456fa
//   XREF to: 006456fa (DATA)
// 00567d56: PUSH 0x311423c
//   XREF to: 0311423c (DATA)
// 00567d5b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00567d60: ADD ESP,0x18
// 00567d63: RET
