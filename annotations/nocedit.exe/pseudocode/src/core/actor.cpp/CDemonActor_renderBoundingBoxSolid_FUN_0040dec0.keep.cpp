// Name: core_actor.cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0
// Address: 0040dec0
// MANUAL RECONSTRUCTION
// Address Range: [[0040dec0, 0040e125]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0(CDemonActor *this_ptr,int red,int green,int blue,int alpha)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0(CDemonActor *this_ptr,int red,int green,int blue,int alpha)

{
  uint corner_index;
  SMRGLPrimitiveQuadIndex SStack_74;
  CBoundingBox3D local_4c;
  CVector3f CStack_34;
  CVector3i CStack_28;
  CDemonRenderer *this_ptr_00;


  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_4c);
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  for (corner_index = 0; (int)corner_index < 8; corner_index = corner_index + 1) {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_4c,&CStack_34,corner_index);
    CStack_28.x = (int)ROUND(CStack_34.x * 256.0f);
    CStack_28.y = (int)ROUND(CStack_34.y * 256.0f);
    CStack_28.z = (int)ROUND(CStack_34.z * 256.0f);
    this_ptr_00 = g_CDemonRendererPtr2;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&this_ptr_00->vertex_buffer_ptr[corner_index].projected_vertex,&CStack_28);
    this_ptr_00->vertex_buffer_ptr[corner_index].r = red << 8;
    this_ptr_00->vertex_buffer_ptr[corner_index].g = green << 8;
    this_ptr_00->vertex_buffer_ptr[corner_index].b = blue << 8;
    this_ptr_00->vertex_buffer_ptr[corner_index].a = alpha << 8;
    this_ptr_00->vertex_buffer_ptr[corner_index].u = 0x800000;
    this_ptr_00->vertex_buffer_ptr[corner_index].v = 0x800000;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (this_ptr_00,&SMRGLTextureBasic_0066e158);
  SStack_74.base.base.count = 4;
  SStack_74.base.surface_normal.D.i = 0;
  SStack_74.base.surface_normal.C.i = 0;
  SStack_74.base.surface_normal.B.i = 0;
  SStack_74.base.surface_normal.A.i = 0;
  SStack_74.vertices[0] = 0;
  SStack_74.vertices[1] = 2;
  SStack_74.vertices[2] = 6;
  SStack_74.vertices[3] = 4;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74.base);
  SStack_74.vertices[0] = 1;
  SStack_74.vertices[1] = 3;
  SStack_74.vertices[2] = 7;
  SStack_74.vertices[3] = 5;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74.base);
  SStack_74.vertices[2] = 3;
  SStack_74.vertices[0] = 0;
  SStack_74.vertices[1] = 1;
  SStack_74.vertices[3] = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74.base);
  SStack_74.vertices[0] = 4;
  SStack_74.vertices[1] = 5;
  SStack_74.vertices[2] = 7;
  SStack_74.vertices[3] = 6;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74.base);
  SStack_74.vertices[2] = 7;
  SStack_74.vertices[0] = 2;
  SStack_74.vertices[1] = 3;
  SStack_74.vertices[3] = 6;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74.base);
  SStack_74.vertices[1] = 1;
  SStack_74.vertices[3] = 4;
  SStack_74.vertices[0] = 0;
  SStack_74.vertices[2] = 5;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_74.base);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr);
  return;
}
