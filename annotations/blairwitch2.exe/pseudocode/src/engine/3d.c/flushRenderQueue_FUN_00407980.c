// Name: engine_3d.c_flushRenderQueue_FUN_00407980
// Address: 00407980
// Address Range: [[00407980, 004079e9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushRenderQueue_FUN_00407980(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushRenderQueue_FUN_00407980(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_007ba070 != 0) {
    if (g_INT_01c37788 != 0) {
      engine_special_cpp_drawPolyList_FUN_0055f950
                (g_SRenderVertex_ARRAY_00622014,
                 (SMRGLPrimitiveQuad **)g_SMRGLHeaderPrimitive_PTR_ARRAY_007ba074,g_INT_007ba070,
                 0xcd);
      g_INT_007ba070 = 0;
      return;
    }
    iVar3 = 0;
    if (0 < g_INT_007ba070) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)((int)g_SMRGLHeaderPrimitive_PTR_ARRAY_007ba074 + iVar2);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70
                  ((SMRGLHeaderPrimitive *)*puVar1);
      } while (iVar3 < g_INT_007ba070);
    }
    g_INT_007ba070 = 0;
  }
  return;
}
