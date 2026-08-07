// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
// Address: 004610a0
// Address Range: [[004610a0, 0046139f]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex SStack_a0;
  SRenderVertex SStack_70;
  SRenderVertex SStack_40;
  
  bVar5 = 0;
  g_ActiveRenderColor = DAT_006b0260;
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index1;
  pSVar4 = &SStack_40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    pSVar4 = (SRenderVertex *)&(pSVar4->projected_vertex).transformed_y;
  }
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index2;
  pSVar4 = &SStack_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + 4);
  }
  if (((SStack_40.projected_vertex.screen_x & SStack_a0.projected_vertex.screen_x & 0x80000000U) ==
       0) || ((char)(SStack_40.projected_vertex.screen_x & SStack_a0.projected_vertex.screen_x) ==
              '\0')) {
    iVar1 = 0;
    do {
      if (SStack_a0.projected_vertex.transformed_z < SStack_a0.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(&SStack_40,&SStack_a0,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-SStack_a0.projected_vertex.transformed_x != SStack_a0.projected_vertex.transformed_z &&
          SStack_a0.projected_vertex.transformed_x <= -SStack_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630(&SStack_40,&SStack_a0,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (SStack_a0.projected_vertex.transformed_z < SStack_a0.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(&SStack_40,&SStack_a0,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-SStack_a0.projected_vertex.transformed_y != SStack_a0.projected_vertex.transformed_z &&
          SStack_a0.projected_vertex.transformed_y <= -SStack_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00431830(&SStack_40,&SStack_a0,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_a0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pSVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (SStack_40.projected_vertex.transformed_z < SStack_40.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(&SStack_a0,&SStack_40,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-SStack_40.projected_vertex.transformed_x != SStack_40.projected_vertex.transformed_z &&
          SStack_40.projected_vertex.transformed_x <= -SStack_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630(&SStack_a0,&SStack_40,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (SStack_40.projected_vertex.transformed_z < SStack_40.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(&SStack_a0,&SStack_40,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      if (-SStack_40.projected_vertex.transformed_y != SStack_40.projected_vertex.transformed_z &&
          SStack_40.projected_vertex.transformed_y <= -SStack_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00431830(&SStack_a0,&SStack_40,&SStack_70);
        pSVar3 = &SStack_70;
        pSVar4 = &SStack_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if ((((((SStack_40.projected_vertex.transformed_x <= SStack_40.projected_vertex.transformed_z)
           && (-SStack_40.projected_vertex.transformed_x == SStack_40.projected_vertex.transformed_z
               || -SStack_40.projected_vertex.transformed_z <
                  SStack_40.projected_vertex.transformed_x)) &&
          (SStack_40.projected_vertex.transformed_y <= SStack_40.projected_vertex.transformed_z)) &&
         ((-SStack_40.projected_vertex.transformed_y == SStack_40.projected_vertex.transformed_z ||
           -SStack_40.projected_vertex.transformed_z < SStack_40.projected_vertex.transformed_y &&
          (SStack_a0.projected_vertex.transformed_x <= SStack_a0.projected_vertex.transformed_z))))
        && ((-SStack_a0.projected_vertex.transformed_x == SStack_a0.projected_vertex.transformed_z
             || -SStack_a0.projected_vertex.transformed_z < SStack_a0.projected_vertex.transformed_x
            && ((SStack_a0.projected_vertex.transformed_y <=
                 SStack_a0.projected_vertex.transformed_z &&
                (-SStack_a0.projected_vertex.transformed_y ==
                 SStack_a0.projected_vertex.transformed_z ||
                 -SStack_a0.projected_vertex.transformed_z <
                 SStack_a0.projected_vertex.transformed_y)))))) &&
       ((0 < SStack_40.projected_vertex.transformed_z &&
        (0 < SStack_a0.projected_vertex.transformed_z)))) {
      pSVar3 = &SStack_40;
      pSVar4 = this_ptr->vertex_buffer_ptr + 0x4e1e;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar4->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      pSVar3 = &SStack_a0;
      pSVar4 = this_ptr->vertex_buffer_ptr + 19999;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar4->projected_vertex).transformed_x = *(int *)pSVar3;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar5 * -2 + 1) * 4);
      }
      engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_004cd300(19999);
      engine_prim_c_replaceWWithDepth_FUN_004f99d0(this_ptr->vertex_buffer_ptr + 0x4e1e,2);
      pSVar3 = this_ptr->vertex_buffer_ptr;
      engine_2d_c_drawLine3D_FUN_00401710
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
