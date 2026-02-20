// Name: core_werewolf.cpp_CWerewolf_FUN_005f1230
// Address: 005f1230
// Address Range: [[005f1230, 005f181d]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1230(CWerewolf *this_ptr)

#include "nocturne.h"

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1230(CWerewolf *this_ptr)

{
  float *pfVar1;
  CDemonRenderer *this_ptr_00;
  float *in_stack_00000008;
  SMRGLHeaderPrimitive SStack_11c;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  uint local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3i local_c4;
  float local_b8;
  float local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  CVector3i local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3i local_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3i local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = 0.2f;
  local_24 = 0.2f;
  local_ac = 0.2f;
  local_a4 = 0;
  local_a8 = 0.2f;
  local_e8 = *in_stack_00000008 + 0.2f;
  local_e4 = in_stack_00000008[1] + 0.2f;
  local_e0 = in_stack_00000008[2];
  pfVar1 = &(this_ptr->base).base.size_scale;
  local_d0 = local_e8 * *pfVar1;
  local_cc = local_e4 * *pfVar1;
  local_c8 = local_e0 * *pfVar1;
  if (&local_58 != &local_d0) {
    local_58 = local_d0;
    local_54 = local_cc;
    local_50 = local_c8;
  }
  local_4c.x = (int)ROUND(local_58 * 256.0f);
  local_4c.y = (int)ROUND(local_54 * 256.0f);
  local_4c.z = (int)ROUND(local_50 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_4c);
  local_a0 = -0.2f;
  local_20 = 0.2f;
  local_98 = 0;
  local_9c = 0.2f;
  local_64 = *in_stack_00000008 + local_a0;
  local_60 = in_stack_00000008[1] + 0.2f;
  local_5c = in_stack_00000008[2];
  pfVar1 = &(this_ptr->base).base.size_scale;
  local_70 = local_64 * *pfVar1;
  local_6c = local_60 * *pfVar1;
  local_68 = local_5c * *pfVar1;
  if (&local_58 != &local_70) {
    local_58 = local_70;
    local_54 = local_6c;
    local_50 = local_68;
  }
  local_7c.x = (int)ROUND(local_58 * 256.0f);
  local_7c.y = (int)ROUND(local_54 * 256.0f);
  local_7c.z = (int)ROUND(local_50 * 256.0f);
  local_1c = local_a0;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_b4 = -0.2f;
  local_b8 = -0.2f;
  local_b0 = 0;
  local_40 = *in_stack_00000008 + local_b8;
  local_3c = in_stack_00000008[1] + local_b4;
  local_38 = in_stack_00000008[2];
  pfVar1 = &(this_ptr->base).base.size_scale;
  local_94 = local_40 * *pfVar1;
  local_90 = local_3c * *pfVar1;
  local_8c = local_38 * *pfVar1;
  if (&local_58 != &local_94) {
    local_58 = local_94;
    local_54 = local_90;
    local_50 = local_8c;
  }
  local_34.x = (int)ROUND(local_58 * 256.0f);
  local_34.y = (int)ROUND(local_54 * 256.0f);
  local_34.z = (int)ROUND(local_50 * 256.0f);
  local_1c = local_b8;
  local_18 = local_b4;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_34);
  local_d8 = -0.2f;
  local_14 = 0.2f;
  local_dc = 0.2f;
  local_d4 = 0;
  local_f4 = *in_stack_00000008 + 0.2f;
  local_f0 = in_stack_00000008[1] + local_d8;
  local_ec = in_stack_00000008[2];
  pfVar1 = &(this_ptr->base).base.size_scale;
  local_88 = local_f4 * *pfVar1;
  local_84 = local_f0 * *pfVar1;
  local_80 = local_ec * *pfVar1;
  if (&local_58 != &local_88) {
    local_58 = local_88;
    local_54 = local_84;
    local_50 = local_80;
  }
  local_c4.x = (int)ROUND(local_58 * 256.0f);
  local_c4.y = (int)ROUND(local_54 * 256.0f);
  local_c4.z = (int)ROUND(local_50 * 256.0f);
  local_18 = local_d8;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_c4);
  this_ptr_00 = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->z = 0xffff;
  this_ptr_00->vertex_buffer_ptr->r = 0;
  this_ptr_00->vertex_buffer_ptr->g = 0;
  this_ptr_00->vertex_buffer_ptr[1].z = 0xffff;
  this_ptr_00->vertex_buffer_ptr[1].r = 0;
  this_ptr_00->vertex_buffer_ptr[1].g = 0;
  this_ptr_00->vertex_buffer_ptr[2].z = 0xffff;
  this_ptr_00->vertex_buffer_ptr[2].r = 0;
  this_ptr_00->vertex_buffer_ptr[2].g = 0;
  this_ptr_00->vertex_buffer_ptr[3].z = 0xffff;
  this_ptr_00->vertex_buffer_ptr[3].r = 0;
  this_ptr_00->vertex_buffer_ptr[3].g = 0;
  this_ptr_00->vertex_buffer_ptr->fog = 0x4000;
  this_ptr_00->vertex_buffer_ptr[1].fog = 0x4000;
  this_ptr_00->vertex_buffer_ptr[2].fog = 0x4000;
  this_ptr_00->vertex_buffer_ptr[3].fog = 0x4000;
  this_ptr_00->vertex_buffer_ptr->u = 0x80000;
  this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xf80000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
  this_ptr_00->vertex_buffer_ptr[3].u = 0x80000;
  this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
  SStack_11c.base.count = 4;
  SStack_11c.surface_normal.D = 0;
  SStack_11c.surface_normal.C = 0;
  SStack_11c.surface_normal.B = 0;
  SStack_11c.surface_normal.A = 0;
  local_104 = 0;
  local_f8 = 3;
  local_100 = 1;
  local_fc = 2;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (this_ptr_00,&SMRGLTextureBasic_0068495c);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr2,&SStack_11c);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
