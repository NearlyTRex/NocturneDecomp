// Name: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_004075b0
// Address: 004075b0
// Address Range: [[004075b0, 004076f9]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_004075b0(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

#include "nocturne.h"

void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_004075b0(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar2 != 0) {
    if (g_INT_01c6e2a0 == 0) {
      if (g_INT_005fba20 == 0x20) {
        g_PTR_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33;
      }
      else {
        g_PTR_01c6b5cc = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69;
      }
    }
    else if (g_INT_005fba20 == 0x20) {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_00560f31;
    }
    else {
      g_PTR_01c6b5cc = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713;
    }
    g_BIT_INTEGER32_01c6e2b4.dword = render_flags;
    if ((render_flags & 0x10U) != 0) {
      g_INT_01c6b5c4 =
           engine_light_cpp_calculateLighting_FUN_004e0e00
                     ((prim->surface_normal).A.i,(prim->surface_normal).B.i,
                      (prim->surface_normal).C.i);
    }
    g_INT_01c6e2b8 = render_state_flags;
    if (render_state_flags == 0) {
      if ((render_flags & 0xc0U) != 0) {
        g_INT_01c6e2b8 = 1;
      }
    }
    else {
      g_INT_01c6e2b8 = 5;
    }
    iVar2 = 0;
    if (0 < (prim->base).count) {
      iVar3 = 0;
      pSVar4 = prim;
      do {
        iVar1 = pSVar4[1].base.type;
        *(int *)((int)g_INT_ARRAY_00730418 + iVar3) = iVar1;
        g_SRenderVertex_ARRAY_0060b014[iVar1].u = pSVar4[1].base.count;
        iVar3 = iVar3 + 4;
        g_SRenderVertex_ARRAY_0060b014[iVar1].v = (int)pSVar4[1].surface_normal.A;
        iVar2 = iVar2 + 1;
        pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      } while (iVar2 < (prim->base).count);
    }
    if (g_INT_01c6b5c8 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_0043bac0((prim->base).count,g_INT_ARRAY_00730418);
      return;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,g_INT_ARRAY_00730418);
  }
  return;
}
