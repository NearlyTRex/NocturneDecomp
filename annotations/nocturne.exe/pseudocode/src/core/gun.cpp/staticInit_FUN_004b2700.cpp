// Name: core_gun.cpp_staticInit_FUN_004b2700
// Address: 004b2700
// Address Range: [[004b2700, 004b2723]]
// Convention: __cdecl
// Signature: void __cdecl core_gun_cpp_staticInit_FUN_004b2700(void)

#include "nocturne.h"

void __cdecl core_gun_cpp_staticInit_FUN_004b2700(void)

{
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            (&g_CGunActorType_01cadfdc,"CGun",core_gun_cpp_factoryFunc_FUN_004b2730,
             &INT_005ba900,1,&g_CWeaponActorType_02ddf970);
  return;
}
