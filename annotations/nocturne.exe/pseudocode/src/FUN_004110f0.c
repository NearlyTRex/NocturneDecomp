// Name: FUN_004110f0
// Address: 004110f0
// Address Range: [[004110f0, 004112e1]]
// Convention: unknown
// Signature: int FUN_004110f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004110f0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  int iVar5;
  float local_44 [6];
  uint uStack_2c;
  uint local_28;
  uint local_24;
  float local_1c;
  uint local_18;
  
  if ((*(int *)(param_1 + 0x1fb34) == 0) && (*(int *)(param_1 + 0xbc90) == 2)) {
    return 0;
  }
  iVar5 = param_1 + 0x150;
  iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar5);
  uVar1 = *(uint *)(iVar2 + 0x24);
  local_44[0] = *(float *)(param_1 + 0x158);
  local_1c = local_44[0];
  iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar5);
  if (uVar1 < 6) {
    if (uVar1 != 5) {
LAB_004112d5:
      local_18 = 65000;
      goto LAB_00411169;
    }
LAB_00411153:
    fVar4 = ((float10)local_44[0] * (float10)_DAT_005786c0) / (float10)*(int *)(iVar2 + 100);
  }
  else {
    if (uVar1 < 7) goto LAB_00411153;
    if (uVar1 != 7) goto LAB_004112d5;
    fVar4 = (float10)*(int *)(iVar2 + 100);
    fVar4 = ((fVar4 - (float10)local_1c) * (float10)_DAT_005786c0) / fVar4;
  }
  iVar5 = 0x411165;
  fVar4 = (float10)round(fVar4);
  local_1c = (float)(int)ROUND(fVar4);
LAB_00411169:
  if (*(int *)(param_1 + 0x1fb38) != 0) {
    engine_3d_c_setRenderAlpha_FUN_00408370(((int)local_1c * 2) / 3,iVar5);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,param_1 + 0x20);
    local_28 = DAT_0076432c;
    uStack_2c = 0;
    local_24 = 0;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,&uStack_2c,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(&DAT_0076436c,0,0x23);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_44,0);
  iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar3);
  if (iVar5 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,local_1c);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,1);
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              (param_1 + 0x150,0xffffffff,0x2e7,1,0);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
    if (_DAT_01cd4318 != 0) {
      core_motion_cpp_CMotionController_render_FUN_004e22b0(param_1 + 0x150,param_1);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar5;
}
