// Name: core_gasmask.cpp_staticInit_FUN_004e5c90
// Address: 004e5c90
// Address Range: [[004e5c90, 004e5cb3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gasmask.cpp_staticInit_FUN_004e5c90(void)
// Globals:
//   TerminatedCString s_CGasMask_0062da8c
//   int g_CGasMaskClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CGasMaskClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_gasmask_cpp_staticInit_FUN_004e5c90(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGasMaskClassInfo,"CGasMask",core_gasmask_cpp_FUN_004e5cc0,
                      &g_CGasMaskClassVersion,1,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004e5c90: PUSH 0x821ff8
//   Label: core_gasmask.cpp_staticInit_FUN_004e5c90
//   XREF to: 00821ff8 (DATA)
// 004e5c95: PUSH 0x1
// 004e5c97: PUSH 0x67b918
//   XREF to: 0067b918 (DATA)
// 004e5c9c: PUSH 0x4e5cc0
//   XREF to: 004e5cc0 (DATA)
// 004e5ca1: PUSH 0x62da8c
//   XREF to: 0062da8c (DATA)
// 004e5ca6: PUSH 0x2d8326c
//   XREF to: 02d8326c (DATA)
// 004e5cab: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004e5cb0: ADD ESP,0x18
// 004e5cb3: RET
