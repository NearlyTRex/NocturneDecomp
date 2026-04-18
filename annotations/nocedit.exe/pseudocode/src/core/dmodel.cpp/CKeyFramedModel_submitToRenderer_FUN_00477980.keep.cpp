// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
// Address: 00477980
// MANUAL RECONSTRUCTION
// Address Range: [[00477980, 00477be6]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)
{
  int face_capture;
  int part_idx;
  int poly_start;
  int poly_end;
  int prev_tex;
  int run_end;
  int cur_tex;
  float dx;
  float dy;
  float dz;

  if (this_ptr->poly_count <= 0) {
    return;
  }

  if (this_ptr->disable_backface_culling != 0) {
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2, 0);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2, 0);
  }
  else if (this_ptr->frame_count > 0) {
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2, 1);
  }
  else {
    dx = (this_ptr->bounds_max).x - (this_ptr->bounds_min).x;
    dy = (this_ptr->bounds_max).y - (this_ptr->bounds_min).y;
    dz = (this_ptr->bounds_max).z - (this_ptr->bounds_min).z;
    if (SQRT(dx * dx + dy * dy + dz * dz) > (float)250) {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2, 1);
    }
  }

  face_capture = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  prev_tex = -1;
  poly_start = 0;

  for (part_idx = 0; part_idx < this_ptr->part_count; part_idx++) {
    poly_end = poly_start + this_ptr->part_list[part_idx].poly_count;

    if ((instance == (CKeyFramedModelInstance *)0x0) ||
        (instance->part_visibility_flags[part_idx] != 0)) {
      if ((this_ptr->texture_count < 2) || (face_capture != 0)) {
        // Single-texture (or face-capture) path: submit the whole part at once.
        if (face_capture == 0) {
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(
              g_CDemonRendererPtr2, this_ptr->texture_list[0].textures);
        }
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(
            g_CDemonSetPtr, this_ptr->poly_vert_list + poly_start,
            poly_end - poly_start, render_flags);
      }
      else {
        // Multi-texture: split the part into runs of same-texture polys.
        while (poly_start < poly_end) {
          cur_tex = this_ptr->poly_texture_index_list[poly_start];
          if (prev_tex != cur_tex) {
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(
                g_CDemonRendererPtr2, this_ptr->texture_list[cur_tex].textures);
            prev_tex = cur_tex;
          }
          run_end = poly_start + 1;
          while ((run_end < poly_end) &&
                 (this_ptr->poly_texture_index_list[run_end] == prev_tex)) {
            run_end++;
          }
          core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(
              g_CDemonSetPtr, this_ptr->poly_vert_list + poly_start,
              run_end - poly_start, render_flags);
          poly_start = run_end;
        }
      }
    }
    poly_start = poly_end;
  }

  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2, 0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2, 1);
}
