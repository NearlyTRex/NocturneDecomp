// Name: core_zombie.cpp_CZombieDemon_ctor_FUN_0058cf00
// Address: 0058cf00
// Address Range: [[0058cf00, 0058cf5f]]
// Convention: unknown
// Signature: CZombieDemon * core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(CZombieDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CZombieDemon * core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(CZombieDemon *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0((CZombie *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieDemonVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d89cb);
  *(uint *)&pCVar1->field_0xd140 = 5;
  (pCVar1->base).base.hit_points = 50.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41700000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41700000;
  *(uint *)&pCVar1->field_0xd0dc = 1;
  return (CZombieDemon *)pCVar1;
}
