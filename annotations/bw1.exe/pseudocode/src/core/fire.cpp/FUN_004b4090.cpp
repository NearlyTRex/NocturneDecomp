// Name: core_fire.cpp_FUN_004b4090
// Address: 004b4090
// Address Range: [[004b4090, 004b418b]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004b4090(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004b4090(CVector3f *param_1)

{
  SProjectedVertex *output;
  int iVar1;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0.0 < *(float *)(param_1 + 3)) {
    output = *(SProjectedVertex **)DAT_00612560;
    iStack_1c = (int)ROUND(*(float *)param_1 * _DAT_005fff94);
    iStack_18 = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005fff94);
    iStack_14 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005fff94);
    engine_special_cpp_FUN_0058043c(output,(CVector3i *)&iStack_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0
                      (DAT_00612560,(SRenderVertex *)output);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
                (g_CDemonSetPtr,param_1,(UOrientationVector *)&param_1[5].field_0x4,
                 (CVector3f *)&DAT_02c8af28,(CVector3f *)&DAT_02c8af28,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,param_1);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,(CVector3f *)&param_1[5].field_0x4,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
                (*(CKeyFramedModel **)&param_1[7].field_0x8,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_matrix_c_pop_FUN_004839a0();
      return;
    }
  }
  return;
}
