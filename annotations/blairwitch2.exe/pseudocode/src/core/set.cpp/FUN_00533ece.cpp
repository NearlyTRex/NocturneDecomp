// Name: core_set.cpp_FUN_00533ece
// Address: 00533ece
// Address Range: [[00533ece, 00533f3f]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00533ece(CDemonSet *param_1,SMRGLHeaderPrimitive *param_2,int param_3,int param_4)

#include "nocturne.h"

void core_set_cpp_FUN_00533ece(CDemonSet *param_1,SMRGLHeaderPrimitive *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0(param_1,param_2,param_3,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0
              (DAT_0060b280,(SMRGLPrimitiveTriangle *)param_2,param_3,param_4);
  }
  return;
}
