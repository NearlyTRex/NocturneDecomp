// Name: engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430
// Address: 00405430
// Address Range: [[00405430, 00405503]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVTextureNormalized_FUN_00405430(SMRGLHeaderPrimitive *polygon_info)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonUVTextureNormalized_FUN_00405430(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  byte bVar2;
  int aiStackY_1010 [1016];
  CVector3i local_28;
  CVector3i local_1c;
  
  bVar2 = 0;
  local_28.x = (polygon_info->surface_normal).A;
  local_28.y = (polygon_info->surface_normal).B;
  local_28.z = (polygon_info->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(&local_28,&local_1c);
  local_28.x = local_1c.x;
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
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
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}
