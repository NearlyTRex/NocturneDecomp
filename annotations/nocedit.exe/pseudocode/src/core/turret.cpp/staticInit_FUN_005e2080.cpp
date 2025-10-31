// Name: core_turret.cpp_staticInit_FUN_005e2080
// Address: 005e2080
// Address Range: [[005e2080, 005e20a3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_turret.cpp_staticInit_FUN_005e2080(void)
// Globals:
//   TerminatedCString s_CTurret_006565a8
//   int g_CTurretClassVersion = 0x2
//   CDemonActorType g_CTurretClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_turret_cpp_staticInit_FUN_005e2080(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CTurretClassInfo,"CTurret",core_turret_cpp_FUN_005e20b0,
                      &g_CTurretClassVersion,2,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 005e2080: PUSH 0x3f95d40
//   Label: core_turret.cpp_staticInit_FUN_005e2080
//   XREF to: 03f95d40 (DATA)
// 005e2085: PUSH 0x2
// 005e2087: PUSH 0x68443c
//   XREF to: 0068443c (DATA)
// 005e208c: PUSH 0x5e20b0
//   XREF to: 005e20b0 (DATA)
// 005e2091: PUSH 0x6565a8
//   XREF to: 006565a8 (DATA)
// 005e2096: PUSH 0x3f874a4
//   XREF to: 03f874a4 (DATA)
// 005e209b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005e20a0: ADD ESP,0x18
// 005e20a3: RET
