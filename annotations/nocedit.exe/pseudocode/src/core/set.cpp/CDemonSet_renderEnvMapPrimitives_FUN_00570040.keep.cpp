// Name: core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040
// Address: 00570040
// MANUAL RECONSTRUCTION
// Address Range: [[00570040, 005702ab]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha,int stride)

{
  int iVar7;
  SMRGLPrimitiveQuad SStack_f4;
  int local_ac[16];
  int local_6c[16];
  int local_2c;
  int local_28;
  int local_24;
  CVector3i local_20;
  int local_14;
  longlong lVar4;
  float fVar2;
  int iVar3;

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
      SStack_f4 = *(SMRGLPrimitiveQuad *)prims;
      iVar7 = 0;
      if (0 < SStack_f4.base.base.count) {
        do {
          iVar3 = SStack_f4.vertices[iVar7].vertex_index;
          local_2c = (int)ROUND(g_VertexNormalArray[iVar3].x);
          fVar2 = g_VertexNormalArray[iVar3].y;
          local_28 = (int)ROUND(fVar2);
          local_24 = (int)ROUND(g_VertexNormalArray[iVar3].z);
          local_6c[iVar7] = local_2c + 0x8000;
          local_ac[iVar7] = 0x8000 - local_28;
          iVar7 = iVar7 + 1;
        } while (iVar7 < SStack_f4.base.base.count);
      }
      if (1 < SStack_f4.base.base.count) {
        iVar7 = 1;
        do {
          if ((0x8000 < local_6c[0]) && (local_6c[iVar7] < -0x8000)) {
            local_6c[iVar7] = local_6c[iVar7] + 0x10000;
          }
          if ((local_6c[0] < -0x8000) && (0x8000 < local_6c[iVar7])) {
            local_6c[iVar7] = local_6c[iVar7] + -0x10000;
          }
          if ((0x8000 < local_ac[0]) && (local_ac[iVar7] < -0x8000)) {
            local_ac[iVar7] = local_ac[iVar7] + 0x10000;
          }
          if ((local_ac[0] < -0x8000) && (0x8000 < local_ac[iVar7])) {
            local_ac[iVar7] = local_ac[iVar7] + -0x10000;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < SStack_f4.base.base.count);
      }
      iVar7 = 0;
      if (0 < SStack_f4.base.base.count) {
        do {
          SStack_f4.vertices[iVar7].texture_u = local_6c[iVar7] << 8;
          SStack_f4.vertices[iVar7].texture_v = local_ac[iVar7] << 8;
          iVar7 = iVar7 + 1;
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
      prims = (SMRGLHeaderPrimitive *)((char *)prims + stride);
    } while (local_14 < count);
  }
  return;
}
