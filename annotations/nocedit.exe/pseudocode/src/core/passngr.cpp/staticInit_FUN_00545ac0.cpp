// Name: core_passngr.cpp_staticInit_FUN_00545ac0
// Address: 00545ac0
// Address Range: [[00545ac0, 00545ae3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_passngr.cpp_staticInit_FUN_00545ac0(void)
// Globals:
//   TerminatedCString s_CPassenger_0063e765
//   undefined4 g_CPassengerClassVersion
//   CDemonActorType g_CNPCClassInfo
//   CDemonActorType g_CPassengerClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_passngr_cpp_staticInit_FUN_00545ac0(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CPassengerClassInfo,"CPassenger",core_passngr_cpp_FUN_00545af0,
                      &g_CPassengerClassVersion,6,&g_CNPCClassInfo);
  return pCVar1;
}


// Assembly code:
// 00545ac0: PUSH 0x2fd8ce0
//   Label: core_passngr.cpp_staticInit_FUN_00545ac0
//   XREF to: 02fd8ce0 (DATA)
// 00545ac5: PUSH 0x6
// 00545ac7: PUSH 0x680b98
//   XREF to: 00680b98 (DATA)
// 00545acc: PUSH 0x545af0
//   XREF to: 00545af0 (DATA)
// 00545ad1: PUSH 0x63e765
//   XREF to: 0063e765 (DATA)
// 00545ad6: PUSH 0x2fd9020
//   XREF to: 02fd9020 (DATA)
// 00545adb: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00545ae0: ADD ESP,0x18
// 00545ae3: RET
