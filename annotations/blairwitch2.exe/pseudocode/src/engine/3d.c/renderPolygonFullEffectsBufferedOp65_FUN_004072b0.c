// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0
// Address: 004072b0
// Address Range: [[004072b0, 0040748d]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  SMRGLTextureBasic *pSVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  int *piVar10;
  byte bVar11;
  int iStack_14;
  
  bVar11 = 0;
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403970(&prim->surface_normal);
  if (iVar2 != 0) {
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
    piVar6 = g_INT_ARRAY_0070ca98;
    g_BIT_INTEGER32_01c38b54.dword = 0x1e7;
    g_INT_01c38b58 = 1;
    pSVar3 = prim + 1;
    for (iVar2 = 0; uVar1 = g_UINT_0070ca60, iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      *piVar6 = (pSVar3->base).type + g_UINT_0070ca60;
      g_SRenderVertex_ARRAY_00622014[(pSVar3->base).type + uVar1].u = (pSVar3->base).count;
      piVar6 = piVar6 + 1;
      g_SRenderVertex_ARRAY_00622014[(pSVar3->base).type + uVar1].v =
           (int)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    if (((g_INT_0070caf8 == 0) || (0x9c3 < g_INT_0070cafc)) ||
       (iVar2 = (prim->base).count, 4 < iVar2)) {
      engine_clipper_c_clipAndRasterize_FUN_00431d90((prim->base).count,g_INT_ARRAY_0070ca98);
    }
    else {
      iVar8 = 0;
      iStack_14 = 0x7fffffff;
      iVar4 = g_INT_0070cafc * 0x118;
      g_INT_0070cafc = g_INT_0070cafc + 1;
      piVar6 = (int *)(&DAT_0070cb00 + iVar4);
      *piVar6 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          pSVar9 = g_SRenderVertex_ARRAY_00622014 + *(int *)((int)g_INT_ARRAY_0070ca98 + iVar2);
          piVar10 = piVar6 + 1;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar10 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
            piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
          }
          if (piVar6[3] < iStack_14) {
            iStack_14 = piVar6[3];
          }
          piVar6 = piVar6 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < (prim->base).count);
      }
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_005750e0();
      iVar2 = g_INT_006141d8;
      piVar6 = (int *)(&DAT_0070cbc4 + iVar4);
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar6 = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(int *)(&DAT_0070cc0c + iVar4) = iVar2;
      *(int *)(&DAT_0070cc10 + iVar4) = g_INT_01c38b4c;
      *(int *)(&DAT_0070cc14 + iVar4) = iStack_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
