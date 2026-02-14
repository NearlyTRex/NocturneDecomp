// Name: engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60
// Address: 00403d60
// Address Range: [[00403d60, 00403df6]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitiveUVWrappedSpecial_FUN_00403d60(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitiveUVWrappedSpecial_FUN_00403d60(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (RenderScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags.dword = RENDER_UV_WRAP_U;
    g_RenderStateFlag2 = PREPROCESS_PRIMITIVE_SPECIAL;
    engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}
