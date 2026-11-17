// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00
// Address: 00404b00
// Address Range: [[00404b00, 00404be5]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 == 0) goto LAB_00404b6e;
  if (g_PerspectiveReciprocal == 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_0061b4a0 == 0x20) goto LAB_00404b38;
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
    else {
      if (g_INT_0061b4a0 != 0x20) goto LAB_00404b9d;
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
    }
  }
  else if (g_MMXSupported == 0) {
    if (g_INT_0061b4a0 == 0x20) {
LAB_00404b38:
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
    }
  }
  else if (g_INT_0061b4a0 == 0x20) {
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
  }
  else {
LAB_00404b9d:
    g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
  }
  g_RenderStateFlags.dword = (RENDER_TEX_ENABLE | RENDER_SOLID_ALPHA_BLEND | RENDER_LIGHTING_COLOR | RENDER_DEPTH_TEST | RENDER_DEPTH_WRITE);
  g_VertexPreprocessMode = 1;
  engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
  engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,(int *)(prim + 1));
LAB_00404b6e:
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
