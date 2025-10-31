// Name: core_tommygun.cpp_staticInit_FUN_005dda20
// Address: 005dda20
// Address Range: [[005dda20, 005dda43]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tommygun.cpp_staticInit_FUN_005dda20(void)
// Globals:
//   TerminatedCString s_CTommyGun_00655481
//   int g_CTommyGunClassVersion = 0x1
//   CDemonActorType g_CTommyGunClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_tommygun_cpp_staticInit_FUN_005dda20(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTommyGunClassInfo,"CTommyGun",core_tommygun_cpp_FUN_005dda50,
                      &g_CTommyGunClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 005dda20: PUSH 0x3f95d40
//   Label: core_tommygun.cpp_staticInit_FUN_005dda20
//   XREF to: 03f95d40 (DATA)
// 005dda25: PUSH 0x1
// 005dda27: PUSH 0x68430c
//   XREF to: 0068430c (DATA)
// 005dda2c: PUSH 0x5dda50
//   XREF to: 005dda50 (DATA)
// 005dda31: PUSH 0x655481
//   XREF to: 00655481 (DATA)
// 005dda36: PUSH 0x3f873a4
//   XREF to: 03f873a4 (DATA)
// 005dda3b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005dda40: ADD ESP,0x18
// 005dda43: RET
