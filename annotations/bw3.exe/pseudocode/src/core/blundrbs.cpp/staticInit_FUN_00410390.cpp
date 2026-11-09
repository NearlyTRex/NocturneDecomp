// Name: core_blundrbs.cpp_staticInit_FUN_00410390
// Address: 00410390
// Address Range: [[00410390, 004103b3]]
// Convention: unknown
// Signature: void core_blundrbs_cpp_staticInit_FUN_00410390(void)

#include "nocturne.h"

void core_blundrbs_cpp_staticInit_FUN_00410390(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CBlunderbusClassInfo,"CBlunderbus",
             core_blundrbs_cpp_factoryFuncBlunderbus_FUN_004103c0,&g_CBlunderbusClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
