// Name: core_fire.cpp_CGlassParticle_render_FUN_004c1ef0
// Address: 004c1ef0
// Address Range: [[004c1ef0, 004c20eb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle *this_ptr)

{
  SMRGLPrimitiveQuadIndex SStack_68;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&this_ptr->euler_angles,(CVector3i *)0x0);
  local_28.x = (int)ROUND((this_ptr->triangle_delta).vertices[0].x * 256.0f);
  local_28.y = (int)ROUND((this_ptr->triangle_delta).vertices[0].y * 256.0f);
  local_28.z = (int)ROUND((this_ptr->triangle_delta).vertices[0].z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_28);
  local_1c.x = (int)ROUND((this_ptr->triangle_delta).vertices[1].x * 256.0f);
  local_1c.y = (int)ROUND((this_ptr->triangle_delta).vertices[1].y * 256.0f);
  local_1c.z = (int)ROUND((this_ptr->triangle_delta).vertices[1].z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_1c);
  local_34.x = (int)ROUND((this_ptr->triangle_delta).vertices[2].x * 256.0f);
  local_34.y = (int)ROUND((this_ptr->triangle_delta).vertices[2].y * 256.0f);
  local_34.z = (int)ROUND((this_ptr->triangle_delta).vertices[2].z * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_34);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&this_ptr->texture);
  SStack_68.base.base.count = 3;
  SStack_68.base.surface_normal.D = 0;
  SStack_68.base.surface_normal.C = 0;
  SStack_68.base.surface_normal.B = 0;
  SStack_68.base.surface_normal.A = 0;
  SStack_68.vertices[0] = 0;
  SStack_68.vertices[1] = 1;
  SStack_68.vertices[2] = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,this_ptr->lifetime);
  local_40.x = (int)ROUND((this_ptr->base).position.x * 256.0f);
  local_40.y = (int)ROUND((this_ptr->base).position.y * 256.0f);
  local_40.z = (int)ROUND((this_ptr->base).position.z * 256.0f);
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110(g_CDemonSetPtr,&local_40,(CVector3i *)0x0,0,3)
  ;
  g_RenderVertexBuffer[0].u = (int)(this_ptr->uv_u_per_vertex).x;
  g_RenderVertexBuffer[0].v = (int)(this_ptr->uv_v_per_vertex).x;
  g_RenderVertexBuffer[1].u = (int)(this_ptr->uv_u_per_vertex).y;
  g_RenderVertexBuffer[1].v = (int)(this_ptr->uv_v_per_vertex).y;
  g_RenderVertexBuffer[2].u = (int)(this_ptr->uv_u_per_vertex).z;
  g_RenderVertexBuffer[2].v = (int)(this_ptr->uv_v_per_vertex).z;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr2,&SStack_68.base);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return;
}
