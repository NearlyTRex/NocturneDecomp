// Name: core_zombie.cpp_CZombieForest_ctor_FUN_0058cd50
// Address: 0058cd50
// Address Range: [[0058cd50, 0058cda5]]
// Convention: __cdecl
// Signature: CZombieForest * __cdecl core_zombie_cpp_CZombieForest_ctor_FUN_0058cd50(CZombieForest *this_ptr)

#include "nocturne.h"

CZombieForest * __cdecl core_zombie_cpp_CZombieForest_ctor_FUN_0058cd50(CZombieForest *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d8992);
  pCVar1->zombie_variant = 2;
  (pCVar1->base).base.hit_points = 25.0;
  (pCVar1->base).attack_damage = 10.0;
  (pCVar1->base).pain_threshold = 10.0;
  return (CZombieForest *)pCVar1;
}
