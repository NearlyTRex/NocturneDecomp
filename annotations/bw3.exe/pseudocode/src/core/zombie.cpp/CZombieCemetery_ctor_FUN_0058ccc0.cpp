// Name: core_zombie.cpp_CZombieCemetery_ctor_FUN_0058ccc0
// Address: 0058ccc0
// Address Range: [[0058ccc0, 0058cd15]]
// Convention: unknown
// Signature: CZombieCemetery * core_zombie_cpp_CZombieCemetery_ctor_FUN_0058ccc0(CZombieCemetery *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieCemetery * core_zombie_cpp_CZombieCemetery_ctor_FUN_0058ccc0(CZombieCemetery *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieCemeteryVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d8984);
  pCVar1->zombie_variant = 1;
  (pCVar1->base).base.hit_points = 20.0;
  (pCVar1->base).attack_damage = 10.0;
  (pCVar1->base).pain_threshold = 10.0;
  return (CZombieCemetery *)pCVar1;
}
