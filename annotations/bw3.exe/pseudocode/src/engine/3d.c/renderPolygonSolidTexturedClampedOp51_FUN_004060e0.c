// Name: engine_3d.c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0
// Address: 004060e0
// Address Range: [[004060e0, 00406291]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedClampedOp51_FUN_004060e0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar5;
  int iStack_c;
  
  pSVar4 = prim + 1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
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
    g_BIT_INTEGER32_01c6e2b4.dword = 0xc3;
    engine_3d_c_setRenderAlpha_FUN_00406bf0(0xffff);
    g_INT_01c6e2b8 = 1;
    iVar1 = 0;
    iStack_c = 0;
    for (iVar5 = 0; iVar5 < (prim->base).count * 3; iVar5 = iVar5 + 3) {
      *(int *)((int)g_INT_ARRAY_00730418 + iVar1) = (pSVar4->base).type;
      iVar3 = (pSVar4->base).count;
      iVar2 = (pSVar4->surface_normal).A.i;
      if (g_INT_005fba28 < 0x41) {
        if (iVar3 < 0x40000) {
          iVar3 = 0x40000;
        }
        if (iVar2 < 0x40000) {
          iVar2 = 0x40000;
        }
        if (0xfbffff < iVar3) {
          iVar3 = 0xfbffff;
        }
        if (0xfbffff < iVar2) {
          iVar2 = 0xfbffff;
        }
      }
      else {
        if (iVar3 < 0x10000) {
          iVar3 = 0x10000;
        }
        if (iVar2 < 0x10000) {
          iVar2 = 0x10000;
        }
        if (0xfeffff < iVar3) {
          iVar3 = 0xfeffff;
        }
        if (0xfeffff < iVar2) {
          iVar2 = 0xfeffff;
        }
      }
      g_SRenderVertex_ARRAY_0060b014[(pSVar4->base).type].u = iVar3;
      iVar1 = iVar1 + 4;
      g_SRenderVertex_ARRAY_0060b014[(pSVar4->base).type].v = iVar2;
      pSVar4 = (SMRGLHeaderPrimitive *)&(pSVar4->surface_normal).B;
      iStack_c = iStack_c + 1;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043a840(iStack_c,g_INT_ARRAY_00730418);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
