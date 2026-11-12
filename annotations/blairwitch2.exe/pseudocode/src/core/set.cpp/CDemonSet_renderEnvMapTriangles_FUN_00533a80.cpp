// Name: core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80
// Address: 00533a80
// Address Range: [[00533a80, 00533ec4]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)

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
  int local_50;
  int local_4c;
  int local_48;
  int local_38;
  int aiStack_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061b8c4);
  if (g_CGamePtr->render_mode == 2) {
    alpha = DAT_006141d8 << 8;
  }
  else {
    lVar2 = (longlong)(0xffff - _DAT_01c38aec) * (longlong)alpha;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (DAT_0060b280,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  }
  engine_drender_cpp_FUN_0046b5c0(DAT_0060b280);
  local_20 = 0;
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
        engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0(0x201a474,&SStack_118);
      }
      local_18 = 0;
      if (0 < SStack_118.base.base.count) {
        local_1c = 0;
        local_14 = 0;
        do {
          iVar4 = *(int *)((int)&SStack_118.vertices[0].vertex_index + local_1c) * 0xc;
          if ((((this_ptr->skip_normal_normalization == 0) ||
               (1.0 <= ABS(*(float *)(&DAT_02054df4 + iVar4)))) ||
              (1.0 <= ABS(*(float *)(&DAT_02054df8 + iVar4)))) ||
             (1.0 <= ABS(*(float *)(&DAT_02054dfc + iVar4)))) {
            aiStack_34[2] = (int)ROUND(*(float *)(&DAT_02054df4 + iVar4));
            aiStack_34[3] = (int)ROUND(*(float *)(&DAT_02054df8 + iVar4));
            local_24 = (int)ROUND(*(float *)(&DAT_02054dfc + iVar4));
          }
          else {
            local_50 = (int)ROUND(_DAT_0200e890 * _DAT_005fb210) - *(int *)(iVar4 + 0x201a474);
            local_4c = (int)ROUND(_DAT_0200e894 * _DAT_005fb210) - *(int *)(iVar4 + 0x201a478);
            local_48 = (int)ROUND(_DAT_0200e898 * _DAT_005fb210) - *(int *)(iVar4 + 0x201a47c);
            engine_matrix_c_normalizeVector3DFloat_FUN_004e9ae0(&local_50);
            aiStack_34[2] = local_38;
            aiStack_34[(uint)bVar6 * -2 + 3] = aiStack_34[(uint)bVar6 * -2];
            aiStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 aiStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          }
          iVar5 = local_18 + 1;
          iVar4 = 0x8000 - aiStack_34[3];
          *(int *)((int)&SStack_118.vertices[4].vertex_index + local_14) = aiStack_34[2] + 0x8000;
          *(int *)((int)&local_90 + local_14) = iVar4;
          local_18 = iVar5;
          local_14 = local_14 + 4;
          local_1c = local_1c + 0xc;
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
        engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046a7d0
                  (DAT_0060b280,&SStack_118);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030
                  (DAT_0060b280,&SStack_118);
      }
      face_data = face_data + 1;
      local_20 = local_20 + 1;
    } while (local_20 < count);
  }
  return;
}
