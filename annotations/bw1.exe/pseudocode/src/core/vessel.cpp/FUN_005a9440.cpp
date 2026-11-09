// Name: core_vessel.cpp_FUN_005a9440
// Address: 005a9440
// Address Range: [[005a9440, 005a95b2]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_FUN_005a9440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vessel_cpp_FUN_005a9440(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  uint auStack_48 [6];
  uint auStack_30 [6];
  int iStack_18;
  CVector3f *pCStack_14;
  
  bVar5 = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)(param_1 + 0x20));
  pCStack_14 = (CVector3f *)(param_1 + 0x30);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,pCStack_14,(CVector3f *)0x0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_30;
  puVar4 = auStack_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = core_box_cpp_FUN_004207b0(auStack_48);
  *(uint *)(param_1 + 0x7e8) = uVar1;
  engine_matrix_c_pop_FUN_004839a0();
  if (*(int *)(param_1 + 0x7e8) == 0) {
    return *(uint *)(param_1 + 0x7e8);
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,pCStack_14,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  if ((*(int *)(param_1 + 0x3b8) == 3) || (*(float *)(param_1 + 0x3bc) <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)(param_1 + 0x158),0.0,-1);
  }
  else {
    fVar6 = (float10)_DAT_005f915e - (float10)*(float *)(param_1 + 0x3bc) * (float10)_DAT_005f915e;
    round();
    iStack_18 = (int)ROUND(fVar6);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)(param_1 + 0x158),0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return *(uint *)(param_1 + 0x7e8);
}
