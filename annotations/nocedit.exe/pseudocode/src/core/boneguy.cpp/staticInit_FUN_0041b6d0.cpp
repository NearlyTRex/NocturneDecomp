// Name: core_boneguy.cpp_staticInit_FUN_0041b6d0
// Address: 0041b6d0
// Address Range: [[0041b6d0, 0041b6f3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_boneguy.cpp_staticInit_FUN_0041b6d0(void)
// Globals:
//   TerminatedCString s_CBoneGuy_00615efd
//   undefined4 g_CBoneGuyClassVersion
//   CDemonActorType g_CBoneGuyClassInfo
//   CDemonActorType g_CEnemyClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_boneguy_cpp_staticInit_FUN_0041b6d0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBoneGuyClassInfo,"CBoneGuy",
                      core_boneguy_cpp_constructor_FUN_0041b820,&g_CBoneGuyClassVersion,5,
                      &g_CEnemyClassInfo);
  return pCVar1;
}


// Assembly code:
// 0041b6d0: PUSH 0x2cf2bb8
//   Label: core_boneguy.cpp_staticInit_FUN_0041b6d0
//   XREF to: 02cf2bb8 (DATA)
// 0041b6d5: PUSH 0x5
// 0041b6d7: PUSH 0x66e594
//   XREF to: 0066e594 (DATA)
// 0041b6dc: PUSH 0x41b820
//   XREF to: 0041b820 (DATA)
// 0041b6e1: PUSH 0x615efd
//   XREF to: 00615efd (DATA)
// 0041b6e6: PUSH 0x822970
//   XREF to: 00822970 (DATA)
// 0041b6eb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0041b6f0: ADD ESP,0x18
// 0041b6f3: RET
