// Name: core_fire.cpp_CShell_render_FUN_0049b6f0
// Address: 0049b6f0
// Address Range: [[0049b6f0, 0049b7eb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_render_FUN_0049b6f0(CShell *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_render_FUN_0049b6f0(CShell *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  CVector3i CStack_1c;
  
  if (0.0 < (this_ptr->base).lifetime_remaining) {
    vertex_ptr = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
    CStack_1c.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
    CStack_1c.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
    CStack_1c.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
    engine_special_cpp_transformPoint_FUN_0055d9ec(&vertex_ptr->projected_vertex,&CStack_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0
                      (g_CDemonRenderer_PTR_0060b280,vertex_ptr);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                        (g_CDemonRenderer_PTR_0060b280);
      if (iVar1 == 0) {
        (*((g_CDemonCamera_PTR_007bda74->base).vtable)->setupPerspectiveAndFog)
                  (g_CDemonCamera_PTR_007bda74,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
                (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&this_ptr->euler_angles,
                 &g_CVector3f_0265370c,&g_CVector3f_0265370c,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (g_CDemonRenderer_PTR_0060b280,(CVector3f *)this_ptr);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (g_CDemonRenderer_PTR_0060b280,&this_ptr->euler_angles,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
                (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_pop_FUN_0046b4a0();
      return;
    }
  }
  return;
}
