// Name: FUN_0045a260
// Address: 0045a260
// Address Range: [[0045a260, 0045a441]]
// Convention: unknown
// Signature: int FUN_0045a260(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045a260(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fStack_30;
  byte local_2c [28];
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2618) = 0;
  }
  if (*(int *)(param_1 + 0xbdb0) != 2) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if ((((iVar2 == 0) || (*(int *)(param_1 + 0xbdb0) == 0)) && (iVar1 == 0)) &&
       (*(int *)(param_1 + 0x2404) == 0)) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_2c,0);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar3);
      if (iVar1 != 0) {
        *(uint *)(param_1 + 0x2618) = 1;
        if (*(int *)(param_1 + 0xbdb0) == 0) {
          if (*(int *)(param_1 + 0xbe4c) == 0) {
            core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
          }
        }
        else {
          if (*(int *)(param_1 + 0xbdb0) == 1) {
            fStack_30 = (1.0 - *(float *)(param_1 + 0xbdb4)) / 0x3F800000;
          }
          else {
            fStack_30 = ((float)_DAT_0057d756 - *(float *)(param_1 + 0xbdb4)) / 0x3F800000;
            if (fStack_30 < 0.0) {
              fStack_30 = 0.0;
            }
          }
          if (0.0 < (double)fStack_30) {
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
            engine_drender_cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
                      (DAT_005ae704,fStack_30);
            engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,1);
            if ((double)fStack_30 <= _DAT_0057d756) {
              uVar3 = 0x267;
            }
            else {
              uVar3 = 0x2e7;
            }
            core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                      (param_1 + 0x150,0xffffffff,uVar3,1,0);
            engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
          }
        }
        if (_DAT_01cd4318 != 0) {
          iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_render_FUN_004e22b0(param_1 + 0x150,param_1);
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x50))(param_1);
          }
        }
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      return iVar1;
    }
  }
  return 0;
}
