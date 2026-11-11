// Name: core_fire.cpp_FUN_0049f520
// Address: 0049f520
// Address Range: [[0049f520, 0049fcdc]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049f520(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049f520(int *param_1)

{
  CVector3f *world_position;
  float *pfVar1;
  int *piVar2;
  CDemonRenderer *pCVar3;
  int iVar4;
  SMRGLTextureBasic *texture;
  uint uVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int aiStackY_103c [975];
  SMRGLHeaderPrimitive local_e8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  CVector3i local_c0;
  CVector3i local_b4;
  CVector3i local_a8;
  CVector3i local_9c;
  CVector3i local_90;
  float local_84;
  float local_80;
  float local_7c;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3f local_54;
  CVector3i local_48;
  CVector3i local_3c;
  CVector3i local_30;
  float local_24;
  int aiStack_20 [2];
  CVector3i local_18;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  if (0.0 < (float)param_1[5]) {
    iVar4 = *param_1;
    if (iVar4 == 2) {
      iVar4 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fd984 + (iVar4 % 6) * 0x18);
    }
    else if (iVar4 == 3) {
      iVar4 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fda14 + (iVar4 % 6) * 0x18);
    }
    else if (iVar4 == 4) {
      iVar4 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fdaa4 + (iVar4 % 6) * 0x18);
    }
    else if (iVar4 == 5) {
      iVar4 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fdb34 + (iVar4 % 6) * 0x18);
    }
    else {
      iVar4 = rand();
      texture = (SMRGLTextureBasic *)(&DAT_005fd8f4 + (iVar4 % 6) * 0x18);
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    local_e8.base.count = 4;
    local_e8.surface_normal.D.i = 0;
    local_e8.surface_normal.C.i = 0;
    local_e8.surface_normal.B.i = 0;
    local_e8.surface_normal.A.i = 0;
    local_d0 = 0;
    local_c4 = 3;
    local_cc = 1;
    local_c8 = 2;
    uVar5 = rand();
    if ((uVar5 & 1) == 0) {
      _DAT_0060b05c = 0x80000;
      _DAT_0060b08c = 0x80000;
      _DAT_0060b0bc = 0xf80000;
      DAT_0060b02c = 0xf80000;
    }
    else {
      _DAT_0060b05c = 0xf80000;
      _DAT_0060b08c = 0xf80000;
      _DAT_0060b0bc = 0x80000;
      DAT_0060b02c = 0x80000;
    }
    _DAT_0060b0c0 = 0xf80000;
    DAT_0060b090 = 0xf80000;
    _DAT_0060b060 = 0x80000;
    _DAT_0060b030 = 0x80000;
    DAT_0060b034 = 0xffff;
    DAT_0060b038 = 0xffff;
    DAT_0060b03c = 0xffff;
    DAT_0060b064 = 0xffff;
    DAT_0060b068 = 0xffff;
    DAT_0060b06c = 0xffff;
    _DAT_0060b094 = 0xffff;
    _DAT_0060b098 = 0xffff;
    _DAT_0060b09c = 0xffff;
    _DAT_0060b0c4 = 0xffff;
    _DAT_0060b0c8 = 0xffff;
    _DAT_0060b0cc = 0xffff;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,param_1[0xb]);
    world_position = (CVector3f *)(param_1 + 1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    if (*param_1 == 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (DAT_005f2afc,world_position);
      engine_matrix_c_FUN_0046d250(DAT_005f2afc);
      local_54.x = local_24;
      *(int *)((int)&local_54 + (uint)bVar6 * -8 + 4) = aiStack_20[(uint)bVar6 * -2];
      *(int *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           aiStack_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      local_54.x = 0.0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&local_54,(CVector3f *)0x0);
      local_7c = 0.0;
      if (0.0 < (float)param_1[6]) {
        local_84 = (float)param_1[6];
      }
      else {
        local_84 = (float)param_1[4] * (float)_DAT_005c08f8;
      }
      local_80 = (float)param_1[4];
      local_30.x = (int)ROUND(local_84 * _DAT_005df8e4);
      local_30.y = (int)ROUND(local_80 * _DAT_005df8e4);
      local_30.z = (int)ROUND(_DAT_005df8e4 * 0.0);
      engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_30);
      local_84 = -local_84;
      local_c0.x = (int)ROUND(local_84 * _DAT_005df8e4);
      local_c0.y = (int)ROUND(local_80 * _DAT_005df8e4);
      local_c0.z = (int)ROUND(local_7c * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_c0);
      local_80 = 0.0;
      local_90.x = (int)ROUND(local_84 * _DAT_005df8e4);
      local_90.y = (int)ROUND(_DAT_005df8e4 * 0.0);
      local_90.z = (int)ROUND(local_7c * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_90);
      local_84 = -local_84;
      local_78.x = (int)ROUND(local_84 * _DAT_005df8e4);
      local_78.y = (int)ROUND(local_80 * _DAT_005df8e4);
      local_78.z = (int)ROUND(local_7c * _DAT_005df8e4);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_78);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,&local_e8);
      engine_matrix_c_pop_FUN_0046d080();
    }
    else {
      local_60.x = (int)ROUND(world_position->x * _DAT_005df8e4);
      local_60.y = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_60.z = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_60);
      local_48.x = (int)ROUND(world_position->x * _DAT_005df8e4);
      local_48.y = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_48.z = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      pfVar1 = (float *)(param_1 + 7);
      engine_special_cpp_FUN_0056356c
                (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_48);
      local_a8.x = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_a8.y = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_a8.z = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_a8);
      local_3c.x = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_3c.y = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_3c.z = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_3c);
      pCVar3 = DAT_005f2afc;
      fVar7 = (float10)(float)param_1[10];
      fVar8 = (float10)_DAT_005c08f0;
      fVar9 = (float10)(float)param_1[6] * fVar8;
      (DAT_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
      round();
      local_c = (int)ROUND(fVar9);
      piVar2 = &(pCVar3->vertex_buffer_ptr->projected_vertex).transformed_y;
      *piVar2 = *piVar2 - local_c;
      pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
      piVar2 = &pCVar3->vertex_buffer_ptr[1].projected_vertex.transformed_y;
      *piVar2 = *piVar2 + local_c;
      fVar8 = fVar8 * fVar7;
      pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
      round();
      local_8 = (int)ROUND(fVar8);
      piVar2 = &pCVar3->vertex_buffer_ptr[2].projected_vertex.transformed_y;
      *piVar2 = *piVar2 + local_8;
      pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
      pCVar3->vertex_buffer_ptr[3].projected_vertex.transformed_y =
           pCVar3->vertex_buffer_ptr[3].projected_vertex.transformed_y - local_8;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(pCVar3,&local_e8);
      local_18.x = (int)ROUND(world_position->x * _DAT_005df8e4);
      local_18.y = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_18.z = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_18);
      local_b4.x = (int)ROUND(world_position->x * _DAT_005df8e4);
      local_b4.y = (int)ROUND((float)param_1[2] * _DAT_005df8e4);
      local_b4.z = (int)ROUND((float)param_1[3] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_b4);
      local_9c.x = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_9c.y = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_9c.z = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_9c);
      local_6c.x = (int)ROUND(*pfVar1 * _DAT_005df8e4);
      local_6c.y = (int)ROUND((float)param_1[8] * _DAT_005df8e4);
      local_6c.z = (int)ROUND((float)param_1[9] * _DAT_005df8e4);
      engine_special_cpp_FUN_0056356c
                (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_6c);
      pCVar3 = DAT_005f2afc;
      (DAT_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
      (pCVar3->vertex_buffer_ptr->projected_vertex).transformed_x =
           (pCVar3->vertex_buffer_ptr->projected_vertex).transformed_x - local_c;
      pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
      pCVar3->vertex_buffer_ptr[1].projected_vertex.transformed_x =
           pCVar3->vertex_buffer_ptr[1].projected_vertex.transformed_x + local_c;
      pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
      pCVar3->vertex_buffer_ptr[2].projected_vertex.transformed_x =
           pCVar3->vertex_buffer_ptr[2].projected_vertex.transformed_x + local_8;
      pCVar3->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
      pCVar3->vertex_buffer_ptr[3].projected_vertex.transformed_x =
           pCVar3->vertex_buffer_ptr[3].projected_vertex.transformed_x - local_8;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(pCVar3,&local_e8);
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  }
  return;
}
