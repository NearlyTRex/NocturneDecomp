// Name: core_marquee.cpp_CMarquee_renderLightBulb_FUN_0050bec0
// Address: 0050bec0
// Address Range: [[0050bec0, 0050c046] [03fc2f9c, 03fc30af]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(CMarquee *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(CMarquee *this_ptr,CVector3f *position)

{
  int *piVar2;
  SRenderVertex *pSVar5;
  int iVar2;
  SRenderVertex *pSVar3;
  SRenderVertex *pSVar4;
  byte bVar5;
  SMRGLPrimitiveQuadIndex local_44;
  CVector3i local_1c;
  int *piVar1;
  CDemonRenderer *this_ptr_00;
  
  local_1c.x = (int)ROUND(position->x * 256.0f);
  local_1c.y = (int)ROUND(position->y * 256.0f);
  local_1c.z = (int)ROUND(position->z * 256.0f);
  wincore_windll_cpp_transformPoint_FUN_005b5a25
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_1c);
  this_ptr_00 = g_CDemonRendererPtr2;
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar5[1].projected_vertex.transformed_x = (pSVar5->projected_vertex).transformed_x;
  pSVar5[1].projected_vertex.transformed_y = (pSVar5->projected_vertex).transformed_y;
  pSVar5[1].projected_vertex.transformed_z = (pSVar5->projected_vertex).transformed_z;
  pSVar5[1].projected_vertex.inv_z = (pSVar5->projected_vertex).inv_z;
  pSVar5[1].projected_vertex.screen_x = (pSVar5->projected_vertex).screen_x;
  pSVar5[1].projected_vertex.screen_y = (pSVar5->projected_vertex).screen_y;
  pSVar5[1].u = pSVar5->u;
  pSVar5[1].v = pSVar5->v;
  pSVar5[1].r = pSVar5->r;
  pSVar5[1].g = pSVar5->g;
  pSVar5[1].b = pSVar5->b;
  pSVar5[1].a = pSVar5->a;
  pSVar5 = this_ptr_00->vertex_buffer_ptr;
  pSVar5[2].projected_vertex.transformed_x = (pSVar5->projected_vertex).transformed_x;
  pSVar5[2].projected_vertex.transformed_y = (pSVar5->projected_vertex).transformed_y;
  pSVar5[2].projected_vertex.transformed_z = (pSVar5->projected_vertex).transformed_z;
  pSVar5[2].projected_vertex.inv_z = (pSVar5->projected_vertex).inv_z;
  pSVar5[2].projected_vertex.screen_x = (pSVar5->projected_vertex).screen_x;
  pSVar5[2].projected_vertex.screen_y = (pSVar5->projected_vertex).screen_y;
  pSVar5[2].u = pSVar5->u;
  pSVar5[2].v = pSVar5->v;
  pSVar5[2].r = pSVar5->r;
  pSVar5[2].g = pSVar5->g;
  pSVar5[2].b = pSVar5->b;
  pSVar5[2].a = pSVar5->a;
  pSVar5 = this_ptr_00->vertex_buffer_ptr;
  pSVar5[3].projected_vertex.transformed_x = (pSVar5->projected_vertex).transformed_x;
  pSVar5[3].projected_vertex.transformed_y = (pSVar5->projected_vertex).transformed_y;
  pSVar5[3].projected_vertex.transformed_z = (pSVar5->projected_vertex).transformed_z;
  pSVar5[3].projected_vertex.inv_z = (pSVar5->projected_vertex).inv_z;
  pSVar5[3].projected_vertex.screen_x = (pSVar5->projected_vertex).screen_x;
  pSVar5[3].projected_vertex.screen_y = (pSVar5->projected_vertex).screen_y;
  pSVar5[3].u = pSVar5->u;
  pSVar5[3].v = pSVar5->v;
  pSVar5[3].r = pSVar5->r;
  pSVar5[3].g = pSVar5->g;
  pSVar5[3].b = pSVar5->b;
  pSVar5[3].a = pSVar5->a;
  (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x =
       (this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_x + 0x80;
  piVar1 = &(this_ptr_00->vertex_buffer_ptr->projected_vertex).transformed_y;
  *piVar1 = *piVar1 + 0x80;
  this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_x + -0x80;
  piVar2 = &this_ptr_00->vertex_buffer_ptr[1].projected_vertex.transformed_y;
  *piVar2 = *piVar2 + 0x80;
  this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_x + -0x80;
  piVar2 = &this_ptr_00->vertex_buffer_ptr[2].projected_vertex.transformed_y;
  *piVar2 = *piVar2 + -0x80;
  this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x =
       this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_x + 0x80;
  piVar2 = &this_ptr_00->vertex_buffer_ptr[3].projected_vertex.transformed_y;
  *piVar2 = *piVar2 + -0x80;
  (this_ptr_00->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
  this_ptr_00->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
  this_ptr_00->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
  this_ptr_00->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
  this_ptr_00->vertex_buffer_ptr->u = 0x80000;
  this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x80000;
  this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
  local_44.base.base.count = 4;
  local_44.base.surface_normal.D = 0;
  local_44.base.surface_normal.C = 0;
  local_44.base.surface_normal.B = 0;
  local_44.base.surface_normal.A = 0;
  local_44.vertices[0] = 0;
  local_44.vertices[3] = 3;
  local_44.vertices[1] = 1;
  local_44.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10(this_ptr_00,&local_44.base,99);
  return;
}
