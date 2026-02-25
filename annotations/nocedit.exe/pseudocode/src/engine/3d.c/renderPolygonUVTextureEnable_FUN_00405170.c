// Name: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405170
// Address: 00405170
// Address Range: [[00405170, 00405263]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureEnable_FUN_00405170(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureEnable_FUN_00405170(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar2 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags.dword = RENDER_TEXTURE_ENABLE;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(prim);
    vertex_count = 0;
    iVar2 = 0;
    pSVar3 = prim + 1;
    for (iVar4 = 0; iVar4 < (prim->base).count * 3; iVar4 = iVar4 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)g_ProcessedVertexIndices + iVar2) = iVar1;
      g_RenderVertexBuffer[iVar1].u = (pSVar3->base).count;
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      g_RenderVertexBuffer[(pSVar3->base).type].v = (pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
