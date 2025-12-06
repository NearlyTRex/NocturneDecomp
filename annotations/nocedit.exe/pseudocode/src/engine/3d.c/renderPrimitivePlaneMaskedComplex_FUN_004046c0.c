// Name: engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0
// Address: 004046c0
// Address Range: [[004046c0, 00404831]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPrimitivePlaneMaskedComplex_FUN_004046c0(SMRGLHeaderPrimitive * primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPrimitivePlaneMaskedComplex_FUN_004046c0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int *piVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar2 == 0) goto LAB_004046e0;
  engine_3d_c_calculatePolygonLighting_FUN_00403a00(primitive);
  if (g_PerspectiveReciprocal == 0.0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) goto LAB_00404736;
      g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
    }
    else {
      if (g_BitsPerPixel != 0x20) goto LAB_004047c8;
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_BitsPerPixel == 0x20) {
LAB_00404736:
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
LAB_004047c8:
    g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
  }
  piVar4 = g_ProcessedVertexIndices;
  g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
  g_RenderStateFlags = RENDER_FULL_FEATURED;
  pSVar3 = primitive + 1;
  for (iVar2 = 0; iVar1 = (primitive->base).count,
      SBORROW /* signed borrow */4(iVar2,iVar1 * 3) != iVar2 + iVar1 * -3 < 0; iVar2 = iVar2 + 3) {
    *piVar4 = (pSVar3->base).type + g_ProcessedVertexOffset;
    g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].u =
         (float)(pSVar3->base).count;
    piVar4 = piVar4 + 1;
    g_RenderVertexBuffer[(pSVar3->base).type + g_ProcessedVertexOffset].v =
         (float)(pSVar3->surface_normal).A;
    pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,g_ProcessedVertexIndices);
LAB_004046e0:
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
