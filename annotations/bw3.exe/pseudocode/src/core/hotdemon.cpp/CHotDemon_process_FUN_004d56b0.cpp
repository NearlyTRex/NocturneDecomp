// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004d56b0
// Address: 004d56b0
// Address Range: [[004d56b0, 004d5f04]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d56b0(CHotDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d56b0(CHotDemon *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  int iVar7;
  CPathMap *path_map;
  uint uVar8;
  byte bVar9;
  float afStackY_114c [997];
  CHotDemon *this_ptr_00;
  CVector3f *pCVar10;
  float fVar11;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_1a0;
  CVector3f CStack_164;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [5];
  CVector3f CStack_128;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar5 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_40[3] = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < afStack_40[3]) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar1->base,afStack_40 + 3);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar11);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar1->base);
  iVar5 = pSVar6->state_index;
  iStack_18 = iVar5;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    switch(iVar5) {
    case 0:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      pCStack_20 = &(this_ptr->base).base.model.base;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,1,1);
        }
      }
      else {
        fStack_74 = (pCVar4->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        afStack_70[0] =
             (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_70[1] =
             (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        CStack_128.x = fStack_74;
        *(float *)((int)&CStack_128 + (uint)bVar9 * -8 + 4) = afStack_70[(uint)bVar9 * -2];
        *(float *)((int)&CStack_128 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        afStack_40[2] =
             SQRT(CStack_128.z * CStack_128.z +
                  CStack_128.x * CStack_128.x + CStack_128.y * CStack_128.y);
        fStack_28 = afStack_40[2];
        if (afStack_40[2] < 0x40000000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_128,&CStack_80);
          fStack_44 = CStack_80.x;
          afStack_40[(uint)bVar9 * -2] = *(float *)((int)&CStack_80 + (uint)bVar9 * -8 + 4);
          afStack_40[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               *(float *)((int)&CStack_80 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (afStack_40[0] - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)_DAT_005c53d1) {
            if (iStack_18 == 0) {
              iVar5 = 2;
            }
            else {
              iVar5 = 8;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar5,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
            if (iVar5 == 0) {
              uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
              this_ptr->sfx_handles[0] = uVar8;
            }
          }
        }
        if (fStack_28 < (this_ptr->base).guard_distance) {
          pCVar1 = &(this_ptr->base).base.model;
          if (_DAT_005e1908 <= fStack_28) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,7,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,1,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar11 = 0x40000000;
      pCStack_1c = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          if (iStack_18 == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,6,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
        }
      }
      else {
        fStack_2c = 0x40000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_14c.x = 0.0;
        CStack_14c.y = 0.0;
        max_distance = 0.17453292;
        CStack_14c.z = fVar11;
        pCVar10 = &CStack_14c;
        fVar11 = 0.5;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                           fVar11,max_distance);
        if (-1 < iVar5) {
          pCVar4 = (this_ptr->base).victim;
          fStack_104 = (this_ptr->base).base.base.location.position.x -
                       (pCVar4->base).location.position.x;
          fStack_100 = (this_ptr->base).base.base.location.position.y -
                       (pCVar4->base).location.position.y;
          fStack_fc = (this_ptr->base).base.base.location.position.z -
                      (pCVar4->base).location.position.z;
          afStack_13c[2] = fStack_104;
          afStack_13c[(uint)bVar9 * -2 + 3] = afStack_118[(uint)bVar9 * -2 + 6];
          afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          fStack_24 = SQRT(afStack_13c[4] * afStack_13c[4] + afStack_13c[2] * afStack_13c[2]);
          afStack_13c[3] = 0.0;
          fStack_30 = fStack_24;
          if ((_DAT_005e1908 < fStack_24) && (iStack_18 != 7)) {
            (this_ptr->base).attack_cooldown = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,7,1);
          }
          if ((fStack_30 <= fStack_2c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            afStack_dc[2] =
                 (pCVar4->base).location.position.x - (this_ptr->base).base.base.location.position.x
            ;
            afStack_dc[3] =
                 (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_cc = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            CStack_a4.x = afStack_dc[2];
            *(float *)((int)&CStack_a4 + (uint)bVar9 * -8 + 4) = afStack_dc[(uint)bVar9 * -2 + 3];
            *(float *)((int)&CStack_a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                 afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_a4,&CStack_50);
            fStack_11c = CStack_50.x;
            afStack_118[(uint)bVar9 * -2] = *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + 4);
            afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 *(float *)((int)&CStack_50 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_118[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005c53d1) {
              if (iStack_18 == 7) {
                iVar5 = 8;
              }
              else {
                iVar5 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,iVar5,1);
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handles[0]);
              if (iVar5 == 0) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
                this_ptr->sfx_handles[0] = uVar8;
              }
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if ((this_ptr->base).guard_distance < fStack_30) {
            pCVar1 = &(this_ptr->base).base.model;
            if (iStack_18 == 7) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,6,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_1a0);
      SStack_1a0.damage_amount = (this_ptr->base).attack_damage;
      damage_info = &SStack_1a0;
      SStack_1a0.attacker = (CDemonActor *)this_ptr;
      SStack_1a0.wielder = (CDemonActor *)this_ptr;
      fVar11 = 0.4;
      core_xform_cpp_transformVector3x4_FUN_00583260
                ((CVector3f *)&DAT_02cfd900,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01d5baf4,
                 &CStack_164);
      pCVar10 = &CStack_f8;
      CStack_f8.x = CStack_164.x;
      *(uint *)((int)&CStack_f8 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_164 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)&CStack_f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_164 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar10,&CStack_b0);
      pCVar10 = &CStack_ec;
      CStack_ec.x = CStack_b0.x;
      *(uint *)((int)&CStack_ec + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4);
      this_ptr_00 = this_ptr;
      *(uint *)((int)&CStack_ec + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                (&this_ptr_00->base,pCVar10,fVar11,damage_info);
      break;
    case 5:
    case 0xb:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&(this_ptr->base).base.model,0,&CStack_98);
        pCVar10 = &CStack_158;
        CStack_158.x = CStack_98.x;
        *(uint *)((int)&CStack_158 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_98 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_158 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_98 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar10,&CStack_8c);
        blood_type = BLOOD_TYPE_RED;
        CStack_bc.x = CStack_8c.x;
        *(uint *)((int)&CStack_bc + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_8c + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_8c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_bc,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_004d5efe_caseD_3;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_004d5785:
      iVar5 = 1;
    }
    else {
LAB_004d594b:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_004d5785;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004d594b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004d5efe_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_140 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_13c[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_13c[1] = (this_ptr->base).base.velocity.z * delta_time;
    afStack_70[2] = fStack_140;
    afStack_70[(uint)bVar9 * -2 + 3] = afStack_13c[(uint)bVar9 * -2];
    afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    pCVar10 = &(this_ptr->base).base.position_delta;
    afStack_118[2] = afStack_70[2] + pCVar10->x;
    afStack_118[3] = afStack_70[3] + (this_ptr->base).base.position_delta.y;
    fStack_108 = fStack_60 + (this_ptr->base).base.position_delta.z;
    fStack_5c = afStack_118[2];
    afStack_70[(uint)bVar9 * -2 + 6] = afStack_118[(uint)bVar9 * -2 + 3];
    afStack_70[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_118[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_e0 = fStack_5c + pCVar2->x;
    afStack_dc[0] = fStack_58 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_dc[1] = fStack_54 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_c8.x = fStack_e0;
    *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4) = afStack_dc[(uint)bVar9 * -2];
    *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_c8);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
