// Name: core_hiram.cpp_staticInit_FUN_004f4380
// Address: 004f4380
// Address Range: [[004f4380, 004f43a3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_hiram.cpp_staticInit_FUN_004f4380(void)
// Globals:
//   TerminatedCString s_CHiram_0062edcf
//   int g_CHiramClassVersion = 0x1
//   CDemonActorType g_CHiramClassInfo
//   CDemonActorType g_CNPCClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_hiram_cpp_staticInit_FUN_004f4380(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CHiramClassInfo,"CHiram",core_hiram_cpp_FUN_004f43b0,
                      &g_CHiramClassVersion,1,&g_CNPCClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f4380: PUSH 0x2fd8ce0
//   Label: core_hiram.cpp_staticInit_FUN_004f4380
//   XREF to: 02fd8ce0 (DATA)
// 004f4385: PUSH 0x1
// 004f4387: PUSH 0x67cc3c
//   XREF to: 0067cc3c (DATA)
// 004f438c: PUSH 0x4f43b0
//   XREF to: 004f43b0 (DATA)
// 004f4391: PUSH 0x62edcf
//   XREF to: 0062edcf (DATA)
// 004f4396: PUSH 0x2db884c
//   XREF to: 02db884c (DATA)
// 004f439b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f43a0: ADD ESP,0x18
// 004f43a3: RET
