// Name: core_dest.cpp_staticInit_FUN_0046f890
// Address: 0046f890
// Address Range: [[0046f890, 0046f8b3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_dest.cpp_staticInit_FUN_0046f890(void)
// Globals:
//   TerminatedCString s_CActorDestination_0061e37a
//   int g_CActorDestinationClassVersion = 0x4
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CActorDestinationClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_dest_cpp_staticInit_FUN_0046f890(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CActorDestinationClassInfo,"CActorDestination",
                      core_dest_cpp_FUN_0046f8c0,&g_CActorDestinationClassVersion,4,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 0046f890: PUSH 0x821ff8
//   Label: core_dest.cpp_staticInit_FUN_0046f890
//   XREF to: 00821ff8 (DATA)
// 0046f895: PUSH 0x4
// 0046f897: PUSH 0x66ef3c
//   XREF to: 0066ef3c (DATA)
// 0046f89c: PUSH 0x46f8c0
//   XREF to: 0046f8c0 (DATA)
// 0046f8a1: PUSH 0x61e37a
//   XREF to: 0061e37a (DATA)
// 0046f8a6: PUSH 0x20a483c
//   XREF to: 020a483c (DATA)
// 0046f8ab: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0046f8b0: ADD ESP,0x18
// 0046f8b3: RET
