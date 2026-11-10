// Name: core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20
// Address: 00419a20
// Address Range: [[00419a20, 00419a81]]
// Convention: unknown
// Signature: CSkeletonDemon * core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(CSkeletonDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSkeletonDemon * core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(CSkeletonDemon *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400((CBoneGuy *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CSkeletonDemonVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5b719a);
  (pCVar1->base).base.hit_points = 40.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41a00000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41200000;
  *(uint *)&pCVar1->field_0xd074 = 3;
  *(float *)&pCVar1->field_0xd058 = (pCVar1->base).base.hit_points;
  return (CSkeletonDemon *)pCVar1;
}
