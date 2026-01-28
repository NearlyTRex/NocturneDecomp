// Name: engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430
// Address: 00406430
// Address Range: [[00406430, 004066c3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureAdaptiveWrapped_FUN_00406430(SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTextureAdaptiveWrapped_FUN_00406430(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_TexturesDisabled == 0) {
      if (DAT_00772a70 == 0) {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        if (INT_0066df80 == 0) {
          if (g_MMXSupported == 0) {
            if (g_BitsPerPixel == 0x20) {
              g_ScanlineRenderFunc =
                   wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
            }
            else {
              g_ScanlineRenderFunc =
                   wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
            }
          }
          else if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
          }
          else {
            g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
          }
          g_RenderStateFlag2 = PREPROCESS_NONE;
          g_RenderStateFlags = RENDER_TEXTURE_LIT;
        }
        else {
          g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
          g_RenderStateFlags = RENDER_TEXTURE_LIT;
        }
      }
      else {
        if (g_MMXSupported == 0) {
          if (g_BitsPerPixel == 0x20) {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
          }
          else {
            g_ScanlineRenderFunc =
                 wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
          }
        }
        else if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = RENDER_TEXTURE_BASE;
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
        engine_light_cpp_calculateLighting_FUN_00505780
                  ((polygon_info->surface_normal).A,(polygon_info->surface_normal).B,
                   (polygon_info->surface_normal).C);
        g_ActiveRenderColor = engine_3d_c_makeGrayscaleColor_FUN_004039c0(g_CurrentPolygonColor);
      }
    }
    else {
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
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = PREPROCESS_NONE;
    }
    piVar3 = g_ProcessedVertexIndices;
    pSVar2 = polygon_info + 1;
    for (iVar1 = 0; iVar1 < (polygon_info->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + g_ProcessedVertexOffset;
      g_RenderVertexBuffer[(pSVar2->base).type + g_ProcessedVertexOffset].u =
           (float)(pSVar2->base).count;
      piVar3 = piVar3 + 1;
      g_RenderVertexBuffer[(pSVar2->base).type + g_ProcessedVertexOffset].v =
           (float)(pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&polygon_info[1].base + (polygon_info->base).count * 0xc);
}
