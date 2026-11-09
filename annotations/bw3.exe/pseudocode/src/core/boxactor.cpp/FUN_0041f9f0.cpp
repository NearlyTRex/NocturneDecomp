// Name: core_boxactor.cpp_FUN_0041f9f0
// Address: 0041f9f0
// Address Range: [[0041f9f0, 0041fb20]]
// Convention: unknown
// Signature: int core_boxactor_cpp_FUN_0041f9f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_boxactor_cpp_FUN_0041f9f0(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  if (0 < *(int *)&pCVar1->field_0x110) {
    if (0.0 <= *(float *)(param_1 + 0x6dc)) {
      fVar6 = ((float10)*(float *)(param_1 + 0x6dc) / (float10)*(float *)(param_1 + 0x6e0)) *
              (float10)_DAT_005b7505;
      round();
      *(int *)(param_1 + 0x6e4) = (int)ROUND(fVar6);
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (0x01BDD7E4,(CVector3f *)(param_1 + 0x20));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
              (0x01BDD7E4,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar3 = auStack_38;
    puVar4 = auStack_20;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = core_box_cpp_FUN_0041daf0(auStack_20);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (DAT_005f2afc,*(int *)(param_1 + 0x6e4));
    if (*(int *)(param_1 + 0x5fc) != 0) {
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 1;
    }
    if (iVar2 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(param_1 + 0x158),*(float *)(param_1 + 0x310),-1);
    }
    if (*(int *)(param_1 + 0x5fc) != 0) {
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
    }
    engine_matrix_c_pop_FUN_0046d080();
    return iVar2;
  }
  return 0;
}
