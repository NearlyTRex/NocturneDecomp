// Name: engine_3d.c_clipAndDrawLine3D_FUN_00407df0
// Address: 00407df0
// Address Range: [[00407df0, 0040809a]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00407df0(SRenderVertex vertex1,SRenderVertex vertex2)

#include "nocturne.h"

void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00407df0(SRenderVertex vertex1,SRenderVertex vertex2)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex SStack_40;
  
  bVar5 = 0;
  if (((vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x & 0x80000000U) == 0)
     || ((char)(vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x) == '\0')) {
    iVar2 = 0;
    do {
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(&vertex1,&vertex2,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex2.projected_vertex.transformed_x != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_x <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0(&vertex1,&vertex2,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0(&vertex1,&vertex2,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex2.projected_vertex.transformed_y != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_y <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0(&vertex1,&vertex2,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexRightClip_FUN_0043b4b0(&vertex2,&vertex1,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex1.projected_vertex.transformed_x != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_x <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0(&vertex2,&vertex1,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0(&vertex2,&vertex1,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex1.projected_vertex.transformed_y != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_y <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0(&vertex2,&vertex1,&SStack_40);
        pSVar3 = &SStack_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    if ((((((vertex1.projected_vertex.transformed_x <= vertex1.projected_vertex.transformed_z) &&
           (-vertex1.projected_vertex.transformed_x == vertex1.projected_vertex.transformed_z ||
            -vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_x)) &&
          (vertex1.projected_vertex.transformed_y <= vertex1.projected_vertex.transformed_z)) &&
         ((-vertex1.projected_vertex.transformed_y == vertex1.projected_vertex.transformed_z ||
           -vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_y &&
          (vertex2.projected_vertex.transformed_x <= vertex2.projected_vertex.transformed_z)))) &&
        ((-vertex2.projected_vertex.transformed_x == vertex2.projected_vertex.transformed_z ||
          -vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_x &&
         ((vertex2.projected_vertex.transformed_y <= vertex2.projected_vertex.transformed_z &&
          (-vertex2.projected_vertex.transformed_y == vertex2.projected_vertex.transformed_z ||
           -vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_y)))))) &&
       ((0 < vertex1.projected_vertex.transformed_z && (0 < vertex2.projected_vertex.transformed_z))
       )) {
      pSVar3 = &vertex1;
      pSVar4 = g_SRenderVertex_ARRAY_00629014 + 0x4e1e;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      pSVar3 = &vertex2;
      pSVar4 = g_SRenderVertex_ARRAY_00629014 + 19999;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_00507bf0(19999);
      engine_prim_c_prepareDepthBuffer_FUN_0053dbc0(g_SRenderVertex_ARRAY_00629014 + 0x4e1e,2);
      engine_2d_c_drawLine3D_FUN_00401310
                (g_SRenderVertex_ARRAY_00629014[0x4e1e].projected_vertex.screen_x >> 0x10,
                 g_SRenderVertex_ARRAY_00629014[0x4e1e].projected_vertex.screen_y >> 0x10,
                 g_SRenderVertex_ARRAY_00629014[0x4e1e].projected_vertex.transformed_z,
                 g_SRenderVertex_ARRAY_00629014[19999].projected_vertex.screen_x >> 0x10,
                 g_SRenderVertex_ARRAY_00629014[19999].projected_vertex.screen_y >> 0x10,
                 g_SRenderVertex_ARRAY_00629014[19999].projected_vertex.transformed_z);
      return;
    }
  }
  return;
}
