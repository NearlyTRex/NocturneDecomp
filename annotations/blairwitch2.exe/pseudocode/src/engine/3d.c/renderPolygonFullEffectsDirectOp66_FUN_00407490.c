// Name: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407490
// Address: 00407490
// Address Range: [[00407490, 00407638]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(SMRGLHeaderPrimitive *primitive)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407490(SMRGLHeaderPrimitive *primitive)

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
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403970(&primitive->surface_normal);
  if (iVar1 != 0) {
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
    g_INT_01c38b58 = 1;
    g_BIT_INTEGER32_01c38b54.dword = 0x1e7;
    if (((g_INT_0070caf8 == 0) || (0x9c3 < g_INT_0070cafc)) || (4 < (primitive->base).count)) {
      engine_clipper_c_clipAndRasterize_FUN_00431d90((primitive->base).count,(int *)vertex_indices);
    }
    else {
      iVar2 = g_INT_0070cafc * 0x118;
      piVar5 = (int *)(&DAT_0070cb00 + iVar2);
      g_INT_0070cafc = g_INT_0070cafc + 1;
      *piVar5 = (primitive->base).count;
      iVar1 = 0x7fffffff;
      iVar6 = 0;
      if (0 < (primitive->base).count) {
        do {
          pSVar7 = g_SRenderVertex_ARRAY_00622014 + (vertex_indices->base).type;
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
      pSVar3 = engine_texture_cpp_getCurrentTexture_FUN_005750e0();
      iVar6 = g_INT_006141d8;
      piVar5 = (int *)(&DAT_0070cbc4 + iVar2);
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = (pSVar3->base).type;
        pSVar3 = (SMRGLTextureBasic *)((int)pSVar3 + (uint)bVar9 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
      }
      *(int *)(&DAT_0070cc0c + iVar2) = iVar6;
      *(int *)(&DAT_0070cc14 + iVar2) = iVar1;
      *(int *)(&DAT_0070cc10 + iVar2) = g_INT_01c38b4c;
    }
  }
  return (SMRGLHeaderExtended *)((int)&primitive[1].base + (primitive->base).count * 0xc);
}
