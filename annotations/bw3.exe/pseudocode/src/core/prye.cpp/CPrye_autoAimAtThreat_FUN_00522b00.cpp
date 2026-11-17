// Name: core_prye.cpp_CPrye_autoAimAtThreat_FUN_00522b00
// Address: 00522b00
// Address Range: [[00522b00, 005237f0]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_autoAimAtThreat_FUN_00522b00(CPrye *this_ptr,int hand_index,float delta_time)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_autoAimAtThreat_FUN_00522b00(CPrye *this_ptr,int hand_index,float delta_time)

{
  CDemonActor *this_ptr_00;
  CCharacter *this_ptr_01;
  float fVar1;
  SArmAimData *pSVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  byte bVar7;
  double dVar8;
  float afStackY_1174 [960];
  float fStack_234;
  CVector3f aCStack_22c [10];
  CMatrix3x3f CStack_1b4;
  float fStack_18c;
  float afStack_188 [4];
  float fStack_178;
  CVector3f CStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_158 [2];
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [2];
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_90;
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
  EWeaponType local_3c;
  int iStack_38;
  SArmAimData *local_34;
  float fStack_30;
  CDemonActor *pCStack_2c;
  float fStack_28;
  CVector3f *pCStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  local_34 = &this_ptr->left_arm_aim;
  if (hand_index == 1) {
    local_34 = &this_ptr->right_arm_aim;
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
    local_34->target_yaw = 0.0;
    local_34->aim_yaw = 0.0;
    this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
    uVar3 = 0;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      uVar3 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00);
    }
    if ((uVar3 & 4) == 0) {
      local_34->target_pitch = 0.0;
      local_34->aim_pitch = 0.0;
      return;
    }
    local_3c = WEAPON_TYPE_DYNAMITE;
  }
  else {
    local_3c = this_ptr->weapon->weapon_type;
  }
  iVar6 = g_StrangerIndices[10];
  if (hand_index == 0) {
    local_34->target_pitch = 0.0;
    local_34->aim_pitch = 0.0;
    return;
  }
  local_1c = (float)g_StrangerIndices[0];
  if ((local_3c == WEAPON_TYPE_GUN) || (local_3c == WEAPON_TYPE_FLASHLIGHT)) {
    local_44 = 1.3089969;
  }
  else {
    local_44 = 0.5235988;
  }
  local_40 = -0.5235988;
  fVar5 = (this_ptr->base).player_input.look_up_down_speed * 3.141593f *
          (float)2 * delta_time + local_34->aim_pitch;
  local_34->aim_yaw = 0.0;
  local_34->aim_pitch = fVar5;
  if (fVar5 < -0.7853982f) {
    local_34->aim_pitch = -0.7853982f;
  }
  if (0.7853982f < local_34->aim_pitch) {
    local_34->aim_pitch = 0.7853982f;
  }
  if (local_34->target_yaw < -0.5235988) {
    local_34->target_yaw = -0.5235988;
  }
  if (local_44 < local_34->target_yaw) {
    local_34->target_yaw = local_44;
  }
  if (local_34->aim_yaw < -0.5235988) {
    local_34->aim_yaw = -0.5235988;
  }
  if (local_44 < local_34->aim_yaw) {
    local_34->aim_yaw = local_44;
  }
  local_34->aim_lock_state = 0;
  fStack_48 = local_34->aim_yaw;
  fStack_4c = local_34->aim_pitch;
  if ((local_3c == WEAPON_TYPE_DYNAMITE) || (fVar5 = (float)(this_ptr->base).aim_mode, fVar5 != 0.0)
     ) {
    local_34->target_yaw = fStack_48;
  }
  else {
    this_ptr_01 = (CCharacter *)this_ptr->weapon;
    fStack_168 = fVar5;
    fStack_164 = fVar5;
    fStack_160 = fVar5;
    if (this_ptr_01 != (CCharacter *)0x0) {
      (*(((this_ptr_01->base).vtable._uc)->_uc).isInvulnerable)(this_ptr_01);
      afStack_188[2] = fStack_15c;
      afStack_188[(uint)bVar7 * -2 + 3] = afStack_158[(uint)bVar7 * -2];
      afStack_188[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      if (&fStack_168 != afStack_188 + 2) {
        fStack_168 = afStack_188[2];
        fStack_164 = afStack_188[3];
        fStack_160 = fStack_178;
      }
    }
    if ((local_3c == WEAPON_TYPE_GUN) || (local_3c == WEAPON_TYPE_FLASHLIGHT)) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                (&(this_ptr->base).base.model,(int)local_1c,&CStack_144);
      CStack_c0.x = CStack_144.x;
      afStack_c8[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_144 + (uint)bVar7 * -8 + 4);
      afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_144 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&CStack_d8 != (CVector3f *)(afStack_c8 + 2)) {
        CStack_d8.x = CStack_c0.x;
        CStack_d8.y = CStack_c0.y;
        CStack_d8.z = CStack_c0.z;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                (&(this_ptr->base).base.model,iVar6,&CStack_120);
      CStack_b4.x = CStack_120.x;
      afStack_c8[(uint)bVar7 * -2 + 6] = *(float *)((int)&CStack_120 + (uint)bVar7 * -8 + 4);
      afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           *(float *)((int)&CStack_120 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if (&CStack_d8 != (CVector3f *)(afStack_c8 + 5)) {
        CStack_d8.x = CStack_b4.x;
        CStack_d8.y = CStack_b4.y;
        CStack_d8.z = CStack_b4.z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              ((CDemonActor *)this_ptr,&CStack_d8,&CStack_12c);
    pSVar2 = local_34;
    CStack_114.x = CStack_12c.x;
    *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + 4) =
         *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    CStack_174.x = pSVar2->aim_pitch;
    CStack_174.z = 0.0;
    CStack_174.y = local_34->aim_yaw;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&CStack_1b4,&CStack_174);
    CStack_150.x = 0.0;
    CStack_150.z = 1.0;
    CStack_150.y = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800(&CStack_1b4,&CStack_150,&CStack_90);
    fStack_a8 = CStack_90.x;
    afStack_c8[(uint)bVar7 * -2 + 9] = *(float *)((int)aCStack_84 + (uint)bVar7 * -8 + -8);
    afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         *(float *)((int)aCStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + -4);
    iStack_50 = 0;
    fStack_30 = 1e+30;
    for (iStack_54 = 0; iStack_54 < g_CDemonSetPtr->threat_count; iStack_54 = iStack_54 + 1) {
      pCStack_2c = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_50);
      __arrinit(aCStack_22c,10,&g_CVectorTypeInfo);
      iStack_38 = (*((pCStack_2c->vtable)._ub)->getTargetPoints)(pCStack_2c,aCStack_22c);
      if ((0 < iStack_38) && (iVar6 = 0, 0 < iStack_38)) {
        pCStack_20 = aCStack_22c;
        do {
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    (pCStack_2c,pCStack_20,&CStack_108);
          aCStack_84[0].x = CStack_108.x;
          *(uint *)((int)aCStack_84 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + 4);
          *(uint *)((int)aCStack_84 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&CStack_108 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    ((CDemonActor *)this_ptr,aCStack_84,&CStack_138);
          fStack_cc = CStack_138.x;
          afStack_c8[(uint)bVar7 * -2] = *(float *)((int)&CStack_138 + (uint)bVar7 * -8 + 4);
          afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               *(float *)((int)&CStack_138 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          fStack_18c = fStack_cc - CStack_d8.x;
          afStack_188[0] = afStack_c8[0] - CStack_d8.y;
          afStack_188[1] = afStack_c8[1] - CStack_d8.z;
          CStack_e4.x = fStack_cc - CStack_d8.x;
          *(float *)((int)&CStack_e4 + (uint)bVar7 * -8 + 4) = afStack_188[(uint)bVar7 * -2];
          *(float *)((int)&CStack_e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               afStack_188[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if ((0.0 < (double)CStack_e4.z) && ((double)CStack_e4.z <= 30)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_e4,&CStack_f0);
            fVar5 = SQRT(CStack_e4.z * CStack_e4.z +
                         CStack_e4.x * CStack_e4.x + CStack_e4.y * CStack_e4.y);
            fStack_fc = CStack_f0.x;
            afStack_f8[(uint)bVar7 * -2] = *(float *)((int)&CStack_f0 + (uint)bVar7 * -8 + 4);
            afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 *(float *)((int)&CStack_f0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            if ((float)0.01 < fVar5) {
              fStack_18 = -fStack_168;
              if ((((float)0.01 <= fVar5) &&
                  (dVar8 = (double)(SQRT(fVar5 * fVar5 - fStack_18 * fStack_18) / fVar5),
                  dVar8 < 1.0)) && (0.0 <= dVar8)) {
                dVar8 = acos(dVar8);
                pCStack_2c = (CDemonActor *)(float)dVar8;
                if (0.0 <= local_1c) {
                  fStack_fc = fStack_fc + (float)pCStack_2c;
                }
                else {
                  fStack_fc = fStack_fc - (float)pCStack_2c;
                }
                fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_fc);
                fStack_fc = fStack_18;
              }
              if ((((float)0.01 <= fVar5) &&
                  (dVar8 = (double)(SQRT(fVar5 * fVar5 - fStack_164 * fStack_164) / fVar5),
                  dVar8 < 1.0)) && (0.0 <= dVar8)) {
                dVar8 = acos(dVar8);
                fStack_28 = (float)dVar8;
                if (0.0 <= fStack_168) {
                  CStack_108.z = CStack_108.z + fStack_28;
                }
                else {
                  CStack_108.z = CStack_108.z - fStack_28;
                }
                fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(CStack_108.z);
                CStack_108.z = fStack_18;
              }
            }
            fStack_9c = fStack_fc;
            afStack_c8[(uint)bVar7 * -2 + 0xc] = afStack_f8[(uint)bVar7 * -2];
            afStack_c8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                 afStack_f8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if (local_3c == WEAPON_TYPE_SHOTGUN) {
              fStack_98 = fStack_98 + 0.1745329f;
            }
            fStack_234 = 0.5235988;
            if (CStack_e4.z < (float)10) {
              fStack_234 = 1.5707964;
            }
            if (((ABS(fStack_9c) <= fStack_234) && (local_40 <= fStack_98)) &&
               (fStack_98 <= local_44)) {
              fVar5 = SQRT(CStack_e4.z * CStack_e4.z +
                           CStack_e4.x * CStack_e4.x + CStack_e4.y * CStack_e4.y);
              fVar1 = 1.0 / fVar5;
              CStack_e4.y = CStack_e4.y * fVar1;
              CStack_e4.x = CStack_e4.x * fVar1;
              CStack_e4.z = CStack_e4.z * fVar1;
              fVar5 = fVar5 * (float)0.033333333333333298 +
                      ((float)2 -
                      (CStack_e4.z * fStack_a0 + CStack_e4.x * fStack_a8 + CStack_e4.y * fStack_a4))
              ;
              if (fVar5 < fStack_30) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(g_CDemonSetPtr,2);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                          (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,pCStack_2c);
                iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                  (g_CDemonSetPtr,&CStack_114,aCStack_84);
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                if (iVar4 == 0) {
                  fStack_48 = fStack_98;
                  fStack_4c = fStack_9c;
                  local_34->aim_lock_state = 1;
                  this_ptr->action_timer = 2.0;
                  fStack_30 = fVar5;
                }
              }
            }
          }
          pCStack_20 = pCStack_20 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iStack_38);
      }
      iStack_50 = iStack_50 + 4;
    }
  }
  fVar5 = delta_time * 3.141593f * (float)3.5;
  fStack_58 = fVar5;
  if (0.0 < this_ptr->action_timer) {
    fVar1 = this_ptr->action_timer - delta_time;
    this_ptr->action_timer = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->action_timer = 0.0;
    }
    fStack_58 = (fVar5 * (float)0.25) / this_ptr->action_timer;
    if (fVar5 < fStack_58) {
      fStack_58 = fVar5;
    }
  }
  fStack_5c = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_48 - local_34->target_yaw);
  fStack_14 = fStack_5c;
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(fStack_4c - local_34->target_pitch);
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
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_34->target_yaw + fStack_5c);
  local_34->target_yaw = fStack_14;
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_34->target_pitch + fStack_60);
  local_34->target_pitch = fVar5;
  local_34->kickback_factor = 1.0;
  if (((local_34->aim_lock_state == 1) &&
      (ABS(local_34->target_yaw - fStack_48) < (float)0.01)) &&
     (ABS(local_34->target_pitch - fStack_4c) < (float)0.01)) {
    local_34->aim_lock_state = 2;
    return;
  }
  return;
}
