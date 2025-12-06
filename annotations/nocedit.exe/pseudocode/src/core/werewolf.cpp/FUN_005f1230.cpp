// Name: core_werewolf.cpp_FUN_005f1230
// Address: 005f1230
// Address Range: [[005f1230, 005f181d]]
// Convention: unknown
// Signature: undefined core_werewolf.cpp_FUN_005f1230()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_werewolf.cpp_FUN_005f1230(uint param_1, uint
   param_2) */

void core_werewolf_cpp_FUN_005f1230(void)

{
  float *pfVar1;
  CDemonRenderer *this_ptr;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3i local_b8;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_9c;
  float local_98;
  uint local_94;
  float local_8c;
  float local_88;
  float local_84;
  byte local_7c [8];
  float local_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  CVector3i local_4c;
  float local_38;
  float local_34;
  float local_30;
  CVector3i local_2c;
  float local_1c;
  float local_18;
  float local_14;
  
  local_2c.y = (int)DAT_0066576c;
  local_2c.z = (int)DAT_00665770;
  local_ac = DAT_0066576c;
  local_a4 = 0;
  local_a8 = DAT_00665770;
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_d0 = (*in_stack_00000008 + DAT_0066576c) * *pfVar1;
  local_cc = (in_stack_00000008[1] + DAT_00665770) * *pfVar1;
  local_c8 = in_stack_00000008[2] * *pfVar1;
  if (&local_58 != &local_d0) {
    local_58 = local_d0;
    local_54 = local_cc;
    local_50 = local_c8;
  }
  local_4c.x = (int)ROUND(local_58 * _DAT_00665740);
  local_4c.y = (int)ROUND(local_54 * _DAT_00665740);
  local_4c.z = (int)ROUND(local_50 * _DAT_00665740);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_4c);
  local_9c = -DAT_0066576c;
  local_1c = DAT_00665770;
  local_94 = 0;
  local_98 = DAT_00665770;
  local_60 = *in_stack_00000008 + local_9c;
  local_5c = in_stack_00000008[1] + DAT_00665770;
  local_58 = in_stack_00000008[2];
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_6c = local_60 * *pfVar1;
  local_68 = local_5c * *pfVar1;
  local_64 = local_58 * *pfVar1;
  if (&local_54 != &local_6c) {
    local_54 = local_6c;
    local_50 = local_68;
    local_4c.x = (int)local_64;
  }
  local_7c._4_4_ = (uint)ROUND(local_54 * _DAT_00665740);
  local_74 = (float)(int)ROUND(local_50 * _DAT_00665740);
  local_70 = (int)ROUND((float)local_4c.x * _DAT_00665740);
  local_18 = local_9c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(local_7c + 4)
            );
  local_ac = -DAT_00665770;
  local_b8.z = (int)-DAT_0066576c;
  local_a8 = 0.0;
  local_38 = *in_stack_00000008 + (float)local_b8.z;
  local_34 = in_stack_00000008[1] + local_ac;
  local_30 = in_stack_00000008[2];
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_8c = local_38 * *pfVar1;
  local_88 = local_34 * *pfVar1;
  local_84 = local_30 * *pfVar1;
  if (&local_50 != &local_8c) {
    local_50 = local_8c;
    local_4c.x = (int)local_88;
    local_4c.y = (int)local_84;
  }
  local_2c.x = (int)ROUND(local_50 * _DAT_00665740);
  local_2c.y = (int)ROUND((float)local_4c.x * _DAT_00665740);
  local_2c.z = (int)ROUND((float)local_4c.y * _DAT_00665740);
  local_14 = (float)local_b8.z;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_2c);
  local_cc = -DAT_00665770;
  local_d0 = DAT_0066576c;
  local_c8 = 0.0;
  pfVar1 = (float *)(in_stack_00000004 + 0x261c);
  local_7c._0_4_ = (*in_stack_00000008 + DAT_0066576c) * *pfVar1;
  local_7c._4_4_ = (in_stack_00000008[1] + local_cc) * *pfVar1;
  local_74 = in_stack_00000008[2] * *pfVar1;
  if (&local_4c != (CVector3i *)local_7c) {
    local_4c.x = local_7c._0_4_;
    local_4c.y = local_7c._4_4_;
    local_4c.z = (int)local_74;
  }
  local_b8.x = (int)ROUND((float)local_4c.x * _DAT_00665740);
  local_b8.y = (int)ROUND((float)local_4c.y * _DAT_00665740);
  local_b8.z = (int)ROUND((float)local_4c.z * _DAT_00665740);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_b8);
  this_ptr = g_CDemonRendererPtr;
  g_CDemonRendererPtr->vertex_buffer_ptr->light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr->color = 0;
  this_ptr->vertex_buffer_ptr->fog = 0.0;
  this_ptr->vertex_buffer_ptr[1].light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr[1].color = 0;
  this_ptr->vertex_buffer_ptr[1].fog = 0.0;
  this_ptr->vertex_buffer_ptr[2].light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr[2].color = 0;
  this_ptr->vertex_buffer_ptr[2].fog = 0.0;
  this_ptr->vertex_buffer_ptr[3].light = 9.18341e-41;
  this_ptr->vertex_buffer_ptr[3].color = 0;
  this_ptr->vertex_buffer_ptr[3].fog = 0.0;
  this_ptr->vertex_buffer_ptr->w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr[1].w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr[2].w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr[3].w_recip = 2.29589e-41;
  this_ptr->vertex_buffer_ptr->u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].u = 2.2775203e-38;
  this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].u = 7.34684e-40;
  this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr,&DAT_0068495c);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xfffffefc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
