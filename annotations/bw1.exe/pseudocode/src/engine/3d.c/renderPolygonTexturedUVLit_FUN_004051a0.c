// Name: engine_3d.c_renderPolygonTexturedUVLit_FUN_004051a0
// Address: 004051a0
// Address Range: [[004051a0, 00405270]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_004051a0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLit_FUN_004051a0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  byte bVar2;
  UIntegerFloat aUStackY_1010 [1016];
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  bVar2 = 0;
  CStack_28.x = *(int *)&(prim->surface_normal).A;
  CStack_28.y = *(int *)&(prim->surface_normal).B;
  CStack_28.z = *(int *)&(prim->surface_normal).C;
  engine_matrix_c_normalizeVector3DFixed_FUN_00508700(&CStack_28,&CStack_1c);
  CStack_28.x = CStack_1c.x;
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&CStack_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_INT_0061b4a0 == 0x20) {
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
      g_ScanlineRenderFunc = (MainScanlineFunc *)engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
    }
    g_RenderStateFlags.dword = RENDER_TEX_ENABLE;
    g_VertexPreprocessMode = 0;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,(int *)(prim + 1));
  }
  return (SMRGLHeaderExtended *)(&prim[1].base.type + (prim->base).count);
}
