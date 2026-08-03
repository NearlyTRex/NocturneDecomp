// Name: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041ea00
// Address: 0041ea00
// Address Range: [[0041ea00, 0041eaec]]
// Convention: unknown
// Signature: int core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041ea00(int param_1)

#include "nocturne.h"

int core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041ea00(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  byte local_20 [24];
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  if ((pCVar1->poly_count < 1) ||
     ((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar2 == 0
      && (*(int *)(param_1 + 0xfc) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x5ec) == 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar2 != 0)
     ) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            ((CDemonRenderer *)PTR_DAT_005ae700,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            ((CDemonRenderer *)PTR_DAT_005ae700,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 0x150),*(float *)(param_1 + 0x308),-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return iVar2;
}
