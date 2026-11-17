// Name: engine_3d.c_flushRenderQueue_FUN_004077b0
// Address: 004077b0
// Address Range: [[004077b0, 00407819]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushRenderQueue_FUN_004077b0(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushRenderQueue_FUN_004077b0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_007c1070 != 0) {
    if (g_INT_01c50948 != 0) {
      engine_special_cpp_drawPolyList_FUN_005823a0
                (g_SRenderVertex_ARRAY_00629014,
                 (SMRGLPrimitiveQuad **)g_SMRGLHeaderPrimitive_PTR_ARRAY_007c1074,g_INT_007c1070,
                 0xcd);
      g_INT_007c1070 = 0;
      return;
    }
    iVar3 = 0;
    if (0 < g_INT_007c1070) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)((int)g_SMRGLHeaderPrimitive_PTR_ARRAY_007c1074 + iVar2);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
                  ((SMRGLHeaderPrimitive *)*puVar1);
      } while (iVar3 < g_INT_007c1070);
    }
    g_INT_007c1070 = 0;
  }
  return;
}
