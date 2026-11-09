// Name: core_fire.cpp_FUN_0049b6f0
// Address: 0049b6f0
// Address Range: [[0049b6f0, 0049b7eb]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049b6f0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049b6f0(CVector3f *param_1)

{
  SProjectedVertex *output;
  int iVar1;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0.0 < *(float *)(param_1 + 3)) {
    output = *(SProjectedVertex **)DAT_0060b280;
    iStack_1c = (int)ROUND(*(float *)param_1 * _DAT_005f64e4);
    iStack_18 = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005f64e4);
    iStack_14 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005f64e4);
    engine_special_cpp_FUN_0055d9ec(output,(CVector3i *)&iStack_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0
                      (DAT_0060b280,(SRenderVertex *)output);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
                (g_CDemonSetPtr,param_1,(UOrientationVector *)&param_1[5].field_0x4,
                 (CVector3f *)&DAT_0265370c,(CVector3f *)&DAT_0265370c,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (DAT_0060b280,param_1);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (DAT_0060b280,(CVector3f *)&param_1[5].field_0x4,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
                (*(CKeyFramedModel **)&param_1[7].field_0x8,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_matrix_c_pop_FUN_0046b4a0();
      return;
    }
  }
  return;
}
