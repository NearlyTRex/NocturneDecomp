// Name: core_fire.cpp_CShell_render_FUN_004b4090
// Address: 004b4090
// Address Range: [[004b4090, 004b418b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_render_FUN_004b4090(CShell *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CShell_render_FUN_004b4090(CShell *this_ptr)

{
  SProjectedVertex *output;
  int iVar1;
  CVector3i CStack_1c;
  
  if (0.0 < *(float *)&this_ptr->field_0x24) {
    output = (SProjectedVertex *)DAT_00612560->vertex_buffer_ptr;
    CStack_1c.x = (int)ROUND(*(float *)this_ptr * _DAT_005fff94);
    CStack_1c.y = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005fff94);
    CStack_1c.z = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005fff94);
    engine_special_cpp_FUN_0058043c(output,&CStack_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0
                      (DAT_00612560,(SRenderVertex *)output);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,this_ptr,0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
                (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&this_ptr->euler_angles,
                 (CVector3f *)&DAT_02c8af28,(CVector3f *)&DAT_02c8af28,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,(CVector3f *)this_ptr);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&this_ptr->euler_angles,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
                (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_matrix_c_pop_FUN_004839a0();
      return;
    }
  }
  return;
}
