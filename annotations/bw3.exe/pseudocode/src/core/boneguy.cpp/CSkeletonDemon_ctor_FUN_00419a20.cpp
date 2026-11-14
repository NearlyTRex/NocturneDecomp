// Name: core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20
// Address: 00419a20
// Address Range: [[00419a20, 00419a81]]
// Convention: __cdecl
// Signature: CSkeletonDemon * __cdecl core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(CSkeletonDemon *this_ptr)

#include "nocturne.h"

CSkeletonDemon * __cdecl core_boneguy_cpp_CSkeletonDemon_ctor_FUN_00419a20(CSkeletonDemon *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CSkeletonDemonVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5b719a);
  (pCVar1->base).base.hit_points = 40.0;
  (pCVar1->base).attack_damage = 20.0;
  (pCVar1->base).pain_threshold = 10.0;
  pCVar1->skeleton_variant = 3;
  pCVar1->start_hit_points = (pCVar1->base).base.hit_points;
  return (CSkeletonDemon *)pCVar1;
}
