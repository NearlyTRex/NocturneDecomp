// Name: core_fire.cpp_CShell_render_FUN_004c6200
// Address: 004c6200
// Address Range: [[004c6200, 004c62fb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_render_FUN_004c6200(CShell *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CShell_render_FUN_004c6200(CShell *this_ptr)

{
  SRenderVertex *vertex_ptr_00;
  int iVar1;
  int iVar2;
  CVector3i local_1c;
  SRenderVertex *vertex_ptr;
  
  if (0.0 < (this_ptr->base).lifetime_remaining) {
    vertex_ptr_00 = g_CDemonRendererPtr2->vertex_buffer_ptr;
    local_1c.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
    local_1c.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
    local_1c.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr_00->projected_vertex,&local_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50
                      (g_CDemonRendererPtr2,vertex_ptr_00);
    if (iVar1 != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar2 == 0) {
        (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
                  (g_CurrentSceneCamera,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
                (g_CDemonSetPtr,(CVector3f *)this_ptr,(UOrientationVector *)&this_ptr->euler_angles,
                 &g_ZeroVector.f,&g_ZeroVector.f,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,(CVector3i *)&this_ptr->euler_angles,(CVector3i *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
      return;
    }
  }
  return;
}
