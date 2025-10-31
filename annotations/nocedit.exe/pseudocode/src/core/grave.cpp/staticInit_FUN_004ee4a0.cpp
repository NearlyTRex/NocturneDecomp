// Name: core_grave.cpp_staticInit_FUN_004ee4a0
// Address: 004ee4a0
// Address Range: [[004ee4a0, 004ee4c3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_grave.cpp_staticInit_FUN_004ee4a0(void)
// Globals:
//   TerminatedCString s_CGrave_0062e468
//   int g_CGraveClassVersion = 0x4
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CGraveClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_grave_cpp_staticInit_FUN_004ee4a0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGraveClassInfo,"CGrave",core_grave_cpp_FUN_004ee4d0,
                      &g_CGraveClassVersion,4,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004ee4a0: PUSH 0x821ff8
//   Label: core_grave.cpp_staticInit_FUN_004ee4a0
//   XREF to: 00821ff8 (DATA)
// 004ee4a5: PUSH 0x4
// 004ee4a7: PUSH 0x67cba4
//   XREF to: 0067cba4 (DATA)
// 004ee4ac: PUSH 0x4ee4d0
//   XREF to: 004ee4d0 (DATA)
// 004ee4b1: PUSH 0x62e468
//   XREF to: 0062e468 (DATA)
// 004ee4b6: PUSH 0x2db862c
//   XREF to: 02db862c (DATA)
// 004ee4bb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004ee4c0: ADD ESP,0x18
// 004ee4c3: RET
