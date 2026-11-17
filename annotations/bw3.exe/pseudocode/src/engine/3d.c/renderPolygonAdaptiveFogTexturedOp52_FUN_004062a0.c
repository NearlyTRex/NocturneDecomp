// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0
// Address: 004062a0
// Address Range: [[004062a0, 00406533]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
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
        if (g_INT_005f07bc == 0) {
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
          g_VertexPreprocessMode = 0;
          g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        }
        else {
          g_VertexPreprocessMode = 1;
          g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        }
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
        g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = 1;
        engine_light_cpp_calculateLighting_FUN_004e0e00
                  ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i)
        ;
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
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = 0;
    }
    piVar3 = g_ProcessedVertexIndices;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + g_ProcessedVertexOffset;
      g_SRenderVertex_ARRAY_0060b014[(pSVar2->base).type + g_ProcessedVertexOffset].u =
           (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      g_SRenderVertex_ARRAY_0060b014[(pSVar2->base).type + g_ProcessedVertexOffset].v =
           (int)(pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
