// Name: core_fire.cpp_CBulletHole_render_FUN_004bfac0
// Address: 004bfac0
// Address Range: [[004bfac0, 004bfd2c] [004bfd38, 004bfdf2]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletHole_render_FUN_004bfac0(CBulletHole * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_render_FUN_004bfac0(CBulletHole *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CVector3i *rotation;
  CVector3i local_48;
  uint local_3c;
  byte local_38 [12];
  int local_2c;
  int local_28;
  CVector3f local_1c;
  
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&this_ptr->position);
    rotation = (CVector3i *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr->actor_ptr);
    rotation = (CVector3i *)&this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr->euler_angles,rotation);
  iVar3 = (this_ptr->texture_index & 1U) * 0x800000;
  local_48.x = 0;
  g_RenderVertexBuffer[0].u = (float)(iVar3 + 0x80000);
  iVar2 = (this_ptr->texture_index & 2U) * 0x400000;
  g_RenderVertexBuffer[1].u = (float)(iVar3 + 0x780000);
  g_RenderVertexBuffer[0].v = (float)(iVar2 + 0x780000);
  g_RenderVertexBuffer[2].v = (float)(iVar2 + 0x80000);
  local_38._0_4_ = (uint)ROUND(256f * -0.17);
  local_38._4_4_ = (uint)ROUND(256f * -0.17);
  local_38._8_4_ = (uint)ROUND(256f * 0.0);
  g_RenderVertexBuffer[1].v = g_RenderVertexBuffer[0].v;
  g_RenderVertexBuffer[2].u = g_RenderVertexBuffer[1].u;
  g_RenderVertexBuffer[3].u = g_RenderVertexBuffer[0].u;
  g_RenderVertexBuffer[3].v = g_RenderVertexBuffer[2].v;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_38);
  local_48.x = -0x41d1eb85;
  local_48.y = 0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
             (CVector3i *)&stack0xffffff9c);
  local_48.x = 0x3e2e147b;
  local_48.y = 0x3e2e147b;
  local_48.z = 0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
             (CVector3i *)&stack0xfffffff4);
  local_48.y = -0x41d1eb85;
  local_3c = 0;
  local_48.z = 0x3e2e147b;
  local_1c.z = (float)(int)ROUND(256f * -0.17);
  fVar1 = 256f * 0.17;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&local_1c.z);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    g_RenderVertexBuffer[0].color = 0xffff;
    g_RenderVertexBuffer[0].fog = 9.18341e-41;
    g_RenderVertexBuffer[1].light = 9.18341e-41;
    g_RenderVertexBuffer[1].color = 0xffff;
    g_RenderVertexBuffer[1].fog = 9.18341e-41;
    g_RenderVertexBuffer[2].light = 9.18341e-41;
    g_RenderVertexBuffer[2].color = 0xffff;
    g_RenderVertexBuffer[2].fog = 9.18341e-41;
    g_RenderVertexBuffer[3].light = 9.18341e-41;
    g_RenderVertexBuffer[3].color = 0xffff;
    g_RenderVertexBuffer[3].fog = 9.18341e-41;
    g_RenderVertexBuffer[0].light = 9.18341e-41;
  }
  else {
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              (this_ptr->actor_ptr,&local_1c,&this_ptr->actor_local_space);
    local_48.x = (int)ROUND((this_ptr->position).x * 256f);
    local_48.y = (int)ROUND((this_ptr->position).y * 256f);
    local_48.z = (int)ROUND((this_ptr->position).z * 256f);
    local_38._8_4_ = (uint)ROUND(local_1c.y * 65536f);
    local_2c = (int)ROUND(local_1c.z * 65536f);
    local_28 = (int)ROUND((float)(int)ROUND(fVar1) * 65536f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
              (g_CDemonSetPtr,&local_48,(CVector3i *)(local_38 + 8),0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr->actor_ptr);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
