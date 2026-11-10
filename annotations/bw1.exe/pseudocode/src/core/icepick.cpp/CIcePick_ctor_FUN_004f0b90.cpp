// Name: core_icepick.cpp_CIcePick_ctor_FUN_004f0b90
// Address: 004f0b90
// Address Range: [[004f0b90, 004f0c11]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f0b90(CIcePick *this_ptr)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f0b90(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_CHero_ctor_FUN_004ea830((CHero *)this_ptr);
  *(CHero_full_vtable **)&pCVar1->field_0x154 = &g_CIcePickVTable;
  pCVar1->guns_drawn = 0;
  pCVar1->attack_count = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)&pCVar1->field_0x158,"icepick.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  (pCVar1->head_look_euler).z = 0.0;
  (pCVar1->head_look_euler).y = (pCVar1->head_look_euler).z;
  (pCVar1->head_look_euler).x = (pCVar1->head_look_euler).y;
  pCVar1->is_armed = 0;
  pCVar1->pending_pickup_target = (CDemonActor *)0x0;
  *(uint *)&pCVar1->field_0x2538 = 0x43960000;
  return pCVar1;
}
