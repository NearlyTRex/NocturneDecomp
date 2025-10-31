// Name: core_bat.cpp_staticInit_FUN_004146c0
// Address: 004146c0
// Address Range: [[004146c0, 004146e3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_bat.cpp_staticInit_FUN_004146c0(void)
// Globals:
//   TerminatedCString s_CBat_006152c6
//   undefined4 g_CBatClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CBatClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_bat_cpp_staticInit_FUN_004146c0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBatClassInfo,"CBat",core_bat_cpp_FUN_00414790,&g_CBatClassVersion
                      ,4,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 004146c0: PUSH 0x821ff8
//   Label: core_bat.cpp_staticInit_FUN_004146c0
//   XREF to: 00821ff8 (DATA)
// 004146c5: PUSH 0x4
// 004146c7: PUSH 0x66e4b4
//   XREF to: 0066e4b4 (DATA)
// 004146cc: PUSH 0x414790
//   XREF to: 00414790 (DATA)
// 004146d1: PUSH 0x6152c6
//   XREF to: 006152c6 (DATA)
// 004146d6: PUSH 0x822710
//   XREF to: 00822710 (DATA)
// 004146db: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004146e0: ADD ESP,0x18
// 004146e3: RET
