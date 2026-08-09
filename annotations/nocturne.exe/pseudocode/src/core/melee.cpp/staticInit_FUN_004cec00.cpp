// Name: core_melee.cpp_staticInit_FUN_004cec00
// Address: 004cec00
// Address Range: [[004cec00, 004cec23]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_staticInit_FUN_004cec00(void)

#include "nocturne.h"

void __cdecl core_melee_cpp_staticInit_FUN_004cec00(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CMeleeActorType_01cc56a4,"CMelee",
             core_melee_cpp_factoryFuncMelee_FUN_004cec30,&INT_005bade4,7,
             &g_CWeaponActorType_02ddf970);
  return;
}
