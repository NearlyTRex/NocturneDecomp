// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c80
// Address: 00404c80
// Address Range: [[00404c80, 00404d65]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c80(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c80(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar1 == 0) goto LAB_00404cee;
  if (g_INT_01c38aec == 0) {
    if (g_INT_01c38b40 == 0) {
      if (g_INT_006141c0 == 0x20) goto LAB_00404cb8;
      g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
    }
    else {
      if (g_INT_006141c0 != 0x20) goto LAB_00404d1d;
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
    }
  }
  else if (g_INT_01c38b40 == 0) {
    if (g_INT_006141c0 == 0x20) {
LAB_00404cb8:
      g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
    }
    else {
      g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
    }
  }
  else if (g_INT_006141c0 == 0x20) {
    g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
  }
  else {
LAB_00404d1d:
    g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
  }
  g_BIT_INTEGER32_01c38b54.dword = 0xd9;
  g_INT_01c38b58 = 1;
  engine_3d_c_calculatePolygonLighting_FUN_00403a20(prim);
  engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,(int *)(prim + 1));
LAB_00404cee:
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
