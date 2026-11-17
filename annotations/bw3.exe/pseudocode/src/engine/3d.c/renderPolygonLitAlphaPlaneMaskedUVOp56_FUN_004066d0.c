// Name: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_004066d0
// Address: 004066d0
// Address Range: [[004066d0, 00406884]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_004066d0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_004066d0(SMRGLHeaderPrimitive *prim)

{
  SMRGLHeaderBasic *pSVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iVar6;
  int vertex_count;
  
  pSVar4 = prim + 1;
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
    g_BIT_INTEGER32_01c6e2b4.dword = 0xd3;
    engine_3d_c_calculatePolygonLighting_FUN_004039d0(prim);
    if (g_INT_005fba38 < 0xff) {
      g_BIT_INTEGER32_01c6e2b4.dword = g_BIT_INTEGER32_01c6e2b4.dword | 0x20;
    }
    iVar6 = 0;
    g_INT_01c6e2b8 = 1;
    vertex_count = 0;
    for (iVar2 = 0; iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      *(int *)((int)g_INT_ARRAY_00730418 + iVar6) = (pSVar4->base).type;
      iVar3 = (pSVar4->base).count;
      iVar5 = (pSVar4->surface_normal).A.i;
      if (g_INT_005fba28 < 0x41) {
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (iVar5 < 0x40000) {
          iVar5 = 0x40000;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
        if (0xfbffff < iVar5) {
          iVar5 = 0xfbffff;
        }
      }
      else {
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (iVar5 < 0x10000) {
          iVar5 = 0x10000;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
        if (0xfeffff < iVar5) {
          iVar5 = 0xfeffff;
        }
      }
      g_SRenderVertex_ARRAY_0060b014[(pSVar4->base).type].u = iVar3;
      pSVar1 = &pSVar4->base;
      iVar6 = iVar6 + 4;
      vertex_count = vertex_count + 1;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      g_SRenderVertex_ARRAY_0060b014[pSVar1->type].v = iVar5;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(vertex_count,g_INT_ARRAY_00730418);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
