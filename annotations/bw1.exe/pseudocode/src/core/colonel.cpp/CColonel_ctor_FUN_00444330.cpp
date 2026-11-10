// Name: core_colonel.cpp_CColonel_ctor_FUN_00444330
// Address: 00444330
// Address Range: [[00444330, 00444393]]
// Convention: __cdecl
// Signature: CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_00444330(CColonel *this_ptr)

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_00444330(CColonel *this_ptr)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)core_hero_cpp_CHero_ctor_FUN_004ea830((CHero *)this_ptr);
  *(CHero_full_vtable **)&pCVar1->field_0x154 = &g_CColonelVTable;
  pCVar1->guns_drawn = 0;
  pCVar1->dead = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar1->field_0x158,"colonel.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  (pCVar1->head_look_euler).z = 0.0;
  (pCVar1->head_look_euler).y = (pCVar1->head_look_euler).z;
  (pCVar1->head_look_euler).x = (pCVar1->head_look_euler).y;
  return pCVar1;
}
