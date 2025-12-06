// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
// Address: 0048caf0
// Address Range: [[0048caf0, 0048cdef]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
          (CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  int *piVar4;
  SRenderVertex *pSVar5;
  byte bVar6;
  int in_stack_ffffff60;
  int in_stack_ffffff64;
  int in_stack_ffffff68;
  uint local_90;
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  bVar6 = 0;
  g_ActiveRenderColor = g_CurrentPolygonColor;
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index1;
  pSVar5 = &local_40;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    pSVar5 = (SRenderVertex *)&(pSVar5->projected_vertex).transformed_y;
  }
  pSVar3 = this_ptr->vertex_buffer_ptr + vertex_index2;
  piVar4 = (int *)&stack0xffffff60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = (pSVar3->projected_vertex).transformed_x;
    pSVar3 = (SRenderVertex *)&(pSVar3->projected_vertex).transformed_y;
    piVar4 = piVar4 + 1;
  }
  if (((local_40.projected_vertex.screen_x & local_90 & 0x80000000) == 0) ||
     ((char)(local_40.projected_vertex.screen_x & local_90) == '\0')) {
    iVar1 = 0;
    do {
      if (in_stack_ffffff68 < in_stack_ffffff60) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-in_stack_ffffff60 != in_stack_ffffff68 && in_stack_ffffff60 <= -in_stack_ffffff68) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (in_stack_ffffff68 < in_stack_ffffff64) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (-in_stack_ffffff64 != in_stack_ffffff68 && in_stack_ffffff64 <= -in_stack_ffffff68) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  (&local_40,(SRenderVertex *)&stack0xffffff60,&local_70);
        pSVar3 = &local_70;
        piVar4 = (int *)&stack0xffffff60;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      if (-local_40.projected_vertex.transformed_x != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_x <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
      }
      if (-local_40.projected_vertex.transformed_y != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_y <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00
                  ((SRenderVertex *)&stack0xffffff60,&local_40,&local_70);
        pSVar3 = &local_70;
        pSVar5 = &local_40;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
          pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
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
          (in_stack_ffffff60 <= in_stack_ffffff68)))) &&
        ((-in_stack_ffffff60 == in_stack_ffffff68 || -in_stack_ffffff68 < in_stack_ffffff60 &&
         ((in_stack_ffffff64 <= in_stack_ffffff68 &&
          (-in_stack_ffffff64 == in_stack_ffffff68 || -in_stack_ffffff68 < in_stack_ffffff64))))))
       && ((0 < local_40.projected_vertex.transformed_z && (0 < in_stack_ffffff68)))) {
      pSVar3 = &local_40;
      pSVar5 = this_ptr->vertex_buffer_ptr + 0x4e1e;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar5->projected_vertex).transformed_x = (pSVar3->projected_vertex).transformed_x;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      piVar4 = (int *)&stack0xffffff60;
      pSVar3 = this_ptr->vertex_buffer_ptr + 19999;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        (pSVar3->projected_vertex).transformed_x = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        pSVar3 = (SRenderVertex *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
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
