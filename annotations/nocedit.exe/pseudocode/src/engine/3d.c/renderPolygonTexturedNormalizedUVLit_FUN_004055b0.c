// Name: engine_3d.c_renderPolygonTexturedNormalizedUVLit_FUN_004055b0
// Address: 004055b0
// Address Range: [[004055b0, 00405683] [0060fca9, 0060fcc6]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit_FUN_004055b0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLit_FUN_004055b0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  byte bVar2;
  int aiStackY_1010 [1016];
  CVector3i local_28;
  CVector3i local_1c;
  
  local_28.x = (prim->surface_normal).A.i;
  local_28.y = (prim->surface_normal).B.i;
  local_28.z = (prim->surface_normal).C.i;
  engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(&local_28,&local_1c);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = (MainScanlineFunc *)wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
    g_VertexPreprocessMode = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(prim);
    engine_clipper_c_clipAndRasterize_FUN_004371b0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
