// Name: core_manpuz.cpp_FUN_004e5970
// Address: 004e5970
// Address Range: [[004e5970, 004e5e62]]
// Convention: unknown
// Signature: float core_manpuz_cpp_FUN_004e5970(int param_1,float *param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

float core_manpuz_cpp_FUN_004e5970(int param_1,float *param_2,uint param_3,float *param_4)

{
  int *piVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1114 [1005];
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  byte *puVar10;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_11c [5];
  uint uStack_108;
  byte auStack_fc [12];
  float fStack_f0;
  float afStack_ec [5];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  byte auStack_b4 [12];
  float fStack_a8;
  float afStack_a4 [5];
  float afStack_90 [3];
  float fStack_84;
  float afStack_78 [3];
  float afStack_6c [3];
  uint uStack_60;
  float afStack_54 [3];
  uint uStack_48;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int *piStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  fStack_1c = 1.01;
  puVar4 = (uint *)&pCVar2->field_0x338;
  puVar5 = &stack0xfffffebc;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iStack_34 = param_1 + 0xbfc;
  iStack_28 = 0;
  piStack_24 = (int *)(param_1 + 0x74c);
  do {
    piVar1 = piStack_24;
    if (*piStack_24 != 0) {
      fStack_a8 = *param_2 - (float)piStack_24[3];
      afStack_a4[0] = param_2[1] - (float)piStack_24[4];
      pfVar8 = afStack_a4 + 0xb;
      afStack_a4[1] = param_2[2] - (float)piStack_24[5];
      afStack_78[0] = *param_2 - (float)piStack_24[3];
      afStack_a4[(uint)bVar6 * -2 + 0xc] = afStack_a4[(uint)bVar6 * -2];
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
           afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      piStack_2c = piVar1 + 9;
      core_dirmat_cpp_FUN_004495a0(piStack_2c,pfVar8);
      piVar1 = piStack_2c;
      afStack_90[0] = afStack_a4[2];
      afStack_a4[(uint)bVar6 * -2 + 6] = afStack_a4[(uint)bVar6 * -2 + 3];
      uVar9 = param_3;
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_dirmat_cpp_FUN_004495a0(piVar1,uVar9);
      puVar10 = auStack_b4;
      pfVar8 = afStack_a4 + 0xe;
      pfVar7 = afStack_a4 + 5;
      puVar4 = &stack0xfffffebc;
      afStack_6c[0] = (float)uStack_108;
      afStack_a4[(uint)bVar6 * -2 + 0xf] = afStack_ec[(uint)bVar6 * -2 + -6];
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -5];
      fStack_14c = (float)core_box_cpp_FUN_0041af70(puVar4,pfVar7,pfVar8,puVar10);
      fStack_14 = fStack_14c;
      if ((0.0 <= fStack_14c) && (fStack_14c < fStack_1c)) {
        fStack_1c = fStack_14c;
        core_dirmat_cpp_FUN_00449530(piStack_2c,auStack_b4);
        fStack_120 = fStack_84;
        *(float *)(auStack_fc + (uint)bVar6 * -8 + -0x20) = afStack_a4[(uint)bVar6 * -2 + 9];
        *(float *)(auStack_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + -0x1c) =
             afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
        if (param_4 != &fStack_120) {
          *param_4 = fStack_120;
          param_4[1] = afStack_11c[0];
          param_4[2] = afStack_11c[1];
        }
      }
    }
    iStack_3c = iStack_34 + iStack_28;
    iStack_18 = 0;
    do {
      iVar3 = iStack_3c + 0x3c + iStack_18;
      fStack_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50(iVar3,param_2,param_3);
      fStack_148 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        fStack_f0 = -*(float *)(iVar3 + 0x24);
        afStack_ec[0] = -*(float *)(iVar3 + 0x28);
        afStack_ec[1] = -*(float *)(iVar3 + 0x2c);
        fStack_d8 = -*(float *)(iVar3 + 0x24);
        afStack_ec[(uint)bVar6 * -2 + 6] = afStack_ec[(uint)bVar6 * -2];
        afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (param_4 != afStack_ec + 5) {
          *param_4 = fStack_d8;
          param_4[1] = fStack_d4;
          param_4[2] = fStack_d0;
        }
      }
      iStack_18 = iStack_18 + 0x38;
    } while (iStack_18 != 0x70);
    iStack_28 = iStack_28 + 0xb8;
    piStack_24 = piStack_24 + 0x19;
  } while (iStack_28 != 0x8a0);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x5ac));
  if (&stack0xfffffebc != (uint *)&pCVar2->field_0x338) {
    uStack_144 = *(uint *)&pCVar2->field_0x338;
    uStack_140 = *(uint *)&pCVar2->field_0x33c;
    uStack_13c = *(uint *)&pCVar2->field_0x340;
  }
  if (&stack0xfffffec8 != (uint *)&pCVar2->field_0x344) {
    uStack_138 = *(uint *)&pCVar2->field_0x344;
    uStack_134 = *(uint *)&pCVar2->field_0x348;
    uStack_130 = *(uint *)&pCVar2->field_0x34c;
  }
  iStack_20 = param_1 + 0x149c;
  iStack_38 = param_1 + 0x155c;
  do {
    iVar3 = iStack_20;
    if (0.0 < *(float *)(iStack_20 + 0x18)) {
      fStack_12c = *param_2 - *(float *)(iStack_20 + 0x1c);
      fStack_128 = param_2[1] - *(float *)(iStack_20 + 0x20);
      pfVar8 = afStack_11c + 2;
      fStack_124 = param_2[2] - *(float *)(iStack_20 + 0x24);
      afStack_11c[2] = fStack_12c;
      afStack_11c[(uint)bVar6 * 0xfffffffe + 3] = (&stack0xfffffed8)[(uint)bVar6 * 0xfffffffe];
      afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8] =
           *(float *)((int)&stack0xfffffedc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      iStack_30 = iVar3 + 0x34;
      core_dirmat_cpp_FUN_004495a0(iStack_30,pfVar8);
      afStack_ec[2] = (float)uStack_48;
      afStack_ec[(uint)bVar6 * -2 + 3] = afStack_a4[(uint)bVar6 * -2 + 0x18];
      afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      core_dirmat_cpp_FUN_004495a0(iStack_30,param_3);
      puVar10 = auStack_fc;
      pfVar7 = afStack_a4 + 0x14;
      pfVar8 = afStack_ec + 2;
      puVar4 = &stack0xfffffebc;
      afStack_54[0] = (float)uStack_60;
      afStack_a4[(uint)bVar6 * -2 + 0x15] = afStack_a4[(uint)bVar6 * -2 + 0x12];
      afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13];
      fStack_14 = (float)core_box_cpp_FUN_0041af70(puVar4,pfVar8,pfVar7,puVar10);
      fStack_150 = fStack_14;
      if ((0.0 <= fStack_14) && (fStack_14 < fStack_1c)) {
        fStack_1c = fStack_14;
        core_dirmat_cpp_FUN_00449530(iStack_30,auStack_fc);
        fStack_cc = fStack_c0;
        afStack_ec[(uint)bVar6 * -2 + 9] = afStack_ec[(uint)bVar6 * -2 + 0xc];
        afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_ec[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (param_4 != afStack_ec + 8) {
          *param_4 = fStack_cc;
          param_4[1] = fStack_c8;
          param_4[2] = fStack_c4;
        }
      }
    }
    iStack_20 = iStack_20 + 0x60;
  } while (iStack_20 != iStack_38);
  return fStack_1c;
}
