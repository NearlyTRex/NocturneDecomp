// Name: FUN_00550210
// Address: 00550210
// Address Range: [[00550210, 00550367]]
// Convention: unknown
// Signature: undefined4 FUN_00550210(int param_1)

#include "nocturne.h"

uint FUN_00550210(int param_1)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  byte local_30 [20];
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0)
  ;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_30,0);
  uVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  uVar1 = DAT_005ae704;
  *(uint *)(param_1 + 0x7d8) = uVar2;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(uVar1);
  if (*(int *)(param_1 + 0x7d8) == 0) {
    return *(uint *)(param_1 + 0x7d8);
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0)
  ;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  if ((*(int *)(param_1 + 0x3b0) == 3) || (*(float *)(param_1 + 0x3b4) <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x150,0,0xffffffff);
  }
  else {
    uVar1 = 0x5502ea;
    fVar3 = (float10)round
                               ((float10)65535 -
                                (float10)*(float *)(param_1 + 0x3b4) * (float10)65535);
    iStack_1c = (int)ROUND(fVar3);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,iStack_1c,uVar1);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x150,0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return *(uint *)(param_1 + 0x7d8);
}
