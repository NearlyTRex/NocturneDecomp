// Name: core_setedit.cpp_FUN_005817d0
// Address: 005817d0
// Address Range: [[005817d0, 00581a96]]
// Convention: __watcallRegister
// Signature: void core_setedit.cpp_FUN_005817d0(void * unk)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setedit_cpp_FUN_005817d0(void *unk)

{
  CDemonRenderer *pCVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  uint uVar4;
  double dVar5;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  float fVar6;
  byte local_54 [8];
  byte local_4c [8];
  int local_44;
  int local_40;
  int local_3c;
  CVector3i local_38;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)(in_stack_0000000c * _DAT_00648b39));
  local_18 = (int)ROUND(dVar5);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (0xffff < local_18) {
    local_18 = 0xffff;
  }
  local_24 = in_stack_00000010 << 8;
  local_20 = in_stack_00000014 << 8;
  local_1c = in_stack_00000018 << 8;
  uVar4 = 0;
  do {
    fVar6 = *in_stack_00000008;
    iVar3 = uVar4 * 0x30;
    while( true ) {
      dVar5 = crt_math_c_round_FUN_005fe6b0((double)(fVar6 * (float)256));
      local_38.y = (int)ROUND(dVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 2) != 0) {
        pfVar2 = in_stack_00000004;
      }
      dVar5 = crt_math_c_round_FUN_005fe6b0((double)(pfVar2[1] * (float)256));
      pCVar1 = g_CDemonRendererPtr;
      local_38.y = (int)ROUND(dVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 4) != 0) {
        pfVar2 = in_stack_00000004;
      }
      dVar5 = crt_math_c_round_FUN_005fe6b0((double)(pfVar2[2] * (float)256));
      local_38.y = (int)ROUND(dVar5);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
                 &local_38);
      pCVar1 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar3) = 0x80000;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->v + iVar3) = 0x80000;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->light + iVar3) = local_2c;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->color + iVar3) = local_28;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar3) = local_24;
      uVar4 = uVar4 + 1;
      *(int *)((int)&pCVar1->vertex_buffer_ptr->w_recip + iVar3) = local_20;
      if (7 < (int)uVar4) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(pCVar1,&DAT_006816c0);
        local_4c._4_4_ = 0;
        local_4c._0_4_ = 0;
        local_54._4_4_ = 0;
        local_54._0_4_ = 0;
        local_44 = 0;
        local_3c = 6;
        local_38.x = 4;
        local_40 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffa4);
        local_38.y = 5;
        local_40 = 1;
        local_3c = 3;
        local_38.x = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffa8);
        local_3c = 0;
        local_38.x = 1;
        local_38.y = 3;
        local_38.z = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_54);
        local_38.x = 4;
        local_38.y = 5;
        local_38.z = 7;
        local_2c = 6;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_54 + 4));
        local_38.y = 2;
        local_28 = 6;
        local_38.z = 3;
        local_2c = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_4c);
        local_2c = 1;
        local_38.z = 0;
        local_28 = 5;
        local_24 = 4;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_4c + 4));
        return;
      }
      if ((uVar4 & 1) == 0) break;
      fVar6 = *in_stack_00000004;
      iVar3 = iVar3 + 0x30;
    }
  } while( true );
}
