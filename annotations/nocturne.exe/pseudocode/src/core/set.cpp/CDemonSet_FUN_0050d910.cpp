// Name: core_set.cpp_CDemonSet_FUN_0050d910
// Address: 0050d910
// Address Range: [[0050d910, 0050dd54]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050d910(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0050d910(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)

{
  short *psVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_1020 [960];
  SMRGLPrimitivePoly SStack_118;
  uint local_90;
  uint uStack_8c;
  CVector3i local_50 [2];
  CVector3i local_38;
  int local_2c;
  int local_28 [6];
  
  bVar6 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005be680);
  if (g_CGame_PTR_005b9354->render_mode == 2) {
    alpha = DAT_005b763c << 8;
  }
  else {
    lVar2 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)alpha;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  }
  engine_drender_cpp_FUN_00460d10(g_CDemonRenderer_PTR_005ae704);
  local_28[2] = 0;
  if (0 < count) {
    do {
      SStack_118.base.surface_normal.D.i = 0;
      SStack_118.base.surface_normal.C.i = 0;
      SStack_118.base.surface_normal.B.i = 0;
      SStack_118.base.surface_normal.A.i = 0;
      SStack_118.base.base.count = 3;
      SStack_118.vertices[0].vertex_index = (uint)(face_data->vertex_indices).vertex_index_0;
      SStack_118.vertices[1].vertex_index = (uint)(face_data->vertex_indices).vertex_index_1;
      SStack_118.vertices[2].vertex_index = (uint)(face_data->vertex_indices).vertex_index_2;
      SStack_118.vertices[0].texture_u = (uint)face_data->u_coord_0 << 8;
      SStack_118.vertices[1].texture_u = (uint)face_data->u_coord_1 << 8;
      SStack_118.vertices[2].texture_u = (uint)face_data->u_coord_2 << 8;
      SStack_118.vertices[0].texture_v = (uint)face_data->v_coord_0 << 8;
      SStack_118.vertices[1].texture_v = (uint)face_data->v_coord_1 << 8;
      SStack_118.vertices[2].texture_v = (uint)face_data->v_coord_2 << 8;
      if (this_ptr->skip_normal_normalization != 0) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920
                  ((CVector3i *)0x200b130,(SMRGLPrimitiveTriangle *)&SStack_118);
      }
      local_28[4] = 0;
      if (0 < SStack_118.base.base.count) {
        local_28[3] = 0;
        local_28[5] = 0;
        do {
          iVar4 = *(int *)((int)&SStack_118.vertices[0].vertex_index + local_28[3]) * 0xc;
          if ((((this_ptr->skip_normal_normalization == 0) ||
               (1.0 <= ABS(*(float *)(&DAT_02045ab0 + iVar4)))) ||
              (1.0 <= ABS(*(float *)(&DAT_02045ab4 + iVar4)))) ||
             (1.0 <= ABS(*(float *)(&DAT_02045ab8 + iVar4)))) {
            local_2c = (int)ROUND(*(float *)(&DAT_02045ab0 + iVar4));
            local_28[0] = (int)ROUND(*(float *)(&DAT_02045ab4 + iVar4));
            local_28[1] = (int)ROUND(*(float *)(&DAT_02045ab8 + iVar4));
          }
          else {
            local_50[0].x = (int)ROUND(_DAT_01fff54c * _DAT_005a18f0) - *(int *)(iVar4 + 0x200b130);
            local_50[0].y = (int)ROUND(_DAT_01fff550 * _DAT_005a18f0) - *(int *)(iVar4 + 0x200b134);
            local_50[0].z = (int)ROUND(_DAT_01fff554 * _DAT_005a18f0) - *(int *)(iVar4 + 0x200b138);
            engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(local_50,&local_38);
            local_2c = local_38.x;
            local_28[(uint)bVar6 * -2] = *(int *)((int)&local_38 + (uint)bVar6 * -8 + 4);
            local_28[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 *(int *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          }
          iVar5 = local_28[4] + 1;
          iVar4 = 0x8000 - local_28[0];
          *(int *)((int)&SStack_118.vertices[4].vertex_index + local_28[5]) = local_2c + 0x8000;
          *(int *)((int)&local_90 + local_28[5]) = iVar4;
          local_28[4] = iVar5;
          local_28[5] = local_28[5] + 4;
          local_28[3] = local_28[3] + 0xc;
        } while (iVar5 < SStack_118.base.base.count);
      }
      if (1 < SStack_118.base.base.count) {
        iVar4 = 4;
        do {
          if ((0x8000 < SStack_118.vertices[4].vertex_index) &&
             (*(int *)((int)&SStack_118.vertices[4].vertex_index + iVar4) < -0x8000)) {
            psVar1 = (short *)((int)&SStack_118.vertices[4].vertex_index + iVar4 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((SStack_118.vertices[4].vertex_index < -0x8000) &&
             (iVar5 = *(int *)((int)&SStack_118.vertices[4].vertex_index + iVar4), 0x8000 < iVar5))
          {
            *(int *)((int)&SStack_118.vertices[4].vertex_index + iVar4) = iVar5 + -0x10000;
          }
          if ((0x8000 < local_90) && (*(int *)((int)&local_90 + iVar4) < -0x8000)) {
            psVar1 = (short *)((int)&local_90 + iVar4 + 2);
            *psVar1 = *psVar1 + 1;
          }
          if ((local_90 < -0x8000) && (0x8000 < *(int *)((int)&local_90 + iVar4))) {
            *(int *)((int)&local_90 + iVar4) = *(int *)((int)&local_90 + iVar4) + -0x10000;
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 < SStack_118.base.base.count * 4);
      }
      iVar4 = 0;
      if (0 < SStack_118.base.base.count) {
        iVar3 = 0;
        iVar5 = 0;
        do {
          *(int *)((int)&SStack_118.vertices[0].texture_u + iVar5) =
               *(int *)((int)&SStack_118.vertices[4].vertex_index + iVar3) << 8;
          *(int *)((int)&SStack_118.vertices[0].texture_v + iVar5) =
               *(int *)((int)&local_90 + iVar3) << 8;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
          iVar5 = iVar5 + 0xc;
        } while (iVar4 < SStack_118.base.base.count);
      }
      if (this_ptr->skip_normal_normalization != 0) {
        SStack_118.base.surface_normal.C.i = 0;
        SStack_118.base.surface_normal.B.i = 0;
        SStack_118.base.surface_normal.A.i = 0;
        SStack_118.base.surface_normal.D.i = 0;
      }
      if (alpha < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0045ff20
                  (g_CDemonRenderer_PTR_005ae704,&SStack_118);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
                  (g_CDemonRenderer_PTR_005ae704,&SStack_118);
      }
      face_data = face_data + 1;
      local_28[2] = local_28[2] + 1;
    } while (local_28[2] < count);
  }
  return;
}
