// Name: engine_3d.c_flushRenderQueue_FUN_00407a30
// Address: 00407a30
// MANUAL RECONSTRUCTION
// Address Range: [[00407a30, 00407a99]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_flushRenderQueue_FUN_00407a30(void)

#include "nocturne.h"

void __cdecl engine_3d_c_flushRenderQueue_FUN_00407a30(void)

{
  int iVar3;
  
  if (g_RenderFaceCount != 0) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_drawPolyList_FUN_005b7640
                (g_RenderVertexBuffer,(SMRGLPrimitiveTriangle **)g_RenderFaceArray,g_RenderFaceCount
                 ,0xcd);
      g_RenderFaceCount = 0;
      return;
    }
    for (iVar3 = 0; iVar3 < g_RenderFaceCount; iVar3 = iVar3 + 1) {
      engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
                ((SMRGLHeaderPrimitive *)g_RenderFaceArray[iVar3]);
    }
    g_RenderFaceCount = 0;
  }
  return;
}
