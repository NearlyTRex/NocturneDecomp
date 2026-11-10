// Name: core_set.cpp_FUN_0053ab0e
// Address: 0053ab0e
// Address Range: [[0053ab0e, 0053ab7f]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0053ab0e(CDemonSet *param_1,SMRGLHeaderPrimitive *param_2,int param_3,int param_4)

#include "nocturne.h"

void core_set_cpp_FUN_0053ab0e(CDemonSet *param_1,SMRGLHeaderPrimitive *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*(int *)&g_CGamePtr->field_0x214 == 0) {
    if (*(int *)&g_CGamePtr->field_0x218 != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0(param_1,param_2,param_3,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880
              (DAT_005f2afc,(SMRGLPrimitiveTriangle *)param_2,param_3,param_4);
  }
  return;
}
