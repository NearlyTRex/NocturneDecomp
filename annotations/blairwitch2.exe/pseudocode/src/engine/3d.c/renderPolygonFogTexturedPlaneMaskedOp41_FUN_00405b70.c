// Name: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70
// Address: 00405b70
// Address Range: [[00405b70, 00405cf7]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_PerspectiveReciprocal == 0) {
      if (g_MMXSupported == 0) {
        if (g_INT_006141c0 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
        }
      }
      else if (g_INT_006141c0 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    }
    else {
      if (g_MMXSupported == 0) {
        if (g_INT_006141c0 == 0x20) {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
        }
        else {
          g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
        }
      }
      else if (g_INT_006141c0 == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
      }
      g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_FOG_COLOR | RENDER_SOLID_ALPHA_BLEND | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
    }
    g_VertexPreprocessMode = 1;
    piVar3 = g_ProcessedVertexIndices;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + g_ProcessedVertexOffset;
      g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + g_ProcessedVertexOffset].u =
           (pSVar2->base).count;
      piVar3 = piVar3 + 1;
      g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + g_ProcessedVertexOffset].v =
           (int)(pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,g_ProcessedVertexIndices);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
