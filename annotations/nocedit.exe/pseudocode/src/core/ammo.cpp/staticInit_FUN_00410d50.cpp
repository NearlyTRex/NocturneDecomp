// Name: core_ammo.cpp_staticInit_FUN_00410d50
// Address: 00410d50
// Address Range: [[00410d50, 00410d73]]
// Convention: __cdecl
// Signature: void core_ammo.cpp_staticInit_FUN_00410d50(void)
// Globals:
//   TerminatedCString s_CAmmo_0061491d
//   int g_CAmmoClassVersion = 0x1
//   CDemonActorType g_CDemonActorClassInfo
//   CDemonActorType g_CAmmoClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

void __cdecl core_ammo_cpp_staticInit_FUN_00410d50(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CAmmoClassInfo,"CAmmo",core_ammo_cpp_CAmmo_factoryFunc_FUN_00410d80,
             &g_CAmmoClassVersion,1,&g_CDemonActorClassInfo);
  return;
}


// Assembly code:
// 00410d50: PUSH 0x821ff8
//   Label: core_ammo.cpp_staticInit_FUN_00410d50
//   XREF to: 00821ff8 (DATA)
// 00410d55: PUSH 0x1
// 00410d57: PUSH 0x66e3c0
//   XREF to: 0066e3c0 (DATA)
// 00410d5c: PUSH 0x410d80
//   XREF to: 00410d80 (DATA)
// 00410d61: PUSH 0x61491d
//   XREF to: 0061491d (DATA)
// 00410d66: PUSH 0x82236c
//   XREF to: 0082236c (DATA)
// 00410d6b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00410d70: ADD ESP,0x18
// 00410d73: RET
