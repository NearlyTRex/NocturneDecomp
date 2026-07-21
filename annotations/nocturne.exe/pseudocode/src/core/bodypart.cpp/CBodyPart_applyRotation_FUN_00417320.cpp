// Name: core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320
// Address: 00417320
// Address Range: [[00417320, 00417724]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00417320(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_applyRotation_FUN_00417320(int param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte auStack_1b8 [48];
  byte auStack_188 [48];
  byte auStack_158 [48];
  uint auStack_128 [12];
  uint auStack_f8 [12];
  byte auStack_c8 [36];
  byte local_a4 [4];
  byte local_a0 [12];
  byte local_94 [8];
  float local_8c;
  byte local_88 [12];
  byte local_7c [12];
  byte local_70 [12];
  int local_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  uint local_1c;
  
  bVar10 = 0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_a4,param_2);
  fVar11 = (float10)round();
  local_30 = (int)ROUND(fVar11);
  fVar12 = (float10)local_8c;
  fVar11 = (float10)_DAT_005790c2;
  fVar13 = (float10)round();
  local_30 = (int)ROUND(fVar13);
  fVar13 = (float10)_DAT_005790c2;
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x16c);
  fVar14 = (float10)round();
  fVar15 = (float10)round();
  fVar16 = (float10)round();
  uVar22 = 0x4173fe;
  fVar17 = (float10)round();
  uVar21 = 0x417405;
  fVar18 = (float10)round();
  uVar20 = 0x41740c;
  fVar11 = (float10)round(fVar12 * fVar11);
  uVar19 = 0x417413;
  fVar13 = (float10)round((float10)local_8c * fVar13);
  iStack_48 = (int)ROUND(fVar14);
  iStack_5c = (int)ROUND(fVar15);
  local_58 = (int)ROUND(fVar16);
  local_3c = (int)ROUND(fVar17);
  iStack_54 = (int)ROUND(fVar18);
  iStack_44 = (int)ROUND(fVar11);
  local_38 = (int)ROUND(fVar13);
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x170);
      lVar2 = (longlong)iStack_50 * (longlong)*(int *)(iVar1 + iVar7);
      lVar3 = (longlong)iStack_5c * (longlong)*(int *)(iVar1 + 4 + iVar7);
      lVar4 = (longlong)iStack_54 * (longlong)*(int *)(iVar1 + 8 + iVar7);
      local_64 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)local_4c * (longlong)*(int *)(iVar1 + iVar7);
      lVar3 = (longlong)local_58 * (longlong)*(int *)(iVar1 + 4 + iVar7);
      lVar4 = (longlong)iStack_44 * (longlong)*(int *)(iVar1 + 8 + iVar7);
      iStack_60 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      lVar2 = (longlong)iStack_48 * (longlong)*(int *)(iVar1 + iVar7);
      lVar3 = (longlong)local_3c * (longlong)*(int *)(iVar1 + 4 + iVar7);
      lVar4 = (longlong)local_38 * (longlong)*(int *)(iVar1 + 8 + iVar7);
      *(int *)(iVar1 + iVar7) = local_64;
      *(uint *)(iVar1 + 8 + iVar7) =
           ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
           ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
           ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      *(int *)(iVar1 + 4 + iVar7) = iStack_60;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < *(int *)(param_1 + 0x16c));
  }
  puVar6 = (uint *)(param_1 + 0x30);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (auStack_188,&DAT_02dd1184,puVar6,uVar19,uVar20,uVar21,uVar22);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(auStack_158,&DAT_02dd1184,local_1c);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_188,auStack_158);
  puVar5 = auStack_f8;
  puVar9 = auStack_128;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  puVar5 = (uint *)core_xform_cpp_matrixToEulerAnglesZYX_FUN_0055b6c0(auStack_128,local_70);
  if (puVar6 != puVar5) {
    *puVar6 = *puVar5;
    *(uint *)(param_1 + 0x34) = puVar5[1];
    *(uint *)(param_1 + 0x38) = puVar5[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x744)) {
    puVar6 = (uint *)(param_1 + 0x748);
    do {
      puVar5 = (uint *)
               core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (auStack_c8,local_88,puVar6);
      if (puVar6 != puVar5) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
      }
      iVar7 = iVar7 + 1;
      puVar5 = (uint *)
               core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_94,puVar6);
      puVar6[0xb] = *puVar5;
      puVar6[0xc] = puVar5[1];
      puVar6[0xd] = puVar5[2];
      puVar6 = puVar6 + 0xaa;
    } while (iVar7 < *(int *)(param_1 + 0x744));
  }
  local_40 = 0;
  if (0 < *(int *)(param_1 + 0x284)) {
    puVar6 = (uint *)(param_1 + 0x288);
    do {
      puVar5 = (uint *)
               core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (auStack_c8,local_7c,puVar6);
      if (puVar6 != puVar5) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
      }
      puVar9 = puVar6 + 3;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (auStack_1b8,&DAT_02dd1184,puVar9);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_1b8,auStack_158);
      puVar5 = (uint *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(auStack_158,local_a0);
      if (puVar9 != puVar5) {
        *puVar9 = *puVar5;
        puVar6[4] = puVar5[1];
        puVar6[5] = puVar5[2];
      }
      puVar6 = puVar6 + 0x65;
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)(param_1 + 0x284));
  }
  return;
}
