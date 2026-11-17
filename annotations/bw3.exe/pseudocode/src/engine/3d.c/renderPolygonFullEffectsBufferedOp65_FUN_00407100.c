// Name: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100
// Address: 00407100
// Address Range: [[00407100, 004072ff]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(SMRGLHeaderPrimitive *prim)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00407100(SMRGLHeaderPrimitive *prim)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *pSVar4;
  int *piVar5;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  int *piVar10;
  byte bVar11;
  int iStack_14;
  
  bVar11 = 0;
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
    piVar5 = g_INT_ARRAY_00730418;
    g_BIT_INTEGER32_01c6e2b4.dword = 0x1e7;
    g_INT_01c6e2b8 = 1;
    pSVar7 = prim + 1;
    for (iVar2 = 0; iVar2 < (prim->base).count * 3; iVar2 = iVar2 + 3) {
      *piVar5 = (pSVar7->base).type + g_UINT_007303e0;
      uVar1 = g_UINT_007303e0;
      g_SRenderVertex_ARRAY_0060b014[(pSVar7->base).type + g_UINT_007303e0].u = (pSVar7->base).count
      ;
      piVar5 = piVar5 + 1;
      g_SRenderVertex_ARRAY_0060b014[uVar1 + (pSVar7->base).type].v =
           (int)(pSVar7->surface_normal).A;
      pSVar7 = (SMRGLHeaderPrimitive *)&(pSVar7->surface_normal).B;
    }
    if (((g_INT_00730478 == 0) || (0x9c3 < g_INT_0073047c)) ||
       (iVar2 = (prim->base).count, 4 < iVar2)) {
      engine_clipper_c_clipAndRasterize_FUN_0043a840((prim->base).count,g_INT_ARRAY_00730418);
    }
    else {
      iVar8 = 0;
      iStack_14 = 0x7fffffff;
      iVar3 = g_INT_0073047c * 0x118;
      g_INT_0073047c = g_INT_0073047c + 1;
      piVar5 = (int *)(&DAT_00730480 + iVar3);
      *piVar5 = iVar2;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          pSVar9 = g_SRenderVertex_ARRAY_0060b014 + *(int *)((int)g_INT_ARRAY_00730418 + iVar2);
          piVar10 = piVar5 + 1;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar10 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
            piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
          }
          if (piVar5[3] < iStack_14) {
            iStack_14 = piVar5[3];
          }
          piVar5 = piVar5 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar8 < (prim->base).count);
      }
      pSVar4 = engine_texture_cpp_getCurrentTexture_FUN_0056acf0();
      iVar2 = g_INT_005fba38;
      piVar5 = (int *)(&DAT_00730544 + iVar3);
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar5 = (pSVar4->base).type;
        pSVar4 = (SMRGLTextureBasic *)((int)pSVar4 + (uint)bVar11 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar11 * -2 + 1;
      }
      *(int *)(&DAT_0073058c + iVar3) = iVar2;
      *(int *)(&DAT_00730590 + iVar3) = g_INT_01c6e2ac;
      *(int *)(&DAT_00730594 + iVar3) = iStack_14;
    }
  }
  return (SMRGLHeaderExtended *)((int)&prim[1].base + (prim->base).count * 0xc);
}
