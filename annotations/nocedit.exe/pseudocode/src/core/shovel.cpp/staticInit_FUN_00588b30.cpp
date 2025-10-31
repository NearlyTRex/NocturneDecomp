// Name: core_shovel.cpp_staticInit_FUN_00588b30
// Address: 00588b30
// Address Range: [[00588b30, 00588b53]]
// Convention: __cdecl
// Signature: CDemonActorType * core_shovel.cpp_staticInit_FUN_00588b30(void)
// Globals:
//   TerminatedCString s_CShovel_00649b7f
//   int g_CShovelClassVersion = 0x1
//   CDemonActorType g_CShovelClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_shovel_cpp_staticInit_FUN_00588b30(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CShovelClassInfo,"CShovel",core_shovel_cpp_FUN_00588b60,
                      &g_CShovelClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 00588b30: PUSH 0x3f95d40
//   Label: core_shovel.cpp_staticInit_FUN_00588b30
//   XREF to: 03f95d40 (DATA)
// 00588b35: PUSH 0x1
// 00588b37: PUSH 0x681828
//   XREF to: 00681828 (DATA)
// 00588b3c: PUSH 0x588b60
//   XREF to: 00588b60 (DATA)
// 00588b41: PUSH 0x649b7f
//   XREF to: 00649b7f (DATA)
// 00588b46: PUSH 0x36597ac
//   XREF to: 036597ac (DATA)
// 00588b4b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00588b50: ADD ESP,0x18
// 00588b53: RET
