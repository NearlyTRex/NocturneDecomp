// Name: core_baron.cpp_staticInit_FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412b3f]]
// Convention: __cdecl
// Signature: CDemonActorType * core_baron.cpp_staticInit_FUN_00412b20(void)
// Globals:
//   TerminatedCString s_CBaron_00614eb1
//   undefined4 g_CBaronClassVersion
//   CDemonActorType g_CBaronClassInfo
//   CDemonActorType g_CHeroClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0

#include "nocturne.h"

CDemonActorType * __cdecl core_baron_cpp_staticInit_FUN_00412b20(void)

{
  CDemonActorType *pCVar1;
  
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBaronClassInfo,"CBaron",core_baron_cpp_FUN_00412b80,&g_CBaronClassVersion,
             2,&g_CHeroClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_CKeyFramedModelInstanceInstance);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBaronWeaponClassInfo,"CBaronWeapon",
                      core_baron_cpp_constructor_FUN_00413d00,&g_CBaronWeaponClassVersion,1,
                      &g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 00412b20: PUSH 0x2db87d4
//   Label: core_baron.cpp_staticInit_FUN_00412b20
//   XREF to: 02db87d4 (DATA)
// 00412b25: PUSH 0x2
// 00412b27: PUSH 0x66e45c
//   XREF to: 0066e45c (DATA)
// 00412b2c: PUSH 0x412b80
//   XREF to: 00412b80 (DATA)
// 00412b31: PUSH 0x614eb1
//   XREF to: 00614eb1 (DATA)
// 00412b36: PUSH 0x8224e0
//   XREF to: 008224e0 (DATA)
// 00412b3b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
