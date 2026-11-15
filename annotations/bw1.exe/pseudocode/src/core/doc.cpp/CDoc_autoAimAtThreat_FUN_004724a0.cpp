// Name: core_doc.cpp_CDoc_autoAimAtThreat_FUN_004724a0
// Address: 004724a0
// Address Range: [[004724a0, 0047315c]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_autoAimAtThreat_FUN_004724a0(CDoc *this_ptr,int hand_index,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_autoAimAtThreat_FUN_004724a0(CDoc *this_ptr,int hand_index,float delta_time)

{
  CDemonActor *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar1;
  SArmAimData *pSVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  EWeaponType EVar6;
  int iVar7;
  byte bVar8;
  double dVar9;
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
  float afStack_164 [2];
  CVector3f CStack_15c;
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [2];
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [5];
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int local_68;
  int local_64;
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
  SArmAimData *local_30;
  float fStack_2c;
  CDemonActor *pCStack_28;
  float fStack_24;
  CVector3f *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  local_30 = &this_ptr->left_arm_aim;
  if (hand_index == 1) {
    local_30 = &this_ptr->right_arm_aim;
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
    local_30->target_yaw = 0.0;
    local_30->aim_yaw = 0.0;
    this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
    uVar3 = 0;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      uVar3 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00);
    }
    if ((uVar3 & 4) == 0) {
      local_30->target_pitch = 0.0;
      local_30->aim_pitch = 0.0;
      return;
    }
    EVar6 = WEAPON_TYPE_DYNAMITE;
  }
  else {
    EVar6 = this_ptr->weapon->weapon_type;
  }
  if (hand_index == 0) {
    local_30->target_pitch = 0.0;
    local_30->aim_pitch = 0.0;
    return;
  }
  local_64 = _DAT_01b68824;
  local_68 = _DAT_01b6884c;
  if ((EVar6 == WEAPON_TYPE_GUN) || (EVar6 == WEAPON_TYPE_FLASHLIGHT)) {
    local_3c = 1.3089969;
  }
  else {
    local_3c = 0.5235988;
  }
  local_38 = -0.5235988;
  fVar5 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005da2c4 * (float)_DAT_005da2cc *
          delta_time + local_30->aim_pitch;
  local_30->aim_yaw = 0.0;
  local_30->aim_pitch = fVar5;
  if (fVar5 < 0xBF860A92) {
    local_30->aim_pitch = 0xBF860A92;
  }
  if (0x3F9C61AA < local_30->aim_pitch) {
    local_30->aim_pitch = 0x3F9C61AA;
  }
  if (local_30->target_yaw < -0.5235988) {
    local_30->target_yaw = -0.5235988;
  }
  if (local_3c < local_30->target_yaw) {
    local_30->target_yaw = local_3c;
  }
  if (local_30->aim_yaw < -0.5235988) {
    local_30->aim_yaw = -0.5235988;
  }
  if (local_3c < local_30->aim_yaw) {
    local_30->aim_yaw = local_3c;
  }
  local_30->aim_lock_state = 0;
  fStack_40 = local_30->aim_yaw;
  fStack_44 = local_30->aim_pitch;
  if ((EVar6 == WEAPON_TYPE_DYNAMITE) || (fVar5 = (float)(this_ptr->base).aim_mode, fVar5 != 0.0)) {
    local_30->target_yaw = fStack_40;
  }
  else {
    this_ptr_01 = (CCharacter *)this_ptr->weapon;
    fStack_180 = fVar5;
    fStack_17c = fVar5;
    fStack_178 = fVar5;
    if (this_ptr_01 != (CCharacter *)0x0) {
      (*(((this_ptr_01->base).vtable._uc)->_uc).isInvulnerable)(this_ptr_01);
      fStack_fc = fStack_168;
      afStack_f8[(uint)bVar8 * -2] = afStack_164[(uint)bVar8 * -2];
      afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_164[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      if (&fStack_180 != &fStack_fc) {
        fStack_180 = fStack_fc;
        fStack_17c = afStack_f8[0];
        fStack_178 = afStack_f8[1];
      }
    }
    if ((EVar6 == WEAPON_TYPE_GUN) || (EVar6 == WEAPON_TYPE_FLASHLIGHT)) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (&(this_ptr->base).base.model,local_64,&CStack_120);
      CStack_144.x = CStack_120.x;
      *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&CStack_cc != &CStack_144) {
        CStack_cc.x = CStack_144.x;
        CStack_cc.y = CStack_144.y;
        CStack_cc.z = CStack_144.z;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (&(this_ptr->base).base.model,local_68,&CStack_e4);
      CStack_12c.x = CStack_e4.x;
      *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_e4 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&CStack_cc != &CStack_12c) {
        CStack_cc.x = CStack_12c.x;
        CStack_cc.y = CStack_12c.y;
        CStack_cc.z = CStack_12c.z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,&CStack_cc,&CStack_15c);
    pSVar2 = local_30;
    CStack_108.x = CStack_15c.x;
    *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_15c + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&CStack_108 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&CStack_15c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    CStack_18c.x = pSVar2->aim_pitch;
    CStack_18c.z = 0.0;
    CStack_18c.y = local_30->aim_yaw;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_1b4,&CStack_18c);
    CStack_b4.x = 0.0;
    CStack_b4.y = 0.0;
    CStack_b4.z = 1.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(&CStack_1b4,&CStack_b4,&CStack_d8);
    fStack_84 = CStack_d8.x;
    afStack_a4[(uint)bVar8 * -2 + 9] = *(float *)((int)&CStack_d8 + (uint)bVar8 * -8 + 4);
    afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         *(float *)((int)&CStack_d8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    fStack_2c = 1e+30;
    iStack_4c = 0;
    for (iStack_48 = 0; iStack_48 < g_CDemonSetPtr->threat_count; iStack_48 = iStack_48 + 1) {
      pCStack_28 = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_4c);
      __arrinit(aCStack_22c,10,&g_CVectorTypeInfo);
      iStack_34 = (*((pCStack_28->vtable)._ub)->getTargetPoints)(pCStack_28,aCStack_22c);
      if ((0 < iStack_34) && (iVar7 = 0, 0 < iStack_34)) {
        pCStack_1c = aCStack_22c;
        do {
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                    (pCStack_28,pCStack_1c,&CStack_138);
          CStack_174.x = CStack_138.x;
          *(uint *)((int)&CStack_174 + (uint)bVar8 * -8 + 4) =
               *(uint *)((int)&CStack_138 + (uint)bVar8 * -8 + 4);
          *(uint *)((int)&CStack_174 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               *(uint *)((int)&CStack_138 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                    ((CDemonActor *)this_ptr,&CStack_174,&CStack_150);
          afStack_f8[2] = CStack_150.x;
          afStack_f8[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_150 + (uint)bVar8 * -8 + 4);
          afStack_f8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               *(float *)((int)&CStack_150 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          fStack_c0 = afStack_f8[2] - CStack_cc.x;
          afStack_bc[0] = afStack_f8[3] - CStack_cc.y;
          afStack_bc[1] = fStack_e8 - CStack_cc.z;
          fStack_114 = afStack_f8[2] - CStack_cc.x;
          afStack_110[(uint)bVar8 * -2] = afStack_bc[(uint)bVar8 * -2];
          afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if ((0.0 < (double)afStack_110[1]) && ((double)afStack_110[1] <= _DAT_005da2f4)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&fStack_114);
            fVar5 = SQRT(afStack_110[1] * afStack_110[1] +
                         fStack_114 * fStack_114 + afStack_110[0] * afStack_110[0]);
            afStack_a4[2] = fStack_a8;
            afStack_a4[(uint)bVar8 * -2 + 3] = afStack_a4[(uint)bVar8 * -2];
            afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if ((float)_DAT_005da2ec < fVar5) {
              fStack_18 = -fStack_180;
              if ((((float)_DAT_005da2ec <= fVar5) &&
                  (dVar9 = (double)(SQRT(fVar5 * fVar5 - fStack_18 * fStack_18) / fVar5),
                  dVar9 < 1.0)) && (0.0 <= dVar9)) {
                dVar9 = acos(dVar9);
                fStack_24 = (float)dVar9;
                if (0.0 <= (float)pCStack_1c) {
                  afStack_a4[2] = afStack_a4[2] + fStack_24;
                }
                else {
                  afStack_a4[2] = afStack_a4[2] - fStack_24;
                }
                fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_a4[2]);
                afStack_a4[2] = fStack_18;
              }
              if ((((float)_DAT_005da2ec <= fVar5) &&
                  (dVar9 = (double)(SQRT(fVar5 * fVar5 - fStack_17c * fStack_17c) / fVar5),
                  dVar9 < 1.0)) && (0.0 <= dVar9)) {
                dVar9 = acos(dVar9);
                pCStack_28 = (CDemonActor *)(float)dVar9;
                if (0.0 <= fStack_180) {
                  afStack_a4[1] = afStack_a4[1] + (float)pCStack_28;
                }
                else {
                  afStack_a4[1] = afStack_a4[1] - (float)pCStack_28;
                }
                fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_a4[1]);
                afStack_a4[1] = fStack_18;
              }
            }
            fStack_90 = afStack_a4[2];
            afStack_a4[(uint)bVar8 * -2 + 6] = afStack_a4[(uint)bVar8 * -2 + 3];
            afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                 afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            fStack_23c = 0.5235988;
            if (afStack_110[1] < (float)_DAT_005da2fc) {
              fStack_23c = 1.5707964;
            }
            if (((ABS(fStack_90) <= fStack_23c) && (local_38 <= fStack_8c)) &&
               (fStack_8c <= local_3c)) {
              fVar5 = SQRT(afStack_110[1] * afStack_110[1] +
                           fStack_114 * fStack_114 + afStack_110[0] * afStack_110[0]);
              fVar1 = 1.0 / fVar5;
              afStack_110[0] = afStack_110[0] * fVar1;
              fStack_114 = fStack_114 * fVar1;
              afStack_110[1] = afStack_110[1] * fVar1;
              fVar5 = fVar5 * (float)_DAT_005da2d4 +
                      ((float)_DAT_005da2cc -
                      (afStack_110[1] * fStack_7c +
                      fStack_114 * fStack_84 + afStack_110[0] * fStack_80));
              if (fVar5 < fStack_2c) {
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                          (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_28);
                iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                  (g_CDemonSetPtr,&CStack_108,&CStack_174);
                core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                if (iVar4 == 0) {
                  fStack_40 = fStack_8c;
                  fStack_44 = fStack_90;
                  local_30->aim_lock_state = 1;
                  this_ptr->action_timer = 2.0;
                  fStack_2c = fVar5;
                }
              }
            }
          }
          pCStack_1c = pCStack_1c + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iStack_34);
      }
      iStack_4c = iStack_4c + 4;
    }
  }
  fVar5 = delta_time * _DAT_005da2c4 * (float)_DAT_005da2dc;
  fStack_50 = fVar5;
  if (0.0 < this_ptr->action_timer) {
    fVar1 = this_ptr->action_timer - delta_time;
    this_ptr->action_timer = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->action_timer = 0.0;
    }
    fStack_50 = (fVar5 * (float)_DAT_005da2e4) / this_ptr->action_timer;
    if (fVar5 < fStack_50) {
      fStack_50 = fVar5;
    }
  }
  fStack_58 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_40 - local_30->target_yaw);
  fStack_14 = fStack_58;
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_44 - local_30->target_pitch);
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
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_30->target_yaw + fStack_58);
  local_30->target_yaw = fStack_14;
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_30->target_pitch + fStack_54);
  local_30->target_pitch = fVar5;
  local_30->kickback_factor = 1.0;
  if (((local_30->aim_lock_state == 1) &&
      (ABS(local_30->target_yaw - fStack_40) < (float)_DAT_005da2ec)) &&
     (ABS(local_30->target_pitch - fStack_44) < (float)_DAT_005da2ec)) {
    local_30->aim_lock_state = 2;
    return;
  }
  return;
}
