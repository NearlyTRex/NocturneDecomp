// Name: engine_3d.c_flushRenderQueue_FUN_00408f50
// Address: 00408f50
// Address Range: [[00408f50, 00408fb9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushRenderQueue_FUN_00408f50(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushRenderQueue_FUN_00408f50(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (g_INT_00761ec4 != 0) {
    if (g_UseExternalRenderer != 0) {
      engine_special_cpp_drawPolyList_FUN_00532680
                (g_SRenderVertex_ARRAY_005c5014,
                 (SMRGLPrimitiveQuad **)g_SMRGLHeaderPrimitive_PTR_ARRAY_00761ec8,g_INT_00761ec4,
                 0xcd);
      g_INT_00761ec4 = 0;
      return;
    }
    iVar3 = 0;
    if (0 < g_INT_00761ec4) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)((int)g_SMRGLHeaderPrimitive_PTR_ARRAY_00761ec8 + iVar2);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00407120
                  ((SMRGLHeaderPrimitive *)*puVar1);
      } while (iVar3 < g_INT_00761ec4);
    }
    g_INT_00761ec4 = 0;
  }
  return;
}
