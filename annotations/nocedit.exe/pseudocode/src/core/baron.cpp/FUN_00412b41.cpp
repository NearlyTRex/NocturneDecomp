// Name: core_baron.cpp_FUN_00412b41
// Address: 00412b41
// Address Range: [[00412b41, 00412b73]]
// Convention: __cdecl
// Signature: CDemonActorType * core_baron.cpp_FUN_00412b41(void)

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
