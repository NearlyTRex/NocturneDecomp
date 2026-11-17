// Name: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040
// Address: 00404040
// Address Range: [[00404040, 00404139]]
// Convention: __cdecl
// Signature: void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int *piVar3;
  int iVar4;
  
  if (g_INT_01c38b40 == 0) {
    if (g_INT_006141c0 == 0x20) {
      g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3;
    }
    else {
      g_PTR_01c35e6c = engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9;
    }
  }
  else if (g_INT_006141c0 == 0x20) {
    g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline32_FUN_0055b3b1;
  }
  else {
    g_PTR_01c35e6c = engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93;
  }
  g_BIT_INTEGER32_01c38b54.dword = 1;
  g_INT_01c38b58 = 0;
  engine_3d_c_calculatePolygonLighting_FUN_00403a20(prim);
  piVar3 = g_INT_ARRAY_0070ca98;
  pSVar2 = prim + 1;
  for (iVar4 = 0; uVar1 = g_UINT_0070ca60, iVar4 < (prim->base).count * 3; iVar4 = iVar4 + 3) {
    *piVar3 = (pSVar2->base).type + g_UINT_0070ca60;
    g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + uVar1].u = (pSVar2->base).count;
    piVar3 = piVar3 + 1;
    g_SRenderVertex_ARRAY_00622014[(pSVar2->base).type + uVar1].v = (int)(pSVar2->surface_normal).A;
    pSVar2 = (SMRGLHeaderPrimitive *)&(pSVar2->surface_normal).B;
  }
  engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,g_INT_ARRAY_0070ca98);
  return (void *)((int)&prim[1].base + (prim->base).count * 0xc);
}
