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
  int *piVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_115c [954];
  float fStack_23c;
  CVector3f aCStack_22c [10];
  CMatrix3x3f CStack_1b4;
  CVector3f CStack_18c;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [5];
  float fStack_150;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
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
  int *local_30;
  float fStack_2c;
  CDemonActor *pCStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  local_30 = &param_1[0x17c].previous_transform_state.dirty_flags;
  if (param_2 == 1) {
    local_30 = &param_1[0x17c].dead1;
  }
  if (*(int *)(param_1[0x17d].actor_name + 0xc) == 0) {
    local_30[3] = 0;
    local_30[1] = 0;
    iVar6 = *(int *)(param_1[0x1c].actor_name + param_2 * 0x78 + 0x10);
    uVar3 = 0;
    if (iVar6 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x74))(iVar6);
    }
    if ((uVar3 & 4) == 0) {
      local_30[2] = 0;
      *local_30 = 0;
      return;
    }
    iVar6 = 3;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1[0x17d].actor_name + 0xc) + 0x2e0);
  }
  if (param_2 == 0) {
    local_30[2] = 0;
    *local_30 = 0;
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
  fVar5 = *(float *)(param_1[0x90].create_event + 0xc) * _DAT_005da2c4 * (float)_DAT_005da2cc *
          param_3 + (float)*local_30;
  local_30[1] = 0;
  *local_30 = (int)fVar5;
  if (fVar5 < 0xBF860A92) {
    *local_30 = (int)0xBF860A92;
  }
  if (0x3F9C61AA < (float)*local_30) {
    *local_30 = (int)0x3F9C61AA;
  }
  if ((float)local_30[3] < -0.5235988) {
    local_30[3] = -0x40f9f56e;
  }
  if (local_3c < (float)local_30[3]) {
    local_30[3] = (int)local_3c;
  }
  if ((float)local_30[1] < -0.5235988) {
    local_30[1] = -0x40f9f56e;
  }
  if (local_3c < (float)local_30[1]) {
    local_30[1] = (int)local_3c;
  }
  local_30[7] = 0;
  fStack_40 = (float)local_30[1];
  fStack_44 = (float)*local_30;
  if ((iVar6 == 3) || (fVar5 = param_1[0x179].orient_matrix.m[1].y, fVar5 != 0.0)) {
    local_30[3] = (int)fStack_40;
  }
  else {
    iVar4 = *(int *)(param_1[0x17d].actor_name + 0xc);
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
      fStack_144 = fStack_120;
      afStack_164[(uint)bVar7 * -2 + 9] = afStack_164[(uint)bVar7 * -2 + 0x12];
      afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
           afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
      if (afStack_f8 + 0xb != afStack_164 + 8) {
        fStack_cc = fStack_144;
        fStack_c8 = fStack_140;
        fStack_c4 = fStack_13c;
      }
    }
    else {
      core_skeleton_cpp_FUN_00569040(param_1 + 1,local_68);
      fStack_12c = fStack_e4;
      afStack_164[(uint)bVar7 * -2 + 0xf] = afStack_f8[(uint)bVar7 * -2 + 6];
      afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
           afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (afStack_f8 + 0xb != afStack_164 + 0xe) {
        fStack_cc = fStack_12c;
        fStack_c8 = fStack_128;
        fStack_c4 = fStack_124;
      }
    }
    core_actor_cpp_FUN_00408b40(param_1,afStack_f8 + 0xb);
    piVar2 = local_30;
    CStack_108.x = afStack_164[2];
    *(float *)((int)&CStack_108 + (uint)bVar7 * -8 + 4) = afStack_164[(uint)bVar7 * -2 + 3];
    *(float *)((int)&CStack_108 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    CStack_18c.x = (float)*piVar2;
    CStack_18c.z = 0.0;
    CStack_18c.y = (float)local_30[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_1b4,&CStack_18c);
    afStack_bc[2] = 0.0;
    afStack_bc[3] = 0.0;
    afStack_bc[4] = 1.0;
    core_dirmat_cpp_FUN_0045f690(&CStack_1b4,afStack_bc + 2);
    fStack_84 = fStack_d8;
    afStack_a4[(uint)bVar7 * -2 + 9] = afStack_f8[(uint)bVar7 * -2 + 9];
    afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    fStack_2c = 1e+30;
    iStack_4c = 0;
    for (iStack_48 = 0; iStack_48 < g_CDemonSetPtr->threat_count; iStack_48 = iStack_48 + 1) {
      pCStack_28 = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_4c);
      __arrinit(aCStack_22c,10,&g_CVectorTypeInfo);
      iStack_34 = (*((pCStack_28->vtable)._ub)->getTargetPoints)(pCStack_28,aCStack_22c);
      if ((0 < iStack_34) && (iVar6 = 0, 0 < iStack_34)) {
        pCStack_1c = aCStack_22c;
        do {
          core_actor_cpp_FUN_00408b40(pCStack_28,pCStack_1c);
          CStack_174.x = fStack_138;
          *(float *)((int)&CStack_174 + (uint)bVar7 * -8 + 4) = afStack_164[(uint)bVar7 * -2 + 0xc];
          *(float *)((int)&CStack_174 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          core_actor_cpp_FUN_00408bb0(param_1,&CStack_174);
          afStack_f8[2] = fStack_150;
          afStack_f8[(uint)bVar7 * -2 + 3] = afStack_164[(uint)bVar7 * -2 + 6];
          afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          fStack_c0 = afStack_f8[2] - fStack_cc;
          afStack_bc[0] = afStack_f8[3] - fStack_c8;
          afStack_bc[1] = fStack_e8 - fStack_c4;
          fStack_114 = afStack_f8[2] - fStack_cc;
          afStack_164[(uint)bVar7 * -2 + 0x15] = afStack_bc[(uint)bVar7 * -2];
          afStack_164[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
               afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if ((0.0 < (double)fStack_10c) && ((double)fStack_10c <= _DAT_005da2f4)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_164 + 0x14);
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
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_a4[3]);
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
                fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_a4[2]);
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
                  local_30[7] = 1;
                  param_1[0x17d].location.position.z = 2.0;
                  fStack_2c = fVar5;
                }
              }
            }
          }
          pCStack_1c = pCStack_1c + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iStack_34);
      }
      iStack_4c = iStack_4c + 4;
    }
  }
  fVar5 = param_3 * _DAT_005da2c4 * (float)_DAT_005da2dc;
  fStack_50 = fVar5;
  if (0.0 < param_1[0x17d].location.position.z) {
    param_3 = param_1[0x17d].location.position.z - param_3;
    param_1[0x17d].location.position.z = param_3;
    if (param_3 < 0.0) {
      param_1[0x17d].location.position.z = 0.0;
    }
    fStack_50 = (fVar5 * (float)_DAT_005da2e4) / param_1[0x17d].location.position.z;
    if (fVar5 < fStack_50) {
      fStack_50 = fVar5;
    }
  }
  fStack_58 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_40 - (float)local_30[3]);
  fStack_14 = fStack_58;
  fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_44 - (float)local_30[2]);
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
  fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((float)local_30[3] + fStack_58);
  local_30[3] = (int)fStack_14;
  fVar5 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60((float)local_30[2] + fStack_54);
  local_30[2] = (int)fVar5;
  local_30[5] = 0x3f800000;
  if ((((float)local_30[7] == 1.4013e-45) &&
      (ABS((float)local_30[3] - fStack_40) < (float)_DAT_005da2ec)) &&
     (ABS((float)local_30[2] - fStack_44) < (float)_DAT_005da2ec)) {
    local_30[7] = 2;
    return;
  }
  return;
}
