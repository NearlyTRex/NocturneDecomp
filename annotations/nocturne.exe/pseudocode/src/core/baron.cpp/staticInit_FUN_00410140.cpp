// Name: core_baron.cpp_staticInit_FUN_00410140
// Address: 00410140
// Address Range: [[00410140, 00410193]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_staticInit_FUN_00410140(void)

#include "nocturne.h"

void __cdecl core_baron_cpp_staticInit_FUN_00410140(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBaronActorType_00764330,"CBaron",core_baron_cpp_FUN_004101a0,
             &g_INT_005acf3c,2,&g_CHeroActorType_01cae0ec);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
            ((CKeyFramedModelInstance *)&DAT_0076436c);
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CBaronWeaponActorType_007644e8,"CBaronWeapon",core_baron_cpp_FUN_00411320,
             &g_INT_005acf58,1,&g_CWeaponActorType_02ddf970);
  return;
}
