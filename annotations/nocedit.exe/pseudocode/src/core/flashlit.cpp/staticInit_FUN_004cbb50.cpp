// Name: core_flashlit.cpp_staticInit_FUN_004cbb50
// Address: 004cbb50
// Address Range: [[004cbb50, 004cbb73]]
// Convention: __cdecl
// Signature: CDemonActorType * core_flashlit.cpp_staticInit_FUN_004cbb50(void)
// Globals:
//   TerminatedCString s_CFlashlight_0062a3a8
//   int g_CFlashlightClassVersion = 0x1
//   CDemonActorType g_CFlashlightClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_flashlit_cpp_staticInit_FUN_004cbb50(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CFlashlightClassInfo,"CFlashlight",core_flashlit_cpp_FUN_004cbb80,
                      &g_CFlashlightClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 004cbb50: PUSH 0x3f95d40
//   Label: core_flashlit.cpp_staticInit_FUN_004cbb50
//   XREF to: 03f95d40 (DATA)
// 004cbb55: PUSH 0x1
// 004cbb57: PUSH 0x67b4f8
//   XREF to: 0067b4f8 (DATA)
// 004cbb5c: PUSH 0x4cbb80
//   XREF to: 004cbb80 (DATA)
// 004cbb61: PUSH 0x62a3a8
//   XREF to: 0062a3a8 (DATA)
// 004cbb66: PUSH 0x2d7a778
//   XREF to: 02d7a778 (DATA)
// 004cbb6b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 004cbb70: ADD ESP,0x18
// 004cbb73: RET
