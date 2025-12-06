// Name: engine_3d.c_renderOverlayTextureEnable_FUN_00404020
// Address: 00404020
// Address Range: [[00404020, 00404119]]
// Convention: __cdecl
// Signature: void * engine_3d.c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

void * __cdecl
engine_3d_c_renderOverlayTextureEnable_FUN_00404020(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  uint uVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int *piVar4;
  int iVar5;
  
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
  piVar4 = g_ProcessedVertexIndices;
  pSVar3 = polygon_info + 1;
  for (iVar5 = 0; uVar2 = g_ProcessedVertexOffset, iVar1 = (polygon_info->base).count,
      SBORROW /* signed borrow */4(iVar5,iVar1 * 3) != iVar5 + iVar1 * -3 < 0; iVar5 = iVar5 + 3) {
    *piVar4 = (pSVar3->base).type + g_ProcessedVertexOffset;
    g_RenderVertexBuffer[(pSVar3->base).type + uVar2].u = (float)(pSVar3->base).count;
    piVar4 = piVar4 + 1;
    g_RenderVertexBuffer[(pSVar3->base).type + uVar2].v = (float)(pSVar3->surface_normal).A;
    pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0
            ((polygon_info->base).count,g_ProcessedVertexIndices);
  return (void *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}
