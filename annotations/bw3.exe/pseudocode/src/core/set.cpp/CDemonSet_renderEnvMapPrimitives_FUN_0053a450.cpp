// Name: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450
// Address: 0053a450
// Address Range: [[0053a450, 0053a6bb]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

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
  SMRGLPrimitivePoly aSStack_f4 [4];
  int local_f0;
  int aiStack_dc [12];
  uint local_ac;
  uint uStack_a8;
  uint local_6c;
  uint uStack_68;
  int local_2c;
  int local_28;
  int local_24;
  int local_14;
  
  bVar10 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_00603e44);
  if (*(int *)&g_CGamePtr->field_0x218 == 2) {
    alpha = DAT_005fba38 << 8;
  }
  else {
    lVar3 = (longlong)(0xffff - _DAT_01c6e24c) * (longlong)alpha;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (DAT_005f2afc,(uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  }
  engine_matrix_c_FUN_0046d1a0(DAT_005f2afc);
  local_14 = 0;
  if (0 < count) {
    do {
      pSVar7 = prims;
      pSVar9 = aSStack_f4;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(uint *)pSVar9 = *(uint *)pSVar7;
        pSVar7 = pSVar7 + (uint)bVar10 * -8 + 4;
        pSVar9 = (SMRGLPrimitivePoly *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
      }
      iVar5 = 0;
      if (0 < local_f0) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          iVar4 = *(int *)((int)aiStack_dc + iVar8) * 0xc;
          iVar8 = iVar8 + 0xc;
          iVar5 = iVar5 + 1;
          local_2c = (int)ROUND(*(float *)(&DAT_020d4f70 + iVar4));
          fVar2 = *(float *)(&DAT_020d4f74 + iVar4);
          local_28 = (int)ROUND(fVar2);
          local_24 = (int)ROUND(*(float *)(&DAT_020d4f78 + iVar4));
          *(int *)((int)&local_6c + iVar6) = (int)ROUND(*(float *)(&DAT_020d4f70 + iVar4)) + 0x8000;
          *(int *)((int)&local_ac + iVar6) = 0x8000 - (int)ROUND(fVar2);
          iVar6 = iVar6 + 4;
        } while (iVar5 < local_f0);
      }
      if (1 < local_f0) {
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
        } while (iVar5 < local_f0 * 4);
      }
      iVar5 = 0;
      if (0 < local_f0) {
        iVar8 = 0;
        iVar6 = 0;
        do {
          *(int *)((int)aiStack_dc + iVar6 + 4) = *(int *)((int)&local_6c + iVar8) << 8;
          *(int *)((int)aiStack_dc + iVar6 + 8) = *(int *)((int)&local_ac + iVar8) << 8;
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + 0xc;
        } while (iVar5 < local_f0);
      }
      if (alpha < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0
                  (DAT_005f2afc,aSStack_f4);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
                  (DAT_005f2afc,aSStack_f4);
      }
      local_14 = local_14 + 1;
      prims = prims + stride;
    } while (local_14 < count);
  }
  return;
}
