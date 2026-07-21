// Name: core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
// Address: 00426440
// Address Range: [[00426440, 0042650d]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte local_20 [24];
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2618) = 0;
  }
  if (*(int *)(param_1 + 0x2404) == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x2618) = 1;
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
      if (_DAT_01cd4318 != 0) {
        iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_render_FUN_004e22b0(param_1 + 0x150,param_1);
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x50))(param_1);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iVar1;
  }
  return 0;
}
