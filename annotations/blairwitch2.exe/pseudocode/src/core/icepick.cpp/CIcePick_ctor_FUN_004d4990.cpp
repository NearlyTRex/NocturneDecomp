// Name: core_icepick.cpp_CIcePick_ctor_FUN_004d4990
// Address: 004d4990
// Address Range: [[004d4990, 004d4a11]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004d4990(CIcePick *this_ptr)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004d4990(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_FUN_004ce240(this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CIcePickVTable._ub;
  pCVar1->guns_drawn = 0;
  pCVar1->attack_count = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar1->base).base.model,"icepick.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  (pCVar1->head_look_euler).z = 0.0;
  (pCVar1->head_look_euler).y = (pCVar1->head_look_euler).z;
  (pCVar1->head_look_euler).x = (pCVar1->head_look_euler).y;
  pCVar1->is_armed = 0;
  pCVar1->pending_pickup_target = (CDemonActor *)0x0;
  (pCVar1->base).base.hit_points = 300.0;
  return pCVar1;
}
