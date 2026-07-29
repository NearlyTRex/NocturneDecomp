// Name: core_charactr.cpp_CCharacter_renderCollision_FUN_00429b40
// Address: 00429b40
// Address Range: [[00429b40, 0042a2b4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00429b40(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00429b40(CCharacter *this_ptr)

{
  char cVar1;
  float fVar3;
  int iVar5;
  CDemonRenderer *pCVar6;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar10;
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
  float local_44;
  CVector3f *local_40;
  CVector3f *local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  int local_1c;
  int local_18;
  CDemonRenderer *pCVar5;
  int iVar4;
  char cVar3;
  float fVar2;
  float fVar1;
  
  local_e8.base.surface_normal.A.i =
       engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (local_e8.base.surface_normal.A.i != 0) {
    return;
  }
  pcVar8 = "headlite.raw";
  pcVar10 = g_CollisionTexture.texture_name;
  do {
    cVar3 = *pcVar8;
    *pcVar10 = cVar3;
    if (cVar3 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  local_e8.base.surface_normal.B.i = local_e8.base.surface_normal.A.i;
  local_e8.base.surface_normal.C.i = local_e8.base.surface_normal.A.i;
  local_e8.base.surface_normal.D.i = local_e8.base.surface_normal.A.i;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_CollisionTexture);
  iVar10 = 0;
  do {
    pCVar5 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->u + iVar10) = 0x800000;
    iVar6 = iVar10 + 0x30;
    *(uint *)((int)&pCVar5->vertex_buffer_ptr->v + iVar10) = 0x800000;
    iVar10 = iVar6;
  } while (iVar6 != 0x12c0);
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
    iVar9 = 0;
    pCVar8 = local_20;
    do {
      pCVar6 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar9) = 0;
      *(uint *)((int)&pCVar6->vertex_buffer_ptr->g + iVar9) = 0xffff;
      *(uint *)((int)&pCVar6->vertex_buffer_ptr->b + iVar9) = 0;
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&local_90,pCVar8);
      if (&local_84 != pCVar7) {
        local_84.x = pCVar7->x;
        local_84.y = pCVar7->y;
        local_84.z = pCVar7->z;
      }
      local_78.x = (int)ROUND(local_84.x * 256.0f);
      local_78.y = (int)ROUND(local_84.y * 256.0f);
      local_78.z = (int)ROUND(local_84.z * 256.0f);
      pCVar8 = pCVar8 + 1;
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar9),&local_78);
      iVar9 = iVar9 + 0x30;
    } while (iVar9 != 0x90);
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
    iVar10 = 0;
    pCVar11 = local_24;
    do {
      pCVar6 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar10) = 0;
      *(uint *)((int)&pCVar6->vertex_buffer_ptr->g + iVar10) = 0;
      *(uint *)((int)&pCVar6->vertex_buffer_ptr->b + iVar10) = 0xffff;
      pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&local_9c,pCVar11);
      if (&local_84 != pCVar8) {
        local_84.x = pCVar8->x;
        local_84.y = pCVar8->y;
        local_84.z = pCVar8->z;
      }
      local_6c.x = (int)ROUND(local_84.x * 256.0f);
      local_6c.y = (int)ROUND(local_84.y * 256.0f);
      local_6c.z = (int)ROUND(local_84.z * 256.0f);
      pCVar11 = pCVar11 + 1;
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar10),&local_6c);
      iVar10 = iVar10 + 0x30;
    } while (iVar10 != 0x90);
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
  iVar10 = 0x30;
  iVar11 = 0;
  local_1c = 0;
  do {
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
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar11),local_60);
    pCVar6 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar11) = 0xffff;
    *(uint *)((int)&pCVar6->vertex_buffer_ptr->g + iVar11) = 0;
    *(uint *)((int)&pCVar6->vertex_buffer_ptr->b + iVar11) = 0;
    local_84.y = local_38;
    local_b4.x = (int)ROUND(local_84.x * 256.0f);
    local_b4.y = (int)ROUND(local_38 * 256.0f);
    local_b4.z = (int)ROUND(local_84.z * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_005b575c
              ((SProjectedVertex *)
               ((int)&(pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x + iVar10),
               &local_b4);
    pCVar6 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar10) = 0xffff;
    *(uint *)((int)&pCVar6->vertex_buffer_ptr->g + iVar10) = 0;
    *(uint *)((int)&pCVar6->vertex_buffer_ptr->b + iVar10) = 0;
    if (0 < local_1c) {
      local_e8.vertices[0] = iVar5 + -2;
      local_e8.vertices[1] = iVar5 + -1;
      local_e8.base.base.count = 4;
      local_e8.vertices[2] = iVar5 + 1;
      local_e8.vertices[3] = iVar5;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar6,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
                (g_CDemonRendererPtr2,&local_e8.base,0x267);
    }
    iVar11 = iVar11 + 0x60;
    local_1c = local_1c + 1;
    iVar10 = iVar10 + 0x60;
  } while (local_1c < 0x19);
  local_c0.x = (int)ROUND(g_ZeroVector.f.x * 256.0f);
  local_c0.y = (int)ROUND(g_ZeroVector.f.y * 256.0f);
  local_c0.z = (int)ROUND(g_ZeroVector.f.z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_c0);
  pCVar6 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->r = 0xffff;
  iVar11 = 0;
  pCVar6->vertex_buffer_ptr->g = 0;
  iVar10 = 0x30;
  local_f0 = 0;
  pCVar6->vertex_buffer_ptr->b = 0;
  do {
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
              ((SProjectedVertex *)
               ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
               iVar10),&local_a8);
    pCVar6 = g_CDemonRendererPtr2;
    *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->r + iVar10) = 0xffff;
    *(uint *)((int)&pCVar6->vertex_buffer_ptr->g + iVar10) = 0;
    *(uint *)((int)&pCVar6->vertex_buffer_ptr->b + iVar10) = 0;
    if (0 < iVar11) {
      local_e8.base.base.count = 3;
      local_e8.vertices[0] = 0;
      local_e8.vertices[1] = iVar11 + -1;
      local_e8.vertices[2] = iVar11;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(pCVar6,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
                (g_CDemonRendererPtr2,&local_e8.base,0x267);
    }
    iVar11 = iVar11 + 1;
    local_f0 = local_f0 + 2;
    iVar10 = iVar10 + 0x30;
  } while (iVar11 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  return;
}
