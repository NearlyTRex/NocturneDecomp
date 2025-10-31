// Name: core_gun.cpp_staticInit_FUN_004f0280
// Address: 004f0280
// Address Range: [[004f0280, 004f02a3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gun.cpp_staticInit_FUN_004f0280(void)
// Globals:
//   TerminatedCString s_CGun_0062e783
//   int g_CGunClassVersion = 0x1
//   CDemonActorType g_CGunClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_gun_cpp_staticInit_FUN_004f0280(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGunClassInfo,"CGun",core_gun_cpp_FUN_004f02b0,&g_CGunClassVersion
                      ,1,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 004f0280: PUSH 0x3f95d40
//   Label: core_gun.cpp_staticInit_FUN_004f0280
//   XREF to: 03f95d40 (DATA)
// 004f0285: PUSH 0x1
// 004f0287: PUSH 0x67cbdc
//   XREF to: 0067cbdc (DATA)
// 004f028c: PUSH 0x4f02b0
//   XREF to: 004f02b0 (DATA)
// 004f0291: PUSH 0x62e783
//   XREF to: 0062e783 (DATA)
// 004f0296: PUSH 0x2db86c4
//   XREF to: 02db86c4 (DATA)
// 004f029b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004f02a0: ADD ESP,0x18
// 004f02a3: RET
