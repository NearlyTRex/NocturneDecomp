// Name: core_baron.cpp_staticInit_FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412b3f]]
// Convention: __cdecl
// Signature: CDemonActorType * core_baron.cpp_staticInit_FUN_00412b20(void)

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
