// Name: core_shotgun.cpp_staticInit_FUN_0053ef70
// Address: 0053ef70
// Address Range: [[0053ef70, 0053ef93]]
// Convention: unknown
// Signature: void core_shotgun_cpp_staticInit_FUN_0053ef70(void)

#include "nocturne.h"

void core_shotgun_cpp_staticInit_FUN_0053ef70(void)

{
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CShotgunClassInfo,"@CShotgun" + 1,
             core_shotgun_cpp_factoryFuncShotgun_FUN_0053efa0,&g_CShotgunClassVersion,1,
             &g_CWeaponClassInfo);
  return;
}
