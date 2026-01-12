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
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *extraout_ECX;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int extraout_EDX;
  int iVar12;
  int *piVar13;
  SSurfaceNormal *output;
  int *piVar14;
  CVector3i *vertex_data;
  int *piVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int local_24;
  int local_1c;
  int *local_18;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar8 = header[1].base.type;
  uVar6 = header[1].base.count;
  uVar11 = (int)uVar6 >> 0x1f;
  uVar6 = uVar6 ^ uVar11;
  uVar7 = uVar6 / uVar8;
  if (0x7ffe < uVar7) {
    uVar7 = 0x7fff;
  }
  uVar11 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar8 << 0x20) / (ulonglong)uVar8) >> 0x10 |
           uVar7 << 0x10) ^ uVar11;
  iVar12 = (int)uVar11 >> 0x10;
  uVar11 = uVar11 & 0xffff;
  local_1c = iVar12 + 1;
  iVar16 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar8);
  if (iVar16 <= local_1c) {
    local_1c = 0;
  }
  local_1c = local_1c + 1;
  if (header->child_count <= local_1c) {
    local_1c = 0;
  }
  iVar16 = iVar12 + -1;
  if (iVar16 < 0) {
    iVar16 = header->child_count + -1;
  }
  iVar5 = header[1].child_count;
  if (*(int *)(iVar5 + 8) != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x16b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  piVar9 = &header[0x17].base.count + local_1c;
  fVar17 = (float10)(int)uVar11 * (float10)1.52587890625e-05;
  fVar18 = fVar17 * fVar17;
  fVar19 = fVar18 * fVar17;
  fVar20 = ((fVar19 * (float10)-0.5f + fVar18) -
           (float10)(float)(fVar17 * (float10)0.5f)) * (float10)65536;
  fVar21 = ((float10)1 +
           fVar18 * (float10)-2.5f + fVar19 * (float10)1.5f) *
           (float10)65536;
  fVar17 = (fVar19 * (float10)-1.5f + fVar18 * (float10)2f +
           (float10)(float)(fVar17 * (float10)0.5f)) * (float10)65536;
  piVar13 = (int *)((&header[0x17].base.count)[iVar12] + 0x14);
  local_1c = 0;
  piVar14 = (int *)(*piVar9 + 0x14);
  piVar15 = (int *)((&header[0x17].base.count)[iVar16] + 0x14);
  dVar22 = crt_math_c_round_FUN_005fe6b0
                     ((double)((fVar19 * (float10)0.5f -
                               fVar18 * (float10)0.5f) * (float10)65536
                              ));
  local_18 = (int *)(int)ROUND(dVar22);
  uVar25 = 0x50210c;
  dVar22 = crt_math_c_round_FUN_005fe6b0((double)fVar20);
  fVar18 = (float10)dVar22;
  uVar24 = 0x502113;
  dVar22 = crt_math_c_round_FUN_005fe6b0((double)fVar21);
  fVar19 = (float10)dVar22;
  uVar23 = 0x50211a;
  dVar22 = crt_math_c_round_FUN_005fe6b0((double)fVar17);
  iVar16 = (int)ROUND(fVar18);
  iVar12 = (int)ROUND(fVar19);
  iVar4 = (int)ROUND(dVar22);
  piVar9 = extraout_ECX;
  piVar10 = extraout_ECX;
  if (0 < extraout_EDX) {
    do {
      *piVar9 = ((uint)((longlong)iVar16 * (longlong)*piVar15) >> 0x10 |
                (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar15) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar12 * (longlong)*piVar13) >> 0x10 |
                (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar13) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar4 * (longlong)*local_18) >> 0x10 |
                (int)((ulonglong)((longlong)iVar4 * (longlong)*local_18) >> 0x20) << 0x10) +
                ((uint)((longlong)local_24 * (longlong)*piVar14) >> 0x10 |
                (int)((ulonglong)((longlong)local_24 * (longlong)*piVar14) >> 0x20) << 0x10);
      piVar9[1] = ((uint)((longlong)iVar16 * (longlong)piVar15[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar16 * (longlong)piVar15[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar12 * (longlong)piVar13[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)piVar13[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)local_18[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)local_24 * (longlong)piVar14[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)local_24 * (longlong)piVar14[1]) >> 0x20) << 0x10);
      piVar1 = piVar15 + 2;
      piVar2 = piVar13 + 2;
      piVar15 = piVar15 + 3;
      piVar13 = piVar13 + 3;
      piVar3 = piVar14 + 2;
      piVar14 = piVar14 + 3;
      piVar10 = piVar9 + 3;
      piVar9[2] = ((uint)((longlong)iVar16 * (longlong)*piVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar1) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar12 * (longlong)*piVar2) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar2) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)local_18[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)local_18[2]) >> 0x20) << 0x10) +
                  ((uint)((longlong)local_24 * (longlong)*piVar3) >> 0x10 |
                  (int)((ulonglong)((longlong)local_24 * (longlong)*piVar3) >> 0x20) << 0x10);
      local_1c = local_1c + 1;
      local_18 = local_18 + 3;
      piVar9 = piVar10;
    } while (local_1c < *(int *)(iVar5 + 0x10));
  }
  if (*piVar10 != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("ZBP not found!",uVar23,uVar24,uVar25);
  }
  output = (SSurfaceNormal *)(piVar10 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar8 = output->unknown;
    if (0x17 < uVar8) {
      if (uVar8 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,output);
      }
      else if (uVar8 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SSurfacePackedNormal *)output);
      }
    }
    uVar8 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)output);
    output = (SSurfaceNormal *)(output->field7_0x1c + ((uVar8 & 0xfffffffc) - 0x1c));
  } while (output->unknown != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}
