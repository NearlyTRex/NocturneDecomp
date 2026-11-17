// Name: engine_3d.c_renderPolygonTexturedUVLitOp30_FUN_00404fc0
// Address: 00404fc0
// Address Range: [[00404fc0, 004050b3]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00404fc0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedUVLitOp30_FUN_00404fc0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int vertex_count;
  
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
    g_BIT_INTEGER32_01c6e2b4.dword = 1;
    g_INT_01c6e2b8 = 0;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
    vertex_count = 0;
    iVar2 = 0;
    pSVar3 = prim + 1;
    for (iVar4 = 0; iVar4 < (prim->base).count * 3; iVar4 = iVar4 + 3) {
      iVar1 = (pSVar3->base).type;
      *(int *)((int)g_INT_ARRAY_00730418 + iVar2) = iVar1;
      g_SRenderVertex_ARRAY_0060b014[iVar1].u = (pSVar3->base).count;
      iVar2 = iVar2 + 4;
      vertex_count = vertex_count + 1;
      g_SRenderVertex_ARRAY_0060b014[(pSVar3->base).type].v = (int)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(vertex_count,g_INT_ARRAY_00730418);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
