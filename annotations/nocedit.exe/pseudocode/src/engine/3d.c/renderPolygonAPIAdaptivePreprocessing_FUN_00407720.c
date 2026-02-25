// Name: engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 00407869]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  SMRGLHeaderExtended *extraout_EAX;
  SMRGLHeaderExtended *pSVar4;
  SMRGLHeaderExtended *extraout_EAX_00;
  int iVar5;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  pSVar4 = (SMRGLHeaderExtended *)0x0;
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
    g_RenderStateFlags.dword = in_stack_00000008;
    if ((in_stack_00000008 & 0x10) != 0) {
      g_CurrentLightingValue =
           engine_light_cpp_calculateLighting_FUN_00505780
                     ((prim->surface_normal).A,(prim->surface_normal).B,(prim->surface_normal).C);
    }
    g_RenderStateFlag2 = in_stack_0000000c;
    if (in_stack_0000000c == 0) {
      if ((in_stack_00000008 & 0xc0) != 0) {
        g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
      }
    }
    else {
      g_RenderStateFlag2 = PREPROCESS_TEXTURE_NORMALIZE_ALT;
    }
    iVar2 = 0;
    if (0 < (prim->base).count) {
      iVar5 = 0;
      pSVar3 = prim;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)g_ProcessedVertexIndices + iVar5) = iVar1;
        g_RenderVertexBuffer[iVar1].u = pSVar3[1].base.count;
        iVar5 = iVar5 + 4;
        g_RenderVertexBuffer[iVar1].v = pSVar3[1].surface_normal.A;
        iVar2 = iVar2 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar2 < (prim->base).count);
    }
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((prim->base).count,g_ProcessedVertexIndices);
      return extraout_EAX_00;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
    pSVar4 = extraout_EAX;
  }
  return pSVar4;
}
