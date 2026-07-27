// Name: core_filmreel.cpp_FUN_00481d90
// Address: 00481d90
// Address Range: [[00481d90, 00481dff] [00481e01, 00481e15]]
// Convention: unknown
// Signature: int core_filmreel_cpp_FUN_00481d90(int param_1)

#include "nocturne.h"

int core_filmreel_cpp_FUN_00481d90(int param_1)

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
