// Name: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403af0
// Address: 00403af0
// Address Range: [[00403af0, 00403bb8]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403af0(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403af0(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (g_INT_01c38b40 == 0) {
      if (g_INT_006141c0 == 0x20) {
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
      g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
    }
    g_BIT_INTEGER32_01c38b54.dword = 0x10;
    g_INT_01c38b58 = 0;
    g_INT_01c35e64 =
         engine_light_cpp_calculateLighting_FUN_004e28b0
                   ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                    (primitive->surface_normal).C.i);
    g_INT_01c35e60 = engine_3d_c_lookupLitColor_FUN_004039e0(g_INT_0070ca5c,g_INT_01c35e64);
    engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}
