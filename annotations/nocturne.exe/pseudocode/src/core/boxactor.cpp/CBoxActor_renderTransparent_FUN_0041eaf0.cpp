// Name: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041eaf0
// Address: 0041eaf0
// Address Range: [[0041eaf0, 0041ebdc]]
// Convention: unknown
// Signature: int core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041eaf0(int param_1)

#include "nocturne.h"

int core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041eaf0(int param_1)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  byte local_20 [24];
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (0x01B4D738,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (0x01B4D738,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  if (*(int *)(param_1 + 0x5f4) != 0) {
    *(uint *)(0x01E57284 + 0x15a8a0) = 1;
  }
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 0x150),*(float *)(param_1 + 0x308),-1);
  }
  if (*(int *)(param_1 + 0x5f4) != 0) {
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return iVar2;
}
