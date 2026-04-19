// Name: core_haystack.cpp_CHaystack_ctor_FUN_004f0c10
// Address: 004f0c10
// Address Range: [[004f0c10, 004f0c73]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(CHaystack *this_ptr)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(CHaystack *this_ptr)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CHaystackVTable._ub;
  pCVar1->guns_drawn = 0;
  pCVar1->attack_side = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"haystack.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  (pCVar1->head_look_euler).z = 0.0;
  (pCVar1->head_look_euler).y = (pCVar1->head_look_euler).z;
  (pCVar1->head_look_euler).x = (pCVar1->head_look_euler).y;
  return pCVar1;
}
