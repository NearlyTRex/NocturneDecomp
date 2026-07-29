// Name: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404020
// Address: 00404020
// MANUAL RECONSTRUCTION
// Address Range: [[00404020, 00404119]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404020(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404020(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLVertex *pSVar2;
  int iVar4;
  
  if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
  }
  else if (g_BitsPerPixel == 0x20) {
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
  }
  else {
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
  g_VertexPreprocessMode = PREPROCESS_NONE;
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(prim);
  pSVar2 = (SMRGLVertex *)(prim + 1);
  for (iVar4 = 0; iVar4 < (prim->base).count; iVar4 = iVar4 + 1) {
    iVar1 = pSVar2[iVar4].vertex_index + g_ProcessedVertexOffset;
    g_ProcessedVertexIndices[iVar4] = iVar1;
    g_RenderVertexBuffer[iVar1].u = pSVar2[iVar4].texture_u;
    g_RenderVertexBuffer[iVar1].v = pSVar2[iVar4].texture_v;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
  return (void *)((SMRGLVertex *)(prim + 1) + (prim->base).count);
}
