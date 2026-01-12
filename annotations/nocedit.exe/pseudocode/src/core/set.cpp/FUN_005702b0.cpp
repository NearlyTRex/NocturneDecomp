// Name: core_set.cpp_FUN_005702b0
// Address: 005702b0
// Address Range: [[005702b0, 005706f4]]
// Convention: unknown
// Signature: undefined core_set.cpp_FUN_005702b0()

#include "nocturne.h"

void core_set_cpp_FUN_005702b0(void)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  byte bVar6;
  int in_stack_00000004;
  ushort *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int aiStackY_101c [959];
  CVector3i *in_stack_fffffee8;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  uint local_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_d0;
  short sStack_ce;
  uint uStack_cc;
  uint local_90;
  uint uStack_8c;
  CVector3i local_50 [2];
  int iStack_34;
  int aiStack_30 [4];
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_006813e4);
  if (g_CGamePtr->field62_0x1f4 == 2) {
    in_stack_00000010 = g_CurrentAlphaValue << 8;
  }
  else {
    lVar2 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)in_stack_00000010;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_fffffee8);
  local_20 = 0;
  if (0 < in_stack_0000000c) {
    do {
      local_104 = 0;
      local_108 = 0;
      local_10c = 0;
      local_110 = 0;
      local_114 = 3;
      local_100 = (uint)*in_stack_00000008;
      local_f4 = (uint)in_stack_00000008[1];
      local_e8 = (uint)in_stack_00000008[2];
      local_fc = (uint)in_stack_00000008[3] << 8;
      local_f0 = (uint)in_stack_00000008[4] << 8;
      local_e4 = (uint)in_stack_00000008[5] << 8;
      local_f8 = (uint)in_stack_00000008[6] << 8;
      local_ec = (uint)in_stack_00000008[7] << 8;
      local_e0 = (uint)in_stack_00000008[8] << 8;
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  (g_TransformedVertexArray,(SSurfaceNormal *)&stack0xfffffee8);
      }
      local_18 = 0;
      if (0 < local_114) {
        local_1c = 0;
        local_14 = 0;
        do {
          iVar3 = *(int *)((int)&stack0xffffff00 + local_1c);
          if ((((*(int *)(in_stack_00000004 + 0x15ae84) == 0) ||
               (1.0 <= ABS(g_VertexNormalArray[iVar3].x))) ||
              (1.0 <= ABS(g_VertexNormalArray[iVar3].y))) ||
             (1.0 <= ABS(g_VertexNormalArray[iVar3].z))) {
            aiStack_30[1] = (int)ROUND(g_VertexNormalArray[iVar3].x);
            aiStack_30[2] = (int)ROUND(g_VertexNormalArray[iVar3].y);
            aiStack_30[3] = (int)ROUND(g_VertexNormalArray[iVar3].z);
          }
          else {
            local_50[0].x =
                 (int)ROUND(DAT_032c1c68 * 256f) - g_TransformedVertexArray[iVar3].x;
            local_50[0].y =
                 (int)ROUND(DAT_032c1c6c * 256f) - g_TransformedVertexArray[iVar3].y;
            local_50[0].z =
                 (int)ROUND(DAT_032c1c70 * 256f) - g_TransformedVertexArray[iVar3].z;
            engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(local_50);
            aiStack_30[1] = iStack_34;
            aiStack_30[(uint)bVar6 * -2 + 2] = aiStack_30[(uint)bVar6 * -2];
            aiStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
                 aiStack_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          }
          iVar5 = local_18 + 1;
          iVar3 = 0x8000 - aiStack_30[2];
          *(int *)((int)&stack0xffffff30 + local_14) = aiStack_30[1] + 0x8000;
          *(int *)((int)&local_90 + local_14) = iVar3;
          local_18 = iVar5;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0xc;
        } while (iVar5 < local_114);
      }
      if (1 < local_114) {
        iVar3 = 4;
        do {
          if ((0x8000 < local_d0) && (*(int *)((int)&stack0xffffff30 + iVar3) < -0x8000)) {
            *(short *)((int)&sStack_ce + iVar3) = *(short *)((int)&sStack_ce + iVar3) + 1;
          }
          if ((local_d0 < -0x8000) && (0x8000 < *(int *)((int)&stack0xffffff30 + iVar3))) {
            *(int *)((int)&stack0xffffff30 + iVar3) =
                 *(int *)((int)&stack0xffffff30 + iVar3) + -0x10000;
          }
          if ((0x8000 < local_90) && (*(int *)((int)&local_90 + iVar3) < -0x8000)) {
            psVar1 = (short *)((int)&local_90 + iVar3 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_90 < -0x8000) && (0x8000 < *(int *)((int)&local_90 + iVar3))) {
            *(int *)((int)&local_90 + iVar3) = *(int *)((int)&local_90 + iVar3) + -0x10000;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < local_114 * 4);
      }
      iVar3 = 0;
      if (0 < local_114) {
        iVar4 = 0;
        iVar5 = 0;
        do {
          *(int *)((int)&stack0xffffff04 + iVar5) = *(int *)((int)&stack0xffffff30 + iVar4) << 8;
          *(int *)((int)&stack0xffffff08 + iVar5) = *(int *)((int)&local_90 + iVar4) << 8;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
          iVar5 = iVar5 + 0xc;
        } while (iVar3 < local_114);
      }
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        local_108 = 0;
        local_10c = 0;
        local_110 = 0;
        local_104 = 0;
      }
      if (in_stack_00000010 < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xfffffee8);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xfffffee8);
      }
      in_stack_00000008 = in_stack_00000008 + 9;
      local_1c = local_1c + 1;
    } while (local_1c < in_stack_0000000c);
  }
  return;
}
