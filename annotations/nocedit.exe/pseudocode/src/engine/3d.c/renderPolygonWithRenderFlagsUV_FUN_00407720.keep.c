// Name: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407720
// Address: 00407720
// MANUAL RECONSTRUCTION
// Address Range: [[00407720, 00407869]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00407720(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00407720(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

{
  int iVar1;
  int iVar2;
  SMRGLVertex *pSVar3;
  
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
                     ((prim->surface_normal).A.i,(prim->surface_normal).B.i,
                      (prim->surface_normal).C.i);
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
      pSVar3 = (SMRGLVertex *)(prim + 1);
      do {
        iVar1 = pSVar3[iVar2].vertex_index;
        g_ProcessedVertexIndices[iVar2] = iVar1;
        g_RenderVertexBuffer[iVar1].u = pSVar3[iVar2].texture_u;
        g_RenderVertexBuffer[iVar1].v = pSVar3[iVar2].texture_v;
        iVar2 = iVar2 + 1;
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
