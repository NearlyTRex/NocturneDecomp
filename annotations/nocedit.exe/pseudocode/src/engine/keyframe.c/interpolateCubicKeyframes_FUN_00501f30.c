// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
// Address Range: [[00501f30, 0050231e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

{
  int *piVar4;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  SMRGLPrimitiveTriangle *texture;
  int iVar17;
  int *piVar18;
  CVector3i *vertex_data;
  int *piVar19;
  int iVar20;
  int local_1c;
  int *local_18;
  float fVar8;
  float fVar7;
  float fVar6;
  int iVar5;
  int iVar4;
  int *piVar3;
  int *piVar2;
  int *piVar1;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar8 = header[1].base.type;
  uVar12 = header[1].base.count;
  uVar14 = (int)uVar12 >> 0x1f;
  uVar9 = uVar12 ^ uVar14;
  uVar10 = uVar9 / uVar8;
  if (0x7ffe < uVar10) {
    uVar10 = 0x7fff;
  }
  uVar12 = ((uint)(((ulonglong)uVar9 % (ulonglong)uVar8 << 0x20) / (ulonglong)uVar8) >> 0x10 |
           uVar10 << 0x10) ^ uVar14;
  iVar15 = (int)uVar12 >> 0x10;
  iVar17 = iVar15 + 1;
  iVar9 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar8);
  if (iVar9 <= iVar17) {
    iVar17 = 0;
  }
  local_1c = iVar17 + 1;
  if (header->child_count <= local_1c) {
    local_1c = 0;
  }
  iVar20 = iVar15 + -1;
  if (iVar20 < 0) {
    iVar20 = header->child_count + -1;
  }
  iVar5 = header[1].child_count;
  if (*(int *)(iVar5 + 8) != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x16b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  local_18 = (int *)((&header[0x17].base.count)[iVar17] + 0x14);
  piVar4 = &header[0x17].base.count + local_1c;
  fVar7 = (float)(uVar12 & 0xffff) * (float)1.52587890625e-05;
  fVar8 = fVar7 * fVar7;
  fVar6 = fVar8 * fVar7;
  piVar12 = (int *)(header[1].child_count + 0x14);
  piVar16 = (int *)((&header[0x17].base.count)[iVar15] + 0x14);
  local_1c = 0;
  piVar18 = (int *)(*piVar4 + 0x14);
  piVar19 = (int *)((&header[0x17].base.count)[iVar20] + 0x14);
  iVar9 = (int)ROUND(ROUND((fVar6 * 0.5f - fVar8 * 0.5f) *
                           (float)65536));
  iVar6 = (int)ROUND(ROUND(((fVar6 * -0.5f + fVar8) - fVar7 * 0.5f) *
                           (float)65536));
  iVar7 = (int)ROUND(ROUND((fVar8 * -2.5f + fVar6 * 1.5f + 1.0) *
                           (float)65536));
  iVar4 = (int)ROUND(ROUND((fVar6 * -1.5f + fVar8 * 2.0f +
                           fVar7 * 0.5f) * (float)65536));
  piVar13 = piVar12;
  if (0 < *(int *)(iVar5 + 0x10)) {
    do {
      *piVar13 = ((uint)((longlong)iVar6 * (longlong)*piVar19) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar6 * (longlong)*piVar19) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar7 * (longlong)*piVar16) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar7 * (longlong)*piVar16) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar4 * (longlong)*local_18) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar4 * (longlong)*local_18) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar9 * (longlong)*piVar18) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar9 * (longlong)*piVar18) >> 0x20) << 0x10);
      piVar13[1] = ((uint)((longlong)iVar6 * (longlong)piVar19[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar6 * (longlong)piVar19[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar7 * (longlong)piVar16[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar7 * (longlong)piVar16[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_18[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar9 * (longlong)piVar18[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar9 * (longlong)piVar18[1]) >> 0x20) << 0x10);
      piVar1 = piVar19 + 2;
      piVar2 = piVar16 + 2;
      piVar19 = piVar19 + 3;
      piVar16 = piVar16 + 3;
      piVar3 = piVar18 + 2;
      piVar18 = piVar18 + 3;
      piVar12 = piVar13 + 3;
      piVar13[2] = ((uint)((longlong)iVar6 * (longlong)*piVar1) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar6 * (longlong)*piVar1) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar7 * (longlong)*piVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar7 * (longlong)*piVar2) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_18[2]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[2]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar9 * (longlong)*piVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar9 * (longlong)*piVar3) >> 0x20) << 0x10);
      local_1c = local_1c + 1;
      local_18 = local_18 + 3;
      piVar13 = piVar12;
    } while (local_1c < *(int *)(iVar5 + 0x10));
  }
  if (*piVar12 != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("ZBP not found!");
  }
  texture = (SMRGLPrimitiveTriangle *)(piVar12 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar8 = (texture->base).base.type;
    if (0x17 < uVar8) {
      if (uVar8 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,texture);
      }
      else if (uVar8 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SMRGLPrimitiveTriangleIndex *)texture);
      }
    }
    uVar11 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)texture);
    texture = (SMRGLPrimitiveTriangle *)
              ((int)&(((SMRGLPrimitiveTriangle *)(texture->vertices + -2))->base).base.type +
              (uVar11 & 0xfffffffc));
  } while ((texture->base).base.type != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}
