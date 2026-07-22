// Name: core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
// Address: 00425c20
// Address Range: [[00425c20, 00425cbb]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(int param_1)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb640) == 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              (param_1 + 0x150,0xffffffff,0xffffffff,1,0);
    core_cloth_cpp_CClothList_render_FUN_004385a0(param_1 + 0x2a8c,param_1 + 0x150);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x260c) == 0) {
      core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(param_1);
    }
    if (0.0 < *(float *)(param_1 + 0xb648)) {
      core_charactr_cpp_FUN_004270e0(param_1);
    }
  }
  core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(param_1);
  if (*(int *)(0x01C775EC + 0x21c) == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_renderCollision_FUN_00425cc0(param_1);
  return;
}
