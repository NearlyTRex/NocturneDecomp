// Name: core_npc.cpp_staticInit_FUN_00544770
// Address: 00544770
// Address Range: [[00544770, 00544793]]
// Convention: __cdecl
// Signature: CDemonActorType * core_npc.cpp_staticInit_FUN_00544770(void)
// Globals:
//   TerminatedCString s_CNPC_0063e2f4
//   undefined4 g_CNPCClassVersion
//   CDemonActorType g_CCharacterClassInfo
//   CDemonActorType g_CNPCClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_npc_cpp_staticInit_FUN_00544770(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CNPCClassInfo,"CNPC",core_npc_cpp_FUN_005447a0,&g_CNPCClassVersion
                      ,4,&g_CCharacterClassInfo);
  return pCVar1;
}


// Assembly code:
// 00544770: PUSH 0x823c14
//   Label: core_npc.cpp_staticInit_FUN_00544770
//   XREF to: 00823c14 (DATA)
// 00544775: PUSH 0x4
// 00544777: PUSH 0x680b94
//   XREF to: 00680b94 (DATA)
// 0054477c: PUSH 0x5447a0
//   XREF to: 005447a0 (DATA)
// 00544781: PUSH 0x63e2f4
//   XREF to: 0063e2f4 (DATA)
// 00544786: PUSH 0x2fd8ce0
//   XREF to: 02fd8ce0 (DATA)
// 0054478b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00544790: ADD ESP,0x18
// 00544793: RET
