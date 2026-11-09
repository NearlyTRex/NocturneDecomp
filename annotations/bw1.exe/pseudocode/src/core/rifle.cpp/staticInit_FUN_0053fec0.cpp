// Name: core_rifle.cpp_staticInit_FUN_0053fec0
// Address: 0053fec0
// Address Range: [[0053fec0, 0053fee3]]
// Convention: unknown
// Signature: void core_rifle_cpp_staticInit_FUN_0053fec0(void)

#include "nocturne.h"

void core_rifle_cpp_staticInit_FUN_0053fec0(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CRifleClassInfo,"CRifle",core_rifle_cpp_factoryFuncRifle_FUN_0053fef0,
             &g_CRifleClassVersion,1,&g_CWeaponClassInfo);
  return;
}
