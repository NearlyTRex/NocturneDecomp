// Name: core_set.cpp_FUN_00555180
// Address: 00555180
// Address Range: [[00555180, 005551ef]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00555180(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_set_cpp_FUN_00555180(void)

{
  int iVar1;
  CDemonSet *in_stack_00000004;
  SMRGLPrimitiveTriangle *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (g_CGamePtr->suppress_set_geometry == 0) {
    if (g_CGamePtr->render_mode != 0) {
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
      if (iVar1 == 0) {
        core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60
                  (in_stack_00000004,&in_stack_00000008->base,in_stack_0000000c,0xffff);
        return;
      }
    }
    engine_drender_cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
              (DAT_00612560,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  }
  return;
}
