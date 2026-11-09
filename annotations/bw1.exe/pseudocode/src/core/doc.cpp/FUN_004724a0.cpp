// Name: core_doc.cpp_FUN_004724a0
// Address: 004724a0
// Address Range: [[004724a0, 0047315c]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004724a0(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004724a0(CDemonActor *param_1,int param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_115c [954];
  float fStack_23c;
  byte auStack_22c [120];
  CMatrix3x3f aCStack_1b4 [40];
  float fStack_18c;
  float fStack_188;
  uint uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [4];
  float fStack_13c;
  CVector3f CStack_138;
  float fStack_12c;
  float afStack_128 [5];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [6];
  float afStack_a4 [5];
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_68;
  uint local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  float local_38;
  int iStack_34;
  float *local_30;
  float fStack_2c;
  CDemonActor *pCStack_28;
  float fStack_24;
  float fStack_20;
  byte *puStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  local_30 = (float *)&param_1[0x17c].field_0x140;
  if (param_2 == 1) {
    local_30 = (float *)&param_1[0x17c].field_0x120;
  }
  if (*(int *)&param_1[0x17d].field_0xc == 0) {
    local_30[3] = 0.0;
    local_30[1] = 0.0;
    iVar6 = *(int *)(&param_1[0x1c].field_0x10 + param_2 * 0x78);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x74))(iVar6);
    }
    if ((uVar3 & 4) == 0) {
      local_30[2] = 0.0;
      *local_30 = 0.0;
      return;
    }
    iVar6 = 3;
  }
  else {
    iVar6 = *(int *)(*(int *)&param_1[0x17d].field_0xc + 0x2e0);
  }
  if (param_2 == 0) {
    local_30[2] = 0.0;
    *local_30 = 0.0;
    return;
  }
  local_64 = _DAT_01b68824;
  local_68 = _DAT_01b6884c;
  if ((iVar6 == 0) || (iVar6 == 5)) {
    local_3c = 1.3089969;
  }
  else {
    local_3c = 0.5235988;
  }
  local_38 = -0.5235988;
  fVar5 = *(float *)&param_1[0x90].field_0x84 * _DAT_005da2c4 * (float)_DAT_005da2cc * param_3 +
          *local_30;
  local_30[1] = 0.0;
  *local_30 = fVar5;
  if (fVar5 < 0xBF860A92) {
    *local_30 = 0xBF860A92;
  }
  if (0x3F9C61AA < *local_30) {
    *local_30 = 0x3F9C61AA;
  }
  if (local_30[3] < -0.5235988) {
    local_30[3] = -0.5235988;
  }
  if (local_3c < local_30[3]) {
    local_30[3] = local_3c;
  }
  if (local_30[1] < -0.5235988) {
    local_30[1] = -0.5235988;
  }
  if (local_3c < local_30[1]) {
    local_30[1] = local_3c;
  }
  local_30[7] = 0.0;
  fStack_40 = local_30[1];
  fStack_44 = *local_30;
  if ((iVar6 == 3) || (fVar5 = *(float *)&param_1[0x179].field_0x4c, fVar5 != 0.0)) {
    local_30[3] = fStack_40;
  }
  else {
    iVar4 = *(int *)&param_1[0x17d].field_0xc;
    fStack_180 = fVar5;
    fStack_17c = fVar5;
    fStack_178 = fVar5;
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar4 + 0x154) + 0xe0))(iVar4);
      fStack_fc = fStack_168;
      afStack_f8[(uint)bVar7 * -2] = afStack_164[(uint)bVar7 * -2];
      afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&fStack_180 != &fStack_fc) {
        fStack_180 = fStack_fc;
        fStack_17c = afStack_f8[0];
        fStack_178 = afStack_f8[1];
      }
    }
    if ((iVar6 == 0) || (iVar6 == 5)) {
      core_skeleton_cpp_FUN_00569040(param_1 + 1,local_64);
      afStack_14c[2] = afStack_128[2];
      afStack_14c[(uint)bVar7 * -2 + 3] = afStack_128[(uint)bVar7 * -2 + 3];
      afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      if (afStack_f8 + 0xb != afStack_14c + 2) {
        fStack_cc = afStack_14c[2];
        fStack_c8 = afStack_14c[3];
        fStack_c4 = fStack_13c;
      }
    }
    else {
      core_skeleton_cpp_FUN_00569040(param_1 + 1,local_68);
      fStack_12c = fStack_e4;
      afStack_128[(uint)bVar7 * -2] = afStack_f8[(uint)bVar7 * -2 + 6];
      afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (afStack_f8 + 0xb != &fStack_12c) {
        fStack_cc = fStack_12c;
        fStack_c8 = afStack_128[0];
        fStack_c4 = afStack_128[1];
      }
    }
    core_actor_cpp_FUN_00408b40(param_1,afStack_f8 + 0xb);
    pfVar2 = local_30;
    CStack_108._0_4_ = CStack_15c._0_4_;
    *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_15c + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_15c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    fStack_18c = *pfVar2;
    uStack_184 = 0;
    fStack_188 = local_30[1];
    core_dirmat_cpp_FUN_0045f3e0(aCStack_1b4,(CVector3f *)&fStack_18c);
    afStack_bc[2] = 0.0;
    afStack_bc[3] = 0.0;
    afStack_bc[4] = 1.0;
    core_dirmat_cpp_FUN_0045f690(aCStack_1b4,afStack_bc + 2);
    fStack_84 = fStack_d8;
    afStack_a4[(uint)bVar7 * -2 + 9] = afStack_f8[(uint)bVar7 * -2 + 9];
    afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    fStack_2c = 1e+30;
    iStack_4c = 0;
    for (iStack_48 = 0; iStack_48 < *(int *)&g_CDemonSetPtr->field_0x152f30;
        iStack_48 = iStack_48 + 1) {
      pCStack_28 = *(CDemonActor **)(&g_CDemonSetPtr->field_0x152f34 + iStack_4c);
      __arrinit(auStack_22c,10,&g_CVectorTypeInfo);
      iStack_34 = (**(code **)(*(int *)&pCStack_28->field_0x154 + 0x54))(pCStack_28,auStack_22c);
      if ((0 < iStack_34) && (iVar6 = 0, 0 < iStack_34)) {
        puStack_1c = auStack_22c;
        do {
          core_actor_cpp_FUN_00408b40(pCStack_28,puStack_1c);
          CStack_174._0_4_ = CStack_138._0_4_;
          *(uint *)((int)&CStack_174 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_138 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&CStack_174 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&CStack_138 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_actor_cpp_FUN_00408bb0(param_1,&CStack_174);
          afStack_f8[2] = fStack_150;
          afStack_f8[(uint)bVar7 * -2 + 3] = afStack_14c[(uint)bVar7 * -2];
          afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_14c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_c0 = afStack_f8[2] - fStack_cc;
          afStack_bc[0] = afStack_f8[3] - fStack_c8;
          afStack_bc[1] = fStack_e8 - fStack_c4;
          fStack_114 = afStack_f8[2] - fStack_cc;
          afStack_128[(uint)bVar7 * -2 + 6] = afStack_bc[(uint)bVar7 * -2];
          afStack_128[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if ((0.0 < (double)fStack_10c) && ((double)fStack_10c <= _DAT_005da2f4)) {
            core_vecdir_cpp_FUN_005a7520(afStack_128 + 5);
            fVar5 = SQRT(fStack_10c * fStack_10c + fStack_114 * fStack_114 + fStack_110 * fStack_110
                        );
            afStack_a4[2] = afStack_bc[5];
            afStack_a4[(uint)bVar7 * -2 + 3] = afStack_a4[(uint)bVar7 * -2];
            afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if ((float)_DAT_005da2ec < fVar5) {
              fStack_18 = -fStack_180;
              if ((((float)_DAT_005da2ec <= fVar5) &&
                  (fVar1 = SQRT(fVar5 * fVar5 - fStack_18 * fStack_18) / fVar5, fVar1 < 1.0)) &&
                 (0.0 <= fVar1)) {
                fVar8 = (float10)fVar1;
                acos();
                fStack_20 = (float)fVar8;
                if (0.0 <= fStack_18) {
                  afStack_a4[3] = afStack_a4[3] + fStack_20;
                }
                else {
                  afStack_a4[3] = afStack_a4[3] - fStack_20;
                }
                fStack_14 = (float)core_actor_cpp_FUN_0040cd60(afStack_a4[3]);
                afStack_a4[3] = fStack_14;
              }
              if ((((float)_DAT_005da2ec <= fVar5) &&
                  (fVar5 = SQRT(fVar5 * fVar5 - fStack_17c * fStack_17c) / fVar5, fVar5 < 1.0)) &&
                 (0.0 <= fVar5)) {
                fVar8 = (float10)fVar5;
                acos();
                fStack_24 = (float)fVar8;
                if (0.0 <= fStack_17c) {
                  afStack_a4[2] = afStack_a4[2] + fStack_24;
                }
                else {
                  afStack_a4[2] = afStack_a4[2] - fStack_24;
                }
                fStack_14 = (float)core_actor_cpp_FUN_0040cd60(afStack_a4[2]);
                afStack_a4[2] = fStack_14;
              }
            }
            fStack_90 = afStack_a4[2];
            afStack_a4[(uint)bVar7 * -2 + 6] = afStack_a4[(uint)bVar7 * -2 + 3];
            afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_23c = 0.5235988;
            if (fStack_10c < (float)_DAT_005da2fc) {
              fStack_23c = 1.5707964;
            }
            if (((ABS(fStack_90) <= fStack_23c) && (local_38 <= fStack_8c)) &&
               (fStack_8c <= local_3c)) {
              fVar5 = SQRT(fStack_10c * fStack_10c +
                           fStack_114 * fStack_114 + fStack_110 * fStack_110);
              fVar1 = 1.0 / fVar5;
              fStack_110 = fStack_110 * fVar1;
              fStack_114 = fStack_114 * fVar1;
              fStack_10c = fStack_10c * fVar1;
              fVar5 = fVar5 * (float)_DAT_005da2d4 +
                      ((float)_DAT_005da2cc -
                      (fStack_10c * fStack_7c + fStack_114 * fStack_84 + fStack_110 * fStack_80));
              if (fVar5 < fStack_2c) {
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,param_1);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_28);
                iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                  (g_CDemonSetPtr,&CStack_108,&CStack_174);
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                if (iVar4 == 0) {
                  fStack_40 = fStack_8c;
                  fStack_44 = fStack_90;
                  local_30[7] = 1.4013e-45;
                  *(uint *)&param_1[0x17d].field_0x28 = 0x40000000;
                  fStack_2c = fVar5;
                }
              }
            }
          }
          puStack_1c = puStack_1c + 0xc;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iStack_34);
      }
      iStack_4c = iStack_4c + 4;
    }
  }
  fVar5 = param_3 * _DAT_005da2c4 * (float)_DAT_005da2dc;
  fStack_50 = fVar5;
  if (0.0 < *(float *)&param_1[0x17d].field_0x28) {
    param_3 = *(float *)&param_1[0x17d].field_0x28 - param_3;
    *(float *)&param_1[0x17d].field_0x28 = param_3;
    if (param_3 < 0.0) {
      *(uint *)&param_1[0x17d].field_0x28 = 0;
    }
    fStack_50 = (fVar5 * (float)_DAT_005da2e4) / *(float *)&param_1[0x17d].field_0x28;
    if (fVar5 < fStack_50) {
      fStack_50 = fVar5;
    }
  }
  fStack_58 = (float)core_actor_cpp_FUN_0040cd60(fStack_40 - local_30[3]);
  fStack_14 = fStack_58;
  fStack_14 = (float)core_actor_cpp_FUN_0040cd60(fStack_44 - local_30[2]);
  fStack_60 = -fStack_50;
  if (fStack_58 < fStack_60) {
    fStack_58 = fStack_60;
  }
  if (fStack_50 < fStack_58) {
    fStack_58 = fStack_50;
  }
  fStack_5c = -fStack_50;
  fStack_54 = fStack_14;
  if (fStack_14 < fStack_5c) {
    fStack_54 = fStack_5c;
  }
  if (fStack_50 < fStack_54) {
    fStack_54 = fStack_50;
  }
  fStack_14 = (float)core_actor_cpp_FUN_0040cd60(local_30[3] + fStack_58);
  local_30[3] = fStack_14;
  fVar5 = (float)core_actor_cpp_FUN_0040cd60(local_30[2] + fStack_54);
  local_30[2] = fVar5;
  local_30[5] = 1.0;
  if (((local_30[7] == 1.4013e-45) && (ABS(local_30[3] - fStack_40) < (float)_DAT_005da2ec)) &&
     (ABS(local_30[2] - fStack_44) < (float)_DAT_005da2ec)) {
    local_30[7] = 2.8026e-45;
    return;
  }
  return;
}
