// Name: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
// Address: 004059a0
// Address Range: [[004059a0, 00405b27]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(SMRGLHeaderPrimitive *prim)

{
  int iVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar1 != 0) {
    if (g_INT_01c51cac == 0) {
      if (g_INT_01c51d00 == 0) {
        if (g_INT_0061b4a0 == 0x20) {
          g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
        }
        else {
          g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
        }
      }
      else if (g_INT_0061b4a0 == 0x20) {
        g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
      }
      else {
        g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
      }
      g_BIT_INTEGER32_01c51d14.dword = 0xc5;
    }
    else {
      if (g_INT_01c51d00 == 0) {
        if (g_INT_0061b4a0 == 0x20) {
          g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03;
        }
        else {
          g_PTR_01c4f02c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39;
        }
      }
      else if (g_INT_0061b4a0 == 0x20) {
        g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0057de01;
      }
      else {
        g_PTR_01c4f02c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3;
      }
      g_BIT_INTEGER32_01c51d14.dword = 0xcd;
    }
    g_INT_01c51d18 = 1;
    piVar3 = g_INT_ARRAY_00713a98;
    pSVar2 = prim + 1;
    for (iVar1 = 0; iVar1 < (prim->base).count * 3; iVar1 = iVar1 + 3) {
      *piVar3 = (pSVar2->base).type + g_UINT_00713a60;
      g_SRenderVertex_ARRAY_00629014[(pSVar2->base).type + g_UINT_00713a60].u = (pSVar2->base).count
      ;
      piVar3 = piVar3 + 1;
      g_SRenderVertex_ARRAY_00629014[(pSVar2->base).type + g_UINT_00713a60].v =
           (int)(pSVar2->surface_normal).A;
      pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
    }
    engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,g_INT_ARRAY_00713a98);
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
