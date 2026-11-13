// Name: core_set.cpp_FUN_0053ab10
// Address: 0053ab10
// Address Range: [[0053ab10, 0053ab7f]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0053ab10(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_set_cpp_FUN_0053ab10(void)

{
  int iVar1;
  CDemonSet *in_stack_00000004;
  SMRGLPrimitiveTriangle *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0
                  (in_stack_00000004,&in_stack_00000008->base,in_stack_0000000c,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880
              (DAT_005f2afc,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  }
  return;
}
