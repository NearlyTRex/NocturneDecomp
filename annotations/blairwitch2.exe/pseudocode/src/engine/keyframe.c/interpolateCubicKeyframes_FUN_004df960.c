// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_004df960
// Address: 004df960
// Address Range: [[004df960, 004dfd4e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_004df960(SMRGLKeyframeModel *keyframe_model)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_004df960(SMRGLKeyframeModel *keyframe_model)

{
  SMRGLKeyframe **ppSVar1;
  int iVar2;
  SMRGLKeyframe *pSVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  SMRGLHeaderExtended *pSVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *extraout_ECX;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int extraout_EDX;
  int iVar15;
  SMRGLKeyframe *pSVar16;
  SMRGLPrimitiveTriangle *texture;
  int iVar17;
  SMRGLKeyframe *pSVar18;
  SMRGLKeyframe *pSVar19;
  int iVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  int iStack_1c;
  SMRGLKeyframe *pSStack_18;
  
  if (keyframe_model->base_keyframes == (SMRGLKeyframe *)0x0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004df770(keyframe_model);
  }
  uVar11 = keyframe_model->cycle_length;
  uVar14 = keyframe_model->current_position >> 0x1f;
  uVar9 = keyframe_model->current_position ^ uVar14;
  uVar10 = uVar9 / uVar11;
  if (0x7ffe < uVar10) {
    uVar10 = 0x7fff;
  }
  uVar14 = ((uint)(((ulonglong)uVar9 % (ulonglong)uVar11 << 0x20) / (ulonglong)uVar11) >> 0x10 |
           uVar10 << 0x10) ^ uVar14;
  iVar15 = (int)uVar14 >> 0x10;
  iVar17 = iVar15 + 1;
  iVar20 = (keyframe_model->header).child_count;
  keyframe_model->current_position =
       _DAT_01c2a374 % (int)((keyframe_model->header).child_count * uVar11);
  if (iVar20 <= iVar17) {
    iVar17 = 0;
  }
  iStack_1c = iVar17 + 1;
  if ((keyframe_model->header).child_count <= iStack_1c) {
    iStack_1c = 0;
  }
  iVar20 = iVar15 + -1;
  if (iVar20 < 0) {
    iVar20 = (keyframe_model->header).child_count + -1;
  }
  pSVar3 = keyframe_model->base_keyframes;
  if ((pSVar3->header).child_count != 2) {
    _DAT_01d046a0 = "..\\engine\\keyframe.c";
    _DAT_01d046a4 = 0x16b;
    core_main_c_FUN_004e4500("Bad keyframe 1");
  }
  pSStack_18 = keyframe_model->loaded_frames[iVar17] + 1;
  ppSVar1 = keyframe_model->loaded_frames + iStack_1c;
  fVar21 = (float10)(uVar14 & 0xffff) * (float10)_DAT_005dbca6;
  fVar22 = fVar21 * fVar21;
  fVar23 = fVar22 * fVar21;
  fVar24 = ((fVar23 * (float10)_DAT_005dbcae + fVar22) -
           (float10)(float)(fVar21 * (float10)_DAT_005dbcb2)) * (float10)_DAT_005dbcb6;
  fVar25 = (fVar23 * (float10)_DAT_005dbcb2 - fVar22 * (float10)_DAT_005dbcb2) *
           (float10)_DAT_005dbcb6;
  fVar26 = ((float10)1 + fVar22 * (float10)_DAT_005dbcc2 + fVar23 * (float10)_DAT_005dbcbe) *
           (float10)_DAT_005dbcb6;
  fVar21 = (fVar23 * (float10)_DAT_005dbcca + fVar22 * (float10)_DAT_005dbcc6 +
           (float10)(float)(fVar21 * (float10)_DAT_005dbcb2)) * (float10)_DAT_005dbcb6;
  pSVar16 = keyframe_model->loaded_frames[iVar15] + 1;
  iStack_1c = 0;
  pSVar18 = *ppSVar1 + 1;
  pSVar19 = keyframe_model->loaded_frames[iVar20] + 1;
  round();
  iVar17 = (int)ROUND(fVar25);
  round();
  round();
  round();
  iVar20 = (int)ROUND(fVar24);
  iVar15 = (int)ROUND(fVar26);
  iVar2 = (int)ROUND(fVar21);
  piVar12 = extraout_ECX;
  piVar13 = extraout_ECX;
  if (0 < extraout_EDX) {
    do {
      lVar4 = (longlong)iVar20 * (longlong)(pSVar19->header).base.type;
      lVar5 = (longlong)iVar15 * (longlong)(pSVar16->header).base.type;
      lVar6 = (longlong)iVar2 * (longlong)(pSStack_18->header).base.type;
      lVar7 = (longlong)iVar17 * (longlong)(pSVar18->header).base.type;
      *piVar12 = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                 ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                 ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar4 = (longlong)iVar20 * (longlong)(pSVar19->header).base.count;
      lVar5 = (longlong)iVar15 * (longlong)(pSVar16->header).base.count;
      lVar6 = (longlong)iVar2 * (longlong)(pSStack_18->header).base.count;
      lVar7 = (longlong)iVar17 * (longlong)(pSVar18->header).base.count;
      piVar12[1] = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                   ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                   ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                   ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      lVar4 = (longlong)iVar20 * (longlong)(pSVar19->header).child_count;
      lVar5 = (longlong)iVar15 * (longlong)(pSVar16->header).child_count;
      pSVar19 = (SMRGLKeyframe *)&pSVar19->vertex_header;
      lVar6 = (longlong)iVar2 * (longlong)(pSStack_18->header).child_count;
      pSVar16 = (SMRGLKeyframe *)&pSVar16->vertex_header;
      pSVar8 = &pSVar18->header;
      pSVar18 = (SMRGLKeyframe *)&pSVar18->vertex_header;
      lVar7 = (longlong)iVar17 * (longlong)pSVar8->child_count;
      piVar13 = piVar12 + 3;
      piVar12[2] = ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                   ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                   ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                   ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
      iStack_1c = iStack_1c + 1;
      pSStack_18 = (SMRGLKeyframe *)&pSStack_18->vertex_header;
      piVar12 = piVar13;
    } while (iStack_1c < (pSVar3->vertex_header).count);
  }
  if (*piVar13 != 0x17) {
    _DAT_01d046a0 = "..\\engine\\keyframe.c";
    _DAT_01d046a4 = 0x1a6;
    core_main_c_FUN_004e4500("ZBP not found!");
  }
  pSVar3 = keyframe_model->base_keyframes;
  texture = (SMRGLPrimitiveTriangle *)(piVar13 + 3);
  do {
    uVar11 = (texture->base).base.type;
    if (0x17 < uVar11) {
      if (uVar11 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0((CVector3i *)(pSVar3 + 1),texture);
      }
      else if (uVar11 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004df430
                  ((CVector3i *)(pSVar3 + 1),(SMRGLPrimitiveTriangleIndex *)texture);
      }
    }
    uVar11 = engine_model_c_FUN_00500f30((SMRGLHeaderExtended *)texture);
    texture = (SMRGLPrimitiveTriangle *)
              ((int)&(((SMRGLPrimitiveTriangle *)(texture->vertices + -2))->base).base.type +
              (uVar11 & 0xfffffffc));
  } while ((texture->base).base.type != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_004078b0(keyframe_model->base_keyframes);
  return &keyframe_model[1].header;
}
