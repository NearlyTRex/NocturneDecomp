// Name: core_zombie.cpp_CZombieIndian_ctor_FUN_0058ce70
// Address: 0058ce70
// Address Range: [[0058ce70, 0058cec5]]
// Convention: unknown
// Signature: CZombieIndian * core_zombie_cpp_CZombieIndian_ctor_FUN_0058ce70(CZombieIndian *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieIndian * core_zombie_cpp_CZombieIndian_ctor_FUN_0058ce70(CZombieIndian *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieIndianVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"Bwp3_indzombie2.dfm");
  *(uint *)&pCVar1->field_0xd140 = 4;
  (pCVar1->base).base.hit_points = 40.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41700000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41700000;
  return (CZombieIndian *)pCVar1;
}
