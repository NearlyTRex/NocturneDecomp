// Name: core_prye.cpp_FUN_00522b00
// Address: 00522b00
// Address Range: [[00522b00, 005237f0]]
// Convention: unknown
// Signature: void core_prye_cpp_FUN_00522b00(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_prye_cpp_FUN_00522b00(CDemonActor *param_1,int param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_1174 [960];
  float fStack_234;
  byte auStack_22c [120];
  CMatrix3x3f aCStack_1b4 [40];
  float fStack_18c;
  float afStack_188 [4];
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_158 [6];
  float afStack_140 [5];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [5];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  CVector3f aCStack_84 [2];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  int local_3c;
  int iStack_38;
  float *local_34;
  float fStack_30;
  CDemonActor *pCStack_2c;
  float fStack_28;
  float fStack_24;
  byte *puStack_20;
  uint local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  local_34 = (float *)&param_1[0x185].field_0x148;
  if (param_2 == 1) {
    local_34 = (float *)&param_1[0x185].field_0x128;
  }
  if (*(int *)&param_1[0x186].field_0x14 == 0) {
    local_34[3] = 0.0;
    local_34[1] = 0.0;
    iVar7 = *(int *)(&param_1[0x1c].field_0x10 + param_2 * 0x78);
    uVar4 = 0;
    if (iVar7 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x74))(iVar7);
    }
    if ((uVar4 & 4) == 0) {
      local_34[2] = 0.0;
      *local_34 = 0.0;
      return;
    }
    local_3c = 3;
  }
  else {
    local_3c = *(int *)(*(int *)&param_1[0x186].field_0x14 + 0x2e0);
  }
  uVar2 = _DAT_01ed3714;
  if (param_2 == 0) {
    local_34[2] = 0.0;
    *local_34 = 0.0;
    return;
  }
  local_1c = _DAT_01ed36ec;
  if ((local_3c == 0) || (local_3c == 5)) {
    local_44 = 1.3089969;
  }
  else {
    local_44 = 0.5235988;
  }
  local_40 = -0.5235988;
  fVar6 = *(float *)&param_1[0x99].field_0x6c * _DAT_005cd6a7 * (float)_DAT_005cd6af * param_3 +
          *local_34;
  local_34[1] = 0.0;
  *local_34 = fVar6;
  if (fVar6 < 0xBF490FDB) {
    *local_34 = 0xBF490FDB;
  }
  if (0x3F490FDB < *local_34) {
    *local_34 = 0x3F490FDB;
  }
  if (local_34[3] < -0.5235988) {
    local_34[3] = -0.5235988;
  }
  if (local_44 < local_34[3]) {
    local_34[3] = local_44;
  }
  if (local_34[1] < -0.5235988) {
    local_34[1] = -0.5235988;
  }
  if (local_44 < local_34[1]) {
    local_34[1] = local_44;
  }
  local_34[7] = 0.0;
  fStack_48 = local_34[1];
  fStack_4c = *local_34;
  if ((local_3c == 3) || (fVar6 = *(float *)&param_1[0x182].field_0x34, fVar6 != 0.0)) {
    local_34[3] = fStack_48;
  }
  else {
    iVar7 = *(int *)&param_1[0x186].field_0x14;
    fStack_168 = fVar6;
    fStack_164 = fVar6;
    fStack_160 = fVar6;
    if (iVar7 != 0) {
      (**(code **)(*(int *)(iVar7 + 0x154) + 0xe0))(iVar7);
      afStack_188[2] = fStack_15c;
      afStack_188[(uint)bVar8 * -2 + 3] = afStack_158[(uint)bVar8 * -2];
      afStack_188[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_158[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (&fStack_168 != afStack_188 + 2) {
        fStack_168 = afStack_188[2];
        fStack_164 = afStack_188[3];
        fStack_160 = fStack_178;
      }
    }
    if ((local_3c == 0) || (local_3c == 5)) {
      core_skeleton_cpp_FUN_0054dbd0(param_1 + 1,local_1c);
      afStack_c8[2] = afStack_158[5];
      afStack_c8[(uint)bVar8 * -2 + 3] = afStack_140[(uint)bVar8 * -2];
      afStack_c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (afStack_f8 + 8 != afStack_c8 + 2) {
        fStack_d8 = afStack_c8[2];
        fStack_d4 = afStack_c8[3];
        fStack_d0 = fStack_b8;
      }
    }
    else {
      core_skeleton_cpp_FUN_0054dbd0(param_1 + 1,uVar2);
      fStack_b4 = fStack_120;
      afStack_c8[(uint)bVar8 * -2 + 6] = afStack_11c[(uint)bVar8 * -2];
      afStack_c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_11c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (afStack_f8 + 8 != afStack_c8 + 5) {
        fStack_d8 = fStack_b4;
        fStack_d4 = fStack_b0;
        fStack_d0 = fStack_ac;
      }
    }
    core_actor_cpp_FUN_00408b80(param_1,afStack_f8 + 8);
    pfVar3 = local_34;
    CStack_114._0_4_ = CStack_12c._0_4_;
    *(uint *)((int)&CStack_114 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&CStack_114 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    fStack_174 = *pfVar3;
    uStack_16c = 0;
    fStack_170 = local_34[1];
    core_dirmat_cpp_FUN_0045b550(aCStack_1b4,(CVector3f *)&fStack_174);
    afStack_158[2] = 0.0;
    afStack_158[4] = 1.0;
    afStack_158[3] = 0.0;
    core_dirmat_cpp_FUN_0045b800(aCStack_1b4,afStack_158 + 2);
    fStack_a8 = fStack_90;
    afStack_c8[(uint)bVar8 * -2 + 9] = afStack_c8[(uint)bVar8 * -2 + 0xf];
    afStack_c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
    iStack_50 = 0;
    fStack_30 = 1e+30;
    for (iStack_54 = 0; iStack_54 < *(int *)&g_CDemonSetPtr->field_0x152f30;
        iStack_54 = iStack_54 + 1) {
      pCStack_2c = *(CDemonActor **)(&g_CDemonSetPtr->field_0x152f34 + iStack_50);
      __arrinit(auStack_22c,10,&g_CVectorTypeInfo);
      iStack_38 = (**(code **)(*(int *)&pCStack_2c->field_0x154 + 0x54))(pCStack_2c,auStack_22c);
      if ((0 < iStack_38) && (iVar7 = 0, 0 < iStack_38)) {
        puStack_20 = auStack_22c;
        do {
          core_actor_cpp_FUN_00408b80(pCStack_2c,puStack_20);
          aCStack_84[0]._0_4_ = CStack_108._0_4_;
          *(uint *)((int)aCStack_84 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)aCStack_84 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_actor_cpp_FUN_00408bf0(param_1,aCStack_84);
          fStack_cc = afStack_140[2];
          afStack_c8[(uint)bVar8 * -2] = afStack_140[(uint)bVar8 * -2 + 3];
          afStack_c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_18c = fStack_cc - fStack_d8;
          afStack_188[0] = afStack_c8[0] - fStack_d4;
          afStack_188[1] = afStack_c8[1] - fStack_d0;
          fStack_e4 = fStack_cc - fStack_d8;
          afStack_f8[(uint)bVar8 * -2 + 6] = afStack_188[(uint)bVar8 * -2];
          afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_188[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if ((0.0 < (double)fStack_dc) && ((double)fStack_dc <= _DAT_005cd6d7)) {
            core_vecdir_cpp_FUN_00576250(afStack_f8 + 5);
            fVar6 = SQRT(fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0);
            fStack_fc = afStack_f8[2];
            afStack_f8[(uint)bVar8 * -2] = afStack_f8[(uint)bVar8 * -2 + 3];
            afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            if ((float)_DAT_005cd6cf < fVar6) {
              fStack_18 = -fStack_168;
              if ((((float)_DAT_005cd6cf <= fVar6) &&
                  (fVar1 = SQRT(fVar6 * fVar6 - fStack_18 * fStack_18) / fVar6, fVar1 < 1.0)) &&
                 (0.0 <= fVar1)) {
                fVar9 = (float10)fVar1;
                acos();
                fStack_28 = (float)fVar9;
                if (0.0 <= fStack_18) {
                  afStack_f8[0] = afStack_f8[0] + fStack_28;
                }
                else {
                  afStack_f8[0] = afStack_f8[0] - fStack_28;
                }
                fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(afStack_f8[0]);
                afStack_f8[0] = fStack_14;
              }
              if ((((float)_DAT_005cd6cf <= fVar6) &&
                  (fVar6 = SQRT(fVar6 * fVar6 - fStack_164 * fStack_164) / fVar6, fVar6 < 1.0)) &&
                 (0.0 <= fVar6)) {
                fVar9 = (float10)fVar6;
                acos();
                fStack_24 = (float)fVar9;
                if (0.0 <= fStack_164) {
                  fStack_fc = fStack_fc + fStack_24;
                }
                else {
                  fStack_fc = fStack_fc - fStack_24;
                }
                fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_fc);
                fStack_fc = fStack_14;
              }
            }
            fStack_9c = fStack_fc;
            afStack_c8[(uint)bVar8 * -2 + 0xc] = afStack_f8[(uint)bVar8 * -2];
            afStack_c8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                 afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (local_3c == 1) {
              fStack_98 = fStack_98 + _DAT_005cd6df;
            }
            fStack_234 = 0.5235988;
            if (fStack_dc < (float)_DAT_005cd6e7) {
              fStack_234 = 1.5707964;
            }
            if (((ABS(fStack_9c) <= fStack_234) && (local_40 <= fStack_98)) &&
               (fStack_98 <= local_44)) {
              fVar6 = SQRT(fStack_dc * fStack_dc + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0);
              fVar1 = 1.0 / fVar6;
              fStack_e0 = fStack_e0 * fVar1;
              fStack_e4 = fStack_e4 * fVar1;
              fStack_dc = fStack_dc * fVar1;
              fVar6 = fVar6 * (float)_DAT_005cd6b7 +
                      ((float)_DAT_005cd6af -
                      (fStack_dc * fStack_a0 + fStack_e4 * fStack_a8 + fStack_e0 * fStack_a4));
              if (fVar6 < fStack_30) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,2);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_2c);
                iVar5 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                  (g_CDemonSetPtr,&CStack_114,aCStack_84);
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                if (iVar5 == 0) {
                  fStack_48 = fStack_98;
                  fStack_4c = fStack_9c;
                  local_34[7] = 1.4013e-45;
                  *(uint *)&param_1[0x186].field_0x30 = 0x40000000;
                  fStack_30 = fVar6;
                }
              }
            }
          }
          puStack_20 = puStack_20 + 0xc;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iStack_38);
      }
      iStack_50 = iStack_50 + 4;
    }
  }
  fVar6 = param_3 * _DAT_005cd6a7 * (float)_DAT_005cd6bf;
  fStack_58 = fVar6;
  if (0.0 < *(float *)&param_1[0x186].field_0x30) {
    param_3 = *(float *)&param_1[0x186].field_0x30 - param_3;
    *(float *)&param_1[0x186].field_0x30 = param_3;
    if (param_3 < 0.0) {
      *(uint *)&param_1[0x186].field_0x30 = 0;
    }
    fStack_58 = (fVar6 * (float)_DAT_005cd6c7) / *(float *)&param_1[0x186].field_0x30;
    if (fVar6 < fStack_58) {
      fStack_58 = fVar6;
    }
  }
  fStack_5c = (float)core_actor_cpp_FUN_0040cfa0(fStack_48 - local_34[3]);
  fStack_14 = fStack_5c;
  fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_4c - local_34[2]);
  fStack_64 = -fStack_58;
  if (fStack_5c < fStack_64) {
    fStack_5c = fStack_64;
  }
  if (fStack_58 < fStack_5c) {
    fStack_5c = fStack_58;
  }
  fStack_68 = -fStack_58;
  fStack_60 = fStack_14;
  if (fStack_14 < fStack_68) {
    fStack_60 = fStack_68;
  }
  if (fStack_58 < fStack_60) {
    fStack_60 = fStack_58;
  }
  fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(local_34[3] + fStack_5c);
  local_34[3] = fStack_14;
  fVar6 = (float)core_actor_cpp_FUN_0040cfa0(local_34[2] + fStack_60);
  local_34[2] = fVar6;
  local_34[5] = 1.0;
  if (((local_34[7] == 1.4013e-45) && (ABS(local_34[3] - fStack_48) < (float)_DAT_005cd6cf)) &&
     (ABS(local_34[2] - fStack_4c) < (float)_DAT_005cd6cf)) {
    local_34[7] = 2.8026e-45;
    return;
  }
  return;
}
