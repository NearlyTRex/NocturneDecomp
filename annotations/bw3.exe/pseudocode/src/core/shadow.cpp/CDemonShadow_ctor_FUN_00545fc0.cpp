// Name: core_shadow.cpp_CDemonShadow_ctor_FUN_00545fc0
// Address: 00545fc0
// Address Range: [[00545fc0, 00546015]]
// Convention: unknown
// Signature: CDemonShadow * core_shadow_cpp_CDemonShadow_ctor_FUN_00545fc0(CDemonShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonShadow * core_shadow_cpp_CDemonShadow_ctor_FUN_00545fc0(CDemonShadow *this_ptr)

{
  CShadow *pCVar1;
  
  pCVar1 = core_shadow_cpp_CShadow_ctor_FUN_00543500(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CDemonShadowVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"shadowbeast.dfm");
  (pCVar1->base).base.hit_points = 60.0;
  (pCVar1->base).attack_damage = 30.0;
  (pCVar1->base).pain_threshold = 20.0;
  pCVar1->shadow_variant = 3;
  return (CDemonShadow *)pCVar1;
}
