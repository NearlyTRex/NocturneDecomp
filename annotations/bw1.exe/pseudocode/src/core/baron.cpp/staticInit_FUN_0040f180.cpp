// Name: core_baron.cpp_staticInit_FUN_0040f180
// Address: 0040f180
// Address Range: [[0040f180, 0040f1d3]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_staticInit_FUN_0040f180(void)

#include "nocturne.h"

void __cdecl core_baron_cpp_staticInit_FUN_0040f180(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CBaronClassInfo,"CBaron",core_baron_cpp_factoryFuncBaron_FUN_0040f1e0,
             &g_CBaronClassVersion,2,&g_CHeroClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
            ((CKeyFramedModelInstance *)&DAT_007c351c);
  core_actor_cpp_registerActorClass_FUN_0040c160
            ((CDemonActorType *)&DAT_007c3698,"CBaronWeapon",
             core_baron_cpp_factoryFuncBaronWeapon_FUN_00410430,(int *)0x61092c,1,
             &g_CWeaponClassInfo);
  return;
}
