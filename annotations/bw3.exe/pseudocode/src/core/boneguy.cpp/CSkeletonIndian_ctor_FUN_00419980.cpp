// Name: core_boneguy.cpp_CSkeletonIndian_ctor_FUN_00419980
// Address: 00419980
// Address Range: [[00419980, 004199e1]]
// Convention: unknown
// Signature: CSkeletonIndian * core_boneguy_cpp_CSkeletonIndian_ctor_FUN_00419980(CSkeletonIndian *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeletonIndian * core_boneguy_cpp_CSkeletonIndian_ctor_FUN_00419980(CSkeletonIndian *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400((CBoneGuy *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CSkeletonIndianVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5b718e);
  (pCVar1->base).base.hit_points = 30.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41400000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41000000;
  *(uint *)&pCVar1->field_0xd074 = 2;
  *(float *)&pCVar1->field_0xd058 = (pCVar1->base).base.hit_points;
  return (CSkeletonIndian *)pCVar1;
}
