// Name: core_baron.cpp_staticInit_FUN_0040f600
// Address: 0040f600
// Address Range: [[0040f600, 0040f653]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_staticInit_FUN_0040f600(void)

#include "nocturne.h"

void __cdecl core_baron_cpp_staticInit_FUN_0040f600(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CBaronClassInfo,"CBaron",core_baron_cpp_factoryFuncBaron_FUN_0040f660,
             &g_CBaronClassVersion,2,&g_CHeroClassInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
            ((CKeyFramedModelInstance *)&DAT_007bc51c);
  core_actor_cpp_registerActorClass_FUN_0040c450
            ((CDemonActorType *)&DAT_007bc698,"CBaronWeapon",
             core_baron_cpp_factoryFuncBaronWeapon_FUN_004108b0,(int *)0x609828,1,
             &g_CWeaponClassInfo);
  return;
}
