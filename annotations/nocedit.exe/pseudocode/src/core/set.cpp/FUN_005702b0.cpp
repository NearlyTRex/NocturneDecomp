// Name: core_set.cpp_FUN_005702b0
// Address: 005702b0
// Address Range: [[005702b0, 005706f4]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005702b0(void)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_005702b0(void)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int in_stack_00000004;
  ushort *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int aiStackY_1020 [960];
  SSurfaceNormal SStack_118;
  uint local_d0;
  uint uStack_cc;
  uint local_90;
  uint uStack_8c;
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  int local_2c;
  int local_28 [6];
  
  bVar6 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&SMRGLTextureBasic_006813e4);
  if (g_CGamePtr->render_mode == 2) {
    in_stack_00000010 = g_CurrentAlphaValue << 8;
  }
  else {
    lVar2 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)in_stack_00000010;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr2,&local_44);
  local_28[2] = 0;
  if (0 < in_stack_0000000c) {
    do {
      SStack_118.dot_product = 0;
      SStack_118.normal_z = 0;
      SStack_118.normal_y = 0;
      SStack_118.normal_x = 0;
      SStack_118.vertex_count = 3;
      SStack_118.vertex_index_1 = (uint)*in_stack_00000008;
      SStack_118.vertex_index_2 = (uint)in_stack_00000008[1];
      SStack_118.vertex_index_3 = (uint)in_stack_00000008[2];
      iVar3 = (uint)in_stack_00000008[3] << 8;
      SStack_118.unk1[0] = (char)iVar3;
      SStack_118.unk1[1] = (char)((uint)iVar3 >> 8);
      SStack_118.unk1[2] = (char)((uint)iVar3 >> 0x10);
      SStack_118.unk1[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[4] << 8;
      SStack_118.unk2[0] = (char)iVar3;
      SStack_118.unk2[1] = (char)((uint)iVar3 >> 8);
      SStack_118.unk2[2] = (char)((uint)iVar3 >> 0x10);
      SStack_118.unk2[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[5] << 8;
      SStack_118.unk3[0] = (char)iVar3;
      SStack_118.unk3[1] = (char)((uint)iVar3 >> 8);
      SStack_118.unk3[2] = (char)((uint)iVar3 >> 0x10);
      SStack_118.unk3[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[6] << 8;
      SStack_118.unk1[4] = (char)iVar3;
      SStack_118.unk1[5] = (char)((uint)iVar3 >> 8);
      SStack_118.unk1[6] = (char)((uint)iVar3 >> 0x10);
      SStack_118.unk1[7] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[7] << 8;
      SStack_118.unk2[4] = (char)iVar3;
      SStack_118.unk2[5] = (char)((uint)iVar3 >> 8);
      SStack_118.unk2[6] = (char)((uint)iVar3 >> 0x10);
      SStack_118.unk2[7] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[8] << 8;
      SStack_118.unk3[4] = (char)iVar3;
      SStack_118.unk3[5] = (char)((uint)iVar3 >> 8);
      SStack_118.unk3[6] = (char)((uint)iVar3 >> 0x10);
      SStack_118.unk3[7] = (char)((uint)iVar3 >> 0x18);
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(g_TransformedVertexArray,&SStack_118);
      }
      local_28[4] = 0;
      if (0 < SStack_118.vertex_count) {
        local_28[3] = 0;
        local_28[5] = 0;
        do {
          iVar3 = *(int *)(SStack_118.unk1 + local_28[3] + -4);
          if ((((*(int *)(in_stack_00000004 + 0x15ae84) == 0) ||
               (1.0 <= ABS(g_VertexNormalArray[iVar3].x))) ||
              (1.0 <= ABS(g_VertexNormalArray[iVar3].y))) ||
             (1.0 <= ABS(g_VertexNormalArray[iVar3].z))) {
            local_2c = (int)ROUND(g_VertexNormalArray[iVar3].x);
            local_28[0] = (int)ROUND(g_VertexNormalArray[iVar3].y);
            local_28[1] = (int)ROUND(g_VertexNormalArray[iVar3].z);
          }
          else {
            local_50.x = (int)ROUND(DAT_032c1c68 * 256.0f) -
                         g_TransformedVertexArray[iVar3].x;
            local_50.y = (int)ROUND(DAT_032c1c6c * 256.0f) -
                         g_TransformedVertexArray[iVar3].y;
            local_50.z = (int)ROUND(DAT_032c1c70 * 256.0f) -
                         g_TransformedVertexArray[iVar3].z;
            engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_50,&local_38);
            local_2c = local_38.x;
            local_28[(uint)bVar6 * -2] = *(int *)((int)&local_38 + (uint)bVar6 * -8 + 4);
            local_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 *(int *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          }
          iVar5 = local_28[4] + 1;
          iVar3 = 0x8000 - local_28[0];
          *(int *)((int)&local_d0 + local_28[5]) = local_2c + 0x8000;
          *(int *)((int)&local_90 + local_28[5]) = iVar3;
          local_28[4] = iVar5;
          local_28[5] = local_28[5] + 4;
          local_28[3] = local_28[3] + 0xc;
        } while (iVar5 < SStack_118.vertex_count);
      }
      if (1 < SStack_118.vertex_count) {
        iVar3 = 4;
        do {
          if ((0x8000 < local_d0) && (*(int *)((int)&local_d0 + iVar3) < -0x8000)) {
            psVar1 = (short *)((int)&local_d0 + iVar3 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_d0 < -0x8000) && (0x8000 < *(int *)((int)&local_d0 + iVar3))) {
            *(int *)((int)&local_d0 + iVar3) = *(int *)((int)&local_d0 + iVar3) + -0x10000;
          }
          if ((0x8000 < local_90) && (*(int *)((int)&local_90 + iVar3) < -0x8000)) {
            psVar1 = (short *)((int)&local_90 + iVar3 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_90 < -0x8000) && (0x8000 < *(int *)((int)&local_90 + iVar3))) {
            *(int *)((int)&local_90 + iVar3) = *(int *)((int)&local_90 + iVar3) + -0x10000;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < SStack_118.vertex_count * 4);
      }
      iVar3 = 0;
      if (0 < SStack_118.vertex_count) {
        iVar4 = 0;
        iVar5 = 0;
        do {
          *(int *)(SStack_118.unk1 + iVar5) = *(int *)((int)&local_d0 + iVar4) << 8;
          *(int *)(SStack_118.unk1 + iVar5 + 4) = *(int *)((int)&local_90 + iVar4) << 8;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
          iVar5 = iVar5 + 0xc;
        } while (iVar3 < SStack_118.vertex_count);
      }
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        SStack_118.normal_z = 0;
        SStack_118.normal_y = 0;
        SStack_118.normal_x = 0;
        SStack_118.dot_product = 0;
      }
      if (in_stack_00000010 < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
                  (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&SStack_118);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                  (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&SStack_118);
      }
      in_stack_00000008 = in_stack_00000008 + 9;
      local_28[2] = local_28[2] + 1;
    } while (local_28[2] < in_stack_0000000c);
  }
  return;
}
