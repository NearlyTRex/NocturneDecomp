// Name: engine_3d.c_clipAndDrawLine3D_FUN_00408070
// Address: 00408070
// Address Range: [[00408070, 0040831a]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00408070(SRenderVertex vertex1,SRenderVertex vertex2)

#include "nocturne.h"

void __cdecl engine_3d_c_clipAndDrawLine3D_FUN_00408070(SRenderVertex vertex1,SRenderVertex vertex2)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex local_40;
  
  bVar5 = 0;
  if (((vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x & 0x80000000U) == 0)
     || ((char)(vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x) == '\0')) {
    iVar2 = 0;
    do {
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex2.projected_vertex.transformed_x != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_x <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex2.projected_vertex.transformed_y != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_y <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex1.projected_vertex.transformed_x != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_x <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
        }
      }
      if (-vertex1.projected_vertex.transformed_y != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_y <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
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
      pSVar4 = &g_QuadVertex2;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      pSVar3 = &vertex2;
      pSVar4 = &g_QuadVertex3;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_prim_c_prepareDepthBuffer_FUN_00551fb0(&g_QuadVertex2,2);
      engine_2d_c_drawLine3D_FUN_00401320
                (g_QuadVertex2.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex2.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex2.projected_vertex.transformed_z,
                 g_QuadVertex3.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex3.projected_vertex.transformed_z);
      return;
    }
  }
  return;
}
