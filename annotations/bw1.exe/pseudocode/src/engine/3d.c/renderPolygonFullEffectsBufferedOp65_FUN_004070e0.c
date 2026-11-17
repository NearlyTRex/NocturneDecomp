// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0
// Address: 004070e0
// Address Range: [[004070e0, 004072bd]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004070e0(SMRGLHeaderPrimitive *prim)

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
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00403920(&prim->surface_normal);
  if (iVar2 != 0) {
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
    piVar6 = g_INT_ARRAY_00713a98;
    g_BIT_INTEGER32_01c51d14.dword = 0x1e7;
    g_INT_01c51d18 = 1;
    pSVar3 = prim + 1;
    for (iVar2 = 0; uVar1 = g_UINT_00713a60, iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      *piVar6 = (pSVar3->base).type + g_UINT_00713a60;
      g_SRenderVertex_ARRAY_00629014[(pSVar3->base).type + uVar1].u = (pSVar3->base).count;
      piVar6 = piVar6 + 1;
      g_SRenderVertex_ARRAY_00629014[(pSVar3->base).type + uVar1].v =
           (int)(pSVar3->surface_normal).A;
      pSVar3 = (SMRGLHeaderPrimitive *)&(pSVar3->surface_normal).B;
    }
    if (((g_INT_00713af8 == 0) || (0x9c3 < g_INT_00713afc)) ||
       (iVar2 = (prim->base).count, 4 < iVar2)) {
      engine_clipper_c_clipAndRasterize_FUN_0043cbf0((prim->base).count,g_INT_ARRAY_00713a98);
    }
    else {
      iVar8 = 0;
      iStack_14 = 0x7fffffff;
      iVar4 = g_INT_00713afc * 0x118;
      g_INT_00713afc = g_INT_00713afc + 1;
      piVar6 = (int *)(&DAT_00713b00 + iVar4);
      *piVar6 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          pSVar9 = g_SRenderVertex_ARRAY_00629014 + *(int *)((int)g_INT_ARRAY_00713a98 + iVar2);
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
      pSVar5 = engine_texture_cpp_getCurrentTexture_FUN_00597d00();
      iVar2 = g_INT_0061b4b8;
      piVar6 = (int *)(&DAT_00713bc4 + iVar4);
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar6 = (pSVar5->base).type;
        pSVar5 = (SMRGLTextureBasic *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
        piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
      }
      *(int *)(&DAT_00713c0c + iVar4) = iVar2;
      *(int *)(&DAT_00713c10 + iVar4) = g_INT_01c51d0c;
      *(int *)(&DAT_00713c14 + iVar4) = iStack_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
