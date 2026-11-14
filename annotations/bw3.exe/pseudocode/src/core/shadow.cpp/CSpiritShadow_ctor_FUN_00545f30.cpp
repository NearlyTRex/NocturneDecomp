// Name: core_shadow.cpp_CSpiritShadow_ctor_FUN_00545f30
// Address: 00545f30
// Address Range: [[00545f30, 00545f85]]
// Convention: __cdecl
// Signature: CSpiritShadow * __cdecl core_shadow_cpp_CSpiritShadow_ctor_FUN_00545f30(CSpiritShadow *this_ptr)

#include "nocturne.h"

CSpiritShadow * __cdecl core_shadow_cpp_CSpiritShadow_ctor_FUN_00545f30(CSpiritShadow *this_ptr)

{
  CShadow *pCVar1;
  
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_00543500(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CSpiritShadowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"shadowbeast.dfm");
  (pCVar1->base).base.hit_points = 40.0;
  (pCVar1->base).attack_damage = 25.0;
  (pCVar1->base).pain_threshold = 20.0;
  pCVar1->shadow_variant = 2;
  return (CSpiritShadow *)pCVar1;
}
