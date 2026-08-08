// Name: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0
// Address: 0050d6a0
// Address Range: [[0050d6a0, 0050d90b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

{
  short *psVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  int iVar8;
  SMRGLPrimitivePoly *pSVar9;
  byte bVar10;
  SMRGLPrimitivePoly SStack_f4;
  uint local_6c;
  uint uStack_68;
  int local_2c;
  int local_28;
  int local_24;
  int local_14;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005be680);
  if (g_CGame_PTR_005b9354->render_mode == 2) {
    alpha = g_CurrentAlphaValue << 8;
  }
  else {
    lVar3 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)alpha;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,
               (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  }
  engine_drender_cpp_FUN_00460d10(g_CDemonRenderer_PTR_005ae704);
  local_14 = 0;
  if (0 < count) {
    do {
      pSVar7 = prims;
      pSVar9 = &SStack_f4;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(int *)pSVar9 = (pSVar7->base).type;
        pSVar7 = (SMRGLHeaderPrimitive *)((int)pSVar7 + (uint)bVar10 * -8 + 4);
        pSVar9 = (SMRGLPrimitivePoly *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
      }
      iVar5 = 0;
      if (0 < SStack_f4.base.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          iVar4 = *(int *)((int)&SStack_f4.vertices[0].vertex_index + iVar8) * 0xc;
          iVar8 = iVar8 + 0xc;
          iVar5 = iVar5 + 1;
          local_2c = (int)ROUND(*(float *)(&DAT_02045ab0 + iVar4));
          fVar2 = *(float *)(&DAT_02045ab4 + iVar4);
          local_28 = (int)ROUND(fVar2);
          local_24 = (int)ROUND(*(float *)(&DAT_02045ab8 + iVar4));
          *(int *)((int)&local_6c + iVar6) = (int)ROUND(*(float *)(&DAT_02045ab0 + iVar4)) + 0x8000;
          *(int *)((int)&SStack_f4.vertices[4].vertex_index + iVar6) = 0x8000 - (int)ROUND(fVar2);
          iVar6 = iVar6 + 4;
        } while (iVar5 < SStack_f4.base.base.count);
      }
      if (1 < SStack_f4.base.base.count) {
        iVar5 = 4;
        do {
          if ((0x8000 < local_6c) && (*(int *)((int)&local_6c + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&local_6c + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_6c < -0x8000) && (0x8000 < *(int *)((int)&local_6c + iVar5))) {
            *(int *)((int)&local_6c + iVar5) = *(int *)((int)&local_6c + iVar5) + -0x10000;
          }
          if ((0x8000 < SStack_f4.vertices[4].vertex_index) &&
             (*(int *)((int)&SStack_f4.vertices[4].vertex_index + iVar5) < -0x8000)) {
            psVar1 = (short *)((int)&SStack_f4.vertices[4].vertex_index + iVar5 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((SStack_f4.vertices[4].vertex_index < -0x8000) &&
             (iVar6 = *(int *)((int)&SStack_f4.vertices[4].vertex_index + iVar5), 0x8000 < iVar6)) {
            *(int *)((int)&SStack_f4.vertices[4].vertex_index + iVar5) = iVar6 + -0x10000;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < SStack_f4.base.base.count * 4);
      }
      iVar5 = 0;
      if (0 < SStack_f4.base.base.count) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          *(int *)((int)&SStack_f4.vertices[0].texture_u + iVar6) =
               *(int *)((int)&local_6c + iVar8) << 8;
          *(int *)((int)&SStack_f4.vertices[0].texture_v + iVar6) =
               *(int *)((int)&SStack_f4.vertices[4].vertex_index + iVar8) << 8;
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + 0xc;
        } while (iVar5 < SStack_f4.base.base.count);
      }
      if (alpha < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20
                  (g_CDemonRenderer_PTR_005ae704,&SStack_f4);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
                  (g_CDemonRenderer_PTR_005ae704,&SStack_f4);
      }
      local_14 = local_14 + 1;
      prims = (SMRGLHeaderPrimitive *)((int)&(prims->base).type + stride);
    } while (local_14 < count);
  }
  return;
}
