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
  int iVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  byte bVar6;
  int in_stack_00000004;
  ushort *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int aiStackY_1010 [956];
  CVector3i *in_stack_fffffef4;
  SSurfaceNormal local_108;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_80;
  uint uStack_7c;
  CVector3i aCStack_40 [2];
  int local_28;
  int local_24 [4];
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
            (g_CDemonRendererPtr,in_stack_fffffef4);
  if (0 < in_stack_0000000c) {
    do {
      local_108.dot_product = 0;
      local_108.normal_z = 0;
      local_108.normal_y = 0;
      local_108.normal_x = 0;
      local_108.vertex_count = 3;
      local_108.vertex_index_1 = (uint)*in_stack_00000008;
      local_108.vertex_index_2 = (uint)in_stack_00000008[1];
      local_108.vertex_index_3 = (uint)in_stack_00000008[2];
      iVar3 = (uint)in_stack_00000008[3] << 8;
      local_108.field7_0x1c[0] = (char)iVar3;
      local_108.field7_0x1c[1] = (char)((uint)iVar3 >> 8);
      local_108.field7_0x1c[2] = (char)((uint)iVar3 >> 0x10);
      local_108.field7_0x1c[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[4] << 8;
      local_108.field9_0x28[0] = (char)iVar3;
      local_108.field9_0x28[1] = (char)((uint)iVar3 >> 8);
      local_108.field9_0x28[2] = (char)((uint)iVar3 >> 0x10);
      local_108.field9_0x28[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[5] << 8;
      local_108.field11_0x34[0] = (char)iVar3;
      local_108.field11_0x34[1] = (char)((uint)iVar3 >> 8);
      local_108.field11_0x34[2] = (char)((uint)iVar3 >> 0x10);
      local_108.field11_0x34[3] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[6] << 8;
      local_108.field7_0x1c[4] = (char)iVar3;
      local_108.field7_0x1c[5] = (char)((uint)iVar3 >> 8);
      local_108.field7_0x1c[6] = (char)((uint)iVar3 >> 0x10);
      local_108.field7_0x1c[7] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[7] << 8;
      local_108.field9_0x28[4] = (char)iVar3;
      local_108.field9_0x28[5] = (char)((uint)iVar3 >> 8);
      local_108.field9_0x28[6] = (char)((uint)iVar3 >> 0x10);
      local_108.field9_0x28[7] = (char)((uint)iVar3 >> 0x18);
      iVar3 = (uint)in_stack_00000008[8] << 8;
      local_108.field11_0x34[4] = (char)iVar3;
      local_108.field11_0x34[5] = (char)((uint)iVar3 >> 8);
      local_108.field11_0x34[6] = (char)((uint)iVar3 >> 0x10);
      local_108.field11_0x34[7] = (char)((uint)iVar3 >> 0x18);
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(g_TransformedVertexArray,&local_108);
      }
      iVar3 = 0;
      if (0 < local_108.vertex_count) {
        unaff_EDI = 0;
        iVar5 = 0;
        do {
          iVar4 = *(int *)(local_108.field7_0x1c + unaff_EDI + -4);
          if ((((*(int *)(in_stack_00000004 + 0x15ae84) == 0) ||
               (1.0 <= ABS(g_VertexNormalArray[iVar4].x))) ||
              (1.0 <= ABS(g_VertexNormalArray[iVar4].y))) ||
             (1.0 <= ABS(g_VertexNormalArray[iVar4].z))) {
            local_24[2] = (int)ROUND(g_VertexNormalArray[iVar4].x);
            local_24[3] = (int)ROUND(g_VertexNormalArray[iVar4].y);
            local_14 = (int)ROUND(g_VertexNormalArray[iVar4].z);
          }
          else {
            aCStack_40[0].x =
                 (int)ROUND(DAT_032c1c68 * 256f) - g_TransformedVertexArray[iVar4].x;
            aCStack_40[0].y =
                 (int)ROUND(DAT_032c1c6c * 256f) - g_TransformedVertexArray[iVar4].y;
            aCStack_40[0].z =
                 (int)ROUND(DAT_032c1c70 * 256f) - g_TransformedVertexArray[iVar4].z;
            engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(aCStack_40);
            local_24[2] = local_28;
            local_24[(uint)bVar6 * -2 + 3] = local_24[(uint)bVar6 * -2];
            local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 local_24[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          }
          iVar3 = iVar3 + 1;
          iVar4 = 0x8000 - local_24[3];
          *(int *)((int)&uStack_c0 + iVar5) = local_24[2] + 0x8000;
          *(int *)((int)&uStack_80 + iVar5) = iVar4;
          unaff_EDI = unaff_EDI + 0xc;
          iVar5 = iVar5 + 4;
        } while (iVar3 < local_108.vertex_count);
      }
      if (1 < local_108.vertex_count) {
        iVar3 = 4;
        do {
          if ((0x8000 < uStack_c0) && (*(int *)((int)&uStack_c0 + iVar3) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_c0 + iVar3 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_c0 < -0x8000) && (0x8000 < *(int *)((int)&uStack_c0 + iVar3))) {
            *(int *)((int)&uStack_c0 + iVar3) = *(int *)((int)&uStack_c0 + iVar3) + -0x10000;
          }
          if ((0x8000 < uStack_80) && (*(int *)((int)&uStack_80 + iVar3) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_80 + iVar3 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_80 < -0x8000) && (0x8000 < *(int *)((int)&uStack_80 + iVar3))) {
            *(int *)((int)&uStack_80 + iVar3) = *(int *)((int)&uStack_80 + iVar3) + -0x10000;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < local_108.vertex_count * 4);
      }
      iVar3 = 0;
      if (0 < local_108.vertex_count) {
        iVar4 = 0;
        iVar5 = 0;
        do {
          *(int *)(local_108.field7_0x1c + iVar5) = *(int *)((int)&uStack_c0 + iVar4) << 8;
          *(int *)(local_108.field7_0x1c + iVar5 + 4) = *(int *)((int)&uStack_80 + iVar4) << 8;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
          iVar5 = iVar5 + 0xc;
        } while (iVar3 < local_108.vertex_count);
      }
      if (*(int *)(in_stack_00000004 + 0x15ae84) != 0) {
        local_108.normal_z = 0;
        local_108.normal_y = 0;
        local_108.normal_x = 0;
        local_108.dot_product = 0;
      }
      if (in_stack_00000010 < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&local_108);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&local_108);
      }
      in_stack_00000008 = in_stack_00000008 + 9;
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI < in_stack_0000000c);
  }
  return;
}
