// Name: core_zombie.cpp_CZombieSpirit_ctor_FUN_0058cde0
// Address: 0058cde0
// Address Range: [[0058cde0, 0058ce35]]
// Convention: unknown
// Signature: CZombieSpirit * core_zombie_cpp_CZombieSpirit_ctor_FUN_0058cde0(CZombieSpirit *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieSpirit * core_zombie_cpp_CZombieSpirit_ctor_FUN_0058cde0(CZombieSpirit *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieSpiritVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d89a4);
  *(uint *)&pCVar1->field_0xd140 = 3;
  (pCVar1->base).base.hit_points = 30.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41700000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41200000;
  return (CZombieSpirit *)pCVar1;
}
