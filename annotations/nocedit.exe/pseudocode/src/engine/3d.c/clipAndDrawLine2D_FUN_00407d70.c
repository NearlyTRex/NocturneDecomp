// Name: engine_3d.c_clipAndDrawLine2D_FUN_00407d70
// Address: 00407d70
// Address Range: [[00407d70, 00407fed] [03fc0eb0, 03fc124e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1,SRenderVertex vertex2)

#include "nocturne.h"

void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1,SRenderVertex vertex2)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SRenderVertex local_40;
  
  if (((vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x & 0x80000000U) == 0)
     || ((char)(vertex1.projected_vertex.screen_x & vertex2.projected_vertex.screen_x) == '\0')) {
    iVar2 = 0;
    do {
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&vertex1,&vertex2,&local_40);
        vertex2.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex2.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex2.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex2.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex2.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex2.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex2.u = local_40.u;
        vertex2.v = local_40.v;
        vertex2.r = local_40.r;
        vertex2.g = local_40.g;
        vertex2.b = local_40.b;
        vertex2.a = local_40.a;
      }
      if (-vertex2.projected_vertex.transformed_x != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_x <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&vertex1,&vertex2,&local_40);
        vertex2.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex2.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex2.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex2.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex2.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex2.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex2.u = local_40.u;
        vertex2.v = local_40.v;
        vertex2.r = local_40.r;
        vertex2.g = local_40.g;
        vertex2.b = local_40.b;
        vertex2.a = local_40.a;
      }
      if (vertex2.projected_vertex.transformed_z < vertex2.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&vertex1,&vertex2,&local_40);
        vertex2.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex2.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex2.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex2.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex2.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex2.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex2.u = local_40.u;
        vertex2.v = local_40.v;
        vertex2.r = local_40.r;
        vertex2.g = local_40.g;
        vertex2.b = local_40.b;
        vertex2.a = local_40.a;
      }
      if (-vertex2.projected_vertex.transformed_y != vertex2.projected_vertex.transformed_z &&
          vertex2.projected_vertex.transformed_y <= -vertex2.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&vertex1,&vertex2,&local_40);
        vertex2.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex2.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex2.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex2.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex2.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex2.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex2.u = local_40.u;
        vertex2.v = local_40.v;
        vertex2.r = local_40.r;
        vertex2.g = local_40.g;
        vertex2.b = local_40.b;
        vertex2.a = local_40.a;
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_x) {
        engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(&vertex2,&vertex1,&local_40);
        vertex1.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex1.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex1.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex1.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex1.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex1.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex1.u = local_40.u;
        vertex1.v = local_40.v;
        vertex1.r = local_40.r;
        vertex1.g = local_40.g;
        vertex1.b = local_40.b;
        vertex1.a = local_40.a;
      }
      if (-vertex1.projected_vertex.transformed_x != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_x <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(&vertex2,&vertex1,&local_40);
        vertex1.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex1.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex1.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex1.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex1.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex1.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex1.u = local_40.u;
        vertex1.v = local_40.v;
        vertex1.r = local_40.r;
        vertex1.g = local_40.g;
        vertex1.b = local_40.b;
        vertex1.a = local_40.a;
      }
      if (vertex1.projected_vertex.transformed_z < vertex1.projected_vertex.transformed_y) {
        engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(&vertex2,&vertex1,&local_40);
        vertex1.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex1.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex1.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex1.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex1.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex1.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex1.u = local_40.u;
        vertex1.v = local_40.v;
        vertex1.r = local_40.r;
        vertex1.g = local_40.g;
        vertex1.b = local_40.b;
        vertex1.a = local_40.a;
      }
      if (-vertex1.projected_vertex.transformed_y != vertex1.projected_vertex.transformed_z &&
          vertex1.projected_vertex.transformed_y <= -vertex1.projected_vertex.transformed_z) {
        engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(&vertex2,&vertex1,&local_40);
        vertex1.projected_vertex.transformed_x = local_40.projected_vertex.transformed_x;
        vertex1.projected_vertex.transformed_y = local_40.projected_vertex.transformed_y;
        vertex1.projected_vertex.transformed_z = local_40.projected_vertex.transformed_z;
        vertex1.projected_vertex.inv_z = local_40.projected_vertex.inv_z;
        vertex1.projected_vertex.screen_x = local_40.projected_vertex.screen_x;
        vertex1.projected_vertex.screen_y = local_40.projected_vertex.screen_y;
        vertex1.u = local_40.u;
        vertex1.v = local_40.v;
        vertex1.r = local_40.r;
        vertex1.g = local_40.g;
        vertex1.b = local_40.b;
        vertex1.a = local_40.a;
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
      g_QuadVertex2.projected_vertex.transformed_x = vertex1.projected_vertex.transformed_x;
      g_QuadVertex2.projected_vertex.transformed_y = vertex1.projected_vertex.transformed_y;
      g_QuadVertex2.projected_vertex.transformed_z = vertex1.projected_vertex.transformed_z;
      g_QuadVertex2.projected_vertex.inv_z = vertex1.projected_vertex.inv_z;
      g_QuadVertex2.projected_vertex.screen_x = vertex1.projected_vertex.screen_x;
      g_QuadVertex2.projected_vertex.screen_y = vertex1.projected_vertex.screen_y;
      g_QuadVertex2.u = vertex1.u;
      g_QuadVertex2.v = vertex1.v;
      g_QuadVertex2.r = vertex1.r;
      g_QuadVertex2.g = vertex1.g;
      g_QuadVertex2.b = vertex1.b;
      g_QuadVertex2.a = vertex1.a;
      g_QuadVertex3.projected_vertex.transformed_x = vertex2.projected_vertex.transformed_x;
      g_QuadVertex3.projected_vertex.transformed_y = vertex2.projected_vertex.transformed_y;
      g_QuadVertex3.projected_vertex.transformed_z = vertex2.projected_vertex.transformed_z;
      g_QuadVertex3.projected_vertex.inv_z = vertex2.projected_vertex.inv_z;
      g_QuadVertex3.projected_vertex.screen_x = vertex2.projected_vertex.screen_x;
      g_QuadVertex3.projected_vertex.screen_y = vertex2.projected_vertex.screen_y;
      g_QuadVertex3.u = vertex2.u;
      g_QuadVertex3.v = vertex2.v;
      g_QuadVertex3.r = vertex2.r;
      g_QuadVertex3.g = vertex2.g;
      g_QuadVertex3.b = vertex2.b;
      g_QuadVertex3.a = vertex2.a;
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(0x4e1e);
      engine_matrix_c_projectCachedPointUnchecked_FUN_0050ce60(19999);
      engine_2d_c_drawLine_FUN_004011b0
                (g_QuadVertex2.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex2.projected_vertex.screen_y >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_x >> 0x10,
                 g_QuadVertex3.projected_vertex.screen_y >> 0x10);
      return;
    }
  }
  return;
}
