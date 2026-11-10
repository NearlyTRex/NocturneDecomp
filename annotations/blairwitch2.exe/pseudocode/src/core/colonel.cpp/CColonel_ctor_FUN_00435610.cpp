// Name: core_colonel.cpp_CColonel_ctor_FUN_00435610
// Address: 00435610
// Address Range: [[00435610, 0043563b]]
// Convention: unknown
// Signature: CColonel * core_colonel_cpp_CColonel_ctor_FUN_00435610(CColonel *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CColonel * core_colonel_cpp_CColonel_ctor_FUN_00435610(CColonel *this_ptr)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(CHero_full_vtable **)&pCVar1->field_0x2b0 = &g_CColonelVTable;
  pCVar1->guns_drawn = 0;
  pCVar1->dead = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"colonel.dfm");
  pCVar1->head_look_blend_weight = 1.0;
  (pCVar1->head_look_euler).z = 0.0;
  (pCVar1->head_look_euler).y = (pCVar1->head_look_euler).z;
  (pCVar1->head_look_euler).x = (pCVar1->head_look_euler).y;
  return pCVar1;
}
