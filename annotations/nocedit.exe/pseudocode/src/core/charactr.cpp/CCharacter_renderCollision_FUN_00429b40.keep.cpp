// Name: core_charactr.cpp_CCharacter_renderCollision_FUN_00429b40
// Address: 00429b40
// MANUAL RECONSTRUCTION
// Address Range: [[00429b40, 0042a2b4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00429b40(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00429b40(CCharacter *this_ptr)

{
  float fVar3;
  int iVar5;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  int iVar10;
  CVector3f *pCVar11;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar15;
  float10 fVar14;
  float10 fVar16;
  int local_f0;
  SMRGLPrimitiveQuadIndex local_e8;
  CVector3i local_c0;
  CVector3i local_b4;
  CVector3i local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  CVector3f local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60 [2];
  float local_38;
  int local_30;
  int local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  int local_1c;
  float fVar2;
  float fVar1;
  
  local_e8.base.surface_normal.A.i =
       engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (local_e8.base.surface_normal.A.i != 0) {
    return;
  }
  strcpy(g_CollisionTexture.texture_name, "headlite.raw");
  local_e8.base.surface_normal.B.i = local_e8.base.surface_normal.A.i;
  local_e8.base.surface_normal.C.i = local_e8.base.surface_normal.A.i;
  local_e8.base.surface_normal.D.i = local_e8.base.surface_normal.A.i;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_CollisionTexture);
  for (iVar10 = 0; iVar10 < 100; iVar10 = iVar10 + 1) {
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar10].u = 0x80 << 16;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar10].v = 0x80 << 16;
  }
  local_e8.base.base.count = 3;
  local_e8.vertices[0] = 0;
  local_e8.vertices[1] = 1;
  local_e8.vertices[2] = 2;
  local_e8.vertices[3] = 3;
  local_20 = this_ptr->collision_test_points;
  local_30 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,local_30 / 5)
    ;
    pCVar8 = local_20;
    for (iVar9 = 0; iVar9 < 3; iVar9 = iVar9 + 1) {
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar9].r = 0;
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar9].g = 0xffff;
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar9].b = 0;
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&local_90,pCVar8);
      if (&local_84 != pCVar7) {
        local_84 = *pCVar7;
      }
      local_78.x = (int)ROUND(local_84.x * 256.0f);
      local_78.y = (int)ROUND(local_84.y * 256.0f);
      local_78.z = (int)ROUND(local_84.z * 256.0f);
      pCVar8 = pCVar8 + 1;
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar9].projected_vertex,&local_78);
    }
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
              (g_CDemonRendererPtr2,&local_e8.base,0x267);
    local_20 = local_20 + 3;
    local_30 = local_30 + -0x8000;
  } while (local_20 != this_ptr->collision_test_normals);
  local_24 = this_ptr->collision_test_normals;
  local_28 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,local_28 / 5)
    ;
    pCVar11 = local_24;
    for (iVar10 = 0; iVar10 < 3; iVar10 = iVar10 + 1) {
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar10].r = 0;
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar10].g = 0;
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar10].b = 0xffff;
      pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&local_9c,pCVar11);
      if (&local_84 != pCVar8) {
        local_84 = *pCVar8;
      }
      local_6c.x = (int)ROUND(local_84.x * 256.0f);
      local_6c.y = (int)ROUND(local_84.y * 256.0f);
      local_6c.z = (int)ROUND(local_84.z * 256.0f);
      pCVar11 = pCVar11 + 1;
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar10].projected_vertex,&local_6c);
    }
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
              (g_CDemonRendererPtr2,&local_e8.base,0x267);
    local_24 = local_24 + 3;
    local_28 = local_28 + -0x8000;
  } while (local_24 != (CVector3f *)&this_ptr->hero_proximity_timer);
  local_38 = this_ptr->collision_cylinder_top * this_ptr->size_scale;
  if (local_38 < this_ptr->collision_cylinder_bottom * this_ptr->size_scale) {
    local_38 = (this_ptr->model).bounding_box.max.y;
  }
  fVar3 = this_ptr->collision_cylinder_bottom * this_ptr->size_scale;
  if (local_38 < fVar3) {
    local_38 = this_ptr->size_scale * (float)0.5 + fVar3;
  }
  fVar3 = this_ptr->collision_cylinder_bottom * this_ptr->size_scale;
  fVar1 = this_ptr->collision_cylinder_radius;
  fVar2 = this_ptr->size_scale;
  for (local_1c = 0; local_1c < 0x19; local_1c = local_1c + 1) {
    iVar5 = local_1c * 2;
    fVar12 = (float10)iVar5 * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar13 = (float10)fsin(fVar12);
    fVar15 = (float10)fcos(fVar12);
    fVar14 = (float10)(fVar1 * fVar2);
    local_84.x = (float)(fVar13 * fVar14);
    local_84.z = (float)(fVar15 * fVar14);
    local_60[0].x = (int)ROUND(local_84.x * 256.0f);
    local_60[0].y = (int)ROUND(fVar3 * 256.0f);
    local_60[0].z = (int)ROUND(local_84.z * 256.0f);
    local_84.y = fVar3;
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5].projected_vertex,local_60);
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5].r = 0xffff;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5].g = 0;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5].b = 0;
    local_84.y = local_38;
    local_b4.x = (int)ROUND(local_84.x * 256.0f);
    local_b4.y = (int)ROUND(local_38 * 256.0f);
    local_b4.z = (int)ROUND(local_84.z * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5 + 1].projected_vertex,&local_b4);
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5 + 1].r = 0xffff;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5 + 1].g = 0;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar5 + 1].b = 0;
    if (0 < local_1c) {
      local_e8.vertices[0] = iVar5 + -2;
      local_e8.vertices[1] = iVar5 + -1;
      local_e8.base.base.count = 4;
      local_e8.vertices[2] = iVar5 + 1;
      local_e8.vertices[3] = iVar5;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
                (g_CDemonRendererPtr2,&local_e8.base,0x267);
    }
  }
  local_c0.x = (int)ROUND(g_ZeroVector.f.x * 256.0f);
  local_c0.y = (int)ROUND(g_ZeroVector.f.y * 256.0f);
  local_c0.z = (int)ROUND(g_ZeroVector.f.z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_c0);
  g_CDemonRendererPtr2->vertex_buffer_ptr[0].r = 0xffff;
  g_CDemonRendererPtr2->vertex_buffer_ptr[0].g = 0;
  g_CDemonRendererPtr2->vertex_buffer_ptr[0].b = 0;
  local_f0 = 0;
  for (iVar11 = 0; iVar11 < 0x19; iVar11 = iVar11 + 1) {
    fVar15 = (float10)local_f0 * (float10)3.1415926535000001 * (float10)0.041666666666666699;
    fVar16 = (float10)fsin(fVar15);
    fVar15 = (float10)fcos(fVar15);
    local_84.x = (float)((float10)this_ptr->size_scale *
                        (float10)this_ptr->collision_cylinder_height * fVar16);
    local_84.y = 0.0;
    local_84.z = (float)(fVar15 * (float10)this_ptr->collision_cylinder_height *
                        (float10)this_ptr->size_scale);
    local_a8.x = (int)ROUND(local_84.x * 256.0f);
    local_a8.y = (int)ROUND(256.0f * 0.0);
    local_a8.z = (int)ROUND(local_84.z * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr[iVar11 + 1].projected_vertex,&local_a8);
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar11 + 1].r = 0xffff;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar11 + 1].g = 0;
    g_CDemonRendererPtr2->vertex_buffer_ptr[iVar11 + 1].b = 0;
    if (0 < iVar11) {
      local_e8.base.base.count = 3;
      local_e8.vertices[0] = 0;
      local_e8.vertices[1] = iVar11 + -1;
      local_e8.vertices[2] = iVar11;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
                (g_CDemonRendererPtr2,&local_e8.base,0x267);
    }
    local_f0 = local_f0 + 2;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}
