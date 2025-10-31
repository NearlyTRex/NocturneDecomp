// Name: core_lever.cpp_staticInit_FUN_00504760
// Address: 00504760
// Address Range: [[00504760, 00504783]]
// Convention: __cdecl
// Signature: CDemonActorType * core_lever.cpp_staticInit_FUN_00504760(void)
// Globals:
//   TerminatedCString s_CLever_00631058
//   undefined4 g_CLeverClassVersion
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CLeverClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_lever_cpp_staticInit_FUN_00504760(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLeverClassInfo,"CLever",core_lever_cpp_FUN_00504790,
                      &g_CLeverClassVersion,8,&g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 00504760: PUSH 0x821ff8
//   Label: core_lever.cpp_staticInit_FUN_00504760
//   XREF to: 00821ff8 (DATA)
// 00504765: PUSH 0x8
// 00504767: PUSH 0x67cfb4
//   XREF to: 0067cfb4 (DATA)
// 0050476c: PUSH 0x504790
//   XREF to: 00504790 (DATA)
// 00504771: PUSH 0x631058
//   XREF to: 00631058 (DATA)
// 00504776: PUSH 0x2dd3058
//   XREF to: 02dd3058 (DATA)
// 0050477b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00504780: ADD ESP,0x18
// 00504783: RET
