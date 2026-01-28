// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
// Address: 0048caf0
// Address Range: [[0048caf0, 0048cdef]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
          (CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex local_a0;
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  bVar5 = 0;
  g_ActiveRenderColor = g_CurrentPolygonColor;
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index1;
  pSVar4 = &local_40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    pSVar4 = (SRenderVertex *)&(pSVar4->projected_vertex).transformed_y;
  }
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index2;
  pSVar4 = &local_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + 4);
  }
  if (((local_40.projected_vertex.screen_x & local_a0.projected_vertex.screen_x & 0x80000000U) == 0)
     || ((char)(local_40.projected_vertex.screen_x & local_a0.projected_vertex.screen_x) == '\0')) {
    iVar1 = 0;
    do {
      if (local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&local_40,&local_a0,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-local_a0.projected_vertex.transformed_x != local_a0.projected_vertex.transformed_z &&
          local_a0.projected_vertex.transformed_x <= -local_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&local_40,&local_a0,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&local_40,&local_a0,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-local_a0.projected_vertex.transformed_y != local_a0.projected_vertex.transformed_z &&
          local_a0.projected_vertex.transformed_y <= -local_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&local_40,&local_a0,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&local_a0,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-local_40.projected_vertex.transformed_x != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_x <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&local_a0,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&local_a0,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-local_40.projected_vertex.transformed_y != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_y <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&local_a0,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar4 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((((((local_40.projected_vertex.transformed_x <= local_40.projected_vertex.transformed_z) &&
           (-local_40.projected_vertex.transformed_x == local_40.projected_vertex.transformed_z ||
            -local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_x)) &&
          (local_40.projected_vertex.transformed_y <= local_40.projected_vertex.transformed_z)) &&
         ((-local_40.projected_vertex.transformed_y == local_40.projected_vertex.transformed_z ||
           -local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_y &&
          (local_a0.projected_vertex.transformed_x <= local_a0.projected_vertex.transformed_z)))) &&
        ((-local_a0.projected_vertex.transformed_x == local_a0.projected_vertex.transformed_z ||
          -local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_x &&
         ((local_a0.projected_vertex.transformed_y <= local_a0.projected_vertex.transformed_z &&
          (-local_a0.projected_vertex.transformed_y == local_a0.projected_vertex.transformed_z ||
           -local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_y))))))
       && ((0 < local_40.projected_vertex.transformed_z &&
           (0 < local_a0.projected_vertex.transformed_z)))) {
      pSVar3 = &local_40;
      pSVar4 = this_ptr->vertex_buffer_ptr + 0x4e1e;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      pSVar3 = &local_a0;
      pSVar4 = this_ptr->vertex_buffer_ptr + 19999;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_prim_c_replaceWWithDepth_FUN_00552110(this_ptr->vertex_buffer_ptr + 0x4e1e,2);
      pSVar3 = this_ptr->vertex_buffer_ptr;
      engine_2d_c_drawLine3D_FUN_00401320
                (pSVar3[0x4e1e].projected_vertex.screen_x >> 0x10,
                 pSVar3[0x4e1e].projected_vertex.screen_y >> 0x10,
                 pSVar3[0x4e1e].projected_vertex.transformed_z,
                 pSVar3[19999].projected_vertex.screen_x >> 0x10,
                 pSVar3[19999].projected_vertex.screen_y >> 0x10,
                 pSVar3[19999].projected_vertex.transformed_z);
      return;
    }
  }
  return;
}
