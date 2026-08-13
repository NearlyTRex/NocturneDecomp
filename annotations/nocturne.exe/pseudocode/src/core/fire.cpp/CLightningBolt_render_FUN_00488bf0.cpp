// Name: core_fire.cpp_CLightningBolt_render_FUN_00488bf0
// Address: 00488bf0
// Address Range: [[00488bf0, 004892a8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_render_FUN_00488bf0(CLightningBolt *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLightningBolt_render_FUN_00488bf0(CLightningBolt *this_ptr)

{
  CVector3f *world_position;
  CVector3f *pCVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonRenderer *pCVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  SMRGLHeaderPrimitive local_dc;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  float local_b4;
  CVector3i local_b0;
  CVector3i local_9c;
  byte local_90 [8];
  int local_88;
  int local_84;
  CVector3i local_80;
  CVector3i local_6c;
  byte local_60 [8];
  int local_58;
  int local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  CVector3f local_24;
  CVector3i local_18;
  
  if (this_ptr->lifetime <= 0.0) {
    return;
  }
  iVar7 = rand();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)(&DAT_005b8b14 + (iVar7 % 6) * 0x18)
            );
  local_dc.base.count = 4;
  local_dc.surface_normal.D.i = 0;
  local_dc.surface_normal.C.i = 0;
  local_dc.surface_normal.B.i = 0;
  local_dc.surface_normal.A.i = 0;
  local_c4 = 0;
  local_b8 = 3;
  local_c0 = 1;
  local_bc = 2;
  uVar8 = rand();
  if ((uVar8 & 1) == 0) {
    _DAT_005c505c = 0x80000;
    _DAT_005c508c = 0x80000;
    _DAT_005c50bc = 0xf80000;
    DAT_005c502c = 0xf80000;
  }
  else {
    _DAT_005c505c = 0xf80000;
    _DAT_005c508c = 0xf80000;
    _DAT_005c50bc = 0x80000;
    DAT_005c502c = 0x80000;
  }
  _DAT_005c50c0 = 0xf80000;
  _DAT_005c5090 = 0xf80000;
  _DAT_005c5060 = 0x80000;
  _DAT_005c5030 = 0x80000;
  DAT_005c5034 = 0xffff;
  DAT_005c5038 = 0xffff;
  DAT_005c503c = 0xffff;
  DAT_005c5064 = 0xffff;
  DAT_005c5068 = 0xffff;
  DAT_005c506c = 0xffff;
  DAT_005c5094 = 0xffff;
  DAT_005c5098 = 0xffff;
  DAT_005c509c = 0xffff;
  DAT_005c50c4 = 0xffff;
  DAT_005c50c8 = 0xffff;
  DAT_005c50cc = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
  fVar4 = (float)this_ptr->mode;
  world_position = &this_ptr->start_position;
  if (fVar4 == 0.0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (g_CDemonRenderer_PTR_005ae704,world_position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
              (g_CDemonRenderer_PTR_005ae704,&local_24);
    local_24.x = fVar4;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
              (g_CDemonRenderer_PTR_005ae704,&local_24,(CVector3f *)0x0);
    if (0.0 < this_ptr->end_width) {
      local_b4 = this_ptr->end_width;
    }
    else {
      local_b4 = this_ptr->start_width * (float)0.25;
    }
    local_b0.x = (int)this_ptr->start_width;
    local_60._0_4_ = (uint)ROUND(local_b4 * 256.0f);
    local_60._4_4_ = (uint)ROUND((float)local_b0.x * 256.0f);
    local_58 = (int)ROUND(256.0f * 0.0);
    local_b0.y = (int)fVar4;
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)local_60);
    local_b4 = -local_b4;
    local_48.x = (int)ROUND(local_b4 * 256.0f);
    local_48.y = (int)ROUND((float)local_b0.x * 256.0f);
    local_48.z = (int)ROUND((float)local_b0.y * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_48);
    local_b0.x = 0;
    local_30.x = (int)ROUND(local_b4 * 256.0f);
    local_30.y = (int)ROUND(256.0f * 0.0);
    local_30.z = (int)ROUND((float)local_b0.y * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_30);
    local_b4 = -local_b4;
    local_18.x = (int)ROUND(local_b4 * 256.0f);
    local_18.y = (int)ROUND((float)local_b0.x * 256.0f);
    local_18.z = (int)ROUND((float)local_b0.y * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_18);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
              (g_CDemonRenderer_PTR_005ae704,&local_dc);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  }
  else {
    local_9c.x = (int)ROUND(world_position->x * 256.0f);
    local_9c.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_9c.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_9c);
    local_6c.x = (int)ROUND(world_position->x * 256.0f);
    local_6c.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_6c.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_6c);
    pCVar1 = &this_ptr->end_position;
    local_3c.x = (int)ROUND(pCVar1->x * 256.0f);
    local_3c.y = (int)ROUND((this_ptr->end_position).y * 256.0f);
    local_3c.z = (int)ROUND((this_ptr->end_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_3c);
    local_90._0_4_ = (uint)ROUND(pCVar1->x * 256.0f);
    local_90._4_4_ = (uint)ROUND((this_ptr->end_position).y * 256.0f);
    local_88 = (int)ROUND((this_ptr->end_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)local_90);
    pCVar6 = g_CDemonRenderer_PTR_005ae704;
    fVar4 = this_ptr->end_width;
    fVar5 = (float)256;
    fVar3 = this_ptr->end_spread;
    (g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    dVar9 = round((double)(fVar4 * fVar5));
    local_18.z = (int)ROUND(dVar9);
    piVar2 = &(pCVar6->vertex_buffer_ptr->projected_vertex).transformed_y;
    *piVar2 = *piVar2 - local_18.z;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    piVar2 = &pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_18.z;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    dVar9 = round((double)(fVar3 * fVar5));
    local_18.z = (int)ROUND(dVar9);
    piVar2 = &pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar2 = *piVar2 + local_18.z;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_y - local_18.z;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
              (pCVar6,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
    local_60._4_4_ = (uint)ROUND(world_position->x * 256.0f);
    local_58 = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_54 = (int)ROUND((this_ptr->start_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(local_60 + 4));
    local_80.x = (int)ROUND(world_position->x * 256.0f);
    local_80.y = (int)ROUND((this_ptr->start_position).y * 256.0f);
    local_80.z = (int)ROUND((this_ptr->start_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&local_80);
    local_b0.x = (int)ROUND(pCVar1->x * 256.0f);
    local_b0.y = (int)ROUND((this_ptr->end_position).y * 256.0f);
    local_b0.z = (int)ROUND((this_ptr->end_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_b0);
    local_90._4_4_ = (uint)ROUND(pCVar1->x * 256.0f);
    local_88 = (int)ROUND((this_ptr->end_position).y * 256.0f);
    local_84 = (int)ROUND((this_ptr->end_position).z * 256.0f);
    engine_special_cpp_transformPoint_FUN_00530a25
              (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)(local_90 + 4));
    pCVar6 = g_CDemonRenderer_PTR_005ae704;
    (g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x =
         (pCVar6->vertex_buffer_ptr->projected_vertex).transformed_x - local_18.y;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[1].projected_vertex.transformed_x + local_18.y;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[2].projected_vertex.transformed_x + local_18.z;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         pCVar6->vertex_buffer_ptr[3].projected_vertex.transformed_x - local_18.z;
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
              (pCVar6,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  return;
}
