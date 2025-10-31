// Name: core_baron.cpp_FUN_00412b41
// Address: 00412b41
// Address Range: [[00412b41, 00412b73]]
// Convention: __cdecl
// Signature: CDemonActorType * core_baron.cpp_FUN_00412b41(void)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 0048a0e2 [DATA]
// Globals:
//   TerminatedCString s_CBaronWeapon_00614eb8
//   int g_CBaronWeaponClassVersion = 0x1
//   CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance
//   CDemonActorType g_CBaronWeaponClassInfo
//   CDemonActorType g_CWeaponClassInfo
// Function calls:
//   core_actor.cpp_registerActorClass_FUN_0040c2e0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0

#include "nocturne.h"

CDemonActorType * __cdecl core_baron_cpp_FUN_00412b41(void)

{
  CDemonActorType *pCVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_CKeyFramedModelInstanceInstance);
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CBaronWeaponClassInfo,"CBaronWeapon",
                      core_baron_cpp_constructor_FUN_00413d00,&g_CBaronWeaponClassVersion,1,
                      &g_CWeaponClassInfo);
  return pCVar1;
}


// Assembly code:
// 00412b41: LES EBX,[EAX]
//   Label: core_baron.cpp_FUN_00412b41
// 00412b43: PUSH 0x82251c
//   XREF to: 0082251c (DATA)
// 00412b48: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 00412b4d: ADD ESP,0x4
// 00412b50: PUSH 0x3f95d40
//   XREF to: 03f95d40 (DATA)
// 00412b55: PUSH 0x1
// 00412b57: PUSH 0x66e478
//   XREF to: 0066e478 (DATA)
// 00412b5c: PUSH 0x413d00
//   XREF to: 00413d00 (DATA)
// 00412b61: PUSH 0x614eb8
//   XREF to: 00614eb8 (DATA)
// 00412b66: PUSH 0x822698
//   XREF to: 00822698 (DATA)
// 00412b6b: CALL core_actor.cpp_registerActorClass_FUN_0040c2e0
//   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)
// 00412b70: ADD ESP,0x18
// 00412b73: RET
