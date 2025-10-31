// Name: core_melee.cpp_staticInit_FUN_0050e760
// Address: 0050e760
// Address Range: [[0050e760, 0050e783]]
// Convention: __cdecl
// Signature: CDemonActorType * core_melee.cpp_staticInit_FUN_0050e760(void)
// Globals:
//   TerminatedCString s_CMelee_00635bbd
//   undefined4 g_CMeleeClassVersion
//   CDemonActorType g_CMeleeClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_melee_cpp_staticInit_FUN_0050e760(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CMeleeClassInfo,"CMelee",core_melee_cpp_FUN_0050e790,
                      &g_CMeleeClassVersion,7,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 0050e760: PUSH 0x3f95d40
//   Label: core_melee.cpp_staticInit_FUN_0050e760
//   XREF to: 03f95d40 (DATA)
// 0050e765: PUSH 0x7
// 0050e767: PUSH 0x67d1c0
//   XREF to: 0067d1c0 (DATA)
// 0050e76c: PUSH 0x50e790
//   XREF to: 0050e790 (DATA)
// 0050e771: PUSH 0x635bbd
//   XREF to: 00635bbd (DATA)
// 0050e776: PUSH 0x2f0d8f0
//   XREF to: 02f0d8f0 (DATA)
// 0050e77b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 0050e780: ADD ESP,0x18
// 0050e783: RET
