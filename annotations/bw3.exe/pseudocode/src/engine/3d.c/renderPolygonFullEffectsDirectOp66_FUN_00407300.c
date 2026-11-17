// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407300
// Address: 00407300
// Address Range: [[00407300, 004074a8]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  int iVar2;
  SMRGLTextureBasic *pSVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  SMRGLHeaderPrimitive *vertex_indices;
  SRenderVertex *pSVar7;
  int *piVar8;
  byte bVar9;
  
  bVar9 = 0;
  vertex_indices = primitive + 1;
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403920(&primitive->surface_normal);
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
    g_INT_01c6e2b8 = 1;
    g_BIT_INTEGER32_01c6e2b4.dword = 0x1e7;
    if (((g_INT_00730478 == 0) || (0x9c3 < g_INT_0073047c)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_0043a840((primitive->base).count,(int *)vertex_indices);
    }
    else {
      iVar2 = g_INT_0073047c * 0x118;
      piVar5 = (int *)(&DAT_00730480 + iVar2);
      g_INT_0073047c = g_INT_0073047c + 1;
      *piVar5 = (primitive->base).count;
      iVar1 = 0x7fffffff;
      iVar6 = 0;
      if (0 < (primitive->base).count) {
        do {
          pSVar7 = g_SRenderVertex_ARRAY_0060b014 + (vertex_indices->base).type;
          piVar8 = piVar5 + 1;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = (pSVar7->projected_vertex).transformed_x;
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
            piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
          }
          if (piVar5[3] < iVar1) {
            iVar1 = piVar5[3];
          }
          piVar5 = piVar5 + 0xc;
          iVar6 = iVar6 + 1;
          vertex_indices = (SMRGLHeaderPrimitive *)&(vertex_indices->base).count;
        } while (iVar6 < (primitive->base).count);
      }
      pSVar3 = engine_texture_cpp_getCurrentTexture_FUN_0056acf0();
      iVar6 = g_INT_005fba38;
      piVar5 = (int *)(&DAT_00730544 + iVar2);
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = (pSVar3->base).type;
        pSVar3 = (SMRGLTextureBasic *)((int)pSVar3 + (uint)bVar9 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
      }
      *(int *)(&DAT_0073058c + iVar2) = iVar6;
      *(int *)(&DAT_00730594 + iVar2) = iVar1;
      *(int *)(&DAT_00730590 + iVar2) = g_INT_01c6e2ac;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
