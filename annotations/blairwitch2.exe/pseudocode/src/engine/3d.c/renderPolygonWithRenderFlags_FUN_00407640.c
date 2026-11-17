// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_00407640
// Address: 00407640
// Address Range: [[00407640, 00407732]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407640(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407640(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

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
    g_BIT_INTEGER32_01c38b54.dword = render_flags;
    if ((render_flags & 0x10U) != 0) {
      g_INT_01c35e64 =
           engine_light_cpp_calculateLighting_FUN_004e28b0
                     ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                      (primitive->surface_normal).C.i);
    }
    g_INT_01c38b58 = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        g_INT_01c38b58 = 1;
      }
    }
    else {
      g_INT_01c38b58 = 5;
    }
    if (g_INT_01c35e68 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_00433000
                ((primitive->base).count,(int *)(primitive + 1));
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,(int *)(primitive + 1));
  }
  return;
}
