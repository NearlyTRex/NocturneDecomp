// Name: core_fire.cpp_CGlassParticle_render_FUN_004c1ef0
// Address: 004c1ef0
// Address Range: [[004c1ef0, 004c20e0]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle *this_ptr)

{
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive SStack_44;
  byte local_24 [8];
  int local_1c;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr->euler_angles,(CVector3i *)0x0);
  local_24._0_4_ = (uint)ROUND((this_ptr->triangle_delta).vertices[0].x * 256f);
  local_24._4_4_ = (uint)ROUND((this_ptr->triangle_delta).vertices[0].y * 256f);
  local_1c = (int)ROUND((this_ptr->triangle_delta).vertices[0].z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)(local_24 + 4));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0xfffffff0);
  local_24._0_4_ = (uint)ROUND((this_ptr->triangle_delta).vertices[2].x * 256f);
  local_24._4_4_ = (uint)ROUND((this_ptr->triangle_delta).vertices[2].y * 256f);
  local_1c = (int)ROUND((this_ptr->triangle_delta).vertices[2].z * 256f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)local_24);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&this_ptr->texture);
  SStack_44.surface_normal.A = 0;
  SStack_44.base.count = 0;
  SStack_44.base.type = 0;
  SStack_44.surface_normal.B = 0;
  SStack_44.surface_normal.C = 1;
  SStack_44.surface_normal.D = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,this_ptr->lifetime);
  local_24._0_4_ = (uint)ROUND((this_ptr->base).position.x * 256f);
  local_24._4_4_ = (uint)ROUND((this_ptr->base).position.y * 256f);
  local_1c = (int)ROUND((this_ptr->base).position.z * 256f);
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,(CVector3i *)local_24,(CVector3i *)0x0,0,3);
  g_RenderVertexBuffer[0].u = (this_ptr->uv_u_per_vertex).x;
  g_RenderVertexBuffer[0].v = (this_ptr->uv_v_per_vertex).x;
  g_RenderVertexBuffer[1].u = (this_ptr->uv_u_per_vertex).y;
  g_RenderVertexBuffer[1].v = (this_ptr->uv_v_per_vertex).y;
  g_RenderVertexBuffer[2].u = (this_ptr->uv_u_per_vertex).z;
  g_RenderVertexBuffer[2].v = (this_ptr->uv_v_per_vertex).z;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&SStack_44);
  SStack_44.base.type = (int)g_CDemonRendererPtr;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
