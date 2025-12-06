// Name: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 00407869]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  SMRGLHeaderExtended *pSVar2;
  SMRGLHeaderPrimitive *pSVar3;
  SMRGLHeaderExtended *extraout_EAX;
  SMRGLHeaderExtended *extraout_EAX_00;
  int iVar4;
  int iVar5;
  uint in_stack_00000008;
  int in_stack_00000014;
  
  pSVar2 = (SMRGLHeaderExtended *)
           engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (pSVar2 != (SMRGLHeaderExtended *)0x0) {
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
    g_RenderStateFlags = in_stack_00000008;
    if ((in_stack_00000008 & 0x10) != 0) {
      g_CurrentLightingValue =
           engine_light_cpp_calculateLighting_FUN_00505780
                     ((polygon_info->surface_normal).A,(polygon_info->surface_normal).B,
                      (polygon_info->surface_normal).C);
    }
    g_RenderStateFlag2 = in_stack_00000014;
    if (in_stack_00000014 == 0) {
      if ((in_stack_00000008 & 0xc0) != 0) {
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
      }
    }
    else {
      g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    }
    iVar4 = 0;
    if (0 < (polygon_info->base).count) {
      iVar5 = 0;
      pSVar3 = polygon_info;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)g_ProcessedVertexIndices + iVar5) = iVar1;
        g_RenderVertexBuffer[iVar1].u = (float)pSVar3[1].base.count;
        iVar5 = iVar5 + 4;
        g_RenderVertexBuffer[iVar1].v = (float)pSVar3[1].surface_normal.A;
        iVar4 = iVar4 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar4 < (polygon_info->base).count);
    }
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((polygon_info->base).count,g_ProcessedVertexIndices);
      return extraout_EAX_00;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,g_ProcessedVertexIndices);
    pSVar2 = extraout_EAX;
  }
  return pSVar2;
}
