// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90
// Address: 004c3c90
// Address Range: [[004c3c90, 004c407e]]
// Convention: unknown
// Signature: SMRGLKeyframeModel * engine_keyframe_c_interpolateCubicKeyframes_FUN_004c3c90(SMRGLKeyframeModel *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLKeyframeModel * engine_keyframe_c_interpolateCubicKeyframes_FUN_004c3c90(SMRGLKeyframeModel *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  SMRGLHeaderExtended *pSVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  SMRGLKeyframe *pSVar21;
  SMRGLKeyframe *pSVar22;
  uint uVar23;
  int iVar24;
  SMRGLKeyframe *pSVar25;
  SMRGLPrimitiveTriangle *texture;
  SMRGLKeyframe *pSVar26;
  SMRGLKeyframe *pSVar27;
  int iVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iStack_34;
  int local_2c;
  int *local_28;
  int local_1c;
  
  if (param_1->base_keyframes == (SMRGLKeyframe *)0x0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(param_1);
  }
  uVar20 = param_1->cycle_length;
  uVar23 = param_1->current_position >> 0x1f;
  uVar18 = param_1->current_position ^ uVar23;
  uVar19 = uVar18 / uVar20;
  if (0x7ffe < uVar19) {
    uVar19 = 0x7fff;
  }
  uVar23 = ((uint)(((ulonglong)uVar18 % (ulonglong)uVar20 << 0x20) / (ulonglong)uVar20) >> 0x10 |
           uVar19 << 0x10) ^ uVar23;
  iVar24 = (int)uVar23 >> 0x10;
  uVar23 = uVar23 & 0xffff;
  local_1c = iVar24 + 1;
  iVar28 = (param_1->header).child_count;
  param_1->current_position = _DAT_01bd1d84 % (int)((param_1->header).child_count * uVar20);
  if (iVar28 <= local_1c) {
    local_1c = 0;
  }
  local_1c = local_1c + 1;
  if ((param_1->header).child_count <= local_1c) {
    local_1c = 0;
  }
  iVar28 = iVar24 + -1;
  if (iVar28 < 0) {
    iVar28 = (param_1->header).child_count + -1;
  }
  pSVar21 = param_1->base_keyframes;
  if ((pSVar21->header).child_count != 2) {
    PTR_01cc4800 = "..\\engine\\keyframe.c";
    INT_01cc4804 = 0x16b;
    core_main_c_FUN_004c8440("Bad keyframe 1");
  }
  fVar15 = (float)uVar23 * (float)1.52587890625e-05;
  fVar16 = fVar15 * fVar15;
  fVar9 = fVar16 * fVar15;
  fVar6 = fVar16 * 2.0f;
  fVar10 = fVar9 * -0.5f;
  fVar11 = fVar9 * 1.5f;
  fVar8 = fVar9 * -1.5f;
  fVar15 = fVar15 * 0.5f;
  fVar14 = (float)65536;
  fVar13 = fVar16 * -2.5f;
  fVar12 = (float)65536;
  fVar7 = (float)65536;
  pSVar22 = param_1->base_keyframes + 1;
  pSVar25 = param_1->loaded_frames[iVar24] + 1;
  pSVar26 = param_1->loaded_frames[local_1c] + 1;
  pSVar27 = param_1->loaded_frames[iVar28] + 1;
  iVar2 = (pSVar21->vertex_header).count;
  uVar35 = 0x4c3e61;
  dVar29 = round
                     ((double)((fVar9 * 0.5f - fVar16 * 0.5f) *
                              (float)65536));
  local_28 = (int *)(int)ROUND(dVar29);
  uVar34 = 0x4c3e6c;
  dVar29 = round((double)(((fVar10 + fVar16) - fVar15) * fVar14));
  uVar33 = 0x4c3e73;
  dVar30 = round((double)((fVar13 + fVar11 + 1.0) * fVar12));
  uVar32 = 0x4c3e7a;
  dVar31 = round((double)((fVar8 + fVar6 + fVar15) * fVar7));
  iVar28 = (int)ROUND(dVar29);
  iVar24 = (int)ROUND(dVar30);
  iVar1 = (int)ROUND(dVar31);
  pSVar21 = pSVar22;
  if (0 < iVar2) {
    do {
      lVar3 = (longlong)iVar28 * (longlong)(pSVar27->header).base.type;
      lVar4 = (longlong)iVar24 * (longlong)(pSVar25->header).base.type;
      lVar5 = (longlong)iStack_34 * (longlong)(pSVar26->header).base.type;
      (pSVar21->header).base.type =
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)((longlong)iVar1 * (longlong)*local_28) >> 0x10 |
           (int)((ulonglong)((longlong)iVar1 * (longlong)*local_28) >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
      lVar3 = (longlong)iVar28 * (longlong)(pSVar27->header).base.count;
      lVar4 = (longlong)iVar24 * (longlong)(pSVar25->header).base.count;
      lVar5 = (longlong)iStack_34 * (longlong)(pSVar26->header).base.count;
      (pSVar21->header).base.count =
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)((longlong)iVar1 * (longlong)local_28[1]) >> 0x10 |
           (int)((ulonglong)((longlong)iVar1 * (longlong)local_28[1]) >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
      lVar3 = (longlong)iVar28 * (longlong)(pSVar27->header).child_count;
      lVar4 = (longlong)iVar24 * (longlong)(pSVar25->header).child_count;
      pSVar27 = (SMRGLKeyframe *)&pSVar27->vertex_header;
      pSVar25 = (SMRGLKeyframe *)&pSVar25->vertex_header;
      pSVar17 = &pSVar26->header;
      pSVar26 = (SMRGLKeyframe *)&pSVar26->vertex_header;
      lVar5 = (longlong)iStack_34 * (longlong)pSVar17->child_count;
      pSVar22 = (SMRGLKeyframe *)&pSVar21->vertex_header;
      (pSVar21->header).child_count =
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)((longlong)iVar1 * (longlong)local_28[2]) >> 0x10 |
           (int)((ulonglong)((longlong)iVar1 * (longlong)local_28[2]) >> 0x20) << 0x10) +
           ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
      local_2c = local_2c + 1;
      local_28 = local_28 + 3;
      pSVar21 = pSVar22;
    } while (local_2c < *(int *)(uVar23 + 8));
  }
  if ((pSVar22->header).base.type != 0x17) {
    PTR_01cc4800 = "..\\engine\\keyframe.c";
    INT_01cc4804 = 0x1a6;
    core_main_c_FUN_004c8440("ZBP not found!",uVar32,uVar33,uVar34,uVar35);
  }
  pSVar21 = param_1->base_keyframes;
  texture = (SMRGLPrimitiveTriangle *)&pSVar22->vertex_header;
  do {
    uVar20 = (texture->base).base.type;
    if (0x17 < uVar20) {
      if (uVar20 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920((CVector3i *)(pSVar21 + 1),texture);
      }
      else if (uVar20 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760
                  ((CVector3i *)(pSVar21 + 1),(SMRGLPrimitiveTriangleIndex *)texture);
      }
    }
    uVar20 = engine_model_c_getMRGLSize_FUN_004dd520((SMRGLHeaderExtended *)texture);
    texture = (SMRGLPrimitiveTriangle *)
              ((int)&(((SMRGLPrimitiveTriangle *)(texture->vertices + -2))->base).base.type +
              (uVar20 & 0xfffffffc));
  } while ((texture->base).base.type != 0);
  engine_3d_c_FUN_00408e80(param_1->base_keyframes);
  return param_1 + 1;
}
