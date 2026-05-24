// Name: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406430
// Address: 00406430
// MANUAL RECONSTRUCTION
// Address Range: [[00406430, 004066c3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406430(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406430(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLVertex *pSVar2;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_TexturesDisabled == 0) {
      if (INT_00772a70 == 0) {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        if (INT_0066df80 == 0) {
          if (g_MMXSupported == 0) {
            if (g_BitsPerPixel == 0x20) {
              g_ScanlineRenderFunc =
                   (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
            }
            else {
              g_ScanlineRenderFunc =
                   (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
            }
          }
          else if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
          }
          else {
            g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
          }
          g_VertexPreprocessMode = PREPROCESS_NONE;
          g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        }
        else {
          g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
          g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        }
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags.dword = (RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
        g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
        engine_light_cpp_calculateLighting_FUN_00505780
                  ((prim->surface_normal).A.i,(prim->surface_normal).B.i,(prim->surface_normal).C.i)
        ;
        g_ActiveRenderColor =
             engine_3d_c_makeGrayscaleColor_FUN_004039c0
                       (g_CurrentPolygonColor,g_CurrentLightingValue);
      }
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
        }
      }
      else if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlags.dword = 0;
      g_VertexPreprocessMode = PREPROCESS_NONE;
    }
    pSVar2 = (SMRGLVertex *)(prim + 1);
    for (iVar1 = 0; iVar1 < (prim->base).count; iVar1 = iVar1 + 1) {
      iVar2 = pSVar2[iVar1].vertex_index + g_ProcessedVertexOffset;
      g_ProcessedVertexIndices[iVar1] = iVar2;
      g_RenderVertexBuffer[iVar2].u = pSVar2[iVar1].texture_u;
      g_RenderVertexBuffer[iVar2].v = pSVar2[iVar1].texture_v;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((SMRGLVertex *)(prim + 1) + (prim->base).count);
}
