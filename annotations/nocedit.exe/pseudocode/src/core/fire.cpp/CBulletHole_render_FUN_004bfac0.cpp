// Name: core_fire.cpp_CBulletHole_render_FUN_004bfac0
// Address: 004bfac0
// Address Range: [[004bfac0, 004bfd2c] [004bfd38, 004bfdf2]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_render_FUN_004bfac0(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_render_FUN_004bfac0(CBulletHole *this_ptr)

{
  int iVar1;
  int iVar2;
  CVector3i *rotation;
  CVector3i local_70;
  CVector3i local_64;
  uint local_58;
  uint local_54;
  uint local_50;
  CVector3i local_4c;
  CVector3i local_40;
  CVector3f local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr2,&this_ptr->position);
    rotation = (CVector3i *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr->actor_ptr);
    rotation = (CVector3i *)&this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&this_ptr->euler_angles,rotation);
  iVar2 = (this_ptr->texture_index & 1U) * 0x800000;
  local_50 = 0;
  g_RenderVertexBuffer[0].u = iVar2 + 0x80000;
  iVar1 = (this_ptr->texture_index & 2U) * 0x400000;
  g_RenderVertexBuffer[1].u = iVar2 + 0x780000;
  g_RenderVertexBuffer[0].v = iVar1 + 0x780000;
  g_RenderVertexBuffer[2].v = iVar1 + 0x80000;
  local_58 = 0xbe2e147b;
  local_54 = 0xbe2e147b;
  local_40.x = (int)ROUND(256.0f * -0.17);
  local_40.y = (int)ROUND(256.0f * -0.17);
  local_40.z = (int)ROUND(256.0f * 0.0);
  g_RenderVertexBuffer[1].v = g_RenderVertexBuffer[0].v;
  g_RenderVertexBuffer[2].u = g_RenderVertexBuffer[1].u;
  g_RenderVertexBuffer[3].u = g_RenderVertexBuffer[0].u;
  g_RenderVertexBuffer[3].v = g_RenderVertexBuffer[2].v;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_40);
  local_58 = 0x3e2e147b;
  local_54 = 0xbe2e147b;
  local_50 = 0;
  local_70.x = (int)ROUND(256.0f * 0.17);
  local_70.y = (int)ROUND(256.0f * -0.17);
  local_70.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_70);
  local_58 = 0x3e2e147b;
  local_54 = 0x3e2e147b;
  local_50 = 0;
  local_1c.x = (int)ROUND(256.0f * 0.17);
  local_1c.y = (int)ROUND(256.0f * 0.17);
  local_1c.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_58 = 0xbe2e147b;
  local_50 = 0;
  local_54 = 0x3e2e147b;
  local_28.x = (int)ROUND(256.0f * -0.17);
  local_28.y = (int)ROUND(256.0f * 0.17);
  local_28.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_28);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    g_RenderVertexBuffer[0].g = 0xffff;
    g_RenderVertexBuffer[0].b = 0xffff;
    g_RenderVertexBuffer[1].r = 0xffff;
    g_RenderVertexBuffer[1].g = 0xffff;
    g_RenderVertexBuffer[1].b = 0xffff;
    g_RenderVertexBuffer[2].r = 0xffff;
    g_RenderVertexBuffer[2].g = 0xffff;
    g_RenderVertexBuffer[2].b = 0xffff;
    g_RenderVertexBuffer[3].r = 0xffff;
    g_RenderVertexBuffer[3].g = 0xffff;
    g_RenderVertexBuffer[3].b = 0xffff;
    g_RenderVertexBuffer[0].r = 0xffff;
  }
  else {
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              (this_ptr->actor_ptr,&local_34,&this_ptr->actor_local_space);
    local_64.x = (int)ROUND((this_ptr->position).x * 256.0f);
    local_64.y = (int)ROUND((this_ptr->position).y * 256.0f);
    local_64.z = (int)ROUND((this_ptr->position).z * 256.0f);
    local_4c.x = (int)ROUND(local_34.x * 65536.0f);
    local_4c.y = (int)ROUND(local_34.y * 65536.0f);
    local_4c.z = (int)ROUND(local_34.z * 65536.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110(g_CDemonSetPtr,&local_64,&local_4c,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr2,&g_BillboardPrimitive.base);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr->actor_ptr);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
