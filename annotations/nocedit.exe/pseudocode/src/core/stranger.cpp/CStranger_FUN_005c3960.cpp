// Name: core_stranger.cpp_CStranger_FUN_005c3960
// Address: 005c3960
// Address Range: [[005c3960, 005c4364]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c3960(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c3960(CStranger *this_ptr)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  double dVar2;
  uint uVar3;
  float *pfVar4;
  CDeformableModelInstance *this_ptr_01;
  CVector3f *pCVar5;
  CCharacter *this_ptr_02;
  int iVar6;
  int iVar7;
  float fVar8;
  CDemonActor *unaff_EBP;
  int in_stack_00000008;
  float in_stack_0000000c;
  byte auStack_19c [120];
  CMatrix3x3f CStack_124;
  CVector3f CStack_fc;
  float fStack_f0;
  float fStack_ec;
  CVector3f aCStack_e8 [2];
  byte auStack_d0 [8];
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  byte auStack_ac [8];
  float fStack_a4;
  uint uStack_a0;
  CVector3f CStack_9c;
  byte auStack_90 [20];
  CVector3f CStack_7c;
  float fStack_70;
  CVector3f aCStack_6c [2];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  int iStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float fStack_28;
  char *local_24;
  float *pfStack_20;
  int iStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  local_24 = this_ptr->unk1 + 0x30;
  if (in_stack_00000008 == 1) {
    local_24 = this_ptr->unk1 + 0x10;
  }
  if (*(int *)(this_ptr->unk1 + 0x54) == 0) {
    local_24[0xc] = '\0';
    local_24[0xd] = '\0';
    local_24[0xe] = '\0';
    local_24[0xf] = '\0';
    local_24[4] = '\0';
    local_24[5] = '\0';
    local_24[6] = '\0';
    local_24[7] = '\0';
    this_ptr_00 = (this_ptr->base).base.carry_hands[in_stack_00000008].carry_actor;
    uVar3 = 0;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      uVar3 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00);
    }
    if ((uVar3 & 4) == 0) {
      pfStack_20[2] = 0.0;
      *pfStack_20 = 0.0;
      return;
    }
    iStack_44 = 3;
  }
  else {
    local_48 = *(float *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0);
  }
  if (in_stack_00000008 == 0) {
    if (((this_ptr->base).unk3 == 2) && (iStack_44 == 0)) {
      return;
    }
    local_2c = -1.3089969;
    fStack_28 = 0.5235988;
    iVar6 = INT_03f6bb00;
    iVar7 = INT_03f6bad8;
  }
  else {
    iVar6 = INT_03f6bb04;
    iVar7 = INT_03f6badc;
    if (iStack_44 == 0) {
      fStack_28 = 1.3089969;
      local_2c = -0.5235988;
    }
    else {
      fStack_28 = 0.5235988;
      local_2c = -0.5235988;
    }
  }
  fVar8 = *(float *)((this_ptr->base).unk2 + 0x28) * (float)3.1415926535000001 * (float)2
          * in_stack_0000000c + *pfStack_20;
  pfStack_20[1] = 0.0;
  *pfStack_20 = fVar8;
  if (fVar8 < -1.047198f) {
    *pfStack_20 = -1.047198f;
  }
  if (1.22173f < *pfStack_20) {
    *pfStack_20 = 1.22173f;
  }
  if (pfStack_20[3] < local_2c) {
    pfStack_20[3] = local_2c;
  }
  if (fStack_28 < pfStack_20[3]) {
    pfStack_20[3] = fStack_28;
  }
  if (pfStack_20[1] < local_2c) {
    pfStack_20[1] = local_2c;
  }
  if (fStack_28 < pfStack_20[1]) {
    pfStack_20[1] = fStack_28;
  }
  pfStack_20[7] = 0.0;
  fStack_34 = pfStack_20[1];
  local_30 = *pfStack_20;
  if ((iStack_44 == 3) || (fVar8 = (float)(this_ptr->base).unk3, fVar8 != 0.0)) {
    pfStack_20[3] = 0.0;
  }
  else {
    CStack_7c.y = fVar8;
    CStack_7c.z = fVar8;
    fStack_70 = fVar8;
    if ((*(int *)(this_ptr->unk1 + 0x54) != 0) &&
       (pfVar4 = (float *)(**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0xf4))(),
       &CStack_7c.y != pfVar4)) {
      CStack_7c.y = *pfVar4;
      CStack_7c.z = pfVar4[1];
      fStack_70 = pfVar4[2];
    }
    this_ptr_01 = &(this_ptr->base).base.model;
    if (iStack_44 == 0) {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (this_ptr_01,&CStack_9c,iVar7);
      if (&CStack_fc != pCVar5) {
        CStack_fc.x = pCVar5->x;
        CStack_fc.y = pCVar5->y;
        CStack_fc.z = pCVar5->z;
      }
    }
    else {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (this_ptr_01,&CStack_c0,iVar6);
      if (&CStack_fc != pCVar5) {
        CStack_fc.x = pCVar5->x;
        CStack_fc.y = pCVar5->y;
        CStack_fc.z = pCVar5->z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,(CVector3f *)auStack_90,&CStack_fc);
    aCStack_6c[0].x = *pfStack_20;
    aCStack_6c[0].z = 0.0;
    aCStack_6c[0].y = pfStack_20[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_124,aCStack_6c);
    auStack_ac._4_4_ = 0.0;
    fStack_a4 = 0.0;
    uStack_a0 = 0x3f800000;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              (&CStack_124,(CVector3f *)(auStack_d0 + 4),(CVector3f *)(auStack_ac + 4));
    iStack_1c = 0x7149f2ca;
    iStack_38 = 0;
    for (iStack_3c = 0; iStack_3c < *(int *)(g_CDemonSetPtr->unk4 + 16000);
        iStack_3c = iStack_3c + 1) {
      this_ptr_02 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iStack_38 + 0x3e84),
                               g_CCharacterClassInfo.name_hash);
      if ((this_ptr_02 == (CCharacter *)0x0) ||
         ((iVar6 = (*(((this_ptr_02->base).vtable._uc)->_uc).isDamageable)(this_ptr_02), iVar6 == 0
          && (iVar6 = (*((this_ptr_02->base).vtable._ub)->shouldIgnoreForTargeting)
                                ((CDemonActor *)this_ptr_02), iVar6 == 0)))) {
        pCStack_18 = *(CDemonActor **)(g_CDemonSetPtr->unk4 + iStack_38 + 0x3e84);
        __arrinit(auStack_19c,10,&g_CVectorTypeInfo);
        iStack_1c = (*((pCStack_18->vtable)._ub)->getTargetPoints)
                              (pCStack_18,(CVector3f *)auStack_19c);
        if ((0 < iStack_1c) && (iVar6 = 0, 0 < iStack_1c)) {
          pCVar5 = (CVector3f *)(auStack_19c + 8);
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(unaff_EBP,&CStack_7c,pCVar5);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      ((CDemonActor *)this_ptr,(CVector3f *)auStack_d0,&CStack_7c);
            auStack_ac._0_4_ = (float)auStack_d0._0_4_ - CStack_fc.z;
            auStack_ac._4_4_ = (float)auStack_d0._4_4_ - fStack_f0;
            fStack_a4 = fStack_c8 - fStack_ec;
            if ((0.0 < (double)fStack_a4) && ((double)fStack_a4 <= 30)) {
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (aCStack_e8,(CVector3f *)auStack_ac);
              auStack_19c._0_4_ = 0.5235988;
              if (fStack_a4 < (float)10) {
                auStack_19c._0_4_ = 1.5707964;
              }
              if (((ABS(aCStack_e8[0].x) <= (float)auStack_19c._0_4_) &&
                  ((float)local_24 <= aCStack_e8[0].y)) && (aCStack_e8[0].y <= (float)pfStack_20)) {
                fVar8 = SQRT(fStack_a4 * fStack_a4 +
                             (float)auStack_ac._0_4_ * (float)auStack_ac._0_4_ +
                             (float)auStack_ac._4_4_ * (float)auStack_ac._4_4_);
                fVar1 = 1.0 / fVar8;
                auStack_ac._4_4_ = (float)auStack_ac._4_4_ * fVar1;
                auStack_ac._0_4_ = (float)auStack_ac._0_4_ * fVar1;
                fStack_a4 = fStack_a4 * fVar1;
                auStack_19c._4_4_ =
                     fVar8 * (float)0.033333333333333298 +
                     ((float)2 -
                     (fStack_a4 * CStack_c0.y +
                     (float)auStack_ac._0_4_ * fStack_c4 + (float)auStack_ac._4_4_ * CStack_c0.x));
                if ((float)auStack_19c._4_4_ < fStack_14) {
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                            (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,unaff_EBP);
                  iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                    (g_CDemonSetPtr,(CVector3f *)(auStack_90 + 8),&CStack_7c);
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  if (iVar7 == 0) {
                    fStack_14 = (float)auStack_19c._4_4_;
                    local_2c = aCStack_e8[0].y;
                    fStack_28 = aCStack_e8[0].x;
                    pCStack_18->actor_name[0x1c] = '\x01';
                    pCStack_18->actor_name[0x1d] = '\0';
                    pCStack_18->actor_name[0x1e] = '\0';
                    pCStack_18->actor_name[0x1f] = '\0';
                  }
                }
              }
            }
            iVar6 = iVar6 + 1;
            pCVar5 = pCVar5 + 1;
          } while (iVar6 < iStack_1c);
        }
      }
      iStack_38 = iStack_38 + 4;
    }
  }
  dVar2 = 1.5;
  if (iStack_44 != 0) {
    dVar2 = 0.5;
  }
  fStack_40 = in_stack_0000000c * (float)3.1415926535000001 * (float)dVar2;
  local_48 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_34 - pfStack_20[3]);
  fStack_14 = local_48;
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_30 - pfStack_20[2]);
  fStack_50 = -fStack_40;
  if (local_48 < fStack_50) {
    local_48 = fStack_50;
  }
  if (fStack_40 < local_48) {
    local_48 = fStack_40;
  }
  fStack_54 = -fStack_40;
  fStack_4c = fStack_14;
  if (fStack_14 < fStack_54) {
    fStack_4c = fStack_54;
  }
  if (fStack_40 < fStack_4c) {
    fStack_4c = fStack_40;
  }
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pfStack_20[3] + local_48);
  pfStack_20[3] = fStack_14;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pfStack_20[2] + fStack_4c);
  pfStack_20[2] = fVar8;
  pfStack_20[5] = 1.0;
  if (((pfStack_20[7] == 1.4013e-45) && (ABS(pfStack_20[3] - fStack_34) < (float)0.01))
     && (ABS(pfStack_20[2] - local_30) < (float)0.01)) {
    pfStack_20[7] = 2.8026e-45;
    return;
  }
  return;
}
