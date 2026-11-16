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
  float fVar1;
  double dVar2;
  SArmAimData *pSVar3;
  uint uVar4;
  CDeformableModelInstance *this_ptr_01;
  CCharacter *pCVar5;
  EDeathState EVar6;
  int iVar7;
  float fVar8;
  CVector3f *input_local_point;
  byte bVar9;
  float afStackY_1160 [969];
  CVector3f *input_world_point;
  float fStack_21c;
  CVector3f aCStack_218 [10];
  CMatrix3x3f CStack_1a0;
  float fStack_178;
  float afStack_174 [2];
  CVector3f CStack_16c;
  CVector3f CStack_160;
  CVector3f CStack_154;
  CVector3f CStack_148;
  CVector3f CStack_13c;
  CVector3f CStack_130;
  CVector3f CStack_124;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [2];
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float fStack_84;
  CVector3f aCStack_7c [2];
  float fStack_60;
  int local_5c;
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
  
  bVar9 = 0;
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
    iVar7 = _DAT_02c8360c;
  }
  else {
    local_5c = _DAT_02c83638;
    iVar7 = _DAT_02c83610;
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
    pCVar5 = (CCharacter *)this_ptr->weapon;
    fStack_118 = fVar8;
    fStack_114 = fVar8;
    fStack_110 = fVar8;
    if (pCVar5 != (CCharacter *)0x0) {
      (*(((pCVar5->base).vtable._uc)->_uc).isInvulnerable)(pCVar5);
      fStack_dc = afStack_9c[2];
      afStack_d8[(uint)bVar9 * -2] = afStack_9c[(uint)bVar9 * -2 + 3];
      afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      if (&fStack_118 != &fStack_dc) {
        fStack_118 = fStack_dc;
        fStack_114 = afStack_d8[0];
        fStack_110 = afStack_d8[1];
      }
    }
    this_ptr_01 = &(this_ptr->base).base.model;
    if (local_4c == WEAPON_TYPE_GUN) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (this_ptr_01,iVar7,&CStack_148);
      CStack_f4.x = CStack_148.x;
      afStack_fc[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_148 + (uint)bVar9 * -8 + 4);
      afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           *(float *)((int)&CStack_148 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (&CStack_ac != (CVector3f *)(afStack_fc + 2)) {
        CStack_ac.x = CStack_f4.x;
        CStack_ac.y = CStack_f4.y;
        CStack_ac.z = CStack_f4.z;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (this_ptr_01,local_5c,&CStack_10c);
      CStack_124.x = CStack_10c.x;
      *(uint *)((int)&CStack_124 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_10c + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_124 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_10c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (&CStack_ac != &CStack_124) {
        CStack_ac.x = CStack_124.x;
        CStack_ac.y = CStack_124.y;
        CStack_ac.z = CStack_124.z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,&CStack_ac,&CStack_d0);
    pSVar3 = local_28;
    CStack_154.x = CStack_d0.x;
    *(uint *)((int)&CStack_154 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_d0 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_154 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    CStack_130.x = pSVar3->aim_pitch;
    CStack_130.z = 0.0;
    CStack_130.y = local_28->aim_yaw;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_1a0,&CStack_130);
    CStack_b8.x = 0.0;
    CStack_b8.y = 0.0;
    CStack_b8.z = 1.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(&CStack_1a0,&CStack_b8,&CStack_c4);
    fStack_178 = CStack_c4.x;
    afStack_174[(uint)bVar9 * -2] = *(float *)((int)&CStack_c4 + (uint)bVar9 * -8 + 4);
    afStack_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&CStack_c4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fStack_24 = 1e+30;
    iStack_40 = 0;
    for (iStack_44 = 0; iStack_44 < g_CDemonSetPtr->threat_count; iStack_44 = iStack_44 + 1) {
      pCVar5 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_40),
                          g_CCharacterClassInfo.name_hash);
      if ((pCVar5 == (CCharacter *)0x0) ||
         ((EVar6 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5),
          EVar6 == DEATH_STATE_ALIVE &&
          (iVar7 = (*((pCVar5->base).vtable._ub)->shouldIgnoreForTargeting)((CDemonActor *)pCVar5),
          iVar7 == 0)))) {
        pCStack_20 = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_40);
        __arrinit(aCStack_218,10,&g_CVectorTypeInfo);
        iStack_2c = (*((pCStack_20->vtable)._ub)->getTargetPoints)(pCStack_20,aCStack_218);
        if ((0 < iStack_2c) && (iStack_1c = 0, 0 < iStack_2c)) {
          input_local_point = aCStack_218;
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      (pCStack_20,input_local_point,aCStack_7c);
            input_world_point = &CStack_16c;
            CStack_16c.x = aCStack_7c[0].x;
            *(uint *)((int)&CStack_16c + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)aCStack_7c + (uint)bVar9 * -8 + 4);
            *(uint *)((int)&CStack_16c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 *(uint *)((int)aCStack_7c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                      ((CDemonActor *)this_ptr,input_world_point,&CStack_160);
            fStack_100 = CStack_160.x;
            afStack_fc[(uint)bVar9 * -2] = *(float *)((int)&CStack_160 + (uint)bVar9 * -8 + 4);
            afStack_fc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 *(float *)((int)&CStack_160 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            fStack_a0 = fStack_100 - CStack_ac.x;
            afStack_9c[0] = afStack_fc[0] - CStack_ac.y;
            afStack_9c[1] = afStack_fc[1] - CStack_ac.z;
            CStack_e8.x = fStack_100 - CStack_ac.x;
            *(float *)((int)&CStack_e8 + (uint)bVar9 * -8 + 4) = afStack_9c[(uint)bVar9 * -2];
            *(float *)((int)&CStack_e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if ((0.0 < (double)CStack_e8.z) && ((double)CStack_e8.z <= _DAT_005f6f09)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                        (&CStack_e8,&CStack_13c);
              fVar8 = CStack_e8.z;
              fStack_21c = 0.5235988;
              fStack_88 = CStack_13c.x;
              afStack_9c[(uint)bVar9 * -2 + 6] = *(float *)((int)&CStack_13c + (uint)bVar9 * -8 + 4)
              ;
              afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                   *(float *)((int)&CStack_13c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              if (fVar8 < (float)_DAT_005f6f11) {
                fStack_21c = 1.5707964;
              }
              if (((ABS(fStack_88) <= fStack_21c) && (local_30 <= fStack_84)) &&
                 (fStack_84 <= local_34)) {
                fVar8 = SQRT(CStack_e8.z * CStack_e8.z +
                             CStack_e8.x * CStack_e8.x + CStack_e8.y * CStack_e8.y);
                fVar1 = 1.0 / fVar8;
                CStack_e8.y = CStack_e8.y * fVar1;
                CStack_e8.x = CStack_e8.x * fVar1;
                CStack_e8.z = CStack_e8.z * fVar1;
                fVar8 = fVar8 * (float)_DAT_005f6ee9 +
                        ((float)_DAT_005f6ee1 -
                        (CStack_e8.z * afStack_174[1] +
                        CStack_e8.x * fStack_178 + CStack_e8.y * afStack_174[0]));
                if (fVar8 < fStack_24) {
                  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                            (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCStack_20);
                  iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                    (g_CDemonSetPtr,&CStack_154,&CStack_16c);
                  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
                  if (iVar7 == 0) {
                    fStack_38 = fStack_84;
                    fStack_3c = fStack_88;
                    local_28->aim_lock_state = 1;
                    fStack_24 = fVar8;
                  }
                }
              }
            }
            iStack_1c = iStack_1c + 1;
            input_local_point = input_local_point + 1;
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
  fStack_54 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_38 - local_28->target_yaw);
  fStack_18 = fStack_54;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_3c - local_28->target_pitch);
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
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_28->target_yaw + fStack_54);
  local_28->target_yaw = fStack_18;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_28->target_pitch + fStack_50);
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
