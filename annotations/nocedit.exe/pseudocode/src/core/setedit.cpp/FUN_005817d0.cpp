// Name: core_setedit.cpp_FUN_005817d0
// Address: 005817d0
// Address Range: [[005817d0, 00581a96]]
// Convention: __watcallRegister
// Signature: void core_setedit.cpp_FUN_005817d0(void * unk)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setedit_cpp_FUN_005817d0(void *unk)

{
  CDemonRenderer *this_ptr;
  float *pfVar1;
  int *extraout_EAX;
  CVector3i *input;
  BADSPACEBASE *in_ESP;
  int iVar2;
  uint uVar3;
  double dVar4;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  float fVar5;
  SMRGLHeaderPrimitive local_54;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  dVar4 = crt_math_c_round_FUN_005fe6b0((double)(in_stack_0000000c * _DAT_00648b39));
  local_18 = (int)ROUND(dVar4);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (0xffff < local_18) {
    local_18 = 0xffff;
  }
  local_24 = in_stack_00000010 << 8;
  local_20 = in_stack_00000014 << 8;
  local_1c = in_stack_00000018 << 8;
  uVar3 = 0;
  do {
    fVar5 = *in_stack_00000008;
    iVar2 = uVar3 * 0x30;
    while( true ) {
      dVar4 = crt_math_c_round_FUN_005fe6b0((double)(fVar5 * (float)256));
      local_34 = (int)ROUND(dVar4);
      pfVar1 = in_stack_00000008;
      if ((uVar3 & 2) != 0) {
        pfVar1 = in_stack_00000004;
      }
      dVar4 = crt_math_c_round_FUN_005fe6b0((double)(pfVar1[1] * (float)256));
      local_34 = (int)ROUND(dVar4);
      pfVar1 = in_stack_00000008;
      if ((uVar3 & 4) != 0) {
        pfVar1 = in_stack_00000004;
      }
      dVar4 = crt_math_c_round_FUN_005fe6b0((double)(pfVar1[2] * (float)256));
      local_34 = (int)ROUND(dVar4);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)(*extraout_EAX + iVar2),input);
      this_ptr = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar2) = 0x80000;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->v + iVar2) = 0x80000;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->light + iVar2) = local_2c;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->color + iVar2) = local_28;
      *(int *)((int)&this_ptr->vertex_buffer_ptr->fog + iVar2) = local_24;
      uVar3 = uVar3 + 1;
      *(int *)((int)&this_ptr->vertex_buffer_ptr->w_recip + iVar2) = local_20;
      if (7 < (int)uVar3) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr,&DAT_006816c0);
        local_54.surface_normal.D = 0;
        local_54.surface_normal.C = 0;
        local_54.surface_normal.B = 0;
        local_54.surface_normal.A = 0;
        local_3c = 0;
        local_34 = 6;
        local_54.base.count = 4;
        local_30 = 4;
        local_38 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,&local_54);
        local_30 = 5;
        local_3c = 1;
        local_38 = 3;
        local_34 = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,&local_54);
        local_3c = 0;
        local_38 = 1;
        local_34 = 3;
        local_30 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,&local_54);
        local_3c = 4;
        local_38 = 5;
        local_34 = 7;
        local_30 = 6;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,&local_54);
        local_3c = 2;
        local_30 = 6;
        local_38 = 3;
        local_34 = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,&local_54);
        local_38 = 1;
        local_3c = 0;
        local_34 = 5;
        local_30 = 4;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,&local_54);
        return;
      }
      if ((uVar3 & 1) == 0) break;
      fVar5 = *in_stack_00000004;
      iVar2 = iVar2 + 0x30;
    }
  } while( true );
}
