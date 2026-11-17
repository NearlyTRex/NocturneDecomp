// Name: engine_3d.c_renderPolygonWithRenderFlags_FUN_00407470
// Address: 00407470
// Address Range: [[00407470, 00407562]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407470(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407470(SMRGLHeaderPrimitive *primitive,int render_flags,int render_state_flags)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (g_INT_01c51d00 == 0) {
      if (g_INT_0061b4a0 == 0x20) {
        g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
      }
      else {
        g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
      }
    }
    else if (g_INT_0061b4a0 == 0x20) {
      g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
    }
    else {
      g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    g_BIT_INTEGER32_01c51d14.dword = render_flags;
    if ((render_flags & 0x10U) != 0) {
      g_INT_01c4f024 =
           engine_light_cpp_calculateLighting_FUN_004ffd40
                     ((primitive->surface_normal).A.i,(primitive->surface_normal).B.i,
                      (primitive->surface_normal).C.i);
    }
    g_INT_01c51d18 = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        g_INT_01c51d18 = 1;
      }
    }
    else {
      g_INT_01c51d18 = 5;
    }
    if (g_INT_01c4f028 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_0043de60
                ((primitive->base).count,(int *)(primitive + 1));
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((primitive->base).count,(int *)(primitive + 1));
  }
  return;
}
