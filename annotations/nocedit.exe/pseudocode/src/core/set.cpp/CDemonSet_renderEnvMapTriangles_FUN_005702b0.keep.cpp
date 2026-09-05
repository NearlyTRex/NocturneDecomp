// Name: core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0
// Address: 005702b0
// MANUAL RECONSTRUCTION
// Address Range: [[005702b0, 005706f4] [0060c3fe, 0060c41b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderEnvMapTriangles_FUN_005702b0(CDemonSet *this_ptr,SInputFace *face_data,int count,int alpha)

{
  int iVar6;
  SMRGLPrimitiveTriangle SStack_118;
  int local_d0[3];
  int local_90[3];
  CVector3i local_50;
  CVector3i local_44;
  CVector3i local_38;
  int local_2c;
  int local_28 [6];
  longlong lVar2;
#if !NOCTURNE_AUTHENTIC_ENVMAP_UV
  SMRGLPrimitiveTriangle env_tri;
  int env_unlit[64];
  int env_unlit_count;
  int env_f;
  int env_k;
  int env_v;
  int env_j;
  int env_known;
  float env_len;
  float env_scale;
#endif

  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_EnvMapTexture);
  if (g_CGamePtr->render_mode == 2) {
    alpha = g_CurrentAlphaValue << 8;
  }
  else {
    lVar2 = (longlong)(0xffff - g_PerspectiveReciprocal) * (longlong)alpha;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr2,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0048c760
            (g_CDemonRendererPtr2,&local_44);
#if !NOCTURNE_AUTHENTIC_ENVMAP_UV
  env_unlit_count = 0;
  for (env_f = 0; env_f < count; env_f++) {
    for (env_k = 0; env_k < 3; env_k++) {
      if (env_k == 0) {
        env_v = (int)(uint)(face_data[env_f].vertex_indices).vertex_index_0;
      }
      else if (env_k == 1) {
        env_v = (int)(uint)(face_data[env_f].vertex_indices).vertex_index_1;
      }
      else {
        env_v = (int)(uint)(face_data[env_f].vertex_indices).vertex_index_2;
      }
      if (((1.0 > ABS(g_VertexNormalArray[env_v].x)) &&
           (1.0 > ABS(g_VertexNormalArray[env_v].y))) &&
          (1.0 > ABS(g_VertexNormalArray[env_v].z))) {
        env_known = 0;
        for (env_j = 0; env_j < env_unlit_count; env_j++) {
          if (env_unlit[env_j] == env_v) {
            env_known = 1;
          }
        }
        if ((env_known == 0) &&
            (env_unlit_count < (int)(sizeof(env_unlit) / sizeof(env_unlit[0])))) {
          env_unlit[env_unlit_count] = env_v;
          env_unlit_count = env_unlit_count + 1;
          g_VertexNormalArray[env_v].x = 0.0f;
          g_VertexNormalArray[env_v].y = 0.0f;
          g_VertexNormalArray[env_v].z = 0.0f;
        }
      }
    }
  }
  for (env_f = 0; env_f < count; env_f++) {
    env_tri.base.base.count = 3;
    env_tri.vertices[0].vertex_index = (uint)(face_data[env_f].vertex_indices).vertex_index_0;
    env_tri.vertices[1].vertex_index = (uint)(face_data[env_f].vertex_indices).vertex_index_1;
    env_tri.vertices[2].vertex_index = (uint)(face_data[env_f].vertex_indices).vertex_index_2;
    engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(g_TransformedVertexArray,&env_tri);
    for (env_k = 0; env_k < 3; env_k++) {
      env_v = env_tri.vertices[env_k].vertex_index;
      for (env_j = 0; env_j < env_unlit_count; env_j++) {
        if (env_unlit[env_j] == env_v) {
          g_VertexNormalArray[env_v].x =
               g_VertexNormalArray[env_v].x + (float)env_tri.base.surface_normal.A.i;
          g_VertexNormalArray[env_v].y =
               g_VertexNormalArray[env_v].y + (float)env_tri.base.surface_normal.B.i;
          g_VertexNormalArray[env_v].z =
               g_VertexNormalArray[env_v].z + (float)env_tri.base.surface_normal.C.i;
        }
      }
    }
  }
  for (env_j = 0; env_j < env_unlit_count; env_j++) {
    env_v = env_unlit[env_j];
    env_len = g_VertexNormalArray[env_v].x * g_VertexNormalArray[env_v].x +
              g_VertexNormalArray[env_v].y * g_VertexNormalArray[env_v].y +
              g_VertexNormalArray[env_v].z * g_VertexNormalArray[env_v].z;
    if (env_len > 0.0f) {
      env_scale = core_cloth_cpp_fastInvSqrt_FUN_0043e2a0(env_len) * (float)65535;
      g_VertexNormalArray[env_v].x = g_VertexNormalArray[env_v].x * env_scale;
      g_VertexNormalArray[env_v].y = g_VertexNormalArray[env_v].y * env_scale;
      g_VertexNormalArray[env_v].z = g_VertexNormalArray[env_v].z * env_scale;
    }
  }
#endif
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
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(g_TransformedVertexArray,&SStack_118);
      }
      // For each vertex of this face, compute a sphere-map (U, V) into
      // local_d0[i] / local_90[i] from either the bone normal (if it has
      // unit-ish magnitude) or the eye-to-vertex direction (otherwise).
      for (int i = 0; i < SStack_118.base.base.count; i++) {
        iVar6 = SStack_118.vertices[i].vertex_index;
        if ((((this_ptr->skip_normal_normalization == 0) ||
             (1.0 <= ABS(g_VertexNormalArray[iVar6].x))) ||
            (1.0 <= ABS(g_VertexNormalArray[iVar6].y))) ||
           (1.0 <= ABS(g_VertexNormalArray[iVar6].z))) {
          local_2c = (int)ROUND(g_VertexNormalArray[iVar6].x);
          local_28[0] = (int)ROUND(g_VertexNormalArray[iVar6].y);
        }
        else {
#if NOCTURNE_AUTHENTIC_ENVMAP_UV
          local_50.x = (int)ROUND(g_LightingReferencePosition.x * 256.0f) -
                       g_TransformedVertexArray[iVar6].x;
          local_50.y = (int)ROUND(g_LightingReferencePosition.y * 256.0f) -
                       g_TransformedVertexArray[iVar6].y;
          local_50.z = (int)ROUND(g_LightingReferencePosition.z * 256.0f) -
                       g_TransformedVertexArray[iVar6].z;
          engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_50,&local_38);
          local_2c = local_38.x;
          local_28[0] = local_38.y;
#else
          local_2c    = SStack_118.base.surface_normal.A.i;
          local_28[0] = SStack_118.base.surface_normal.B.i;
          if (((local_2c == 0) && (local_28[0] == 0)) &&
              (SStack_118.base.surface_normal.C.i == 0)) {
            local_50.x = (int)ROUND(g_LightingReferencePosition.x * 256.0f) -
                         g_TransformedVertexArray[iVar6].x;
            local_50.y = (int)ROUND(g_LightingReferencePosition.y * 256.0f) -
                         g_TransformedVertexArray[iVar6].y;
            local_50.z = (int)ROUND(g_LightingReferencePosition.z * 256.0f) -
                         g_TransformedVertexArray[iVar6].z;
            engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_50,&local_38);
            local_2c = local_38.x;
            local_28[0] = local_38.y;
          }
