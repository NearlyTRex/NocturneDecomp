// Name: FUN_00414e70
// Address: 00414e70
// Address Range: [[00414e70, 00414eef]]
// Convention: unknown
// Signature: int FUN_00414e70(int param_1)

#include "nocturne.h"

int FUN_00414e70(int param_1)

{
  uint uVar1;
  int iVar2;
  byte local_20 [24];
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,param_1 + 0x30,0)
  ;
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar1);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x150,0,0xffffffff);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return iVar2;
}
