// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
// Address Range: [[00501f30, 0050231e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  SSurfaceNormal *output;
  int *piVar18;
  CVector3i *vertex_data;
  int *piVar19;
  int iVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iStack_34;
  int local_2c;
  int *local_28;
  int local_1c;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar12 = header[1].base.type;
  uVar10 = header[1].base.count;
  uVar15 = (int)uVar10 >> 0x1f;
  uVar10 = uVar10 ^ uVar15;
  uVar11 = uVar10 / uVar12;
  if (0x7ffe < uVar11) {
    uVar11 = 0x7fff;
  }
  uVar15 = ((uint)(((ulonglong)uVar10 % (ulonglong)uVar12 << 0x20) / (ulonglong)uVar12) >> 0x10 |
           uVar11 << 0x10) ^ uVar15;
  iVar16 = (int)uVar15 >> 0x10;
  uVar15 = uVar15 & 0xffff;
  local_1c = iVar16 + 1;
  iVar20 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar12);
  if (iVar20 <= local_1c) {
    local_1c = 0;
  }
  local_1c = local_1c + 1;
  if (header->child_count <= local_1c) {
    local_1c = 0;
  }
  iVar20 = iVar16 + -1;
  if (iVar20 < 0) {
    iVar20 = header->child_count + -1;
  }
  iVar4 = header[1].child_count;
  if (*(int *)(iVar4 + 8) != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x16b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  fVar21 = (float10)uVar15 * (float10)1.52587890625e-05;
  fVar22 = fVar21 * fVar21;
  fVar23 = fVar22 * fVar21;
  fVar6 = (float10)2.0f;
  fVar7 = (float10)-1.5f;
  fVar8 = (float10)0.5f;
  fVar24 = ((fVar23 * (float10)-0.5f + fVar22) - (float10)(float)(fVar21 * fVar8)) *
           (float10)65536;
  fVar25 = ((float10)1 +
           fVar22 * (float10)-2.5f + fVar23 * (float10)1.5f) *
           (float10)65536;
  fVar9 = (float10)65536;
  piVar13 = (int *)(header[1].child_count + 0x14);
  piVar17 = (int *)((&header[0x17].base.count)[iVar16] + 0x14);
  piVar18 = (int *)((&header[0x17].base.count)[local_1c] + 0x14);
  piVar19 = (int *)((&header[0x17].base.count)[iVar20] + 0x14);
  iVar5 = *(int *)(iVar4 + 0x10);
  uVar31 = 0x502101;
  dVar26 = crt_math_c_round_FUN_005fe6b0
                     ((double)((fVar23 * (float10)0.5f -
                               fVar22 * (float10)0.5f) * (float10)65536
                              ));
  local_28 = (int *)(int)ROUND(dVar26);
  uVar30 = 0x50210c;
  dVar26 = crt_math_c_round_FUN_005fe6b0((double)fVar24);
  fVar24 = (float10)dVar26;
  uVar29 = 0x502113;
  dVar26 = crt_math_c_round_FUN_005fe6b0((double)fVar25);
  uVar28 = 0x50211a;
  dVar27 = crt_math_c_round_FUN_005fe6b0
                     ((double)((fVar23 * fVar7 + fVar22 * fVar6 + (float10)(float)(fVar21 * fVar8))
                              * fVar9));
  iVar20 = (int)ROUND(fVar24);
  iVar16 = (int)ROUND(dVar26);
  iVar4 = (int)ROUND(dVar27);
  piVar14 = piVar13;
  if (0 < iVar5) {
    do {
      *piVar14 = ((uint)((longlong)iVar20 * (longlong)*piVar19) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar19) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar16 * (longlong)*piVar17) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar17) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar4 * (longlong)*local_28) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar4 * (longlong)*local_28) >> 0x20) << 0x10) +
                 ((uint)((longlong)iStack_34 * (longlong)*piVar18) >> 0x10 |
                 (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar18) >> 0x20) << 0x10);
      piVar14[1] = ((uint)((longlong)iVar20 * (longlong)piVar19[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar20 * (longlong)piVar19[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar16 * (longlong)piVar17[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar16 * (longlong)piVar17[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_28[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iStack_34 * (longlong)piVar18[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iStack_34 * (longlong)piVar18[1]) >> 0x20) << 0x10);
      piVar1 = piVar19 + 2;
      piVar2 = piVar17 + 2;
      piVar19 = piVar19 + 3;
      piVar17 = piVar17 + 3;
      piVar3 = piVar18 + 2;
      piVar18 = piVar18 + 3;
      piVar13 = piVar14 + 3;
      piVar14[2] = ((uint)((longlong)iVar20 * (longlong)*piVar1) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar20 * (longlong)*piVar1) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar16 * (longlong)*piVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar2) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_28[2]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[2]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iStack_34 * (longlong)*piVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar3) >> 0x20) << 0x10);
      local_2c = local_2c + 1;
      local_28 = local_28 + 3;
      piVar14 = piVar13;
    } while (local_2c < *(int *)(uVar15 + 8));
  }
  if (*piVar13 != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("ZBP not found!",uVar28,uVar29,uVar30,uVar31);
  }
  output = (SSurfaceNormal *)(piVar13 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar12 = output->unknown;
    if (0x17 < uVar12) {
      if (uVar12 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,output);
      }
      else if (uVar12 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SSurfacePackedNormal *)output);
      }
    }
    uVar12 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)output);
    output = (SSurfaceNormal *)(output->unk1 + ((uVar12 & 0xfffffffc) - 0x1c));
  } while (output->unknown != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}