#endif
        }
#if NOCTURNE_AUTHENTIC_ENVMAP_UV
        local_d0[i] = local_2c + 0x8000;
        local_90[i] = 0x8000 - local_28[0];
#else
        local_d0[i] = (local_2c >> 1) + 0x8000;
        local_90[i] = 0x8000 - (local_28[0] >> 1);
        if (local_d0[i] < 0) {
          local_d0[i] = 0;
        }
        else if (0xffff < local_d0[i]) {
          local_d0[i] = 0xffff;
        }
        if (local_90[i] < 0) {
          local_90[i] = 0;
        }
        else if (0xffff < local_90[i]) {
          local_90[i] = 0xffff;
        }
#endif
      }

      // Wraparound fixup across the polygon's seam — when vertex 0's U/V is
      // in the upper half of the sphere map but vertex i is in the lower
      // half (or vice-versa), pull them onto the same side so interpolation
      // doesn't sweep across the seam.
      for (int i = 1; i < SStack_118.base.base.count; i++) {
        if ((0x8000 < local_d0[0]) && (local_d0[i] < -0x8000)) {
          ((short *)&local_d0[i])[1] += 1;
        }
        if ((local_d0[0] < -0x8000) && (0x8000 < local_d0[i])) {
          local_d0[i] = local_d0[i] - 0x10000;
        }
        if ((0x8000 < local_90[0]) && (local_90[i] < -0x8000)) {
          ((short *)&local_90[i])[1] += 1;
        }
        if ((local_90[0] < -0x8000) && (0x8000 < local_90[i])) {
          local_90[i] = local_90[i] - 0x10000;
        }
      }

      // Write the sphere-map UVs back into the polygon's texture coords,
      // shifted from 16.0 to 16.16 fixed-point.
      for (int i = 0; i < SStack_118.base.base.count; i++) {
        SStack_118.vertices[i].texture_u = (uint)local_d0[i] << 8;
        SStack_118.vertices[i].texture_v = (uint)local_90[i] << 8;
      }
      if (this_ptr->skip_normal_normalization != 0) {
        SStack_118.base.surface_normal.C.i = 0;
        SStack_118.base.surface_normal.B.i = 0;
        SStack_118.base.surface_normal.A.i = 0;
        SStack_118.base.surface_normal.D.i = 0;
      }
      if (alpha < 0xfde9) {
        engine_drender_cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970
                  (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_118);
      }
      else {
        engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0
                  (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_118);
      }
      face_data = face_data + 1;
      local_28[2] = local_28[2] + 1;
    } while (local_28[2] < count);
  }
  return;
}
