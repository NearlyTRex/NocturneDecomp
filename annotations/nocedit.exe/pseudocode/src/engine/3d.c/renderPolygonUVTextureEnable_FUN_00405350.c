// Name: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350
// Address: 00405350
// Address Range: [[00405350, 00405420]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350(SMRGLHeaderPrimitive * polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonUVTextureEnable_FUN_00405350(SMRGLHeaderPrimitive *polygon_info)

{
  CVector3i vector;
  int iVar1;
  byte bVar2;
  int aiStackY_1010 [1016];
  int local_20;
  
  bVar2 = 0;
  local_20 = (polygon_info->surface_normal).C;
  vector.y = (polygon_info->surface_normal).A;
  vector.x = (int)&stack0xffffffd8;
  vector.z = (polygon_info->surface_normal).B;
  engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(vector);
  *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
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
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
    g_RenderStateFlag2 = PREPROCESS_NONE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}
