// Name: engine_3d.c_renderOverlayTextureEnable_FUN_00404020
// Address: 00404020
// Address Range: [[00404020, 00404119]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

void * __cdecl
engine_3d_c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive *polygon_info)

{
  uint uVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  int iVar4;
  
  if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
  }
  else if (g_BitsPerPixel == 0x20) {
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
  }
  else {
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
  g_RenderStateFlag2 = PREPROCESS_NONE;
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
  piVar3 = g_ProcessedVertexIndices;
  pSVar2 = polygon_info + 1;
  for (iVar4 = 0; uVar1 = g_ProcessedVertexOffset, iVar4 < (polygon_info->base).count * 3;
      iVar4 = iVar4 + 3) {
    *piVar3 = (pSVar2->base).type + g_ProcessedVertexOffset;
    g_RenderVertexBuffer[(pSVar2->base).type + uVar1].u = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    g_RenderVertexBuffer[(pSVar2->base).type + uVar1].v = (pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0
            ((polygon_info->base).count,g_ProcessedVertexIndices);
  return (void *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}
