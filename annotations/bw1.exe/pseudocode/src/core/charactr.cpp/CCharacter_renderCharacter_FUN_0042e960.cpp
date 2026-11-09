// Name: core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
// Address: 0042e960
// Address Range: [[0042e960, 0042ea07]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter *this_ptr)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0xb9e8 == 0) {
    core_charactr_cpp_FUN_0042e580(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00569810
              ((CDeformableModelInstance *)&this_ptr->field_0x158,-1,0xffffffff,1,0);
    core_cloth_cpp_CClothList_render_FUN_00441ff0
              ((CClothList *)&this_ptr->field_0x2ca0,
               (CDeformableModelInstance *)&this_ptr->field_0x158);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 == 0) {
    if (*(int *)&this_ptr->field_0x27a4 == 0) {
      core_charactr_cpp_FUN_0042fe00(this_ptr);
    }
    if (0.0 < *(float *)&this_ptr->field_0xb9f0) {
      core_charactr_cpp_FUN_00430060(this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042f3c0(this_ptr);
  if (*(int *)&g_CGamePtr->field_0x238 == 0) {
    return;
  }
  core_charactr_cpp_FUN_0042ea10(this_ptr);
  return;
}
