// Name: core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
// Address: 00425c20
// Address Range: [[00425c20, 00425cbb]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter *this_ptr)

{
  int iVar1;
  
  if (this_ptr->is_fully_burned == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              (&this_ptr->model,-1,0xffffffff,1,0);
    core_cloth_cpp_CClothList_render_FUN_004385a0(&this_ptr->cloth_list,&this_ptr->model);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    if (this_ptr->is_ethereal == 0) {
      core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(this_ptr);
    }
    if (0.0 < this_ptr->stagger_amount) {
      core_charactr_cpp_FUN_004270e0(this_ptr);
    }
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(this_ptr);
  if (g_CGame_PTR_005b9354->collision_render_enabled == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_renderCollision_FUN_00425cc0(this_ptr);
  return;
}
