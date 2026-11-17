// Name: core_fire.cpp_CLightningBolt_render_FUN_0049f520
// Address: 0049f520
// Address Range: [[0049f520, 0049fcdc]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_render_FUN_0049f520(CLightningBolt *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_render_FUN_0049f520(CLightningBolt *this_ptr)

{
  CVector3f *world_position;
  CVector3f *pCVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonRenderer *pCVar6;
  int iVar7;
  SMRGLTextureBasic *texture;
  uint uVar8;
  byte bVar9;
  double dVar10;
  float afStackY_103c [974];
  SMRGLHeaderPrimitive local_e8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  byte local_c0 [8];
  int local_b8;
  int local_b4;
  byte local_a8 [8];
  int local_a0;
  int local_9c;
  CVector3i local_90;
  float local_84;
  float local_80;
  float local_7c;
  byte local_78 [8];
  int local_70;
  int local_6c;
  CVector3i local_60;
  CVector3f local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  byte local_24 [8];
  float fStack_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar9 = 0;
  if (0.0 < this_ptr->lifetime) {
    iVar7 = this_ptr->mode;
    if (iVar7 == 2) {
      iVar7 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fd984 + (iVar7 % 6) * 0x18);
    }
    else if (iVar7 == 3) {
      iVar7 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fda14 + (iVar7 % 6) * 0x18);
    }
    else if (iVar7 == 4) {
      iVar7 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fdaa4 + (iVar7 % 6) * 0x18);
    }
    else if (iVar7 == 5) {
      iVar7 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fdb34 + (iVar7 % 6) * 0x18);
    }
    else {
      iVar7 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fd8f4 + (iVar7 % 6) * 0x18);
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,texture);
    local_e8.base.count = 4;
    local_e8.surface_normal.D.i = 0;
    local_e8.surface_normal.C.i = 0;
    local_e8.surface_normal.B.i = 0;
    local_e8.surface_normal.A.i = 0;
    local_d0 = 0;
    local_c4 = 3;
    local_cc = 1;
    local_c8 = 2;
    uVar8 = rand();
    if ((uVar8 & 1) == 0) {
      g_SRenderVertex_ARRAY_0060b014[1].u = 0x80000;
      g_SRenderVertex_ARRAY_0060b014[2].u = 0x80000;
      g_SRenderVertex_ARRAY_0060b014[3].u = 0xf80000;
      g_SRenderVertex_ARRAY_0060b014[0].u = 0xf80000;
    }
    else {
      g_SRenderVertex_ARRAY_0060b014[1].u = 0xf80000;
      g_SRenderVertex_ARRAY_0060b014[2].u = 0xf80000;
      g_SRenderVertex_ARRAY_0060b014[3].u = 0x80000;
      g_SRenderVertex_ARRAY_0060b014[0].u = 0x80000;
    }
    g_SRenderVertex_ARRAY_0060b014[3].v = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[2].v = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[1].v = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[0].v = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[0].r = 0xffff;
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
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (g_CDemonRenderer_PTR_005f2afc,this_ptr->render_alpha);
    world_position = &this_ptr->start_position;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,1);
    if (this_ptr->mode == 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (g_CDemonRenderer_PTR_005f2afc,world_position);
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250
                (g_CDemonRenderer_PTR_005f2afc,(CVector3f *)local_24);
      local_54.x = (float)local_24._0_4_;
      *(uint *)((int)&local_54 + (uint)bVar9 * -8 + 4) =
           *(uint *)(local_24 + (uint)bVar9 * -8 + 4);
      *(float *)((int)&local_54 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           (&fStack_1c)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
      local_54.x = 0.0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (g_CDemonRenderer_PTR_005f2afc,&local_54,(CVector3f *)0x0);
      local_7c = 0.0;
      if (0.0 < this_ptr->end_width) {
        local_84 = this_ptr->end_width;
      }
      else {
        local_84 = this_ptr->start_width * (float)0.25;
      }
      local_80 = this_ptr->start_width;
      local_30.x = (int)ROUND(local_84 * 256.0f);
      local_30.y = (int)ROUND(local_80 * 256.0f);
      local_30.z = (int)ROUND(256.0f * 0.0);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_30);
      local_84 = -local_84;
      local_c0._0_4_ = (uint)ROUND(local_84 * 256.0f);
      local_c0._4_4_ = (uint)ROUND(local_80 * 256.0f);
      local_b8 = (int)ROUND(local_7c * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,
                 (CVector3i *)local_c0);
      local_80 = 0.0;
      local_90.x = (int)ROUND(local_84 * 256.0f);
      local_90.y = (int)ROUND(256.0f * 0.0);
      local_90.z = (int)ROUND(local_7c * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_90);
      local_84 = -local_84;
      local_78._0_4_ = (uint)ROUND(local_84 * 256.0f);
      local_78._4_4_ = (uint)ROUND(local_80 * 256.0f);
      local_70 = (int)ROUND(local_7c * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,
                 (CVector3i *)local_78);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                (g_CDemonRenderer_PTR_005f2afc,&local_e8);
      engine_drender_cpp_pop_FUN_0046d080();
    }
    else {
      local_60.x = (int)ROUND(world_position->x * 256.0f);
      local_60.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
      local_60.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_60);
      local_48.x = (int)ROUND(world_position->x * 256.0f);
      local_48.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
      local_48.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
      pCVar1 = &this_ptr->end_position;
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_48);
      local_a8._0_4_ = (uint)ROUND(pCVar1->x * 256.0f);
      local_a8._4_4_ = (uint)ROUND((this_ptr->end_position).y * 256.0f);
      local_a0 = (int)ROUND((this_ptr->end_position).z * 256.0f);
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,
                 (CVector3i *)local_a8);
      local_3c.x = (int)ROUND(pCVar1->x * 256.0f);
      local_3c.y = (int)ROUND((this_ptr->end_position).y * 256.0f);
      local_3c.z = (int)ROUND((this_ptr->end_position).z * 256.0f);
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_3c);
      pCVar6 = g_CDemonRenderer_PTR_005f2afc;
      fVar3 = this_ptr->end_spread;
      fVar4 = this_ptr->end_width;
      fVar5 = (float)256;
      (g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
      dVar10 = round((double)(fVar4 * fVar5));
      local_10 = (int)ROUND(dVar10);
      piVar2 = &(pCVar6->vertex_buffer_ptr->projected_vertex).transformed_y;
      *piVar2 = *piVar2 - local_10;
      pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
      piVar2 = &pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_y;
      *piVar2 = *piVar2 + local_10;
      pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
      dVar10 = round((double)(fVar5 * fVar3));
      local_10 = (int)ROUND(dVar10);
      piVar2 = &pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_y;
      *piVar2 = *piVar2 + local_10;
      pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
      pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y =
           pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y - local_10;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                (pCVar6,(SMRGLHeaderPrimitive *)&stack0xffffff10);
      local_24._4_4_ = (uint)ROUND(world_position->x * 256.0f);
      fStack_1c = (float)(int)ROUND((this_ptr->start_position).y * 256.0f);
      local_18 = (int)ROUND((this_ptr->start_position).z * 256.0f);
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(local_24 + 4));
      local_c0._4_4_ = (uint)ROUND(world_position->x * 256.0f);
      local_b8 = (int)ROUND((this_ptr->start_position).y * 256.0f);
      local_b4 = (int)ROUND((this_ptr->start_position).z * 256.0f);
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,
                 (CVector3i *)(local_c0 + 4));
      local_a8._4_4_ = (uint)ROUND(pCVar1->x * 256.0f);
      local_a0 = (int)ROUND((this_ptr->end_position).y * 256.0f);
      local_9c = (int)ROUND((this_ptr->end_position).z * 256.0f);
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,
                 (CVector3i *)(local_a8 + 4));
      local_78._4_4_ = (uint)ROUND(pCVar1->x * 256.0f);
      local_70 = (int)ROUND((this_ptr->end_position).y * 256.0f);
      local_6c = (int)ROUND((this_ptr->end_position).z * 256.0f);
      engine_special_cpp_transformPoint_FUN_0056356c
                (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,
                 (CVector3i *)(local_78 + 4));
      pCVar6 = g_CDemonRenderer_PTR_005f2afc;
      (g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
      (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x =
           (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x - local_14;
      pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
      pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x =
           pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x + local_14;
      pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
      pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x =
           pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x + local_10;
      pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
      pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x =
           pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x - local_10;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                (pCVar6,(SMRGLHeaderPrimitive *)&stack0xffffff10);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(g_CDemonRenderer_PTR_005f2afc,0);
  }
  return;
}
