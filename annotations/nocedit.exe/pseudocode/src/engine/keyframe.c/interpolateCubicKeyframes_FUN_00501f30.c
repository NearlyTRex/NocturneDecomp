// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
// Address Range: [[00501f30, 0050231e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended * header)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *extraout_ECX;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int extraout_EDX;
  int iVar11;
  int *piVar12;
  SSurfaceNormal *output;
  int *piVar13;
  CVector3i *vertex_data;
  int *piVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iStack_34;
  int local_2c;
  int *local_28;
  int local_1c;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar7 = header[1].base.type;
  uVar5 = header[1].base.count;
  uVar10 = (int)uVar5 >> 0x1f;
  uVar5 = uVar5 ^ uVar10;
  uVar6 = uVar5 / uVar7;
  if (0x7ffe < uVar6) {
    uVar6 = 0x7fff;
  }
  uVar10 = ((uint)(((ulonglong)uVar5 % (ulonglong)uVar7 << 0x20) / (ulonglong)uVar7) >> 0x10 |
           uVar6 << 0x10) ^ uVar10;
  iVar11 = (int)uVar10 >> 0x10;
  uVar10 = uVar10 & 0xffff;
  local_1c = iVar11 + 1;
  iVar15 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar7);
  if (iVar15 <= local_1c) {
    local_1c = 0;
  }
  local_1c = local_1c + 1;
  if (header->child_count <= local_1c) {
    local_1c = 0;
  }
  iVar15 = iVar11 + -1;
  if (iVar15 < 0) {
    iVar15 = header->child_count + -1;
  }
  if (*(int *)(header[1].child_count + 8) != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x16b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  fVar16 = (float10)uVar10 * (float10)1.52587890625e-05;
  fVar17 = fVar16 * fVar16;
  fVar18 = fVar17 * fVar16;
  fVar19 = ((fVar18 * (float10)-0.5f + fVar17) -
           (float10)(float)(fVar16 * (float10)0.5f)) * (float10)65536;
  fVar20 = ((float10)1 +
           fVar17 * (float10)-2.5f + fVar18 * (float10)1.5f) *
           (float10)65536;
  fVar16 = (fVar18 * (float10)-1.5f + fVar17 * (float10)2f +
           (float10)(float)(fVar16 * (float10)0.5f)) * (float10)65536;
  piVar12 = (int *)((&header[0x17].base.count)[iVar11] + 0x14);
  piVar13 = (int *)((&header[0x17].base.count)[local_1c] + 0x14);
  piVar14 = (int *)((&header[0x17].base.count)[iVar15] + 0x14);
  uVar25 = 0x502101;
  dVar21 = crt_math_c_round_FUN_005fe6b0
                     ((double)((fVar18 * (float10)0.5f -
                               fVar17 * (float10)0.5f) * (float10)65536
                              ));
  local_28 = (int *)(int)ROUND(dVar21);
  uVar24 = 0x50210c;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)fVar19);
  fVar17 = (float10)dVar21;
  uVar23 = 0x502113;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)fVar20);
  fVar18 = (float10)dVar21;
  uVar22 = 0x50211a;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)fVar16);
  iVar15 = (int)ROUND(fVar17);
  iVar11 = (int)ROUND(fVar18);
  iVar4 = (int)ROUND(dVar21);
  piVar8 = extraout_ECX;
  piVar9 = extraout_ECX;
  if (0 < extraout_EDX) {
    do {
      *piVar8 = ((uint)((longlong)iVar15 * (longlong)*piVar14) >> 0x10 |
                (int)((ulonglong)((longlong)iVar15 * (longlong)*piVar14) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar11 * (longlong)*piVar12) >> 0x10 |
                (int)((ulonglong)((longlong)iVar11 * (longlong)*piVar12) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar4 * (longlong)*local_28) >> 0x10 |
                (int)((ulonglong)((longlong)iVar4 * (longlong)*local_28) >> 0x20) << 0x10) +
                ((uint)((longlong)iStack_34 * (longlong)*piVar13) >> 0x10 |
                (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar13) >> 0x20) << 0x10);
      piVar8[1] = ((uint)((longlong)iVar15 * (longlong)piVar14[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar15 * (longlong)piVar14[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar11 * (longlong)piVar12[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar11 * (longlong)piVar12[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)local_28[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iStack_34 * (longlong)piVar13[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iStack_34 * (longlong)piVar13[1]) >> 0x20) << 0x10);
      piVar1 = piVar14 + 2;
      piVar2 = piVar12 + 2;
      piVar14 = piVar14 + 3;
      piVar12 = piVar12 + 3;
      piVar3 = piVar13 + 2;
      piVar13 = piVar13 + 3;
      piVar9 = piVar8 + 3;
      piVar8[2] = ((uint)((longlong)iVar15 * (longlong)*piVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar15 * (longlong)*piVar1) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar11 * (longlong)*piVar2) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar11 * (longlong)*piVar2) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)local_28[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[2]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iStack_34 * (longlong)*piVar3) >> 0x10 |
                  (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar3) >> 0x20) << 0x10);
      local_2c = local_2c + 1;
      local_28 = local_28 + 3;
      piVar8 = piVar9;
    } while (local_2c < *(int *)(uVar10 + 8));
  }
  if (*piVar9 != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("ZBP not found!",uVar22,uVar23,uVar24,uVar25);
  }
  output = (SSurfaceNormal *)(piVar9 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar7 = output->unknown;
    if (0x17 < uVar7) {
      if (uVar7 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,output);
      }
      else if (uVar7 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SSurfacePackedNormal *)output);
      }
    }
    uVar7 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)output);
    output = (SSurfaceNormal *)(output->field7_0x1c + ((uVar7 & 0xfffffffc) - 0x1c));
  } while (output->unknown != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}
