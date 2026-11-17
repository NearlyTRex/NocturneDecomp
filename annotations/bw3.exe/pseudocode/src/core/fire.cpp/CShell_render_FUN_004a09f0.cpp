// Name: core_fire.cpp_CShell_render_FUN_004a09f0
// Address: 004a09f0
// Address Range: [[004a09f0, 004a0aeb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_render_FUN_004a09f0(CShell *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_render_FUN_004a09f0(CShell *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  CVector3i CStack_1c;
  
  if (0.0 < (this_ptr->base).lifetime_remaining) {
    vertex_ptr = g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr;
    CStack_1c.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
    CStack_1c.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
    CStack_1c.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
    engine_special_cpp_transformPoint_FUN_0056356c(&vertex_ptr->projected_vertex,&CStack_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0
                      (g_CDemonRenderer_PTR_005f2afc,vertex_ptr);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540
                        (g_CDemonRenderer_PTR_005f2afc);
      if (iVar1 == 0) {
        (*((g_CDemonCamera_PTR_007e2a54->base).vtable)->setupPerspectiveAndFog)
                  (g_CDemonCamera_PTR_007e2a54,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
                (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&this_ptr->euler_angles,
                 &g_CVector3f_02cfd900,&g_CVector3f_02cfd900,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (g_CDemonRenderer_PTR_005f2afc,(CVector3f *)this_ptr);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (g_CDemonRenderer_PTR_005f2afc,&this_ptr->euler_angles,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
                (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_pop_FUN_0046d080();
      return;
    }
  }
  return;
}
