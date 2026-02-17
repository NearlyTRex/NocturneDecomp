// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
// Address Range: [[00501f30, 0050231e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  SSurfaceNormal *output;
  int iVar17;
  int *piVar18;
  CVector3i *vertex_data;
  int *piVar19;
  int iVar20;
  int local_1c;
  int *local_18;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar11 = header[1].base.type;
  uVar9 = header[1].base.count;
  uVar14 = (int)uVar9 >> 0x1f;
  uVar9 = uVar9 ^ uVar14;
  uVar10 = uVar9 / uVar11;
  if (0x7ffe < uVar10) {
    uVar10 = 0x7fff;
  }
  uVar14 = ((uint)(((ulonglong)uVar9 % (ulonglong)uVar11 << 0x20) / (ulonglong)uVar11) >> 0x10 |
           uVar10 << 0x10) ^ uVar14;
  iVar15 = (int)uVar14 >> 0x10;
  iVar17 = iVar15 + 1;
  iVar20 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar11);
  if (iVar20 <= iVar17) {
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
  piVar13 = &header[0x17].base.count + local_1c;
  fVar7 = (float)(uVar14 & 0xffff) * (float)1.52587890625e-05;
  fVar8 = fVar7 * fVar7;
  fVar6 = fVar8 * fVar7;
  piVar12 = (int *)(header[1].child_count + 0x14);
  piVar16 = (int *)((&header[0x17].base.count)[iVar15] + 0x14);
  local_1c = 0;
  piVar18 = (int *)(*piVar13 + 0x14);
  piVar19 = (int *)((&header[0x17].base.count)[iVar20] + 0x14);
  iVar17 = (int)ROUND(ROUND((fVar6 * 0.5f - fVar8 * 0.5f) *
                            (float)65536));
  iVar20 = (int)ROUND(ROUND(((fVar6 * -0.5f + fVar8) - fVar7 * 0.5f) *
                            (float)65536));
  iVar15 = (int)ROUND(ROUND((fVar8 * -2.5f + fVar6 * 1.5f + 1.0) *
                            (float)65536));
  iVar4 = (int)ROUND(ROUND((fVar6 * -1.5f + fVar8 * 2.0f +
                           fVar7 * 0.5f) * (float)65536));
  piVar13 = piVar12;
  if (0 < *(int *)(iVar5 + 0x10)) {
    do {
      *piVar13 = ((uint)((longlong)iVar20 * (longlong)*piVar19) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar19) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar15 * (longlong)*piVar16) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar15 * (longlong)*piVar16) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar4 * (longlong)*local_18) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar4 * (longlong)*local_18) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar17 * (longlong)*piVar18) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar17 * (longlong)*piVar18) >> 0x20) << 0x10);
      piVar13[1] = ((uint)((longlong)iVar20 * (longlong)piVar19[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar20 * (longlong)piVar19[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar15 * (longlong)piVar16[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar15 * (longlong)piVar16[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_18[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar17 * (longlong)piVar18[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar17 * (longlong)piVar18[1]) >> 0x20) << 0x10);
      piVar1 = piVar19 + 2;
      piVar2 = piVar16 + 2;
      piVar19 = piVar19 + 3;
      piVar16 = piVar16 + 3;
      piVar3 = piVar18 + 2;
      piVar18 = piVar18 + 3;
      piVar12 = piVar13 + 3;
      piVar13[2] = ((uint)((longlong)iVar20 * (longlong)*piVar1) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar1) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar15 * (longlong)*piVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar15 * (longlong)*piVar2) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_18[2]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[2]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar17 * (longlong)*piVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar17 * (longlong)*piVar3) >> 0x20) << 0x10);
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
  output = (SSurfaceNormal *)(piVar12 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar11 = output->unknown;
    if (0x17 < uVar11) {
      if (uVar11 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,output);
      }
      else if (uVar11 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SSurfacePackedNormal *)output);
      }
    }
    uVar11 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)output);
    output = (SSurfaceNormal *)(output->unk1 + ((uVar11 & 0xfffffffc) - 0x1c));
  } while (output->unknown != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}
