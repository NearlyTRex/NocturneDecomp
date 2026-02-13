// Name: core_set.cpp_CDemonSet_FUN_00570040
// Address: 00570040
// Address Range: [[00570040, 005702ab]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_00570040(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570040(CDemonSet *this_ptr)

{
  short *psVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  SMRGLHeaderPrimitive *pSVar9;
  byte bVar10;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  SMRGLHeaderPrimitive SStack_f4;
  int aiStack_dc [12];
  uint local_ac;
  uint uStack_a8;
  uint local_6c;
  uint uStack_68;
  int local_2c;
  int local_28;
  int local_24;
  CVector3i local_20;
  int local_14;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,&DAT_006813e4);
  if (g_CGamePtr->render_mode == 2) {
    in_stack_00000010 = g_CurrentAlphaValue << 8;
  }
  else {
    lVar4 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)in_stack_00000010;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,(uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr2,&local_20);
  local_14 = 0;
  if (0 < in_stack_0000000c) {
    do {
      puVar7 = in_stack_00000008;
      pSVar9 = &SStack_f4;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pSVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        pSVar9 = (SMRGLHeaderPrimitive *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
      }
      iVar5 = 0;
      if (0 < SStack_f4.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          iVar3 = *(int *)((int)aiStack_dc + iVar8);
          iVar8 = iVar8 + 0xc;
          iVar5 = iVar5 + 1;
          local_2c = (int)ROUND(g_VertexNormalArray[iVar3].x);
          fVar2 = g_VertexNormalArray[iVar3].y;
          local_28 = (int)ROUND(fVar2);
          local_24 = (int)ROUND(g_VertexNormalArray[iVar3].z);
          *(int *)((int)&local_6c + iVar6) = (int)ROUND(g_VertexNormalArray[iVar3].x) + 0x8000;
          *(int *)((int)&local_ac + iVar6) = 0x8000 - (int)ROUND(fVar2);
          iVar6 = iVar6 + 4;
        } while (iVar5 < SStack_f4.base.count);
      }
      if (1 < SStack_f4.base.count) {
        iVar5 = 4;
        do {
          if ((0x8000 < local_6c) && (*(int *)((int)&local_6c + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&local_6c + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_6c < -0x8000) && (0x8000 < *(int *)((int)&local_6c + iVar5))) {
            *(int *)((int)&local_6c + iVar5) = *(int *)((int)&local_6c + iVar5) + -0x10000;
          }
          if ((0x8000 < local_ac) && (*(int *)((int)&local_ac + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&local_ac + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_ac < -0x8000) && (0x8000 < *(int *)((int)&local_ac + iVar5))) {
            *(int *)((int)&local_ac + iVar5) = *(int *)((int)&local_ac + iVar5) + -0x10000;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < SStack_f4.base.count * 4);
      }
      iVar5 = 0;
      if (0 < SStack_f4.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          *(int *)((int)aiStack_dc + iVar6 + 4) = *(int *)((int)&local_6c + iVar8) << 8;
          *(int *)((int)aiStack_dc + iVar6 + 8) = *(int *)((int)&local_ac + iVar8) << 8;
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + 0xc;
        } while (iVar5 < SStack_f4.base.count);
      }
      if (in_stack_00000010 < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
                  (g_CDemonRendererPtr2,&SStack_f4);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                  (g_CDemonRendererPtr2,&SStack_f4);
      }
      local_14 = local_14 + 1;
      in_stack_00000008 = (uint *)((int)in_stack_00000008 + in_stack_00000014);
    } while (local_14 < in_stack_0000000c);
  }
  return;
}
