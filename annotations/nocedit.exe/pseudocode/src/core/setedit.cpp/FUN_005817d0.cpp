// Name: core_setedit.cpp_FUN_005817d0
// Address: 005817d0
// Address Range: [[005817d0, 00581a96]]
// Convention: __watcallRegister
// Signature: void core_setedit.cpp_FUN_005817d0(void * unk)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setedit_cpp_FUN_005817d0(void *unk)

{
  float fVar1;
  float *pfVar2;
  uint in_EDX;
  CDemonRenderer *this_ptr;
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  uint unaff_ESI;
  int iVar3;
  uint unaff_EDI;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  uint unaff_retaddr;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  byte local_34 [8];
  byte local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar5 = (float10)in_stack_0000000c * (float10)_DAT_00648b39;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,unk));
  this_ptr = (CDemonRenderer *)(int)ROUND(fVar5);
  local_1c = in_stack_00000010 << 8;
  local_18 = in_stack_00000014 << 8;
  local_14 = in_stack_00000018 << 8;
  uVar4 = 0;
  do {
    fVar1 = *in_stack_00000008;
    iVar3 = uVar4 * 0x30;
    while( true ) {
      fVar5 = (float10)fVar1 * (float10)256;
      dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr,fVar1));
      local_24 = (int)ROUND(fVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 2) != 0) {
        pfVar2 = in_stack_00000004;
      }
      fVar5 = (float10)pfVar2[1] * (float10)256;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar6 >> 0x20),pfVar2[1]));
      local_1c = (int)ROUND(fVar5);
      pfVar2 = in_stack_00000008;
      if ((uVar4 & 4) != 0) {
        pfVar2 = in_stack_00000004;
      }
      fVar5 = (float10)pfVar2[2] * (float10)256;
      dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(&local_20,g_CDemonRendererPtr));
      local_14 = (int)ROUND(fVar5);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)(*SUB84 /* extract 2-byte value */(dVar6,0) + iVar3),
                 (CVector3i *)((ulonglong)dVar6 >> 0x20));
      this_ptr = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar3) = 0x80000;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->v + iVar3) = 0x80000;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->light + iVar3) = unaff_EDI;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->color + iVar3) = unaff_ESI;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->fog + iVar3) = unaff_EBX;
      uVar4 = uVar4 + 1;
      *(uint *)((int)&this_ptr->vertex_buffer_ptr->w_recip + iVar3) = unaff_retaddr;
      if (7 < (int)uVar4) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr,&DAT_006816c0);
        local_2c._4_4_ = 0;
        local_2c._0_4_ = 0;
        local_34._4_4_ = 0;
        local_34._0_4_ = 0;
        local_24 = 0;
        local_1c = 6;
        local_18 = 4;
        local_20 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc4);
        local_14 = 5;
        local_20 = 1;
        local_1c = 3;
        local_18 = 7;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffc8);
        local_1c = 0;
        local_18 = 1;
        local_14 = 3;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_34);
        local_18 = 4;
        local_14 = 5;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_34 + 4));
        local_14 = 2;
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_2c);
        engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(local_2c + 4));
        return;
      }
      if ((uVar4 & 1) == 0) break;
      fVar1 = *in_stack_00000004;
      iVar3 = iVar3 + 0x30;
    }
  } while( true );
}
