// Name: engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30
// Address: 00501f30
// Address Range: [[00501f30, 0050231e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_00501f30(SMRGLHeaderExtended *header)

#include "nocturne.h"

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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  int *piVar24;
  SSurfaceNormal *output;
  int *piVar25;
  CVector3i *vertex_data;
  int *piVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iStack_34;
  int local_2c;
  int *local_28;
  int local_1c;
  
  if (header[1].child_count == 0) {
    engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40((SMRGLKeyframeModel *)header);
  }
  uVar19 = header[1].base.type;
  uVar17 = header[1].base.count;
  uVar22 = (int)uVar17 >> 0x1f;
  uVar17 = uVar17 ^ uVar22;
  uVar18 = uVar17 / uVar19;
  if (0x7ffe < uVar18) {
    uVar18 = 0x7fff;
  }
  uVar22 = ((uint)(((ulonglong)uVar17 % (ulonglong)uVar19 << 0x20) / (ulonglong)uVar19) >> 0x10 |
           uVar18 << 0x10) ^ uVar22;
  iVar23 = (int)uVar22 >> 0x10;
  uVar22 = uVar22 & 0xffff;
  local_1c = iVar23 + 1;
  iVar27 = header->child_count;
  header[1].base.count = g_AnimationTimerValue % (int)(header->child_count * uVar19);
  if (iVar27 <= local_1c) {
    local_1c = 0;
  }
  local_1c = local_1c + 1;
  if (header->child_count <= local_1c) {
    local_1c = 0;
  }
  iVar27 = iVar23 + -1;
  if (iVar27 < 0) {
    iVar27 = header->child_count + -1;
  }
  iVar4 = header[1].child_count;
  if (*(int *)(iVar4 + 8) != 2) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x16b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad keyframe 1");
  }
  fVar15 = (float)uVar22 * (float)1.52587890625e-05;
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
  piVar20 = (int *)(header[1].child_count + 0x14);
  piVar24 = (int *)((&header[0x17].base.count)[iVar23] + 0x14);
  piVar25 = (int *)((&header[0x17].base.count)[local_1c] + 0x14);
  piVar26 = (int *)((&header[0x17].base.count)[iVar27] + 0x14);
  iVar5 = *(int *)(iVar4 + 0x10);
  uVar34 = 0x502101;
  dVar28 = round
                     ((double)((fVar9 * 0.5f - fVar16 * 0.5f) *
                              (float)65536));
  local_28 = (int *)(int)ROUND(dVar28);
  uVar33 = 0x50210c;
  dVar28 = round((double)(((fVar10 + fVar16) - fVar15) * fVar14));
  uVar32 = 0x502113;
  dVar29 = round((double)((fVar13 + fVar11 + 1.0) * fVar12));
  uVar31 = 0x50211a;
  dVar30 = round((double)((fVar8 + fVar6 + fVar15) * fVar7));
  iVar27 = (int)ROUND(dVar28);
  iVar23 = (int)ROUND(dVar29);
  iVar4 = (int)ROUND(dVar30);
  piVar21 = piVar20;
  if (0 < iVar5) {
    do {
      *piVar21 = ((uint)((longlong)iVar27 * (longlong)*piVar26) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar27 * (longlong)*piVar26) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar23 * (longlong)*piVar24) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar23 * (longlong)*piVar24) >> 0x20) << 0x10) +
                 ((uint)((longlong)iVar4 * (longlong)*local_28) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar4 * (longlong)*local_28) >> 0x20) << 0x10) +
                 ((uint)((longlong)iStack_34 * (longlong)*piVar25) >> 0x10 |
                 (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar25) >> 0x20) << 0x10);
      piVar21[1] = ((uint)((longlong)iVar27 * (longlong)piVar26[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar27 * (longlong)piVar26[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar23 * (longlong)piVar24[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar23 * (longlong)piVar24[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_28[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[1]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iStack_34 * (longlong)piVar25[1]) >> 0x10 |
                   (int)((ulonglong)((longlong)iStack_34 * (longlong)piVar25[1]) >> 0x20) << 0x10);
      piVar1 = piVar26 + 2;
      piVar2 = piVar24 + 2;
      piVar26 = piVar26 + 3;
      piVar24 = piVar24 + 3;
      piVar3 = piVar25 + 2;
      piVar25 = piVar25 + 3;
      piVar20 = piVar21 + 3;
      piVar21[2] = ((uint)((longlong)iVar27 * (longlong)*piVar1) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar27 * (longlong)*piVar1) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar23 * (longlong)*piVar2) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar23 * (longlong)*piVar2) >> 0x20) << 0x10) +
                   ((uint)((longlong)iVar4 * (longlong)local_28[2]) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar4 * (longlong)local_28[2]) >> 0x20) << 0x10) +
                   ((uint)((longlong)iStack_34 * (longlong)*piVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)iStack_34 * (longlong)*piVar3) >> 0x20) << 0x10);
      local_2c = local_2c + 1;
      local_28 = local_28 + 3;
      piVar21 = piVar20;
    } while (local_2c < *(int *)(uVar22 + 8));
  }
  if (*piVar20 != 0x17) {
    g_CurrentFilename = "..\\engine\\keyframe.c";
    g_CurrentLineNumber = 0x1a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("ZBP not found!",uVar31,uVar32,uVar33,uVar34);
  }
  output = (SSurfaceNormal *)(piVar20 + 3);
  vertex_data = (CVector3i *)(header[1].child_count + 0x14);
  do {
    uVar19 = output->unknown;
    if (0x17 < uVar19) {
      if (uVar19 < 0x19) {
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(vertex_data,output);
      }
      else if (uVar19 == 0x19) {
        engine_keyframe_c_calculatePackedSurfaceNormal_FUN_00501a00
                  (vertex_data,(SSurfacePackedNormal *)output);
      }
    }
    uVar19 = engine_model_c_getMRGLSize_FUN_00528700((SMRGLHeaderExtended *)output);
    output = (SSurfaceNormal *)(output->unk1 + ((uVar19 & 0xfffffffc) - 0x1c));
  } while (output->unknown != 0);
  engine_3d_c_dispatchMRGLBlockChain_FUN_00407890((SMRGLHeaderExtended *)header[1].child_count);
  return (SMRGLHeaderExtended *)&header[0x1c].child_count;
}
