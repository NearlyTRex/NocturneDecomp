// Name: core_fire.cpp_CShell_render_FUN_004896d0
// Address: 004896d0
// Address Range: [[004896d0, 004897ca]]
// Convention: unknown
// Signature: void core_fire_cpp_CShell_render_FUN_004896d0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CShell_render_FUN_004896d0(CVector3f *param_1)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  CVector3i local_1c;
  
  if (0.0 < param_1[2].x) {
    vertex_ptr = DAT_005ae704->vertex_buffer_ptr;
    local_1c.x = (int)ROUND(param_1->x * 256.0f);
    local_1c.y = (int)ROUND(param_1->y * 256.0f);
    local_1c.z = (int)ROUND(param_1->z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25(&vertex_ptr->projected_vertex,&local_1c);
    iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704,vertex_ptr);
    if (iVar1 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
      if (iVar1 == 0) {
        core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                (0x01E57284,param_1,(UOrientationVector *)&param_1[4].z,(CVector3f *)&DAT_02dd1184
                 ,(CVector3f *)&DAT_02dd1184,(CMatrix3x3f *)0x0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,param_1);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,(CVector3f *)&param_1[4].z,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                ((CKeyFramedModel *)param_1[7].x,0,(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
      return;
    }
  }
  return;
}
