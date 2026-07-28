// Name: core_vessel.cpp_FUN_00550210
// Address: 00550210
// Address Range: [[00550210, 00550367]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_FUN_00550210(int param_1)

#include "nocturne.h"

uint core_vessel_cpp_FUN_00550210(int param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  double dVar2;
  byte local_30 [20];
  int iStack_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_30,0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  *(int *)(param_1 + 0x7d8) = iVar1;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  if (*(int *)(param_1 + 0x7d8) == 0) {
    return *(uint *)(param_1 + 0x7d8);
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  if ((*(int *)(param_1 + 0x3b0) == 3) || ((double)*(float *)(param_1 + 0x3b4) <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 0x150),0.0,-1);
  }
  else {
    dVar2 = round
                      (65535 - (double)*(float *)(param_1 + 0x3b4) * 65535);
    iStack_1c = (int)ROUND(dVar2);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,iStack_1c);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(DAT_005ae704,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 0x150),0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(DAT_005ae704);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return *(uint *)(param_1 + 0x7d8);
}
