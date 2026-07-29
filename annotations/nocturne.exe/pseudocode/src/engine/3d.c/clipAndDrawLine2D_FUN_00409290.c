// Name: engine_3d.c_clipAndDrawLine2D_FUN_00409290
// Address: 00409290
// Address Range: [[00409290, 0040950d]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1,SRenderVertex vertex2)

#include "nocturne.h"

void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1,SRenderVertex vertex2)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  SRenderVertex local_40;
  
  bVar6 = 0;
  if (((vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x & 0x80000000U) == 0)
     || ((char)(vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x) == '\0')) {
    iVar2 = 0;
    do {
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        }
      }
      if (-vertex2.projected_vertex.transformed_x != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_x <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        }
      }
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        }
      }
      if (-vertex2.projected_vertex.transformed_y != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_y <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00431830(&vertex1,&vertex2,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex2;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        }
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        }
      }
      if (-vertex1.projected_vertex.transformed_x != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_x <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        }
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        }
      }
      if (-vertex1.projected_vertex.transformed_y != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_y <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00431830(&vertex2,&vertex1,&local_40);
        pSVar3 = &local_40;
        pSVar4 = &vertex1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
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
      piVar5 = &DAT_006af5b4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar6 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      pSVar3 = &vertex2;
      piVar5 = &DAT_006af5e4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + (uint)bVar6 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(19999);
      engine_2d_c_drawLine_FUN_004015a0
                (DAT_006af5c4 >> 0x10,DAT_006af5c8 >> 0x10,DAT_006af5f4 >> 0x10,DAT_006af5f8 >> 0x10
                );
      return;
    }
  }
  return;
}
