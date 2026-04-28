// Name: engine_3d.c_renderPolygonAPIAdaptivePreprocessingWithUV_FUN_00407720
// Address: 00407720
// Address Range: [[00407720, 00407869]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessingWithUV_FUN_00407720(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPolygonAPIAdaptivePreprocessingWithUV_FUN_00407720(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar2 != 0) {
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
    g_RenderStateFlags.dword = render_flags;
    if ((render_flags & 0x10U) != 0) {
      g_CurrentLightingValue =
           engine_light_cpp_calculateLighting_FUN_00505780
                     ((prim->surface_normal).A,(prim->surface_normal).B,(prim->surface_normal).C);
    }
    g_VertexPreprocessMode = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        g_VertexPreprocessMode = PREPROCESS_Z_PASS_INVW;
      }
    }
    else {
      g_VertexPreprocessMode = PREPROCESS_PERSPECTIVE_TEXTURE;
    }
    iVar2 = 0;
    if (0 < (prim->base).count) {
      iVar4 = 0;
      pSVar3 = prim;
      do {
        iVar1 = pSVar3[1].base.type;
        *(int *)((int)g_ProcessedVertexIndices + iVar4) = iVar1;
        g_RenderVertexBuffer[iVar1].u = pSVar3[1].base.count;
        iVar4 = iVar4 + 4;
        g_RenderVertexBuffer[iVar1].v = pSVar3[1].surface_normal.A;
        iVar2 = iVar2 + 1;
        pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
      } while (iVar2 < (prim->base).count);
    }
    if (g_AdvancedClippingEnabled == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00438420
                ((prim->base).count,g_ProcessedVertexIndices);
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,g_ProcessedVertexIndices);
  }
  return;
}
