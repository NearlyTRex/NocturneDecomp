// Name: core_rifle.cpp_staticInit_FUN_00527bb0
// Address: 00527bb0
// Address Range: [[00527bb0, 00527bd3]]
// Convention: unknown
// Signature: void core_rifle_cpp_staticInit_FUN_00527bb0(void)

#include "nocturne.h"

void core_rifle_cpp_staticInit_FUN_00527bb0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c3a0
            (&g_CRifleClassInfo,"CRifle",core_rifle_cpp_factoryFuncRifle_FUN_00527be0,
             &g_CRifleClassVersion,1,&g_CWeaponClassInfo);
  return;
}
