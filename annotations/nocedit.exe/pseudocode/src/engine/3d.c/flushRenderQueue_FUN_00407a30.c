// Name: engine_3d.c_flushRenderQueue_FUN_00407a30
// Address: 00407a30
// Address Range: [[00407a30, 00407a99]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushRenderQueue_FUN_00407a30(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushRenderQueue_FUN_00407a30(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (g_RenderFaceCount != 0) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_drawPolyList_FUN_005b7640
                (g_RenderVertexBuffer,(SMRGLPrimitiveTriangle **)g_RenderFaceArray,g_RenderFaceCount
                 ,0xcd);
      g_RenderFaceCount = 0;
      return;
    }
    iVar3 = 0;
    if (0 < g_RenderFaceCount) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)((int)g_RenderFaceArray + iVar2);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
                  ((SMRGLHeaderPrimitive *)*puVar1);
      } while (iVar3 < g_RenderFaceCount);
    }
    g_RenderFaceCount = 0;
  }
  return;
}
