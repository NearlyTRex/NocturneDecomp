// Name: core_zombie.cpp_CZombieForest_ctor_FUN_0058cd50
// Address: 0058cd50
// Address Range: [[0058cd50, 0058cda5]]
// Convention: unknown
// Signature: CZombieForest * core_zombie_cpp_CZombieForest_ctor_FUN_0058cd50(CZombieForest *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieForest * core_zombie_cpp_CZombieForest_ctor_FUN_0058cd50(CZombieForest *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d8992);
  *(uint *)&pCVar1->field_0xd140 = 2;
  (pCVar1->base).base.hit_points = 25.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41200000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41200000;
  return (CZombieForest *)pCVar1;
}
