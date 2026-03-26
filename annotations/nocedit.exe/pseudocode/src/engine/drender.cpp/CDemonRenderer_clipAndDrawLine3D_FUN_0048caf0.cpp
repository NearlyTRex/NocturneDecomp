// Name: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
// Address: 0048caf0
// Address Range: [[0048caf0, 0048cdef] [03fc0732, 03fc0ba7]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex local_a0;
  SRenderVertex local_70;
  SRenderVertex local_40;
  
  g_ActiveRenderColor = g_CurrentPolygonColor;
  pSVar5 = this_ptr->vertex_buffer_ptr + vertex_index1;
  local_40.projected_vertex.transformed_x = (pSVar5->projected_vertex).transformed_x;
  local_40.projected_vertex.transformed_y = (pSVar5->projected_vertex).transformed_y;
  local_40.projected_vertex.transformed_z = (pSVar5->projected_vertex).transformed_z;
  local_40.projected_vertex.inv_z = (pSVar5->projected_vertex).inv_z;
  local_40.projected_vertex.screen_x = (pSVar5->projected_vertex).screen_x;
  local_40.projected_vertex.screen_y = (pSVar5->projected_vertex).screen_y;
  local_40.u = pSVar5->u;
  local_40.v = pSVar5->v;
  local_40.r = pSVar5->r;
  local_40.g = pSVar5->g;
  local_40.b = pSVar5->b;
  local_40.a = pSVar5->a;
  pSVar5 = this_ptr->vertex_buffer_ptr + vertex_index2;
  local_a0.projected_vertex.transformed_x = (pSVar5->projected_vertex).transformed_x;
  local_a0.projected_vertex.transformed_y = (pSVar5->projected_vertex).transformed_y;
  local_a0.projected_vertex.transformed_z = (pSVar5->projected_vertex).transformed_z;
  local_a0.projected_vertex.inv_z = (pSVar5->projected_vertex).inv_z;
  local_a0.projected_vertex.screen_x = (pSVar5->projected_vertex).screen_x;
  local_a0.projected_vertex.screen_y = (pSVar5->projected_vertex).screen_y;
  local_a0.u = pSVar5->u;
  local_a0.v = pSVar5->v;
  local_a0.r = pSVar5->r;
  local_a0.g = pSVar5->g;
  local_a0.b = pSVar5->b;
  local_a0.a = pSVar5->a;
  if (((local_40.projected_vertex.screen_x & local_a0.projected_vertex.screen_x & 0x80000000U) == 0)
     || ((char)(local_40.projected_vertex.screen_x & local_a0.projected_vertex.screen_x) == '\0')) {
    iVar3 = 0;
    do {
      if (local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&local_40,&local_a0,&local_70);
        local_a0.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_a0.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_a0.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_a0.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_a0.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_a0.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_a0.u = local_70.u;
        local_a0.v = local_70.v;
        local_a0.r = local_70.r;
        local_a0.g = local_70.g;
        local_a0.b = local_70.b;
        local_a0.a = local_70.a;
      }
      if (-local_a0.projected_vertex.transformed_x != local_a0.projected_vertex.transformed_z &&
          local_a0.projected_vertex.transformed_x <= -local_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&local_40,&local_a0,&local_70);
        local_a0.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_a0.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_a0.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_a0.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_a0.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_a0.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_a0.u = local_70.u;
        local_a0.v = local_70.v;
        local_a0.r = local_70.r;
        local_a0.g = local_70.g;
        local_a0.b = local_70.b;
        local_a0.a = local_70.a;
      }
      if (local_a0.projected_vertex.transformed_z < local_a0.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&local_40,&local_a0,&local_70);
        local_a0.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_a0.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_a0.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_a0.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_a0.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_a0.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_a0.u = local_70.u;
        local_a0.v = local_70.v;
        local_a0.r = local_70.r;
        local_a0.g = local_70.g;
        local_a0.b = local_70.b;
        local_a0.a = local_70.a;
      }
      if (-local_a0.projected_vertex.transformed_y != local_a0.projected_vertex.transformed_z &&
          local_a0.projected_vertex.transformed_y <= -local_a0.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&local_40,&local_a0,&local_70);
        local_a0.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_a0.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_a0.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_a0.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_a0.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_a0.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_a0.u = local_70.u;
        local_a0.v = local_70.v;
        local_a0.r = local_70.r;
        local_a0.g = local_70.g;
        local_a0.b = local_70.b;
        local_a0.a = local_70.a;
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&local_a0,&local_40,&local_70);
        local_40.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_40.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_40.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_40.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_40.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_40.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_40.u = local_70.u;
        local_40.v = local_70.v;
        local_40.r = local_70.r;
        local_40.g = local_70.g;
        local_40.b = local_70.b;
        local_40.a = local_70.a;
      }
      if (-local_40.projected_vertex.transformed_x != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_x <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&local_a0,&local_40,&local_70);
        local_40.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_40.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_40.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_40.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_40.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_40.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_40.u = local_70.u;
        local_40.v = local_70.v;
        local_40.r = local_70.r;
        local_40.g = local_70.g;
        local_40.b = local_70.b;
        local_40.a = local_70.a;
      }
      if (local_40.projected_vertex.transformed_z < local_40.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&local_a0,&local_40,&local_70);
        local_40.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_40.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_40.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_40.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_40.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_40.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_40.u = local_70.u;
        local_40.v = local_70.v;
        local_40.r = local_70.r;
        local_40.g = local_70.g;
        local_40.b = local_70.b;
        local_40.a = local_70.a;
      }
      if (-local_40.projected_vertex.transformed_y != local_40.projected_vertex.transformed_z &&
          local_40.projected_vertex.transformed_y <= -local_40.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&local_a0,&local_40,&local_70);
        local_40.projected_vertex.transformed_x = local_70.projected_vertex.transformed_x;
        local_40.projected_vertex.transformed_y = local_70.projected_vertex.transformed_y;
        local_40.projected_vertex.transformed_z = local_70.projected_vertex.transformed_z;
        local_40.projected_vertex.inv_z = local_70.projected_vertex.inv_z;
        local_40.projected_vertex.screen_x = local_70.projected_vertex.screen_x;
        local_40.projected_vertex.screen_y = local_70.projected_vertex.screen_y;
        local_40.u = local_70.u;
        local_40.v = local_70.v;
        local_40.r = local_70.r;
        local_40.g = local_70.g;
        local_40.b = local_70.b;
        local_40.a = local_70.a;
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
      pSVar5[0x4e1e].projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
      pSVar5[0x4e1e].projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
      pSVar5[0x4e1e].projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
      pSVar5[0x4e1e].projected_vertex.inv_z = local_40.projected_vertex.inv_z;
      pSVar5[0x4e1e].projected_vertex.screen_x = local_40.projected_vertex.screen_x;
      pSVar5[0x4e1e].projected_vertex.screen_y = local_40.projected_vertex.screen_y;
      pSVar5[0x4e1e].u = local_40.u;
      pSVar5[0x4e1e].v = local_40.v;
      pSVar5[0x4e1e].r = local_40.r;
      pSVar5[0x4e1e].g = local_40.g;
      pSVar5[0x4e1e].b = local_40.b;
      pSVar5[0x4e1e].a = local_40.a;
      pSVar5 = this_ptr->vertex_buffer_ptr;
      pSVar5[19999].projected_vertex.transformed_x = local_a0.projected_vertex.transformed_x;
      pSVar5[19999].projected_vertex.transformed_y = local_a0.projected_vertex.transformed_y;
      pSVar5[19999].projected_vertex.transformed_z = local_a0.projected_vertex.transformed_z;
      pSVar5[19999].projected_vertex.inv_z = local_a0.projected_vertex.inv_z;
      pSVar5[19999].projected_vertex.screen_x = local_a0.projected_vertex.screen_x;
      pSVar5[19999].projected_vertex.screen_y = local_a0.projected_vertex.screen_y;
      pSVar5[19999].u = local_a0.u;
      pSVar5[19999].v = local_a0.v;
      pSVar5[19999].r = local_a0.r;
      pSVar5[19999].g = local_a0.g;
      pSVar5[19999].b = local_a0.b;
      pSVar5[19999].a = local_a0.a;
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
