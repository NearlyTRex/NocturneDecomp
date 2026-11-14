// Name: core_shadow.cpp_CShadowForest_ctor_FUN_00545ea0
// Address: 00545ea0
// Address Range: [[00545ea0, 00545ef5]]
// Convention: __cdecl
// Signature: CShadowForest * __cdecl core_shadow_cpp_CShadowForest_ctor_FUN_00545ea0(CShadowForest *this_ptr)

#include "nocturne.h"

CShadowForest * __cdecl core_shadow_cpp_CShadowForest_ctor_FUN_00545ea0(CShadowForest *this_ptr)

{
  CShadow *pCVar1;
  
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_00543500(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CShadowForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"@shadowbeast.dfm" + 1);
  (pCVar1->base).base.hit_points = 40.0;
  (pCVar1->base).attack_damage = 15.0;
  (pCVar1->base).pain_threshold = 20.0;
  pCVar1->shadow_variant = 1;
  return (CShadowForest *)pCVar1;
}
