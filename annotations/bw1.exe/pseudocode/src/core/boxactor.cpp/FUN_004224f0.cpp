// Name: core_boxactor.cpp_FUN_004224f0
// Address: 004224f0
// Address Range: [[004224f0, 004225f0]]
// Convention: unknown
// Signature: int core_boxactor_cpp_FUN_004224f0(int param_1)

#include "nocturne.h"

int core_boxactor_cpp_FUN_004224f0(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  if ((*(int *)&pCVar1->field_0x110 < 1) ||
     ((iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0
      && (*(int *)(param_1 + 0xfc) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x5f4) == 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 != 0)
     ) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (0x01BC120C,(CVector3f *)(param_1 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (0x01BC120C,(CVector3f *)(param_1 + 0x30),(CVector3f *)0x0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_38;
  puVar4 = auStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_004207b0(auStack_20);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
              ((CKeyFramedModelInstance *)(param_1 + 0x158),*(float *)(param_1 + 0x310),-1);
  }
  engine_matrix_c_pop_FUN_004839a0();
  return iVar2;
}
