// Name: core_stranger.cpp_CStranger_autoAimAtThreat_FUN_005c3960
// Address: 005c3960
// Address Range: [[005c3960, 005c4364]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_005c3960(CStranger *this_ptr,int hand_index,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_autoAimAtThreat_FUN_005c3960(CStranger *this_ptr,int hand_index,float delta_time)

{
  CDemonActor *this_ptr_00;
  EAimMode EVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  EAimMode *pEVar5;
  CDeformableModelInstance *this_ptr_01;
  CVector3f *pCVar6;
  CCharacter *pCVar7;
  EDeathState EVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fStack_1a8;
  CVector3f aCStack_1a0 [10];
  CMatrix3x3f CStack_128;
  CVector3f CStack_100;
  CVector3f aCStack_f4 [2];
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  EAimMode EStack_7c;
  EAimMode EStack_78;
  EAimMode EStack_74;
  CVector3f aCStack_70 [2];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int local_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  int iStack_28;
  SArmAimData *local_24;
  float fStack_20;
  CDemonActor *pCStack_1c;
  float fStack_18;
  
  local_24 = &this_ptr->left_arm_aim;
  if (hand_index == 1) {
    local_24 = &this_ptr->right_arm_aim;
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
    local_24->target_yaw = 0.0;
    local_24->aim_yaw = 0.0;
    this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
    uVar4 = 0;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      uVar4 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00);
    }
    if ((uVar4 & 4) == 0) {
      local_24->target_pitch = 0.0;
      local_24->aim_pitch = 0.0;
      return;
    }
    local_48 = 3;
  }
  else {
    local_48 = this_ptr->weapon->weapon_type;
  }
  if (hand_index == 0) {
    if (((this_ptr->base).aim_mode == AIM_MODE_MANUAL) && (local_48 == 0)) {
      return;
    }
    local_30 = -1.3089969;
    local_2c = 0.5235988;
    iVar9 = INT_03f6bb00;
    iVar10 = INT_03f6bad8;
  }
  else {
    iVar9 = INT_03f6bb04;
    iVar10 = INT_03f6badc;
    if (local_48 == 0) {
      local_2c = 1.3089969;
      local_30 = -0.5235988;
    }
    else {
      local_2c = 0.5235988;
      local_30 = -0.5235988;
    }
  }
  fVar11 = (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
           (float)2 * delta_time + local_24->aim_pitch;
  local_24->aim_yaw = 0.0;
  local_24->aim_pitch = fVar11;
  if (fVar11 < -1.047198f) {
    local_24->aim_pitch = -1.047198f;
  }
  if (1.22173f < local_24->aim_pitch) {
    local_24->aim_pitch = 1.22173f;
  }
  if (local_24->target_yaw < local_30) {
    local_24->target_yaw = local_30;
  }
  if (local_2c < local_24->target_yaw) {
    local_24->target_yaw = local_2c;
  }
  if (local_24->aim_yaw < local_30) {
    local_24->aim_yaw = local_30;
  }
  if (local_2c < local_24->aim_yaw) {
    local_24->aim_yaw = local_2c;
  }
  local_24->aim_lock_state = 0;
  fStack_38 = local_24->aim_yaw;
  fStack_34 = local_24->aim_pitch;
  if ((local_48 == 3) || (EVar1 = (this_ptr->base).aim_mode, EVar1 != AIM_MODE_AUTO)) {
    local_24->target_yaw = 0.0;
  }
  else {
    pCVar7 = (CCharacter *)this_ptr->weapon;
    EStack_7c = EVar1;
    EStack_78 = EVar1;
    EStack_74 = EVar1;
    if ((pCVar7 != (CCharacter *)0x0) &&
       (pEVar5 = (EAimMode *)(*(((pCVar7->base).vtable._uc)->_uc).canWalk)(pCVar7),
       &EStack_7c != pEVar5)) {
      EStack_7c = *pEVar5;
      EStack_78 = pEVar5[1];
      EStack_74 = pEVar5[2];
    }
    this_ptr_01 = &(this_ptr->base).base.model;
    if (local_48 == 0) {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (this_ptr_01,&CStack_a0,iVar10);
      if (&CStack_100 != pCVar6) {
        CStack_100.x = pCVar6->x;
        CStack_100.y = pCVar6->y;
        CStack_100.z = pCVar6->z;
      }
    }
    else {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (this_ptr_01,&CStack_c4,iVar9);
      if (&CStack_100 != pCVar6) {
        CStack_100.x = pCVar6->x;
        CStack_100.y = pCVar6->y;
        CStack_100.z = pCVar6->z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_94,&CStack_100);
    aCStack_70[0].x = local_24->aim_pitch;
    aCStack_70[0].z = 0.0;
    aCStack_70[0].y = local_24->aim_yaw;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_128,aCStack_70);
    CStack_ac.x = 0.0;
    CStack_ac.y = 0.0;
    CStack_ac.z = 1.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_128,&CStack_d0,&CStack_ac);
    fStack_20 = 1e+30;
    iStack_3c = 0;
    for (iStack_40 = 0; iStack_40 < g_CDemonSetPtr->threat_count; iStack_40 = iStack_40 + 1) {
      pCVar7 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_3c),
                          g_CCharacterClassInfo.name_hash);
      if ((pCVar7 == (CCharacter *)0x0) ||
         ((EVar8 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7),
          EVar8 == DEATH_STATE_ALIVE &&
          (iVar9 = (*((pCVar7->base).vtable._ub)->shouldIgnoreForTargeting)((CDemonActor *)pCVar7),
          iVar9 == 0)))) {
        pCStack_1c = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_3c);
        __arrinit(aCStack_1a0,10,&g_CVectorTypeInfo);
        iStack_28 = (*((pCStack_1c->vtable)._ub)->getTargetPoints)(pCStack_1c,aCStack_1a0);
        if ((0 < iStack_28) && (iVar9 = 0, 0 < iStack_28)) {
          pCVar6 = aCStack_1a0;
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCStack_1c,&CStack_88,pCVar6);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      ((CDemonActor *)this_ptr,&CStack_dc,&CStack_88);
            CStack_b8.x = CStack_dc.x - CStack_100.x;
            CStack_b8.y = CStack_dc.y - CStack_100.y;
            CStack_b8.z = CStack_dc.z - CStack_100.z;
            if ((0.0 < (double)CStack_b8.z) && ((double)CStack_b8.z <= 30)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (aCStack_f4,&CStack_b8);
              fStack_1a8 = 0.5235988;
              if (CStack_b8.z < (float)10) {
                fStack_1a8 = 1.5707964;
              }
              if (((ABS(aCStack_f4[0].x) <= fStack_1a8) && (local_30 <= aCStack_f4[0].y)) &&
                 (aCStack_f4[0].y <= local_2c)) {
                fVar11 = SQRT(CStack_b8.z * CStack_b8.z +
                              CStack_b8.x * CStack_b8.x + CStack_b8.y * CStack_b8.y);
                fVar2 = 1.0 / fVar11;
                CStack_b8.y = CStack_b8.y * fVar2;
                CStack_b8.x = CStack_b8.x * fVar2;
                CStack_b8.z = CStack_b8.z * fVar2;
                fVar11 = fVar11 * (float)0.033333333333333298 +
                         ((float)2 -
                         (CStack_b8.z * CStack_d0.z +
                         CStack_b8.x * CStack_d0.x + CStack_b8.y * CStack_d0.y));
                if (fVar11 < fStack_20) {
                  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                            (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_1c);
                  iVar10 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                     (g_CDemonSetPtr,&CStack_94,&CStack_88);
                  core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
                  if (iVar10 == 0) {
                    fStack_38 = aCStack_f4[0].y;
                    fStack_34 = aCStack_f4[0].x;
                    local_24->aim_lock_state = 1;
                    fStack_20 = fVar11;
                  }
                }
              }
            }
            iVar9 = iVar9 + 1;
            pCVar6 = pCVar6 + 1;
          } while (iVar9 < iStack_28);
        }
      }
      iStack_3c = iStack_3c + 4;
    }
  }
  dVar3 = 1.5;
  if (local_48 != 0) {
    dVar3 = 0.5;
  }
  fStack_44 = delta_time * (float)3.1415926535000001 * (float)dVar3;
  fStack_4c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_38 - local_24->target_yaw);
  fStack_18 = fStack_4c;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_34 - local_24->target_pitch);
  fStack_54 = -fStack_44;
  if (fStack_4c < fStack_54) {
    fStack_4c = fStack_54;
  }
  if (fStack_44 < fStack_4c) {
    fStack_4c = fStack_44;
  }
  fStack_58 = -fStack_44;
  fStack_50 = fStack_18;
  if (fStack_18 < fStack_58) {
    fStack_50 = fStack_58;
  }
  if (fStack_44 < fStack_50) {
    fStack_50 = fStack_44;
  }
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_24->target_yaw + fStack_4c);
  local_24->target_yaw = fStack_18;
  fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_24->target_pitch + fStack_50);
  local_24->target_pitch = fVar11;
  local_24->kickback_factor = 1.0;
  if (((local_24->aim_lock_state == 1) &&
      (ABS(local_24->target_yaw - fStack_38) < (float)0.01)) &&
     (ABS(local_24->target_pitch - fStack_34) < (float)0.01)) {
    local_24->aim_lock_state = 2;
    return;
  }
  return;
}
