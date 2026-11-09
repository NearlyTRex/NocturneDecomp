// Name: unkafter_stranger.cpp_FUN_00459ff0
// Address: 00459ff0
// Address Range: [[00459ff0, 0045ab3c]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_00459ff0(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_stranger_cpp_FUN_00459ff0(CDemonActor *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  byte *puVar10;
  byte bVar11;
  float afStackY_1170 [969];
  float fStack_230;
  byte auStack_228 [120];
  CMatrix3x3f aCStack_1b0 [40];
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [5];
  float fStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  float fStack_110;
  float afStack_10c [4];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [5];
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  CVector3f aCStack_8c [3];
  float fStack_64;
  float fStack_60;
  uint local_5c;
  float fStack_58;
  int local_54;
  float fStack_50;
  float *pfStack_4c;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  int iStack_30;
  float *local_2c;
  float fStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar11 = 0;
  local_2c = (float *)&param_1[0xdd].field_0x110;
  if (param_2 != 1) {
    if (*(int *)&param_1[0xdd].field_0x134 == 0) {
      *(uint *)&param_1[0xdd].field_0x11c = 0;
      *(uint *)&param_1[0xdd].field_0x114 = 0;
      iVar6 = *(int *)(&param_1[0xe].field_0x48 + param_2 * 0x78);
      uVar5 = 0;
      if (iVar6 != 0) {
        uVar5 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x7c))(iVar6);
      }
      if ((uVar5 & 4) == 0) {
        local_2c[2] = 0.0;
        *local_2c = 0.0;
        return;
      }
      local_54 = 3;
    }
    else {
      local_54 = *(int *)(*(int *)&param_1[0xdd].field_0x134 + 0x43c);
    }
    if (param_2 == 0) {
      local_34 = -1.3089969;
      local_38 = 0.5235988;
      local_5c = _DAT_01b4d264;
      uVar9 = _DAT_01b4d28c;
    }
    else {
      local_5c = _DAT_01b4d268;
      uVar9 = _DAT_01b4d290;
      if ((local_54 == 0) || (local_54 == 5)) {
        local_38 = 1.3089969;
        local_34 = -0.5235988;
      }
      else {
        local_38 = 0.5235988;
        local_34 = -0.5235988;
      }
    }
    fVar8 = *(float *)&param_1[0x62].field_0x1ac * _DAT_005d0527 * (float)_DAT_005d052f * param_3 +
            *local_2c;
    local_2c[1] = 0.0;
    *local_2c = fVar8;
    if (fVar8 < 0xBF860A92) {
      *local_2c = 0xBF860A92;
    }
    if (0x3F9C61AA < *local_2c) {
      *local_2c = 0x3F9C61AA;
    }
    if (local_2c[3] < local_34) {
      local_2c[3] = local_34;
    }
    if (local_38 < local_2c[3]) {
      local_2c[3] = local_38;
    }
    if (local_2c[1] < local_34) {
      local_2c[1] = local_34;
    }
    if (local_38 < local_2c[1]) {
      local_2c[1] = local_38;
    }
    local_2c[7] = 0.0;
    fStack_40 = local_2c[1];
    fStack_3c = *local_2c;
    if ((local_54 == 3) || (fVar8 = *(float *)&param_1[0xd6].field_0x100, fVar8 != 0.0)) {
      local_2c[3] = 0.0;
    }
    else {
      iVar6 = *(int *)&param_1[0xdd].field_0x134;
      fStack_128 = fVar8;
      fStack_124 = fVar8;
      fStack_120 = fVar8;
      if (iVar6 != 0) {
        (**(code **)(*(int *)(iVar6 + 0x2b0) + 0xe8))(iVar6);
        fStack_b0 = fStack_d4;
        afStack_ac[(uint)bVar11 * -2] = afStack_d0[(uint)bVar11 * -2];
        afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        if (&fStack_128 != &fStack_b0) {
          fStack_128 = fStack_b0;
          fStack_124 = afStack_ac[0];
          fStack_120 = afStack_ac[1];
        }
      }
      if ((local_54 == 0) || (local_54 == 5)) {
        core_skeleton_cpp_FUN_005469a0(param_1 + 1,local_5c);
        fStack_ec = afStack_178[2];
        afStack_10c[(uint)bVar11 * -2 + 9] = afStack_178[(uint)bVar11 * -2 + 3];
        afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
             afStack_178[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if (afStack_10c + 0xb != afStack_10c + 8) {
          fStack_e0 = fStack_ec;
          fStack_dc = fStack_e8;
          fStack_d8 = fStack_e4;
        }
      }
      else {
        core_skeleton_cpp_FUN_005469a0(param_1 + 1,uVar9);
        afStack_10c[2] = fStack_14c;
        afStack_10c[(uint)bVar11 * -2 + 3] = afStack_178[(uint)bVar11 * -2 + 0xc];
        afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
             afStack_178[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
        if (afStack_10c + 0xb != afStack_10c + 2) {
          fStack_e0 = afStack_10c[2];
          fStack_dc = afStack_10c[3];
          fStack_d8 = fStack_fc;
        }
      }
      core_actor_cpp_FUN_00408d70(param_1,afStack_10c + 0xb);
      pfVar4 = local_2c;
      aCStack_8c[0]._0_4_ = CStack_a4._0_4_;
      *(uint *)((int)aCStack_8c + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_a4 + (uint)bVar11 * -8 + 4);
      *(uint *)((int)aCStack_8c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)((int)&CStack_a4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      fStack_98 = *pfVar4;
      uStack_90 = 0;
      fStack_94 = local_2c[1];
      core_dirmat_cpp_FUN_00449280(aCStack_1b0,(CVector3f *)&fStack_98);
      uStack_114 = 0x3f800000;
      uStack_11c = 0;
      uStack_118 = 0;
      core_dirmat_cpp_FUN_00449530(aCStack_1b0,&uStack_11c);
      fStack_28 = 1e+30;
      iStack_48 = 0;
      iStack_44 = 0;
      fStack_17c = afStack_d0[2];
      afStack_178[(uint)bVar11 * -2] = afStack_d0[(uint)bVar11 * -2 + 3];
      afStack_178[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      pfStack_4c = (float *)&param_1->field_0x20;
      for (; iStack_48 < *(int *)&g_CDemonSetPtr->field_0x152f30; iStack_48 = iStack_48 + 1) {
        iVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(uint *)(&g_CDemonSetPtr->field_0x152f34 + iStack_44),
                           g_CCharacterClassInfo.name_hash);
        if ((iVar6 == 0) ||
           (((iVar7 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x114))(iVar6), iVar7 == 0 &&
             (iVar7 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x78))(iVar6), iVar7 == 0)) &&
            (fVar8 = *pfStack_4c - *(float *)(iVar6 + 0x20),
            fVar2 = pfStack_4c[1] - *(float *)(iVar6 + 0x24),
            fVar1 = pfStack_4c[2] - *(float *)(iVar6 + 0x28),
            SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar8 * fVar8) <= (float)_DAT_005d0557)))) {
          pCStack_24 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x152f34 + iStack_44);
          __arrinit(auStack_228,10,&g_CVectorTypeInfo);
          iStack_30 = (**(code **)(*(int *)&pCStack_24->field_0x2b0 + 0x5c))(pCStack_24,auStack_228)
          ;
          if ((0 < iStack_30) && (iStack_20 = 0, 0 < iStack_30)) {
            puVar10 = auStack_228;
            do {
              core_actor_cpp_FUN_00408d70(pCStack_24,puVar10);
              CStack_bc._0_4_ = CStack_188._0_4_;
              *(uint *)((int)&CStack_bc + (uint)bVar11 * -8 + 4) =
                   *(uint *)((int)&CStack_188 + (uint)bVar11 * -8 + 4);
              *(uint *)((int)&CStack_bc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                   *(uint *)((int)&CStack_188 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              core_actor_cpp_FUN_00408de0(param_1,&CStack_bc);
              fStack_158 = fStack_164;
              afStack_178[(uint)bVar11 * -2 + 9] = afStack_178[(uint)bVar11 * -2 + 6];
              afStack_178[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                   afStack_178[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
              fStack_f8 = fStack_158 - fStack_e0;
              fStack_f4 = fStack_154 - fStack_dc;
              fStack_f0 = fStack_150 - fStack_d8;
              fStack_134 = fStack_158 - fStack_e0;
              afStack_178[(uint)bVar11 * -2 + 0x12] = afStack_10c[(uint)bVar11 * -2 + 6];
              afStack_178[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
                   afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
              if ((0.0 < (double)fStack_12c) && ((double)fStack_12c <= _DAT_005d0557)) {
                core_vecdir_cpp_FUN_005838f0(afStack_178 + 0x11);
                fStack_140 = fStack_110;
                afStack_178[(uint)bVar11 * -2 + 0xf] = afStack_10c[(uint)bVar11 * -2];
                afStack_178[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
                     afStack_10c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
                fStack_230 = 0.5235988;
                if (fStack_12c < (float)_DAT_005d055f) {
                  fStack_230 = 1.5707964;
                }
                if (((ABS(fStack_140) <= fStack_230) && (local_34 <= fStack_13c)) &&
                   (fStack_13c <= local_38)) {
                  fVar8 = SQRT(fStack_12c * fStack_12c +
                               fStack_134 * fStack_134 + fStack_130 * fStack_130);
                  fVar1 = 1.0 / fVar8;
                  fStack_130 = fStack_130 * fVar1;
                  fStack_134 = fStack_134 * fVar1;
                  fStack_12c = fStack_12c * fVar1;
                  fVar8 = fVar8 * (float)_DAT_005d0537 +
                          ((float)_DAT_005d052f -
                          (fStack_12c * afStack_178[1] +
                          fStack_134 * fStack_17c + fStack_130 * afStack_178[0]));
                  if (fVar8 < fStack_28) {
                    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,2);
                    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
                    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_24);
                    iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                      (g_CDemonSetPtr,aCStack_8c,&CStack_bc);
                    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                    if (iVar6 == 0) {
                      fStack_40 = fStack_13c;
                      fStack_3c = fStack_140;
                      local_2c[7] = 1.4013e-45;
                      fStack_28 = fVar8;
                    }
                  }
                }
              }
              iStack_20 = iStack_20 + 1;
              puVar10 = puVar10 + 0xc;
            } while (iStack_20 < iStack_30);
          }
        }
        iStack_44 = iStack_44 + 4;
      }
    }
    dVar3 = _DAT_005d053f;
    if (local_54 != 0) {
      dVar3 = _DAT_005d0547;
    }
    fStack_50 = param_3 * _DAT_005d0527 * (float)dVar3;
    fStack_58 = (float)core_actor_cpp_FUN_0040d0c0(fStack_40 - local_2c[3]);
    fStack_18 = fStack_58;
    fStack_18 = (float)core_actor_cpp_FUN_0040d0c0(fStack_3c - local_2c[2]);
    fStack_60 = -fStack_50;
    if (fStack_58 < fStack_60) {
      fStack_58 = fStack_60;
    }
    if (fStack_50 < fStack_58) {
      fStack_58 = fStack_50;
    }
    fStack_64 = -fStack_50;
    fStack_1c = fStack_18;
    if (fStack_18 < fStack_64) {
      fStack_1c = fStack_64;
    }
    if (fStack_50 < fStack_1c) {
      fStack_1c = fStack_50;
    }
    fStack_18 = (float)core_actor_cpp_FUN_0040d0c0(local_2c[3] + fStack_58);
    local_2c[3] = fStack_18;
    fVar8 = (float)core_actor_cpp_FUN_0040d0c0(local_2c[2] + fStack_1c);
    local_2c[2] = fVar8;
    local_2c[5] = 1.0;
    if (((local_2c[7] == 1.4013e-45) && (ABS(local_2c[3] - fStack_40) < (float)_DAT_005d054f)) &&
       (ABS(local_2c[2] - fStack_3c) < (float)_DAT_005d054f)) {
      local_2c[7] = 2.8026e-45;
      return;
    }
  }
  return;
}
