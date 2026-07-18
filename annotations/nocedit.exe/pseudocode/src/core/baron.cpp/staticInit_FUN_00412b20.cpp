// Name: core_baron.cpp_staticInit_FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412b73]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_staticInit_FUN_00412b20(void)

#include "nocturne.h"

void __cdecl core_baron_cpp_staticInit_FUN_00412b20(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBaronClassInfo,"CBaron",core_baron_cpp_factoryFuncBaron_FUN_00412b80,
             &g_CBaronClassVersion,2,&g_CHeroClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_CKeyFramedModelInstanceInstance);
  core_actor_cpp_registerActorClass_FUN_0040c2e0
            (&g_CBaronWeaponClassInfo,"CBaronWeapon",
             core_baron_cpp_factoryFuncBaronWeapon_FUN_00413d00,&g_CBaronWeaponClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
