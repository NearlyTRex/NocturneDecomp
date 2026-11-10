// Name: core_charactr.cpp_FUN_0042d8e0
// Address: 0042d8e0
// Address Range: [[0042d8e0, 0042d9e7]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042d8e0(CCharacter *param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042d8e0(CCharacter *param_1)

{
  int iVar1;
  
  if (param_1->is_fully_burned == 0) {
    core_charactr_cpp_FUN_0042d500(param_1);
    if (*(int *)&param_1->field_0xcdc4 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
                (&param_1->model,-1,0xffffffff,1,0);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0
                (&param_1->model,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    }
    core_cloth_cpp_CClothList_render_FUN_0043fc50(&param_1->cloth_list,&param_1->model);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 == 0) {
    if (*(int *)&param_1->field_0x27a4 == 0) {
      core_charactr_cpp_FUN_0042f010(param_1);
    }
    if (0.0 < param_1->stagger_amount) {
      core_charactr_cpp_FUN_0042f310(param_1);
    }
    if (0.0 < *(float *)&param_1->field_0x3254) {
      core_charactr_cpp_FUN_0042f310(param_1);
    }
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042e3a0(param_1);
  if (*(int *)&g_CGamePtr->field_0x240 == 0) {
    return;
  }
  core_charactr_cpp_FUN_0042d9f0(param_1);
  return;
}
