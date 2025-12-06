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
  float fVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *extraout_ECX;
  int *piVar10;
  uint uVar11;
  int *unaff_EBX;
  int iVar12;
  int *piVar13;
  SSurfaceNormal *output;
  int unaff_ESI;
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
  int local_18;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar9 = header[1].base.type;
  uVar6 = header[1].base.count;
  uVar11 = (int)uVar6 >> 0x1f;
  uVar6 = uVar6 ^ uVar11;
  uVar7 = uVar6 / uVar9;
  if (0x7ffe < uVar7) {
    uVar7 = 0x7fff;
  }
  uVar11 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar9 << 0x20) / (ulonglong)uVar9) >> 0x10 |
           uVar7 << 0x10) ^ uVar11;
  iVar12 = (int)uVar11 >> 0x10;
  local_18 = iVar12 + 1;
  iVar16 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar9);
  if (iVar16 <= local_18) {
    local_18 = 0;
  }
  local_18 = local_18 + 1;
  if (header->child_count <= local_18) {
    local_18 = 0;
  }
  iVar16 = iVar12 + -1;
  if (iVar16 < 0) {
    iVar16 = header->child_count + -1;
  }
  piVar8 = (int *)(header[1].child_count + 8);
  if (*piVar8 != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x16b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  fVar17 = (float10)(uVar11 & 0xffff) * (float10)1.52587890625e-05;
  fVar18 = fVar17 * fVar17;
  fVar19 = fVar18 * fVar17;
  fVar5 = (float)(fVar17 * (float10)0.5f);
  fVar20 = ((fVar19 * (float10)-0.5f + fVar18) - (float10)fVar5) *
           (float10)65536;
  fVar17 = (fVar19 * (float10)0.5f - fVar18 * (float10)0.5f) *
           (float10)65536;
  fVar21 = ((float10)1 +
           fVar18 * (float10)-2.5f + fVar19 * (float10)1.5f) *
           (float10)65536;
  fVar18 = (fVar19 * (float10)-1.5f + fVar18 * (float10)2f +
           (float10)fVar5) * (float10)65536;
  piVar13 = (int *)((&header[0x17].base.count)[iVar12] + 0x14);
  piVar14 = (int *)((&header[0x17].base.count)[local_18] + 0x14);
  piVar15 = (int *)((&header[0x17].base.count)[iVar16] + 0x14);
  dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(piVar8[2],piVar8));
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  dVar22 = crt_math_c_round_FUN_005fe6b0(dVar22);
  iVar16 = (int)ROUND(fVar20);
  iVar12 = (int)ROUND(fVar21);
  iVar4 = (int)ROUND(fVar18);
  piVar8 = extraout_ECX;
  piVar10 = extraout_ECX;
  if ((int)((ulonglong)dVar22 >> 0x20) != 0 && -1 < (longlong)dVar22) {
    do {
      *piVar8 = ((uint)((longlong)iVar16 * (longlong)*piVar15) >> 0x10 |
                (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar15) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar12 * (longlong)*piVar13) >> 0x10 |
                (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar13) >> 0x20) << 0x10) +
                ((uint)((longlong)iVar4 * (longlong)*unaff_EBX) >> 0x10 |
                (int)((ulonglong)((longlong)iVar4 * (longlong)*unaff_EBX) >> 0x20) << 0x10) +
                ((uint)((longlong)(int)fVar5 * (longlong)*piVar14) >> 0x10 |
                (int)((ulonglong)((longlong)(int)fVar5 * (longlong)*piVar14) >> 0x20) << 0x10);
      piVar8[1] = ((uint)((longlong)iVar16 * (longlong)piVar15[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar16 * (longlong)piVar15[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar12 * (longlong)piVar13[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)piVar13[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)unaff_EBX[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EBX[1]) >> 0x20) << 0x10) +
                  ((uint)((longlong)(int)fVar5 * (longlong)piVar14[1]) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)fVar5 * (longlong)piVar14[1]) >> 0x20) << 0x10);
      piVar1 = piVar15 + 2;
      piVar2 = piVar13 + 2;
      piVar15 = piVar15 + 3;
      piVar13 = piVar13 + 3;
      piVar3 = piVar14 + 2;
      piVar14 = piVar14 + 3;
      piVar10 = piVar8 + 3;
      piVar8[2] = ((uint)((longlong)iVar16 * (longlong)*piVar1) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar16 * (longlong)*piVar1) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar12 * (longlong)*piVar2) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar12 * (longlong)*piVar2) >> 0x20) << 0x10) +
                  ((uint)((longlong)iVar4 * (longlong)unaff_EBX[2]) >> 0x10 |
                  (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EBX[2]) >> 0x20) << 0x10) +
                  ((uint)((longlong)(int)fVar5 * (longlong)*piVar3) >> 0x10 |
                  (int)((ulonglong)((longlong)(int)fVar5 * (longlong)*piVar3) >> 0x20) << 0x10);
      unaff_ESI = unaff_ESI + 1;
      unaff_EBX = unaff_EBX + 3;
      piVar8 = piVar10;
    } while (unaff_ESI < *(int *)((int)ROUND(fVar17) + 8));
  }
  if (*piVar10 != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("ZBP not found!");
  }
  output = (SSurfaceNormal *)(piVar10 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar9 = output->unknown;
    if (0x17 < uVar9) {
      if (uVar9 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,output);
      }
      else if (uVar9 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SSurfacePackedNormal *)output);
      }
    }
    uVar9 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)output);
    output = (SSurfaceNormal *)(output->field7_0x1c + ((uVar9 & 0xfffffffc) - 0x1c));
  } while (output->unknown != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}
