// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
// Address: 0048caf0
// MANUAL RECONSTRUCTION
// Address Range: [[0048caf0, 0048cdef] [03fc0732, 03fc0ba7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

{
  int iVar3;
  SRenderVertex *pSVar5;
  SRenderVertex local_a0;
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  g_ActiveRenderColor = g_CurrentPolygonColor;
  pSVar5 = this_ptr->vertex_buffer_ptr + vertex_index1;
  local_40 = *pSVar5;
  pSVar5 = this_ptr->vertex_buffer_ptr + vertex_index2;
  local_a0 = *pSVar5;
  if (((local_40.projected_vertex.screen_x & local_a0.projected_vertex.screen_x & 0x80000000U) == 0)
     || ((char)(local_40.projected_vertex.screen_x & local_a0.projected_vertex.screen_x) == '\0')) {
    iVar3 = 0;
    do {
      if (local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&local_40,&local_a0,&local_70);
        local_a0 = local_70;
      }
      if (-local_a0.projected_vertex.transformed_x != local_a0.projected_vertex.transformed_z &&
          local_a0.projected_vertex.transformed_x <= -local_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&local_40,&local_a0,&local_70);
        local_a0 = local_70;
      }
      if (local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&local_40,&local_a0,&local_70);
        local_a0 = local_70;
      }
      if (-local_a0.projected_vertex.transformed_y != local_a0.projected_vertex.transformed_z &&
          local_a0.projected_vertex.transformed_y <= -local_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&local_40,&local_a0,&local_70);
        local_a0 = local_70;
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&local_a0,&local_40,&local_70);
        local_40 = local_70;
      }
      if (-local_40.projected_vertex.transformed_x != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_x <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&local_a0,&local_40,&local_70);
        local_40 = local_70;
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&local_a0,&local_40,&local_70);
        local_40 = local_70;
      }
      if (-local_40.projected_vertex.transformed_y != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_y <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&local_a0,&local_40,&local_70);
        local_40 = local_70;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
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
      pSVar5 = this_ptr->vertex_buffer_ptr;
      pSVar5[0x4e1e] = local_40;
      pSVar5 = this_ptr->vertex_buffer_ptr;
      pSVar5[19999] = local_a0;
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_prim_c_replaceWWithDepth_FUN_00552110(this_ptr->vertex_buffer_ptr + 0x4e1e,2);
      pSVar5 = this_ptr->vertex_buffer_ptr;
      engine_2d_c_drawLine3D_FUN_00401320
                (pSVar5[0x4e1e].projected_vertex.screen_x >> 0x10,
                 pSVar5[0x4e1e].projected_vertex.screen_y >> 0x10,
                 pSVar5[0x4e1e].projected_vertex.transformed_z,
                 pSVar5[19999].projected_vertex.screen_x >> 0x10,
                 pSVar5[19999].projected_vertex.screen_y >> 0x10,
                 pSVar5[19999].projected_vertex.transformed_z);
      return;
    }
  }
  return;
}
