// Name: core_crossbow.cpp_staticInit_FUN_00448c00
// Address: 00448c00
// Address Range: [[00448c00, 00448c23]]
// Convention: __cdecl
// Signature: CDemonActorType * core_crossbow.cpp_staticInit_FUN_00448c00(void)
// Globals:
//   TerminatedCString s_CCrossbow_00619b5a
//   int g_CCrossbowClassVersion = 0x1
//   CDemonActorType g_CCrossbowClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_crossbow_cpp_staticInit_FUN_00448c00(void)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CCrossbowClassInfo,"CCrossbow",core_crossbow_cpp_FUN_00448c30,
                      &g_CCrossbowClassVersion,1,&g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 00448c00: PUSH 0x3f95d40
//   Label: core_crossbow.cpp_staticInit_FUN_00448c00
//   XREF to: 03f95d40 (DATA)
// 00448c05: PUSH 0x1
// 00448c07: PUSH 0x66ec8c
//   XREF to: 0066ec8c (DATA)
// 00448c0c: PUSH 0x448c30
//   XREF to: 00448c30 (DATA)
// 00448c11: PUSH 0x619b5a
//   XREF to: 00619b5a (DATA)
// 00448c16: PUSH 0x887980
//   XREF to: 00887980 (DATA)
// 00448c1b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00448c20: ADD ESP,0x18
// 00448c23: RET
