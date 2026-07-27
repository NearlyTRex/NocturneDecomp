// Name: core_moloch.cpp_FUN_004de550
// Address: 004de550
// Address Range: [[004de550, 004de675]]
// Convention: unknown
// Signature: int core_moloch_cpp_FUN_004de550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_moloch_cpp_FUN_004de550(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte local_1c [24];
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2618) = 0;
  }
  if (*(int *)(param_1 + 0x2404) == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_1c,0);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x2618) = 1;
      if (*(int *)(param_1 + 0x21cf4) == 0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
      }
      else {
        iVar3 = param_1 + 0x21dc4;
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(iVar3,0,param_1 + 0x150,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(iVar3,1,param_1 + 0x1fa3c,0);
        core_morph_cpp_CMorph_render_FUN_004e0820
                  (iVar3,*(float *)(param_1 + 0x21cf8) / _DAT_005a0ab8);
      }
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
