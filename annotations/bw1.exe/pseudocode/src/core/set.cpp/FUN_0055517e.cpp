// Name: core_set.cpp_FUN_0055517e
// Address: 0055517e
// Address Range: [[0055517e, 005551ef]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0055517e(CDemonSet *param_1,SMRGLPrimitiveTriangle *param_2,int param_3,int param_4)

#include "nocturne.h"

void core_set_cpp_FUN_0055517e(CDemonSet *param_1,SMRGLPrimitiveTriangle *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60
                  (param_1,&param_2->base,param_3,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
              (DAT_00612560,param_2,param_3,param_4);
  }
  return;
}
