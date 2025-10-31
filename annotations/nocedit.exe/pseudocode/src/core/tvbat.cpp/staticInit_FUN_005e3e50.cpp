// Name: core_tvbat.cpp_staticInit_FUN_005e3e50
// Address: 005e3e50
// Address Range: [[005e3e50, 005e3e73]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tvbat.cpp_staticInit_FUN_005e3e50(void)
// Globals:
//   TerminatedCString s_CTVBat_00656882
//   int g_CTVBatClassVersion = 0x5
//   CDemonActorType g_CEnemyClassInfo
//   CDemonActorType g_CTVBatClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_tvbat_cpp_staticInit_FUN_005e3e50(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTVBatClassInfo,"CTVBat",core_tvbat_cpp_FUN_005e3e80,
                      &g_CTVBatClassVersion,5,&g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 005e3e50: PUSH 0x2cf2bb8
//   Label: core_tvbat.cpp_staticInit_FUN_005e3e50
//   XREF to: 02cf2bb8 (DATA)
// 005e3e55: PUSH 0x5
// 005e3e57: PUSH 0x684450
//   XREF to: 00684450 (DATA)
// 005e3e5c: PUSH 0x5e3e80
//   XREF to: 005e3e80 (DATA)
// 005e3e61: PUSH 0x656882
//   XREF to: 00656882 (DATA)
// 005e3e66: PUSH 0x3f874e0
//   XREF to: 03f874e0 (DATA)
// 005e3e6b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005e3e70: ADD ESP,0x18
// 005e3e73: RET
