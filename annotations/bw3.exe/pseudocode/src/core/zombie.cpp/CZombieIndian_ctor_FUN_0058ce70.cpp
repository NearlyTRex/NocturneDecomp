// Name: core_zombie.cpp_CZombieIndian_ctor_FUN_0058ce70
// Address: 0058ce70
// Address Range: [[0058ce70, 0058cec5]]
// Convention: __cdecl
// Signature: CZombieIndian * __cdecl core_zombie_cpp_CZombieIndian_ctor_FUN_0058ce70(CZombieIndian *this_ptr)

#include "nocturne.h"

CZombieIndian * __cdecl core_zombie_cpp_CZombieIndian_ctor_FUN_0058ce70(CZombieIndian *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieIndianVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"Bwp3_indzombie2.dfm");
  pCVar1->zombie_variant = 4;
  (pCVar1->base).base.hit_points = 40.0;
  (pCVar1->base).attack_damage = 15.0;
  (pCVar1->base).pain_threshold = 15.0;
  return (CZombieIndian *)pCVar1;
}
