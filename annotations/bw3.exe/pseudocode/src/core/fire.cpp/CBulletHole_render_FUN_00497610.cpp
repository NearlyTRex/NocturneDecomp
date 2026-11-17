// Name: core_fire.cpp_CBulletHole_render_FUN_00497610
// Address: 00497610
// Address Range: [[00497610, 00497a2a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_render_FUN_00497610(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_render_FUN_00497610(CBulletHole *this_ptr)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1060 [1010];
  SMRGLTextureBasic *texture;
  CVector3f *translation;
  CVector3i local_84;
  CVector3f local_78;
  CVector3i local_6c;
  float local_60;
  float local_5c;
  uint local_58;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_3c;
  float local_30;
  float local_2c [2];
  CVector3i local_24;
  float local_18;
  float local_14;
  
  bVar3 = 0;
  local_14 = 0.0;
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
              (g_CDemonRenderer_PTR_005f2afc,&this_ptr->position);
    translation = (CVector3f *)0x0;
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(this_ptr->actor_ptr);
    translation = &this_ptr->transformed_pos;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (g_CDemonRenderer_PTR_005f2afc,&this_ptr->euler_angles,translation);
  iVar1 = this_ptr->decal_type;
  if (iVar1 == 0) {
    texture = &g_SMRGLTextureBasic_005fc964;
  }
  else if (iVar1 == 1) {
    texture = &g_SMRGLTextureBasic_005fc97c;
  }
  else {
    if (iVar1 != 2) goto LAB_0049766e;
    texture = &g_SMRGLTextureBasic_005fc994;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (g_CDemonRenderer_PTR_005f2afc,texture);
LAB_0049766e:
  if (this_ptr->decal_type == 0) {
    iVar2 = (this_ptr->texture_index & 1U) * 0x800000;
    g_SRenderVertex_ARRAY_0060b014[3].u = iVar2 + 0x80000;
    iVar1 = (this_ptr->texture_index & 2U) * 0x400000;
    g_SRenderVertex_ARRAY_0060b014[2].u = iVar2 + 0x780000;
    g_SRenderVertex_ARRAY_0060b014[1].v = iVar1 + 0x780000;
    g_SRenderVertex_ARRAY_0060b014[3].v = iVar1 + 0x80000;
  }
  else {
    g_SRenderVertex_ARRAY_0060b014[1].v = 0xfe0000;
    g_SRenderVertex_ARRAY_0060b014[2].u = 0xfe0000;
    g_SRenderVertex_ARRAY_0060b014[3].u = 0x20000;
    g_SRenderVertex_ARRAY_0060b014[3].v = 0x20000;
  }
  iVar1 = this_ptr->decal_type;
  if (iVar1 == 0) {
    local_14 = 0.17;
  }
  else if (iVar1 == 1) {
    local_14 = 1.0;
  }
  else if (iVar1 == 2) {
    local_14 = 0.5;
  }
  local_60 = -local_14;
  local_58 = 0;
  local_6c.x = (int)ROUND(local_60 * 256.0f);
  local_6c.y = (int)ROUND(local_60 * 256.0f);
  local_6c.z = (int)ROUND(256.0f * 0.0);
  g_SRenderVertex_ARRAY_0060b014[0].u = g_SRenderVertex_ARRAY_0060b014[3].u;
  g_SRenderVertex_ARRAY_0060b014[0].v = g_SRenderVertex_ARRAY_0060b014[1].v;
  g_SRenderVertex_ARRAY_0060b014[1].u = g_SRenderVertex_ARRAY_0060b014[2].u;
  g_SRenderVertex_ARRAY_0060b014[2].v = g_SRenderVertex_ARRAY_0060b014[3].v;
  local_5c = local_60;
  local_18 = local_60;
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_6c);
  local_60 = local_14;
  local_5c = local_18;
  local_58 = 0;
  local_48.x = (int)ROUND(local_14 * 256.0f);
  local_48.y = (int)ROUND(local_18 * 256.0f);
  local_48.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_48);
  local_60 = local_14;
  local_5c = local_14;
  local_58 = 0;
  local_84.x = (int)ROUND(local_14 * 256.0f);
  local_84.y = (int)ROUND(local_14 * 256.0f);
  local_84.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_84);
  local_60 = local_18;
  local_5c = local_14;
  local_58 = 0;
  local_54.x = (int)ROUND(local_18 * 256.0f);
  local_54.y = (int)ROUND(local_14 * 256.0f);
  local_54.z = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_54);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    g_SRenderVertex_ARRAY_0060b014[0].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[0].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[1].r = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[1].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[1].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[2].r = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[2].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[2].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[3].r = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[3].g = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[3].b = 0xffff;
    g_SRenderVertex_ARRAY_0060b014[0].r = 0xffff;
  }
  else {
    core_actor_cpp_CDemonActor_transformVector_FUN_00408b00
              (this_ptr->actor_ptr,&this_ptr->actor_local_space,&local_78);
    local_30 = local_78.x;
    local_2c[(uint)bVar3 * -2] = *(float *)((int)&local_78 + (uint)bVar3 * -8 + 4);
    local_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&local_78 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    local_24.x = (int)ROUND((this_ptr->position).x * 256.0f);
    local_24.y = (int)ROUND((this_ptr->position).y * 256.0f);
    local_24.z = (int)ROUND((this_ptr->position).z * 256.0f);
    local_3c.x = (int)ROUND(local_30 * 65536.0f);
    local_3c.y = (int)ROUND(local_2c[0] * 65536.0f);
    local_3c.z = (int)ROUND(local_2c[1] * 65536.0f);
    core_set_cpp_CDemonSet_computeLighting_FUN_00538400(g_CDemonSetPtr,&local_24,&local_3c,0,4);
  }
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
            (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLHeaderPrimitive_01c73670);
  if (this_ptr->actor_ptr == (CDemonActor *)0x0) {
    engine_drender_cpp_pop_FUN_0046d080();
    return;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(this_ptr->actor_ptr);
  engine_drender_cpp_pop_FUN_0046d080();
  return;
}
