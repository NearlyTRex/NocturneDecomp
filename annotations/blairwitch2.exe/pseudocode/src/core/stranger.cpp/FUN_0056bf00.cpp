// Name: core_stranger.cpp_FUN_0056bf00
// Address: 0056bf00
// Address Range: [[0056bf00, 0056ca04]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056bf00(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_0056bf00(CDemonActor *param_1,int param_2,float param_3)

{
  float fVar1;
  double dVar2;
  float *pfVar3;
  uint uVar4;
  CCharacter *this_ptr;
  EDeathState EVar5;
  int iVar6;
  float fVar7;
  CVector3f *pCVar8;
  byte bVar9;
  float afStackY_1160 [969];
  CVector3f *pCVar10;
  float fStack_21c;
  CVector3f aCStack_218 [10];
  CMatrix3x3f CStack_1a0;
  float fStack_178;
  float afStack_174 [2];
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [2];
  CVector3f CStack_154;
  CVector3f CStack_148;
  float fStack_13c;
  float afStack_138 [2];
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [5];
  float fStack_c4;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  float fStack_7c;
  float fStack_60;
  int local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int local_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  int iStack_2c;
  float *local_28;
  float fStack_24;
  CDemonActor *pCStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  local_28 = (float *)&param_1[0xdd].scale.z;
  if (param_2 == 1) {
    local_28 = &param_1[0xdd].platform_orientation_delta.y;
  }
  fVar7 = param_1[0xdd].previous_transform_state.position.z;
  if (fVar7 == 0.0) {
    local_28[3] = 0.0;
    local_28[1] = 0.0;
    iVar6 = *(int *)((int)&param_1[0xe].orient_matrix + param_2 * 0x78 + 0xc);
    uVar4 = 0;
    if (iVar6 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x7c))(iVar6);
    }
    if ((uVar4 & 4) == 0) {
      local_28[2] = 0.0;
      *local_28 = 0.0;
      return;
    }
    local_4c = 3;
  }
  else {
    local_4c = *(int *)((int)fVar7 + 0x43c);
  }
  if (param_2 == 0) {
    if ((param_1[0xd6].collision_disabled == 2) && (local_4c == 0)) {
      return;
    }
    local_5c = _DAT_0264be64;
    local_30 = -1.3089969;
    local_34 = 0.5235988;
    iVar6 = _DAT_0264be3c;
  }
  else {
    local_5c = _DAT_0264be68;
    iVar6 = _DAT_0264be40;
    if (local_4c == 0) {
      local_34 = 1.3089969;
      local_30 = -0.5235988;
    }
    else {
      local_34 = 0.5235988;
      local_30 = -0.5235988;
    }
  }
  fVar7 = (float)param_1[0x62].particle_systems[1].owner * _DAT_005ebc65 * (float)_DAT_005ebc6d *
          param_3 + *local_28;
  local_28[1] = 0.0;
  *local_28 = fVar7;
  if (fVar7 < 0xBF860A92) {
    *local_28 = 0xBF860A92;
  }
  if (0x3F9C61AA < *local_28) {
    *local_28 = 0x3F9C61AA;
  }
  if (local_28[3] < local_30) {
    local_28[3] = local_30;
  }
  if (local_34 < local_28[3]) {
    local_28[3] = local_34;
  }
  if (local_28[1] < local_30) {
    local_28[1] = local_30;
  }
  if (local_34 < local_28[1]) {
    local_28[1] = local_34;
  }
  local_28[7] = 0.0;
  fStack_38 = local_28[1];
  fStack_3c = *local_28;
  if ((local_4c == 3) || (fVar7 = (float)param_1[0xd6].collision_disabled, fVar7 != 0.0)) {
    local_28[3] = 0.0;
  }
  else {
    fVar1 = param_1[0xdd].previous_transform_state.position.z;
    afStack_120[2] = fVar7;
    afStack_120[3] = fVar7;
    fStack_110 = fVar7;
    if (fVar1 != 0.0) {
      (**(code **)(*(int *)((int)fVar1 + 0x2b0) + 0xe8))(fVar1);
      fStack_dc = afStack_9c[2];
      afStack_d8[(uint)bVar9 * -2] = afStack_9c[(uint)bVar9 * -2 + 3];
      afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      if (afStack_120 + 2 != &fStack_dc) {
        afStack_120[2] = fStack_dc;
        afStack_120[3] = afStack_d8[0];
        fStack_110 = afStack_d8[1];
      }
    }
    if (local_4c == 0) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                ((CDeformableModelInstance *)(param_1 + 1),iVar6,&CStack_148);
      afStack_fc[2] = CStack_148.x;
      afStack_fc[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_148 + (uint)bVar9 * -8 + 4);
      afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           *(float *)((int)&CStack_148 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (&fStack_ac != afStack_fc + 2) {
        fStack_ac = afStack_fc[2];
        fStack_a8 = afStack_fc[3];
        fStack_a4 = fStack_ec;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                ((CDeformableModelInstance *)(param_1 + 1),local_5c,&CStack_10c);
      fStack_124 = CStack_10c.x;
      afStack_120[(uint)bVar9 * -2] = *(float *)((int)&CStack_10c + (uint)bVar9 * -8 + 4);
      afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&CStack_10c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (&fStack_ac != &fStack_124) {
        fStack_ac = fStack_124;
        fStack_a8 = afStack_120[0];
        fStack_a4 = afStack_120[1];
      }
    }
    core_actor_cpp_FUN_00408d70(param_1,&fStack_ac);
    pfVar3 = local_28;
    CStack_154.x = afStack_d8[2];
    *(float *)((int)&CStack_154 + (uint)bVar9 * -8 + 4) = afStack_d8[(uint)bVar9 * -2 + 3];
    *(float *)((int)&CStack_154 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    CStack_130.x = *pfVar3;
    CStack_130.z = 0.0;
    CStack_130.y = local_28[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_1a0,&CStack_130);
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0x3f800000;
    core_dirmat_cpp_FUN_00449530(&CStack_1a0,&uStack_b8);
    fStack_178 = fStack_c4;
    afStack_174[(uint)bVar9 * -2] = afStack_d8[(uint)bVar9 * -2 + 6];
    afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    fStack_24 = 1e+30;
    iStack_40 = 0;
    for (iStack_44 = 0; iStack_44 < g_CDemonSetPtr->threat_count; iStack_44 = iStack_44 + 1) {
      this_ptr = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (*(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_40),
                            g_CCharacterClassInfo.name_hash);
      if ((this_ptr == (CCharacter *)0x0) ||
         ((EVar5 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr),
          EVar5 == DEATH_STATE_ALIVE &&
          (iVar6 = (*((this_ptr->base).vtable._ub)->shouldIgnoreForTargeting)
                             ((CDemonActor *)this_ptr), iVar6 == 0)))) {
        pCStack_20 = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_40);
        __arrinit(aCStack_218,10,&g_CVectorTypeInfo);
        iStack_2c = (*((pCStack_20->vtable)._ub)->getTargetPoints)(pCStack_20,aCStack_218);
        if ((0 < iStack_2c) && (iStack_1c = 0, 0 < iStack_2c)) {
          pCVar8 = aCStack_218;
          do {
            core_actor_cpp_FUN_00408d70(pCStack_20,pCVar8);
            pCVar10 = &CStack_16c;
            CStack_16c.x = fStack_7c;
            *(float *)((int)&CStack_16c + (uint)bVar9 * -8 + 4) = afStack_9c[(uint)bVar9 * -2 + 9];
            *(float *)((int)&CStack_16c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
            core_actor_cpp_FUN_00408de0(param_1,pCVar10);
            fStack_100 = fStack_160;
            afStack_fc[(uint)bVar9 * -2] = afStack_15c[(uint)bVar9 * -2];
            afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_15c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            fStack_a0 = fStack_100 - fStack_ac;
            afStack_9c[0] = afStack_fc[0] - fStack_a8;
            afStack_9c[1] = afStack_fc[1] - fStack_a4;
            fStack_e8 = fStack_100 - fStack_ac;
            afStack_fc[(uint)bVar9 * -2 + 6] = afStack_9c[(uint)bVar9 * -2];
            afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                 afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if ((0.0 < (double)fStack_e0) && ((double)fStack_e0 <= _DAT_005ebc95)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_fc + 5);
              fVar7 = fStack_e0;
              fStack_21c = 0.5235988;
              fStack_88 = fStack_13c;
              afStack_9c[(uint)bVar9 * -2 + 6] = afStack_138[(uint)bVar9 * -2];
              afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                   afStack_138[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              if (fVar7 < (float)_DAT_005ebc9d) {
                fStack_21c = 1.5707964;
              }
              if (((ABS(fStack_88) <= fStack_21c) && (local_30 <= fStack_84)) &&
                 (fStack_84 <= local_34)) {
                fVar7 = SQRT(fStack_e0 * fStack_e0 + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
                fVar1 = 1.0 / fVar7;
                fStack_e4 = fStack_e4 * fVar1;
                fStack_e8 = fStack_e8 * fVar1;
                fStack_e0 = fStack_e0 * fVar1;
                fVar7 = fVar7 * (float)_DAT_005ebc75 +
                        ((float)_DAT_005ebc6d -
                        (fStack_e0 * afStack_174[1] +
                        fStack_e8 * fStack_178 + fStack_e4 * afStack_174[0]));
                if (fVar7 < fStack_24) {
                  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_20);
                  iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                    (g_CDemonSetPtr,&CStack_154,&CStack_16c);
                  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                  if (iVar6 == 0) {
                    fStack_38 = fStack_84;
                    fStack_3c = fStack_88;
                    local_28[7] = 1.4013e-45;
                    fStack_24 = fVar7;
                  }
                }
              }
            }
            iStack_1c = iStack_1c + 1;
            pCVar8 = pCVar8 + 1;
          } while (iStack_1c < iStack_2c);
        }
      }
      iStack_40 = iStack_40 + 4;
    }
  }
  dVar2 = _DAT_005ebc7d;
  if (local_4c != 0) {
    dVar2 = _DAT_005ebc85;
  }
  fStack_48 = param_3 * _DAT_005ebc65 * (float)dVar2;
  fStack_54 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_38 - local_28[3]);
  fStack_18 = fStack_54;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_3c - local_28[2]);
  fStack_58 = -fStack_48;
  if (fStack_54 < fStack_58) {
    fStack_54 = fStack_58;
  }
  if (fStack_48 < fStack_54) {
    fStack_54 = fStack_48;
  }
  fStack_60 = -fStack_48;
  fStack_50 = fStack_18;
  if (fStack_18 < fStack_60) {
    fStack_50 = fStack_60;
  }
  if (fStack_48 < fStack_50) {
    fStack_50 = fStack_48;
  }
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_28[3] + fStack_54);
  local_28[3] = fStack_18;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_28[2] + fStack_50);
  local_28[2] = fVar7;
  local_28[5] = 1.0;
  if (((local_28[7] == 1.4013e-45) && (ABS(local_28[3] - fStack_38) < (float)_DAT_005ebc8d)) &&
     (ABS(local_28[2] - fStack_3c) < (float)_DAT_005ebc8d)) {
    local_28[7] = 2.8026e-45;
    return;
  }
  return;
}
