// Name: core_stranger.cpp_CStranger_autoAimAtThreat_FUN_0058eb50
// Address: 0058eb50
// Address Range: [[0058eb50, 0058f654]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0058eb50(CStranger *this_ptr,int hand_index,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0058eb50(CStranger *this_ptr,int hand_index,float delta_time)

{
  CDemonActor *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar1;
  double dVar2;
  SArmAimData *pSVar3;
  uint uVar4;
  CDeformableModelInstance *pCVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  CVector3f *pCVar10;
  byte bVar11;
  float afStackY_1160 [969];
  CVector3f *pCVar12;
  float fStack_21c;
  CVector3f aCStack_218 [10];
  CMatrix3x3f CStack_1a0;
  float fStack_178;
  float afStack_174 [2];
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [2];
  CVector3f CStack_154;
  float fStack_148;
  float afStack_144 [5];
  CVector3f CStack_130;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
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
  uint local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  EWeaponType local_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  int iStack_2c;
  SArmAimData *local_28;
  float fStack_24;
  CDemonActor *pCStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar11 = 0;
  local_28 = &this_ptr->left_arm_aim;
  if (hand_index == 1) {
    local_28 = &this_ptr->right_arm_aim;
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
    local_28->target_yaw = 0.0;
    local_28->aim_yaw = 0.0;
    this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
    uVar4 = 0;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      uVar4 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00);
    }
    if ((uVar4 & 4) == 0) {
      local_28->target_pitch = 0.0;
      local_28->aim_pitch = 0.0;
      return;
    }
    local_4c = WEAPON_TYPE_DYNAMITE;
  }
  else {
    local_4c = this_ptr->weapon->weapon_type;
  }
  if (hand_index == 0) {
    if (((this_ptr->base).aim_mode == AIM_MODE_MANUAL) && (local_4c == WEAPON_TYPE_GUN)) {
      return;
    }
    local_5c = _DAT_02c83634;
    local_30 = -1.3089969;
    local_34 = 0.5235988;
    uVar9 = _DAT_02c8360c;
  }
  else {
    local_5c = _DAT_02c83638;
    uVar9 = _DAT_02c83610;
    if (local_4c == WEAPON_TYPE_GUN) {
      local_34 = 1.3089969;
      local_30 = -0.5235988;
    }
    else {
      local_34 = 0.5235988;
      local_30 = -0.5235988;
    }
  }
  fVar8 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005f6ed9 * (float)_DAT_005f6ee1 *
          delta_time + local_28->aim_pitch;
  local_28->aim_yaw = 0.0;
  local_28->aim_pitch = fVar8;
  if (fVar8 < 0xBF860A92) {
    local_28->aim_pitch = 0xBF860A92;
  }
  if (0x3F9C61AA < local_28->aim_pitch) {
    local_28->aim_pitch = 0x3F9C61AA;
  }
  if (local_28->target_yaw < local_30) {
    local_28->target_yaw = local_30;
  }
  if (local_34 < local_28->target_yaw) {
    local_28->target_yaw = local_34;
  }
  if (local_28->aim_yaw < local_30) {
    local_28->aim_yaw = local_30;
  }
  if (local_34 < local_28->aim_yaw) {
    local_28->aim_yaw = local_34;
  }
  local_28->aim_lock_state = 0;
  fStack_38 = local_28->aim_yaw;
  fStack_3c = local_28->aim_pitch;
  if ((local_4c == WEAPON_TYPE_DYNAMITE) || (fVar8 = (float)(this_ptr->base).aim_mode, fVar8 != 0.0)
     ) {
    local_28->target_yaw = 0.0;
  }
  else {
    this_ptr_01 = (CCharacter *)this_ptr->weapon;
    afStack_120[2] = fVar8;
    afStack_120[3] = fVar8;
    fStack_110 = fVar8;
    if (this_ptr_01 != (CCharacter *)0x0) {
      (*(((this_ptr_01->base).vtable._uc)->_uc).isInvulnerable)(this_ptr_01);
      fStack_dc = afStack_9c[2];
      afStack_d8[(uint)bVar11 * -2] = afStack_9c[(uint)bVar11 * -2 + 3];
      afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      if (afStack_120 + 2 != &fStack_dc) {
        afStack_120[2] = fStack_dc;
        afStack_120[3] = afStack_d8[0];
        fStack_110 = afStack_d8[1];
      }
    }
    pCVar5 = &(this_ptr->base).base.model;
    if (local_4c == WEAPON_TYPE_GUN) {
      core_skeleton_cpp_FUN_00569040(pCVar5,uVar9);
      fStack_f4 = fStack_148;
      afStack_108[(uint)bVar11 * -2 + 6] = afStack_144[(uint)bVar11 * -2];
      afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_144[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      if (&fStack_ac != afStack_108 + 5) {
        fStack_ac = fStack_f4;
        fStack_a8 = fStack_f0;
        fStack_a4 = fStack_ec;
      }
    }
    else {
      core_skeleton_cpp_FUN_00569040(pCVar5,local_5c);
      fStack_124 = fStack_10c;
      afStack_120[(uint)bVar11 * -2] = afStack_108[(uint)bVar11 * -2];
      afStack_120[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      if (&fStack_ac != &fStack_124) {
        fStack_ac = fStack_124;
        fStack_a8 = afStack_120[0];
        fStack_a4 = afStack_120[1];
      }
    }
    core_actor_cpp_FUN_00408b40(this_ptr,&fStack_ac);
    pSVar3 = local_28;
    CStack_154.x = afStack_d8[2];
    *(float *)((int)&CStack_154 + (uint)bVar11 * -8 + 4) = afStack_d8[(uint)bVar11 * -2 + 3];
    *(float *)((int)&CStack_154 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    CStack_130.x = pSVar3->aim_pitch;
    CStack_130.z = 0.0;
    CStack_130.y = local_28->aim_yaw;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_1a0,&CStack_130);
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0x3f800000;
    core_dirmat_cpp_FUN_0045f690(&CStack_1a0,&uStack_b8);
    fStack_178 = fStack_c4;
    afStack_174[(uint)bVar11 * -2] = afStack_d8[(uint)bVar11 * -2 + 6];
    afStack_174[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    fStack_24 = 1e+30;
    iStack_40 = 0;
    for (iStack_44 = 0; iStack_44 < g_CDemonSetPtr->threat_count; iStack_44 = iStack_44 + 1) {
      iVar6 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)((int)g_CDemonSetPtr->threats + iStack_40),
                         g_CCharacterClassInfo.name_hash);
      if ((iVar6 == 0) ||
         ((iVar7 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar7 == 0 &&
          (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x70))(iVar6), iVar6 == 0)))) {
        pCStack_20 = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_40);
        __arrinit(aCStack_218,10,&g_CVectorTypeInfo);
        iStack_2c = (*((pCStack_20->vtable)._ub)->getTargetPoints)(pCStack_20,aCStack_218);
        if ((0 < iStack_2c) && (iStack_1c = 0, 0 < iStack_2c)) {
          pCVar10 = aCStack_218;
          do {
            core_actor_cpp_FUN_00408b40(pCStack_20,pCVar10);
            pCVar12 = &CStack_16c;
            CStack_16c.x = fStack_7c;
            *(float *)((int)&CStack_16c + (uint)bVar11 * -8 + 4) = afStack_9c[(uint)bVar11 * -2 + 9]
            ;
            *(float *)((int)&CStack_16c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            core_actor_cpp_FUN_00408bb0(this_ptr,pCVar12);
            afStack_108[2] = fStack_160;
            afStack_108[(uint)bVar11 * -2 + 3] = afStack_15c[(uint)bVar11 * -2];
            afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_15c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            fStack_a0 = afStack_108[2] - fStack_ac;
            afStack_9c[0] = afStack_108[3] - fStack_a8;
            afStack_9c[1] = fStack_f8 - fStack_a4;
            fStack_e8 = afStack_108[2] - fStack_ac;
            afStack_108[(uint)bVar11 * -2 + 9] = afStack_9c[(uint)bVar11 * -2];
            afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                 afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            if ((0.0 < (double)fStack_e0) && ((double)fStack_e0 <= _DAT_005f6f09)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_108 + 8);
              fVar8 = fStack_e0;
              fStack_21c = 0.5235988;
              fStack_88 = afStack_144[2];
              afStack_9c[(uint)bVar11 * -2 + 6] = afStack_144[(uint)bVar11 * -2 + 3];
              afStack_9c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                   afStack_144[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
              if (fVar8 < (float)_DAT_005f6f11) {
                fStack_21c = 1.5707964;
              }
              if (((ABS(fStack_88) <= fStack_21c) && (local_30 <= fStack_84)) &&
                 (fStack_84 <= local_34)) {
                fVar8 = SQRT(fStack_e0 * fStack_e0 + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
                fVar1 = 1.0 / fVar8;
                fStack_e4 = fStack_e4 * fVar1;
                fStack_e8 = fStack_e8 * fVar1;
                fStack_e0 = fStack_e0 * fVar1;
                fVar8 = fVar8 * (float)_DAT_005f6ee9 +
                        ((float)_DAT_005f6ee1 -
                        (fStack_e0 * afStack_174[1] +
                        fStack_e8 * fStack_178 + fStack_e4 * afStack_174[0]));
                if (fVar8 < fStack_24) {
                  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                            (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_20);
                  iVar6 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                    (g_CDemonSetPtr,&CStack_154,&CStack_16c);
                  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                  if (iVar6 == 0) {
                    fStack_38 = fStack_84;
                    fStack_3c = fStack_88;
                    local_28->aim_lock_state = 1;
                    fStack_24 = fVar8;
                  }
                }
              }
            }
            iStack_1c = iStack_1c + 1;
            pCVar10 = pCVar10 + 1;
          } while (iStack_1c < iStack_2c);
        }
      }
      iStack_40 = iStack_40 + 4;
    }
  }
  dVar2 = _DAT_005f6ef1;
  if (local_4c != WEAPON_TYPE_GUN) {
    dVar2 = _DAT_005f6ef9;
  }
  fStack_48 = delta_time * _DAT_005f6ed9 * (float)dVar2;
  fStack_54 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (fStack_38 - local_28->target_yaw);
  fStack_18 = fStack_54;
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (fStack_3c - local_28->target_pitch);
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
  fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                               (local_28->target_yaw + fStack_54);
  local_28->target_yaw = fStack_18;
  fVar8 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_28->target_pitch + fStack_50);
  local_28->target_pitch = fVar8;
  local_28->kickback_factor = 1.0;
  if (((local_28->aim_lock_state == 1) &&
      (ABS(local_28->target_yaw - fStack_38) < (float)_DAT_005f6f01)) &&
     (ABS(local_28->target_pitch - fStack_3c) < (float)_DAT_005f6f01)) {
    local_28->aim_lock_state = 2;
    return;
  }
  return;
}
