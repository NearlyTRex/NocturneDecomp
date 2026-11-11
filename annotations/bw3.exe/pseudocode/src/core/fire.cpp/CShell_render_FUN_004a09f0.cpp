// Name: core_fire.cpp_CShell_render_FUN_004a09f0
// Address: 004a09f0
// Address Range: [[004a09f0, 004a0aeb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_render_FUN_004a09f0(CShell *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CShell_render_FUN_004a09f0(CShell *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  CVector3i CStack_1c;
  
  if (0.0 < (this_ptr->base).lifetime_remaining) {
    vertex_ptr = DAT_005f2afc->vertex_buffer_ptr;
    CStack_1c.x = (int)ROUND((this_ptr->base).position.x * _DAT_005df8e4);
    CStack_1c.y = (int)ROUND((this_ptr->base).position.y * _DAT_005df8e4);
    CStack_1c.z = (int)ROUND((this_ptr->base).position.z * _DAT_005df8e4);
    engine_special_cpp_FUN_0056356c(&vertex_ptr->projected_vertex,&CStack_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0(DAT_005f2afc,vertex_ptr);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,this_ptr,0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
                (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&this_ptr->euler_angles,
                 (CVector3f *)&DAT_02cfd900,(CVector3f *)&DAT_02cfd900,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (DAT_005f2afc,(CVector3f *)this_ptr);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&this_ptr->euler_angles,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
                (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_matrix_c_pop_FUN_0046d080();
      return;
    }
  }
  return;
}
