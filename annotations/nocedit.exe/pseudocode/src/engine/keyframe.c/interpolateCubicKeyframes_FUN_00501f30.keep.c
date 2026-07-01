// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
// MANUAL RECONSTRUCTION
// Address Range: [[00501f30, 0050231e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLKeyframeModel *keyframe_model)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLKeyframeModel *keyframe_model)

{
  SMRGLKeyframe **ppSVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar6;
  uint uVar9;
  uint uVar10;
  uint uVar7;
  uint uVar11;
  CVector3i *out_vert;
  uint uVar14;
  int iVar15;
  CVector3i *kf_cur;
  SMRGLPrimitiveTriangle *primitive_list;
  SMRGLHeaderExtended *zbp_block;
  int iVar17;
  CVector3i *kf_next2;
  CVector3i *vertex_data;
  CVector3i *kf_prev;
  int iVar20;
  int local_1c;
  CVector3i *kf_next;
  float fVar8;
  float fVar7;
  float fVar6;
  int iVar4;
  
  if (keyframe_model->base_keyframes == (SMRGLKeyframe *)0x0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(keyframe_model);
  }
  uVar4 = keyframe_model->cycle_length;
  uVar14 = keyframe_model->current_position >> 0x1f;
  uVar9 = keyframe_model->current_position ^ uVar14;
  uVar10 = uVar9 / uVar4;
  if (0x7ffe < uVar10) {
    uVar10 = 0x7fff;
  }
  uVar7 = ((uint)(((ulonglong)uVar9 % (ulonglong)uVar4 << 0x20) / (ulonglong)uVar4) >> 0x10 |
          uVar10 << 0x10) ^ uVar14;
  iVar15 = (int)uVar7 >> 0x10;
  iVar17 = iVar15 + 1;
  iVar6 = (keyframe_model->header).child_count;
  keyframe_model->current_position =
       g_AnimationTimerValue % (int)((keyframe_model->header).child_count * uVar4);
  if (iVar6 <= iVar17) {
    iVar17 = 0;
  }
  local_1c = iVar17 + 1;
  if ((keyframe_model->header).child_count <= local_1c) {
    local_1c = 0;
  }
  iVar20 = iVar15 + -1;
  if (iVar20 < 0) {
    iVar20 = (keyframe_model->header).child_count + -1;
  }
  if ((keyframe_model->base_keyframes->header).child_count != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 363;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  kf_next = keyframe_model->loaded_frames[iVar17]->vertices;
  ppSVar1 = keyframe_model->loaded_frames + local_1c;
  fVar7 = (float)(uVar7 & 0xffff) * (float)1.52587890625e-05;
  fVar8 = fVar7 * fVar7;
  fVar6 = fVar8 * fVar7;
  out_vert = keyframe_model->base_keyframes->vertices;
  kf_cur = keyframe_model->loaded_frames[iVar15]->vertices;
  local_1c = 0;
  kf_next2 = (*ppSVar1)->vertices;
  kf_prev = keyframe_model->loaded_frames[iVar20]->vertices;
  iVar6 = (int)ROUND(ROUND((fVar6 * 0.5f - fVar8 * 0.5f) *
                           (float)65536));
  iVar2 = (int)ROUND(ROUND(((fVar6 * -0.5f + fVar8) - fVar7 * 0.5f) *
                           (float)65536));
  iVar3 = (int)ROUND(ROUND((fVar8 * -2.5f + fVar6 * 1.5f + 1.0) *
                           (float)65536));
  iVar4 = (int)ROUND(ROUND((fVar6 * -1.5f + fVar8 * 2.0f +
                           fVar7 * 0.5f) * (float)65536));
  if (0 < (keyframe_model->base_keyframes->vertex_header).count) {
    do {
      out_vert->x = (int)((longlong)iVar2 * kf_prev->x >> 0x10) +
                    (int)((longlong)iVar3 * kf_cur->x >> 0x10) +
                    (int)((longlong)iVar4 * kf_next->x >> 0x10) +
                    (int)((longlong)iVar6 * kf_next2->x >> 0x10);
      out_vert->y = (int)((longlong)iVar2 * kf_prev->y >> 0x10) +
                    (int)((longlong)iVar3 * kf_cur->y >> 0x10) +
                    (int)((longlong)iVar4 * kf_next->y >> 0x10) +
                    (int)((longlong)iVar6 * kf_next2->y >> 0x10);
      out_vert->z = (int)((longlong)iVar2 * kf_prev->z >> 0x10) +
                    (int)((longlong)iVar3 * kf_cur->z >> 0x10) +
                    (int)((longlong)iVar4 * kf_next->z >> 0x10) +
                    (int)((longlong)iVar6 * kf_next2->z >> 0x10);
      local_1c = local_1c + 1;
      kf_prev = kf_prev + 1;
      kf_cur = kf_cur + 1;
      kf_next = kf_next + 1;
      kf_next2 = kf_next2 + 1;
      out_vert = out_vert + 1;
    } while (local_1c < (keyframe_model->base_keyframes->vertex_header).count);
  }
  zbp_block = (SMRGLHeaderExtended *)out_vert;
  if ((zbp_block->base).type != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 422;
    core_main_c_displayErrorAndQuit_FUN_00506f10("ZBP not found!");
  }
  primitive_list = (SMRGLPrimitiveTriangle *)(zbp_block + 1);
  vertex_data = keyframe_model->base_keyframes->vertices;
  do {
    uVar4 = (primitive_list->base).base.type;
    if (0x17 < uVar4) {
      if (uVar4 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,primitive_list);
      }
      else if (uVar4 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SMRGLPrimitiveTriangleIndex *)primitive_list);
      }
    }
    uVar11 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)primitive_list);
    primitive_list = (SMRGLPrimitiveTriangle *)((char *)primitive_list + (uVar11 & 0xfffffffc));
  } while ((primitive_list->base).base.type != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890(&keyframe_model->base_keyframes->header);
  return &keyframe_model[1].header;
}
