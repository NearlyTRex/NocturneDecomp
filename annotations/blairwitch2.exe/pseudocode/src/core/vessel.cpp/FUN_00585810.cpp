// Name: core_vessel.cpp_FUN_00585810
// Address: 00585810
// Address Range: [[00585810, 00585982]]
// Convention: unknown
// Signature: undefined4 core_vessel_cpp_FUN_00585810(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vessel_cpp_FUN_00585810(int param_1)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 0x20));
  pCStack_14 = (CVector3f *)(param_1 + 0x30);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,pCStack_14,(CVector3f *)0x0);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = auStack_30;
  puVar4 = auStack_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = core_box_cpp_FUN_0041a840(auStack_48);
  *(uint *)(param_1 + 0xaa0) = uVar1;
  engine_matrix_c_pop_FUN_0046b4a0();
  if (*(int *)(param_1 + 0xaa0) == 0) {
    return *(uint *)(param_1 + 0xaa0);
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,pCStack_14,(CVector3f *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  if ((*(int *)(param_1 + 0x514) == 3) || (*(float *)(param_1 + 0x518) <= 0.0)) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)(param_1 + 0x2b4),0.0,-1);
  }
  else {
    fVar6 = (float10)_DAT_005ede02 - (float10)*(float *)(param_1 + 0x518) * (float10)_DAT_005ede02;
    round();
    iStack_18 = (int)ROUND(fVar6);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,iStack_18);
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
              ((CKeyFramedModelInstance *)(param_1 + 0x2b4),0.0,0x2e7);
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
  }
  engine_matrix_c_pop_FUN_0046b4a0();
  return *(uint *)(param_1 + 0xaa0);
}
