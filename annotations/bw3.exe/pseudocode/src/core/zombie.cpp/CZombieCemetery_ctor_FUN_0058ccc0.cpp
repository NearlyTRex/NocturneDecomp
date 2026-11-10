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
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieCemeteryVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d8984);
  *(uint *)&pCVar1->field_0xd140 = 1;
  (pCVar1->base).base.hit_points = 20.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41200000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41200000;
  return (CZombieCemetery *)pCVar1;
}
