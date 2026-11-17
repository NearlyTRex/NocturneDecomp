// Name: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0
// Address: 004046e0
// Address Range: [[004046e0, 004048d9]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int vertex_count;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
  if (iVar2 != 0) {
    if (g_TexturesDisabled == 0) {
      if (g_INT_007303f0 == 0) {
        if (g_MMXSupported == 0) {
          if (g_INT_005fba20 == 0x20) {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
          }
          else {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
          }
        }
        else if (g_INT_005fba20 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = 3;
        engine_3d_c_calculatePolygonLighting_FUN_004039d0(primitive);
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_INT_005fba20 == 0x20) {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
          }
          else {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
          }
        }
        else if (g_INT_005fba20 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
        }
        g_RenderStateFlags.dword = (RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = 1;
        engine_light_cpp_calculateLighting_FUN_004e0e00
                  ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                   (primitive->surface_normal).C.i);
        g_INT_01c6b5c0 =
             engine_3d_c_lookupLitColor_FUN_00403990(g_CurrentPolygonColor,g_INT_01c6b5c4);
      }
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_INT_005fba20 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
        }
      }
      else if (g_INT_005fba20 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
      }
      g_VertexPreprocessMode = 0;
      g_RenderStateFlags.dword = 0;
    }
    iVar2 = 0;
    vertex_count = 0;
    pSVar3 = primitive + 1;
    for (iVar4 = 0; iVar4 < (primitive->base).count * 3; iVar4 = iVar4 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)g_ProcessedVertexIndices + iVar2) = iVar1;
      g_SRenderVertex_ARRAY_0060b014[iVar1].u = (pSVar3->base).count;
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      g_SRenderVertex_ARRAY_0060b014[(pSVar3->base).type].v = (int)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(vertex_count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
