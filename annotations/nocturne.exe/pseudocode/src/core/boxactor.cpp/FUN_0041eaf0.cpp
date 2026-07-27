// Name: core_boxactor.cpp_FUN_0041eaf0
// Address: 0041eaf0
// Address Range: [[0041eaf0, 0041ebdc]]
// Convention: unknown
// Signature: int core_boxactor_cpp_FUN_0041eaf0(int param_1)

#include "nocturne.h"

int core_boxactor_cpp_FUN_0041eaf0(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_20 [24];
  
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x110) < 1) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (0x01B4D738,param_1 + 0x20);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(0x01B4D738,param_1 + 0x30,0)
  ;
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  if (*(int *)(param_1 + 0x5f4) != 0) {
    *(uint *)(0x01E57284 + 0x15a8a0) = 1;
  }
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x150,*(uint *)(param_1 + 0x308),0xffffffff);
  }
  if (*(int *)(param_1 + 0x5f4) != 0) {
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(0x01B4D738);
  return iVar1;
}
