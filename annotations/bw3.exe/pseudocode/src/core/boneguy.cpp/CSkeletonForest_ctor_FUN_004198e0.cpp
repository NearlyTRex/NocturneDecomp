// Name: core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0
// Address: 004198e0
// Address Range: [[004198e0, 00419941]]
// Convention: unknown
// Signature: CSkeletonForest * core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0(CSkeletonForest *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeletonForest * core_boneguy_cpp_CSkeletonForest_ctor_FUN_004198e0(CSkeletonForest *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400((CBoneGuy *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CSkeletonForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5b7182);
  (pCVar1->base).base.hit_points = 25.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41000000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x40a00000;
  *(uint *)&pCVar1->field_0xd074 = 1;
  *(float *)&pCVar1->field_0xd058 = (pCVar1->base).base.hit_points;
  return (CSkeletonForest *)pCVar1;
}
