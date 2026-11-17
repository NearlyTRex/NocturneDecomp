// Name: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70
// Address: 00403f70
// Address Range: [[00403f70, 00404069]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  int iVar4;
  
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
  piVar3 = g_INT_ARRAY_00730418;
  pSVar2 = prim + 1;
  for (iVar4 = 0; uVar1 = g_UINT_007303e0, iVar4 < (prim->base).count * 3; iVar4 = iVar4 + 3) {
    *piVar3 = (pSVar2->base).type + g_UINT_007303e0;
    g_SRenderVertex_ARRAY_0060b014[(pSVar2->base).type + uVar1].u = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    g_SRenderVertex_ARRAY_0060b014[(pSVar2->base).type + uVar1].v = (int)(pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,g_INT_ARRAY_00730418);
  return (void *)((int)&prim[1].base + (prim->base).count * 0xc);
}
