// Name: core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0
// Address: 00424bd0
// Address Range: [[00424bd0, 00424c77]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0(CCharacter *this_ptr)

{
  int iVar1;
  
  if (this_ptr->is_fully_burned == 0) {
    core_charactr_cpp_FUN_004247f0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170
              (&this_ptr->model,-1,0xffffffff,1,0);
    core_cloth_cpp_CClothList_render_FUN_005b17d0(&this_ptr->cloth_list,&this_ptr->model);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    if (this_ptr->is_ethereal == 0) {
      core_charactr_cpp_CCharacter_renderBurn_FUN_004264d0(this_ptr);
    }
    if (0.0 < this_ptr->stagger_amount) {
      core_charactr_cpp_CCharacter_renderEthereal_FUN_00426730(this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0(this_ptr);
  if (g_CGamePtr->collision_render_enabled == 0) {
    return;
  }
  core_charactr_cpp_FUN_00424c80(this_ptr);
  return;
}
