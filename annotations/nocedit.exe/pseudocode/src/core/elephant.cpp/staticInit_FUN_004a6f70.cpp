// Name: core_elephant.cpp_staticInit_FUN_004a6f70
// Address: 004a6f70
// Address Range: [[004a6f70, 004a6f93]]
// Convention: __cdecl
// Signature: void core_elephant.cpp_staticInit_FUN_004a6f70(void)
// Globals:
//   TerminatedCString s_CElephantGun_00623fa2
//   int g_CElephantGunClassVersion = 0x1
//   CDemonActorType g_CElephantGunClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_elephant_cpp_staticInit_FUN_004a6f70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CElephantGunClassInfo,"CElephantGun",core_elephant_cpp_FUN_004a6fa0,
             &g_CElephantGunClassVersion,1,&g_CWeaponClassInfo);
  return;
}


// Assembly code:
// 004a6f70: PUSH 0x3f95d40
//   Label: core_elephant.cpp_staticInit_FUN_004a6f70
//   XREF to: 03f95d40 (DATA)
// 004a6f75: PUSH 0x1
// 004a6f77: PUSH 0x6792d4
//   XREF to: 006792d4 (DATA)
// 004a6f7c: PUSH 0x4a6fa0
//   XREF to: 004a6fa0 (DATA)
// 004a6f81: PUSH 0x623fa2
//   XREF to: 00623fa2 (DATA)
// 004a6f86: PUSH 0x2cf2b20
//   XREF to: 02cf2b20 (DATA)
// 004a6f8b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004a6f90: ADD ESP,0x18
// 004a6f93: RET
