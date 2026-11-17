// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0
// Address: 004046e0
// Address Range: [[004046e0, 00404851]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
  if (iVar1 == 0) goto LAB_00404700;
  engine_3d_c_calculatePolygonLighting_FUN_00403a20(primitive);
  if (g_PerspectiveReciprocal == 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_006141c0 == 0x20) goto LAB_00404756;
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
    }
    else {
      if (g_INT_006141c0 != 0x20) goto LAB_004047e8;
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_INT_006141c0 == 0x20) {
LAB_00404756:
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
LAB_004047e8:
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
  }
  piVar3 = g_ProcessedVertexIndices;
  g_VertexPreprocessMode = 1;
  g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_SOLID_ALPHA_BLEND | RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
  pSVar2 = primitive + 1;
  for (iVar1 = 0; iVar1 < (primitive->base).count * 3; iVar1 = iVar1 + 3) {
    *piVar3 = (pSVar2->base).type + g_ProcessedVertexOffset;
    g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + g_ProcessedVertexOffset].u =
         (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + g_ProcessedVertexOffset].v =
         (int)(pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,g_ProcessedVertexIndices);
LAB_00404700:
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
