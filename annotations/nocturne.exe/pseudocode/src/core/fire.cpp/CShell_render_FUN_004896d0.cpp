// Name: core_fire.cpp_CShell_render_FUN_004896d0
// Address: 004896d0
// Address Range: [[004896d0, 004897ca]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CShell_render_FUN_004896d0(CShell *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CShell_render_FUN_004896d0(CShell *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  CVector3i local_1c;
  
  if (0.0 < (this_ptr->base).lifetime_remaining) {
    vertex_ptr = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
    local_1c.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
    local_1c.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
    local_1c.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80
                      (g_CDemonRenderer_PTR_005ae704,vertex_ptr);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                        (g_CDemonRenderer_PTR_005ae704);
      if (iVar1 == 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
                  (_DAT_007f7370,(CVector3f *)this_ptr,(SProjectedVertex *)0x0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                (g_CDemonSet_PTR_005be368,(CVector3f *)this_ptr,
                 (UOrientationVector *)&this_ptr->euler_angles,(CVector3f *)&DAT_02dd1184,
                 (CVector3f *)&DAT_02dd1184,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (g_CDemonRenderer_PTR_005ae704,(CVector3f *)this_ptr);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (g_CDemonRenderer_PTR_005ae704,&this_ptr->euler_angles,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                (this_ptr->model_ptr,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
      return;
    }
  }
  return;
}
