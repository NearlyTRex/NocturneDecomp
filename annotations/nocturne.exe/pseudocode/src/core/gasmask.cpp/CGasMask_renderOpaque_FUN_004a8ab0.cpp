// Name: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004a8ab0
// Address: 004a8ab0
// Address Range: [[004a8ab0, 004a8b2f]]
// Convention: unknown
// Signature: int core_gasmask_cpp_CGasMask_renderOpaque_FUN_004a8ab0(int param_1)

#include "nocturne.h"

int core_gasmask_cpp_CGasMask_renderOpaque_FUN_004a8ab0(int param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  byte local_20 [24];
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              ((CKeyFramedModelInstance *)(param_1 + 0x150),0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  return iVar1;
}
