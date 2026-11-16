// Name: core_doc.cpp_CDoc_autoAimAtThreat_FUN_00459ff0
// Address: 00459ff0
// Address Range: [[00459ff0, 0045ab3c]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_autoAimAtThreat_FUN_00459ff0(CDoc *this_ptr,int hand_index,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_autoAimAtThreat_FUN_00459ff0(CDoc *this_ptr,int hand_index,float delta_time)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  float fVar2;
  double dVar3;
  SArmAimData *pSVar4;
  uint uVar5;
  CCharacter *pCVar6;
  EDeathState EVar7;
  int iVar8;
  float fVar9;
  CVector3f *input_local_point;
  byte bVar10;
  float afStackY_1170 [969];
  float fStack_230;
  CVector3f aCStack_228 [10];
  CMatrix3x3f CStack_1b0;
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [2];
  CVector3f CStack_170;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [2];
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  CVector3f CStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  float fStack_f8;
  float afStack_f4 [2];
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f aCStack_8c [3];
  float fStack_64;
  float fStack_60;
  int local_5c;
  float fStack_58;
  EWeaponType local_54;
  float fStack_50;
  CLocation *pCStack_4c;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  int iStack_30;
  SArmAimData *local_2c;
  float fStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar10 = 0;
  local_2c = &this_ptr->left_arm_aim;
  if (hand_index != 1) {
    if (this_ptr->weapon == (CWeapon *)0x0) {
      (this_ptr->left_arm_aim).target_yaw = 0.0;
      (this_ptr->left_arm_aim).aim_yaw = 0.0;
      this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
      uVar5 = 0;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        uVar5 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00);
      }
      if ((uVar5 & 4) == 0) {
        local_2c->target_pitch = 0.0;
        local_2c->aim_pitch = 0.0;
        return;
      }
      local_54 = WEAPON_TYPE_DYNAMITE;
    }
    else {
      local_54 = this_ptr->weapon->weapon_type;
    }
    if (hand_index == 0) {
      local_34 = -1.3089969;
      local_38 = 0.5235988;
      local_5c = _DAT_01b4d264;
      iVar8 = _DAT_01b4d28c;
    }
    else {
      local_5c = _DAT_01b4d268;
      iVar8 = _DAT_01b4d290;
      if ((local_54 == WEAPON_TYPE_GUN) || (local_54 == WEAPON_TYPE_FLASHLIGHT)) {
        local_38 = 1.3089969;
        local_34 = -0.5235988;
      }
      else {
        local_38 = 0.5235988;
        local_34 = -0.5235988;
      }
    }
    fVar9 = (this_ptr->base).player_input.look_up_down_speed * _DAT_005d0527 * (float)_DAT_005d052f
            * delta_time + local_2c->aim_pitch;
    local_2c->aim_yaw = 0.0;
    local_2c->aim_pitch = fVar9;
    if (fVar9 < 0xBF860A92) {
      local_2c->aim_pitch = 0xBF860A92;
    }
    if (0x3F9C61AA < local_2c->aim_pitch) {
      local_2c->aim_pitch = 0x3F9C61AA;
    }
    if (local_2c->target_yaw < local_34) {
      local_2c->target_yaw = local_34;
    }
    if (local_38 < local_2c->target_yaw) {
      local_2c->target_yaw = local_38;
    }
    if (local_2c->aim_yaw < local_34) {
      local_2c->aim_yaw = local_34;
    }
    if (local_38 < local_2c->aim_yaw) {
      local_2c->aim_yaw = local_38;
    }
    local_2c->aim_lock_state = 0;
    fStack_40 = local_2c->aim_yaw;
    fStack_3c = local_2c->aim_pitch;
    if ((local_54 == WEAPON_TYPE_DYNAMITE) ||
       (fVar9 = (float)(this_ptr->base).aim_mode, fVar9 != 0.0)) {
      local_2c->target_yaw = 0.0;
    }
    else {
      pCVar6 = (CCharacter *)this_ptr->weapon;
      fStack_128 = fVar9;
      fStack_124 = fVar9;
      fStack_120 = fVar9;
      if (pCVar6 != (CCharacter *)0x0) {
        (*(((pCVar6->base).vtable._uc)->_uc).isInvulnerable)(pCVar6);
        fStack_b0 = fStack_d4;
        afStack_ac[(uint)bVar10 * -2] = afStack_d0[(uint)bVar10 * -2];
        afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        if (&fStack_128 != &fStack_b0) {
          fStack_128 = fStack_b0;
          fStack_124 = afStack_ac[0];
          fStack_120 = afStack_ac[1];
        }
      }
      if ((local_54 == WEAPON_TYPE_GUN) || (local_54 == WEAPON_TYPE_FLASHLIGHT)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (&(this_ptr->base).base.model,local_5c,&CStack_170);
        CStack_ec.x = CStack_170.x;
        afStack_f4[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_170 + (uint)bVar10 * -8 + 4);
        afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             *(float *)((int)&CStack_170 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        if (&CStack_e0 != (CVector3f *)(afStack_f4 + 2)) {
          CStack_e0.x = CStack_ec.x;
          CStack_e0.y = CStack_ec.y;
          CStack_e0.z = CStack_ec.z;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (&(this_ptr->base).base.model,iVar8,&CStack_14c);
        CStack_104.x = CStack_14c.x;
        *(uint *)((int)&CStack_104 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_104 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_14c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        if (&CStack_e0 != &CStack_104) {
          CStack_e0.x = CStack_104.x;
          CStack_e0.y = CStack_104.y;
          CStack_e0.z = CStack_104.z;
        }
      }
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,&CStack_e0,&CStack_a4);
      pSVar4 = local_2c;
      aCStack_8c[0].x = CStack_a4.x;
      *(uint *)((int)aCStack_8c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)aCStack_8c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      CStack_98.x = pSVar4->aim_pitch;
      CStack_98.z = 0.0;
      CStack_98.y = local_2c->aim_yaw;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_1b0,&CStack_98);
      CStack_11c.z = 1.0;
      CStack_11c.x = 0.0;
      CStack_11c.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&CStack_1b0,&CStack_11c,&CStack_c8);
      fStack_28 = 1e+30;
      iStack_48 = 0;
      iStack_44 = 0;
      fStack_17c = CStack_c8.x;
      afStack_178[(uint)bVar10 * -2] = *(float *)((int)&CStack_c8 + (uint)bVar10 * -8 + 4);
      afStack_178[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           *(float *)((int)&CStack_c8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      pCStack_4c = &(this_ptr->base).base.base.location;
      for (; iStack_48 < g_CDemonSetPtr->threat_count; iStack_48 = iStack_48 + 1) {
        pCVar6 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (*(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_44),
                            g_CCharacterClassInfo.name_hash);
        if ((pCVar6 == (CCharacter *)0x0) ||
           (((EVar7 = (*(((pCVar6->base).vtable._uc)->_uc).getDeathState)(pCVar6),
             EVar7 == DEATH_STATE_ALIVE &&
             (iVar8 = (*((pCVar6->base).vtable._ub)->shouldIgnoreForTargeting)
                                ((CDemonActor *)pCVar6), iVar8 == 0)) &&
            (fVar9 = (pCStack_4c->position).x - (pCVar6->base).location.position.x,
            fVar2 = (pCStack_4c->position).y - (pCVar6->base).location.position.y,
            fVar1 = (pCStack_4c->position).z - (pCVar6->base).location.position.z,
            SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar9 * fVar9) <= (float)_DAT_005d0557)))) {
          pCStack_24 = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_44);
          __arrinit(aCStack_228,10,&g_CVectorTypeInfo);
          iStack_30 = (*((pCStack_24->vtable)._ub)->getTargetPoints)(pCStack_24,aCStack_228);
          if ((0 < iStack_30) && (iStack_20 = 0, 0 < iStack_30)) {
            input_local_point = aCStack_228;
            do {
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        (pCStack_24,input_local_point,&CStack_188);
              CStack_bc.x = CStack_188.x;
              *(uint *)((int)&CStack_bc + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&CStack_188 + (uint)bVar10 * -8 + 4);
              *(uint *)((int)&CStack_bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   *(uint *)((int)&CStack_188 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        ((CDemonActor *)this_ptr,&CStack_bc,&CStack_164);
              fStack_158 = CStack_164.x;
              afStack_154[(uint)bVar10 * -2] = *(float *)((int)&CStack_164 + (uint)bVar10 * -8 + 4);
              afStack_154[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   *(float *)((int)&CStack_164 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              fStack_f8 = fStack_158 - CStack_e0.x;
              afStack_f4[0] = afStack_154[0] - CStack_e0.y;
              afStack_f4[1] = afStack_154[1] - CStack_e0.z;
              CStack_134.x = fStack_158 - CStack_e0.x;
              *(float *)((int)&CStack_134 + (uint)bVar10 * -8 + 4) = afStack_f4[(uint)bVar10 * -2];
              *(float *)((int)&CStack_134 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_f4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              if ((0.0 < (double)CStack_134.z) && ((double)CStack_134.z <= _DAT_005d0557)) {
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                          (&CStack_134,&CStack_110);
                fStack_140 = CStack_110.x;
                afStack_13c[(uint)bVar10 * -2] =
                     *(float *)((int)&CStack_110 + (uint)bVar10 * -8 + 4);
                afStack_13c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                     *(float *)((int)&CStack_110 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
                fStack_230 = 0.5235988;
                if (CStack_134.z < (float)_DAT_005d055f) {
                  fStack_230 = 1.5707964;
                }
                if (((ABS(fStack_140) <= fStack_230) && (local_34 <= afStack_13c[0])) &&
                   (afStack_13c[0] <= local_38)) {
                  fVar9 = SQRT(CStack_134.z * CStack_134.z +
                               CStack_134.x * CStack_134.x + CStack_134.y * CStack_134.y);
                  fVar1 = 1.0 / fVar9;
                  CStack_134.y = CStack_134.y * fVar1;
                  CStack_134.x = CStack_134.x * fVar1;
                  CStack_134.z = CStack_134.z * fVar1;
                  fVar9 = fVar9 * (float)_DAT_005d0537 +
                          ((float)_DAT_005d052f -
                          (CStack_134.z * afStack_178[1] +
                          CStack_134.x * fStack_17c + CStack_134.y * afStack_178[0]));
                  if (fVar9 < fStack_28) {
                    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,2);
                    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                              (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_24);
                    iVar8 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                      (g_CDemonSetPtr,aCStack_8c,&CStack_bc);
                    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                    if (iVar8 == 0) {
                      fStack_40 = afStack_13c[0];
                      fStack_3c = fStack_140;
                      local_2c->aim_lock_state = 1;
                      fStack_28 = fVar9;
                    }
                  }
                }
              }
              iStack_20 = iStack_20 + 1;
              input_local_point = input_local_point + 1;
            } while (iStack_20 < iStack_30);
          }
        }
        iStack_44 = iStack_44 + 4;
      }
    }
    dVar3 = _DAT_005d053f;
    if (local_54 != WEAPON_TYPE_GUN) {
      dVar3 = _DAT_005d0547;
    }
    fStack_50 = delta_time * _DAT_005d0527 * (float)dVar3;
    fStack_58 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_40 - local_2c->target_yaw);
    fStack_18 = fStack_58;
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_3c - local_2c->target_pitch);
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
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_2c->target_yaw + fStack_58);
    local_2c->target_yaw = fStack_18;
    fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_2c->target_pitch + fStack_1c);
    local_2c->target_pitch = fVar9;
    local_2c->kickback_factor = 1.0;
    if (((local_2c->aim_lock_state == 1) &&
        (ABS(local_2c->target_yaw - fStack_40) < (float)_DAT_005d054f)) &&
       (ABS(local_2c->target_pitch - fStack_3c) < (float)_DAT_005d054f)) {
      local_2c->aim_lock_state = 2;
      return;
    }
  }
  return;
}
