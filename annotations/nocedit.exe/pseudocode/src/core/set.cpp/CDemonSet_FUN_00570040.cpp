// Name: core_set.cpp_CDemonSet_FUN_00570040
// Address: 00570040
// Address Range: [[00570040, 005702ab]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570040(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570040(CDemonSet *this_ptr)

{
  short *psVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  uint *puVar7;
  int iVar8;
  SMRGLHeaderPrimitive *pSVar9;
  byte bVar10;
  int unaff_retaddr;
  uint *in_stack_00000008;
  int in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000028;
  CVector3i *in_stack_ffffff18;
  SMRGLHeaderPrimitive SStack_e4;
  int aiStack_cc [12];
  uint uStack_9c;
  uint uStack_98;
  uint uStack_5c;
  uint uStack_58;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_006813e4);
  if (g_CGamePtr->field62_0x1f4 != 2) {
    lVar4 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)in_stack_00000014;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr,in_stack_ffffff18);
  if (0 < in_stack_0000001c) {
    do {
      puVar7 = in_stack_00000008;
      pSVar9 = &SStack_e4;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pSVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        pSVar9 = (SMRGLHeaderPrimitive *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
      }
      iVar5 = 0;
      if (0 < SStack_e4.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          iVar3 = *(int *)((int)aiStack_cc + iVar8);
          iVar8 = iVar8 + 0xc;
          iVar5 = iVar5 + 1;
          iStack_1c = (int)ROUND(g_VertexNormalArray[iVar3].x);
          fVar2 = g_VertexNormalArray[iVar3].y;
          iStack_18 = (int)ROUND(fVar2);
          local_14 = (int)ROUND(g_VertexNormalArray[iVar3].z);
          *(int *)((int)&uStack_5c + iVar6) = (int)ROUND(g_VertexNormalArray[iVar3].x) + 0x8000;
          *(int *)((int)&uStack_9c + iVar6) = 0x8000 - (int)ROUND(fVar2);
          iVar6 = iVar6 + 4;
        } while (iVar5 < SStack_e4.base.count);
      }
      if (1 < SStack_e4.base.count) {
        iVar5 = 4;
        do {
          if ((0x8000 < uStack_5c) && (*(int *)((int)&uStack_5c + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_5c + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_5c < -0x8000) && (0x8000 < *(int *)((int)&uStack_5c + iVar5))) {
            *(int *)((int)&uStack_5c + iVar5) = *(int *)((int)&uStack_5c + iVar5) + -0x10000;
          }
          if ((0x8000 < uStack_9c) && (*(int *)((int)&uStack_9c + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&uStack_9c + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((uStack_9c < -0x8000) && (0x8000 < *(int *)((int)&uStack_9c + iVar5))) {
            *(int *)((int)&uStack_9c + iVar5) = *(int *)((int)&uStack_9c + iVar5) + -0x10000;
          }
          iVar5 = iVar5 + 4;
        } while (SBORROW /* signed borrow */4(iVar5,SStack_e4.base.count * 4) != iVar5 + SStack_e4.base.count * -4 < 0);
      }
      iVar5 = 0;
      if (0 < SStack_e4.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          *(int *)((int)aiStack_cc + iVar6 + 4) = *(int *)((int)&uStack_5c + iVar8) << 8;
          *(int *)((int)aiStack_cc + iVar6 + 8) = *(int *)((int)&uStack_9c + iVar8) << 8;
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + 0xc;
        } while (iVar5 < SStack_e4.base.count);
      }
      if (in_stack_00000020 < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
                  (g_CDemonRendererPtr,&SStack_e4);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0(g_CDemonRendererPtr,&SStack_e4)
        ;
      }
      unaff_retaddr = unaff_retaddr + 1;
      in_stack_00000008 = (uint *)((int)in_stack_00000008 + in_stack_00000028);
    } while (unaff_retaddr < in_stack_00000020);
  }
  return;
}
