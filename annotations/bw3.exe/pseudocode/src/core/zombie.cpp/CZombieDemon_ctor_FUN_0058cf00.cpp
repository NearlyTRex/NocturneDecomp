// Name: core_zombie.cpp_CZombieDemon_ctor_FUN_0058cf00
// Address: 0058cf00
// Address Range: [[0058cf00, 0058cf5f]]
// Convention: __cdecl
// Signature: CZombieDemon * __cdecl core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(CZombieDemon *this_ptr)

#include "nocturne.h"

CZombieDemon * __cdecl core_zombie_cpp_CZombieDemon_ctor_FUN_0058cf00(CZombieDemon *this_ptr)

{
  CZombie *pCVar1;
  
  pCVar1 = core_zombie_cpp_CZombie_ctor_FUN_005888d0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CZombieDemonVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d89cb);
  pCVar1->zombie_variant = 5;
  (pCVar1->base).base.hit_points = 50.0;
  (pCVar1->base).attack_damage = 15.0;
  (pCVar1->base).pain_threshold = 15.0;
  pCVar1->always_chase_fast = 1;
  return (CZombieDemon *)pCVar1;
}
