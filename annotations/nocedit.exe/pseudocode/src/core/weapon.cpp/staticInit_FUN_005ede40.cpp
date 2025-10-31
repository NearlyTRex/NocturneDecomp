// Name: core_weapon.cpp_staticInit_FUN_005ede40
// Address: 005ede40
// Address Range: [[005ede40, 005ede60]]
// Convention: __cdecl
// Signature: CDemonActorType * core_weapon.cpp_staticInit_FUN_005ede40(void)
// Globals:
//   TerminatedCString s_CWeapon_00657aa9
//   int g_CWeaponClassVersion = 0x7
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_weapon_cpp_staticInit_FUN_005ede40(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CWeaponClassInfo,"CWeapon",(void *)0x0,&g_CWeaponClassVersion,7,
                      &g_CDemonActorClassInfo);
  return pCVar1;
}


// Assembly code:
// 005ede40: PUSH 0x821ff8
//   Label: core_weapon.cpp_staticInit_FUN_005ede40
//   XREF to: 00821ff8 (DATA)
// 005ede45: PUSH 0x7
// 005ede47: PUSH 0x6848d4
//   XREF to: 006848d4 (DATA)
// 005ede4c: PUSH 0x0
// 005ede4e: PUSH 0x657aa9
//   XREF to: 00657aa9 (DATA)
// 005ede53: PUSH 0x3f95d40
//   XREF to: 03f95d40 (DATA)
// 005ede58: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005ede5d: ADD ESP,0x18
// 005ede60: RET
