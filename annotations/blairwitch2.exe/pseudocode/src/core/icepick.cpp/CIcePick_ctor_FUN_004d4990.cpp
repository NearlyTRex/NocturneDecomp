// Name: core_icepick.cpp_CIcePick_ctor_FUN_004d4990
// Address: 004d4990
// Address Range: [[004d4990, 004d49bb]]
// Convention: unknown
// Signature: CIcePick * core_icepick_cpp_CIcePick_ctor_FUN_004d4990(CIcePick *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CIcePick * core_icepick_cpp_CIcePick_ctor_FUN_004d4990(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(CHero_full_vtable **)&pCVar1->field_0x2b0 = &g_CIcePickVTable;
  pCVar1->guns_drawn = 0;
  pCVar1->attack_count = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"icepick.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  (pCVar1->head_look_euler).z = 0.0;
  (pCVar1->head_look_euler).y = (pCVar1->head_look_euler).z;
  (pCVar1->head_look_euler).x = (pCVar1->head_look_euler).y;
  pCVar1->is_armed = 0;
  pCVar1->pending_pickup_target = (CDemonActor *)0x0;
  *(uint *)&pCVar1->field_0x25a8 = 0x43960000;
  return pCVar1;
}
