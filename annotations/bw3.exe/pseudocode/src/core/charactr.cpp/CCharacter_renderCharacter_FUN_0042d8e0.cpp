// Name: core_charactr.cpp_CCharacter_renderCharacter_FUN_0042d8e0
// Address: 0042d8e0
// Address Range: [[0042d8e0, 0042d9e7]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_0042d8e0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_0042d8e0(CCharacter *this_ptr)

{
  int iVar1;
  
  if (this_ptr->is_fully_burned == 0) {
    core_charactr_cpp_CCharacter_updateFacialAnimation_FUN_0042d500(this_ptr);
    if (this_ptr->additive == 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
                (&this_ptr->model,-1,0xffffffff,1,0);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
                (&this_ptr->model,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    }
    core_cloth_cpp_CClothList_render_FUN_0043fc50(&this_ptr->cloth_list,&this_ptr->model);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 == 0) {
    if (this_ptr->is_ethereal == 0) {
      core_charactr_cpp_CCharacter_renderBurn_FUN_0042f010(this_ptr);
    }
    if (0.0 < this_ptr->stagger_amount) {
      core_charactr_cpp_CCharacter_renderEthereal_FUN_0042f310(this_ptr);
    }
    if (0.0 < this_ptr->bind_time) {
      core_charactr_cpp_CCharacter_renderEthereal_FUN_0042f310(this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042e3a0(this_ptr);
  if (g_CGamePtr->collision_render_enabled == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_renderCollision_FUN_0042d9f0(this_ptr);
  return;
}
