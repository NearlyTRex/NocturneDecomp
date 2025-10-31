// Name: core_flamecan.cpp_staticInit_FUN_004cb0f0
// Address: 004cb0f0
// Address Range: [[004cb0f0, 004cb113]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flamecan.cpp_staticInit_FUN_004cb0f0(void)
// Globals:
//   TerminatedCString s_CFlameCan_0062a2a8
//   int g_CFlameCanClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CFlameCanClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_flamecan_cpp_staticInit_FUN_004cb0f0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFlameCanClassInfo,"CFlameCan",core_flamecan_cpp_FUN_004cb120,
                      &g_CFlameCanClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004cb0f0: PUSH 0x821ff8
//   Label: core_flamecan.cpp_staticInit_FUN_004cb0f0
//   XREF to: 00821ff8 (DATA)
// 004cb0f5: PUSH 0x1
// 004cb0f7: PUSH 0x67b4c4
//   XREF to: 0067b4c4 (DATA)
// 004cb0fc: PUSH 0x4cb120
//   XREF to: 004cb120 (DATA)
// 004cb101: PUSH 0x62a2a8
//   XREF to: 0062a2a8 (DATA)
// 004cb106: PUSH 0x2d7a700
//   XREF to: 02d7a700 (DATA)
// 004cb10b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004cb110: ADD ESP,0x18
// 004cb113: RET
