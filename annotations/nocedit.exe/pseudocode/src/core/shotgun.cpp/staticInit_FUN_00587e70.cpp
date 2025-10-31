// Name: core_shotgun.cpp_staticInit_FUN_00587e70
// Address: 00587e70
// Address Range: [[00587e70, 00587e93]]
// Convention: __cdecl
// Signature: CDemonActorType * core_shotgun.cpp_staticInit_FUN_00587e70(void)
// Globals:
//   TerminatedCString s_CShotgun_00649adf
//   int g_CShotgunClassVersion = 0x1
//   CDemonActorType g_CShotgunClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_shotgun_cpp_staticInit_FUN_00587e70(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CShotgunClassInfo,"CShotgun",core_shotgun_cpp_FUN_00587ea0,
                      &g_CShotgunClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 00587e70: PUSH 0x3f95d40
//   Label: core_shotgun.cpp_staticInit_FUN_00587e70
//   XREF to: 03f95d40 (DATA)
// 00587e75: PUSH 0x1
// 00587e77: PUSH 0x681814
//   XREF to: 00681814 (DATA)
// 00587e7c: PUSH 0x587ea0
//   XREF to: 00587ea0 (DATA)
// 00587e81: PUSH 0x649adf
//   XREF to: 00649adf (DATA)
// 00587e86: PUSH 0x3659770
//   XREF to: 03659770 (DATA)
// 00587e8b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00587e90: ADD ESP,0x18
// 00587e93: RET
