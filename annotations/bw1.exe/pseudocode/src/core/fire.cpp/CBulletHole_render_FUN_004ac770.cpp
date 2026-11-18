// Name: core_fire.cpp_CBulletHole_render_FUN_004ac770
// Address: 004ac770
// Address Range: [[004ac770, 004acac0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_render_FUN_004ac770(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_render_FUN_004ac770(CBulletHole *this_ptr)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1028 [998];
  CVector3f *translation;
  CVector3i local_7c;
  CVector3i local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  CVector3i local_58;
  CVector3i local_4c;
  float local_40;
  float local_3c [2];
  CVector3i local_34;
  CVector3f local_28;
  CVector3i local_1c;
  
  bVar3 = 0;
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (g_CDemonRenderer_PTR_00612560,&this_ptr->position);
    translation = (CVector3f *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(this_ptr->actor_ptr);
    translation = &this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (g_CDemonRenderer_PTR_00612560,&this_ptr->euler_angles,translation);
  iVar2 = (this_ptr->texture_index & 1U) * 0x800000;
  local_5c = 0;
  g_SRenderVertex_ARRAY_00629014[0].u = iVar2 + 0x80000;
  iVar1 = (this_ptr->texture_index & 2U) * 0x400000;
  g_SRenderVertex_ARRAY_00629014[1].u = iVar2 + 0x780000;
  g_SRenderVertex_ARRAY_00629014[0].v = iVar1 + 0x780000;
  g_SRenderVertex_ARRAY_00629014[2].v = iVar1 + 0x80000;
  local_64 = 0xbe2e147b;
  local_60 = 0xbe2e147b;
  local_4c.x = (int)ROUND(256.0f * -0.17);
  local_4c.y = (int)ROUND(256.0f * -0.17);
  local_4c.z = (int)ROUND(256.0f * 0.0);
  g_SRenderVertex_ARRAY_00629014[1].v = g_SRenderVertex_ARRAY_00629014[0].v;
  g_SRenderVertex_ARRAY_00629014[2].u = g_SRenderVertex_ARRAY_00629014[1].u;
  g_SRenderVertex_ARRAY_00629014[3].u = g_SRenderVertex_ARRAY_00629014[0].u;
  g_SRenderVertex_ARRAY_00629014[3].v = g_SRenderVertex_ARRAY_00629014[2].v;
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,&local_4c);
  local_64 = 0x3e2e147b;
  local_60 = 0xbe2e147b;
  local_5c = 0;
  local_7c.x = (int)ROUND(256.0f * 0.17);
  local_7c.y = (int)ROUND(256.0f * -0.17);
  local_7c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_64 = 0x3e2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_1c.x = (int)ROUND(256.0f * 0.17);
  local_1c.y = (int)ROUND(256.0f * 0.17);
  local_1c.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,&local_1c);
  local_64 = 0xbe2e147b;
  local_60 = 0x3e2e147b;
  local_5c = 0;
  local_34.x = (int)ROUND(256.0f * -0.17);
  local_34.y = (int)ROUND(256.0f * 0.17);
  local_34.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,&local_34);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    g_SRenderVertex_ARRAY_00629014[0].g = 0xffff;
    g_SRenderVertex_ARRAY_00629014[0].b = 0xffff;
    g_SRenderVertex_ARRAY_00629014[1].r = 0xffff;
    g_SRenderVertex_ARRAY_00629014[1].g = 0xffff;
    g_SRenderVertex_ARRAY_00629014[1].b = 0xffff;
    g_SRenderVertex_ARRAY_00629014[2].r = 0xffff;
    g_SRenderVertex_ARRAY_00629014[2].g = 0xffff;
    g_SRenderVertex_ARRAY_00629014[2].b = 0xffff;
    g_SRenderVertex_ARRAY_00629014[3].r = 0xffff;
    g_SRenderVertex_ARRAY_00629014[3].g = 0xffff;
    g_SRenderVertex_ARRAY_00629014[3].b = 0xffff;
    g_SRenderVertex_ARRAY_00629014[0].r = 0xffff;
  }
  else {
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0
              (this_ptr->actor_ptr,&this_ptr->actor_local_space,&local_28);
    local_40 = local_28.x;
    local_3c[(uint)bVar3 * -2] = *(float *)((int)&local_28 + (uint)bVar3 * -8 + 4);
    local_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    local_70.x = (int)ROUND((this_ptr->position).x * 256.0f);
    local_70.y = (int)ROUND((this_ptr->position).y * 256.0f);
    local_70.z = (int)ROUND((this_ptr->position).z * 256.0f);
    local_58.x = (int)ROUND(local_40 * 65536.0f);
    local_58.y = (int)ROUND(local_3c[0] * 65536.0f);
    local_58.z = (int)ROUND(local_3c[1] * 65536.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_00552a70(g_CDemonSetPtr,&local_70,&local_58,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (g_CDemonRenderer_PTR_00612560,&g_BillboardPrimitive.base);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_pop_FUN_004839a0();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(this_ptr->actor_ptr);
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
