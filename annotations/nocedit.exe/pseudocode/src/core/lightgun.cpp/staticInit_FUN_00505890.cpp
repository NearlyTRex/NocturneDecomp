// Name: core_lightgun.cpp_staticInit_FUN_00505890
// Address: 00505890
// Address Range: [[00505890, 005058b3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_lightgun.cpp_staticInit_FUN_00505890(void)
// Globals:
//   TerminatedCString s_CLightGun_00631436
//   int g_CLightGunClassVersion = 0x1
//   CDemonActorType g_CLightGunClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_lightgun_cpp_staticInit_FUN_00505890(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CLightGunClassInfo,"CLightGun",core_lightgun_cpp_FUN_005058c0,
                      &g_CLightGunClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 00505890: PUSH 0x3f95d40
//   Label: core_lightgun.cpp_staticInit_FUN_00505890
//   XREF to: 03f95d40 (DATA)
// 00505895: PUSH 0x1
// 00505897: PUSH 0x67cfd8
//   XREF to: 0067cfd8 (DATA)
// 0050589c: PUSH 0x5058c0
//   XREF to: 005058c0 (DATA)
// 005058a1: PUSH 0x631436
//   XREF to: 00631436 (DATA)
// 005058a6: PUSH 0x2dd30b8
//   XREF to: 02dd30b8 (DATA)
// 005058ab: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 005058b0: ADD ESP,0x18
// 005058b3: RET
