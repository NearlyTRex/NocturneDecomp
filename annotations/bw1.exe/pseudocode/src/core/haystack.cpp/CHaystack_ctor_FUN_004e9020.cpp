// Name: core_haystack.cpp_CHaystack_ctor_FUN_004e9020
// Address: 004e9020
// Address Range: [[004e9020, 004e9083]]
// Convention: __cdecl
// Signature: CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004e9020(CHaystack *this_ptr)

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004e9020(CHaystack *this_ptr)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)core_hero_cpp_CHero_ctor_FUN_004ea830((CHero *)this_ptr);
  *(CHero_full_vtable **)&pCVar1->field_0x154 = &g_CHaystackVTable;
  pCVar1->guns_drawn = 0;
  pCVar1->attack_side = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar1->field_0x158,"haystack.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  (pCVar1->head_look_euler).z = 0.0;
  (pCVar1->head_look_euler).y = (pCVar1->head_look_euler).z;
  (pCVar1->head_look_euler).x = (pCVar1->head_look_euler).y;
  return pCVar1;
}
