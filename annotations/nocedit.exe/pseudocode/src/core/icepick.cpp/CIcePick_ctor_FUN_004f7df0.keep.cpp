// Name: core_icepick.cpp_CIcePick_ctor_FUN_004f7df0
// Address: 004f7df0
// MANUAL RECONSTRUCTION
// Address Range: [[004f7df0, 004f7e71]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f7df0(CIcePick *this_ptr)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004f7df0(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CIcePickVTable._ub;
  pCVar1->guns_drawn = 0;
  pCVar1->attack_count = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"icepick.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  memset(&pCVar1->head_look_euler, 0, sizeof(pCVar1->head_look_euler));
  pCVar1->is_armed = 0;
  pCVar1->pending_pickup_target = (CDemonActor *)0x0;
  (pCVar1->base).base.hit_points = 300.0;
  return pCVar1;
}
