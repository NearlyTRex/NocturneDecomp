// Name: core_fire.cpp_FUN_004a09f0
// Address: 004a09f0
// Address Range: [[004a09f0, 004a0aeb]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a09f0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a09f0(CVector3f *param_1)

{
  SProjectedVertex *output;
  int iVar1;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0.0 < *(float *)(param_1 + 3)) {
    output = *(SProjectedVertex **)DAT_005f2afc;
    iStack_1c = (int)ROUND(*(float *)param_1 * _DAT_005df8e4);
    iStack_18 = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005df8e4);
    iStack_14 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005df8e4);
    engine_special_cpp_FUN_0056356c(output,(CVector3i *)&iStack_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0
                      (DAT_005f2afc,(SRenderVertex *)output);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
                (g_CDemonSetPtr,param_1,(UOrientationVector *)&param_1[5].field_0x4,
                 (CVector3f *)&DAT_02cfd900,(CVector3f *)&DAT_02cfd900,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (DAT_005f2afc,param_1);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,(CVector3f *)&param_1[5].field_0x4,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
                (*(CKeyFramedModel **)&param_1[7].field_0x8,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_matrix_c_pop_FUN_0046d080();
      return;
    }
  }
  return;
}
