// Name: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290
// Address: 00406290
// Address Range: [[00406290, 00406422]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_00406290(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_00406290(SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  float fVar3;
  SMRGLHeaderPrimitive *pSVar4;
  float fVar5;
  int iVar6;
  int vertex_count;
  
  pSVar4 = polygon_info + 1;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar2 != 0) {
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
    vertex_count = 0;
    g_RenderStateFlags = RENDER_TEXTURE_PERSPECTIVE;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    iVar2 = 0;
    for (iVar6 = 0; iVar6 < (polygon_info->base).count * 3; iVar6 = iVar6 + 3) {
      *(int *)((int)g_ProcessedVertexIndices + iVar2) = (pSVar4->base).type;
      fVar3 = (float)(pSVar4->base).count;
      fVar5 = (float)(pSVar4->surface_normal).A;
      if (g_CurrentTextureDimension < 0x41) {
        if ((int)fVar3 < 0x40000) {
          fVar3 = 3.67342e-40;
        }
        if ((int)fVar5 < 0x40000) {
          fVar5 = 3.67342e-40;
        }
        if (0xfbffff < (int)fVar3) {
          fVar3 = 2.3142544e-38;
        }
        if (0xfbffff < (int)fVar5) {
          fVar5 = 2.3142544e-38;
        }
      }
      else {
        if ((int)fVar3 < 0x10000) {
          fVar3 = 9.18355e-41;
        }
        if ((int)fVar5 < 0x10000) {
          fVar5 = 9.18355e-41;
        }
        if (0xfeffff < (int)fVar3) {
          fVar3 = 2.341805e-38;
        }
        if (0xfeffff < (int)fVar5) {
          fVar5 = 2.341805e-38;
        }
      }
      g_RenderVertexBuffer[(pSVar4->base).type].u = fVar3;
      pSVar1 = &pSVar4->base;
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      g_RenderVertexBuffer[pSVar1->type].v = fVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}
