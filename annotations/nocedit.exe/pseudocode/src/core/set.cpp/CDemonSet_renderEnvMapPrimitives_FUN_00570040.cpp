// Name: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040
// Address: 00570040
// Address Range: [[00570040, 005702ab]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

{
  short *psVar2;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  int iVar8;
  SMRGLHeaderPrimitive *pSVar9;
  byte bVar10;
  SMRGLPrimitiveQuad SStack_f4;
  uint local_ac;
  uint uStack_a8;
  uint local_6c;
  uint uStack_68;
  int local_2c;
  int local_28;
  int local_24;
  CVector3i local_20;
  int local_14;
  short *psVar1;
  longlong lVar4;
  float fVar2;
  int iVar3;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_EnvMapTexture);
  if (g_CGamePtr->render_mode == 2) {
    alpha = g_CurrentAlphaValue << 8;
  }
  else {
    lVar4 = (longlong)(0xffff - g_PerspectiveReciprocal) * (longlong)alpha;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,(uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
            (g_CDemonRendererPtr2,&local_20);
  local_14 = 0;
  if (0 < count) {
    do {
      iVar5 = 0x12;
      pSVar7 = prims;
      pSVar9 = &SStack_f4.base;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        pSVar9 = (SMRGLHeaderPrimitive *)((int)pSVar9 + (uint)bVar10 * -8 + 4);
        pSVar7 = (SMRGLHeaderPrimitive *)((int)pSVar7 + (uint)bVar10 * -8 + 4);
        (pSVar9->base).type = (pSVar7->base).type;
        pSVar7 = pSVar7;
        pSVar9 = pSVar9;
      }
      iVar7 = 0;
      if (0 < SStack_f4.base.base.count) {
        iVar8 = 0;
        iVar4 = 0;
        do {
          iVar3 = *(int *)((int)&SStack_f4.vertices[0].vertex_index + iVar8);
          iVar8 = iVar8 + 0xc;
          iVar7 = iVar7 + 1;
          local_2c = (int)ROUND(g_VertexNormalArray[iVar3].x);
          fVar2 = g_VertexNormalArray[iVar3].y;
          local_28 = (int)ROUND(fVar2);
          local_24 = (int)ROUND(g_VertexNormalArray[iVar3].z);
          *(int *)((int)&local_6c + iVar4) = (int)ROUND(g_VertexNormalArray[iVar3].x) + 0x8000;
          *(int *)((int)&local_ac + iVar4) = 0x8000 - (int)ROUND(fVar2);
          iVar4 = iVar4 + 4;
        } while (iVar7 < SStack_f4.base.base.count);
      }
      if (1 < SStack_f4.base.base.count) {
        iVar7 = 4;
        do {
          if ((0x8000 < local_6c) && (*(int *)((int)&local_6c + iVar7) < -0x8000)) {
            psVar1 = (short *)((int)&local_6c + iVar7 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_6c < -0x8000) && (0x8000 < *(int *)((int)&local_6c + iVar7))) {
            *(int *)((int)&local_6c + iVar7) = *(int *)((int)&local_6c + iVar7) + -0x10000;
          }
          if ((0x8000 < local_ac) && (*(int *)((int)&local_ac + iVar7) < -0x8000)) {
            psVar2 = (short *)((int)&local_ac + iVar7 + 2);
            *psVar2 = *psVar2 + 1;
          }
          if ((local_ac < -0x8000) && (0x8000 < *(int *)((int)&local_ac + iVar7))) {
            *(int *)((int)&local_ac + iVar7) = *(int *)((int)&local_ac + iVar7) + -0x10000;
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 < SStack_f4.base.base.count * 4);
      }
      iVar7 = 0;
      if (0 < SStack_f4.base.base.count) {
        iVar4 = 0;
        iVar6 = 0;
        do {
          *(int *)((int)&SStack_f4.vertices[0].texture_u + iVar6) =
               *(int *)((int)&local_6c + iVar4) << 8;
          *(int *)((int)&SStack_f4.vertices[0].texture_v + iVar6) =
               *(int *)((int)&local_ac + iVar4) << 8;
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 4;
          iVar6 = iVar6 + 0xc;
        } while (iVar7 < SStack_f4.base.base.count);
      }
      if (alpha < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970
                  (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_f4);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0
                  (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_f4);
      }
      local_14 = local_14 + 1;
      prims = (SMRGLHeaderPrimitive *)((int)&(prims->base).type + stride);
    } while (local_14 < count);
  }
  return;
}
