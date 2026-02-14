// Name: engine_3d.c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860
// Address: 00406860
// Address Range: [[00406860, 00406a14]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860(SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedDetailedComplex_FUN_00406860(SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iVar6;
  int vertex_count;
  
  pSVar4 = polygon_info + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
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
    g_RenderStateFlags.dword = RENDER_PLANE_MASKED_COMPLEX;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    if (g_CurrentAlphaValue < 0xff) {
      g_RenderStateFlags.dword = g_RenderStateFlags.dword | 0x20;
    }
    iVar6 = 0;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    vertex_count = 0;
    for (iVar2 = 0; iVar2 < (polygon_info->base).count * 3; iVar2 = iVar2 + 3) {
      *(int *)((int)g_ProcessedVertexIndices + iVar6) = (pSVar4->base).type;
      iVar3 = (pSVar4->base).count;
      iVar5 = (pSVar4->surface_normal).A;
      if (g_CurrentTextureDimension < 0x41) {
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (iVar5 < 0x40000) {
          iVar5 = 0x40000;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
        if (0xfbffff < iVar5) {
          iVar5 = 0xfbffff;
        }
      }
      else {
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (iVar5 < 0x10000) {
          iVar5 = 0x10000;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
        if (0xfeffff < iVar5) {
          iVar5 = 0xfeffff;
        }
      }
      g_RenderVertexBuffer[(pSVar4->base).type].u = iVar3;
      pSVar1 = &pSVar4->base;
      iVar6 = iVar6 + 4;
      vertex_count = vertex_count + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      g_RenderVertexBuffer[pSVar1->type].v = iVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}
