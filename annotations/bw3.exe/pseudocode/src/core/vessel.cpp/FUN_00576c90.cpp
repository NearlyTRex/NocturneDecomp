// Name: core_vessel.cpp_FUN_00576c90
// Address: 00576c90
// Address Range: [[00576c90, 00576e02]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_FUN_00576c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vessel_cpp_FUN_00576c90(int param_1)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)(param_1 + 0x20));
  pCStack_14 = (CVector3f *)(param_1 + 0x30);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,pCStack_14,(CVector3f *)0x0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_30;
  puVar4 = auStack_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = core_box_cpp_FUN_0041daf0(auStack_48);
  *(uint *)(param_1 + 0x7e8) = uVar1;
  engine_matrix_c_pop_FUN_0046d080();
  if (*(int *)(param_1 + 0x7e8) == 0) {
    return *(uint *)(param_1 + 0x7e8);
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,pCStack_14,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  if ((*(int *)(param_1 + 0x3b8) == 3) || (*(float *)(param_1 + 0x3bc) <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              ((CKeyFramedModelInstance *)(param_1 + 0x158),0.0,-1);
  }
  else {
    fVar6 = (float10)_DAT_005d70c7 - (float10)*(float *)(param_1 + 0x3bc) * (float10)_DAT_005d70c7;
    round();
    iStack_18 = (int)ROUND(fVar6);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
              ((CKeyFramedModelInstance *)(param_1 + 0x158),0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
  }
  engine_matrix_c_pop_FUN_0046d080();
  return *(uint *)(param_1 + 0x7e8);
}
