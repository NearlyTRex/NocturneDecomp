// Name: engine_3d.c_renderPolygonTexturedNormalizedUVLit2_FUN_00406a00
// Address: 00406a00
// Address Range: [[00406a00, 00406ad3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00406a00(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit2_FUN_00406a00(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  byte bVar2;
  UIntegerFloat aUStackY_1010 [1016];
  CVector3i local_28;
  CVector3i local_1c;
  
  bVar2 = 0;
  local_28.x = *(int *)&(prim->surface_normal).A;
  local_28.y = *(int *)&(prim->surface_normal).B;
  local_28.z = *(int *)&(prim->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_004cde10(&local_28,&local_1c);
  local_28.x = local_1c.x;
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_005300ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00530322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0052f031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0052f823;
    }
    g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
    g_VertexPreprocessMode = 2;
    engine_3d_c_calculatePolygonLighting_FUN_00404710(prim);
    engine_clipper_c_clipAndRasterize_FUN_00432cd0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
