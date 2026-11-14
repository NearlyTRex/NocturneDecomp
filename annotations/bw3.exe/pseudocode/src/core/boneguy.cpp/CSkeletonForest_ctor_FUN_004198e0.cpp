// Name: core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0
// Address: 004198e0
// Address Range: [[004198e0, 00419941]]
// Convention: __cdecl
// Signature: CSkeletonForest * __cdecl core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0(CSkeletonForest *this_ptr)

#include "nocturne.h"

CSkeletonForest * __cdecl core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0(CSkeletonForest *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CSkeletonForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5b7182);
  (pCVar1->base).base.hit_points = 25.0;
  (pCVar1->base).attack_damage = 8.0;
  (pCVar1->base).pain_threshold = 5.0;
  pCVar1->skeleton_variant = 1;
  pCVar1->start_hit_points = (pCVar1->base).base.hit_points;
  return (CSkeletonForest *)pCVar1;
}
