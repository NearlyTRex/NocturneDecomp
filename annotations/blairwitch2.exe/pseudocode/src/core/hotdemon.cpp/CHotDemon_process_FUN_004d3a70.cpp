// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004d3a70
// Address: 004d3a70
// Address Range: [[004d3a70, 004d42ce]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d3a70(CHotDemon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hotdemon_cpp_CHotDemon_process_FUN_004d3a70(CHotDemon *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  int iVar6;
  CPathMap *path_map;
  uint uVar7;
  byte bVar8;
  float afStackY_114c [997];
  CHotDemon *this_ptr_00;
  float *pfVar9;
  CVector3f *pCVar10;
  float fVar11;
  uint *puVar12;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_1a0;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [5];
  float fStack_140;
  uint uStack_13c;
  float fStack_138;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [4];
  float fStack_114;
  uint uStack_110;
  float afStack_104 [3];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  uint uStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  uint uStack_a4;
  float fStack_98;
  uint uStack_8c;
  float fStack_88;
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_34 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < fStack_34) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&pCVar1->base,afStack_b8 + 0x21);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar11);
  iVar5 = core_motion_cpp_FUN_005035c0(pCVar1);
  iVar5 = *(int *)(iVar5 + 0x24);
  iStack_1c = iVar5;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar5) {
    case 0:
    case 6:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      pCStack_24 = &(this_ptr->base).base.model.base;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,1,1);
        }
      }
      else {
        fStack_50 = (pCVar4->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        fStack_4c = (pCVar4->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y;
        fStack_48 = (pCVar4->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z;
        fStack_128 = fStack_50;
        afStack_124[(uint)bVar8 * -2] = afStack_b8[(uint)bVar8 * -2 + 0x1b];
        afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
        fStack_38 = SQRT(afStack_124[1] * afStack_124[1] +
                         fStack_128 * fStack_128 + afStack_124[0] * afStack_124[0]);
        fStack_2c = fStack_38;
        if (fStack_38 < 0x40000000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_128);
          uStack_8c = uStack_80;
          afStack_b8[(uint)bVar8 * -2 + 0xc] = afStack_b8[(uint)bVar8 * -2 + 0xf];
          afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
               afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                (fStack_88 - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)_DAT_005da661) {
            if (iStack_1c == 0) {
              iVar5 = 2;
            }
            else {
              iVar5 = 8;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,iVar5,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
            if (iVar5 == 0) {
              uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
              this_ptr->sfx_handles[0] = uVar7;
            }
          }
        }
        if (fStack_2c < (this_ptr->base).guard_distance) {
          pCVar1 = &(this_ptr->base).base.model;
          if (_DAT_005f8868 <= fStack_2c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,7,1);
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,1,1);
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
      pCStack_20 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          if (iStack_1c == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,6,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        fStack_28 = 0x40000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_134.x = 0.0;
        CStack_134.y = 0.0;
        max_distance = 0.17453292;
        CStack_134.z = fVar11;
        pCVar10 = &CStack_134;
        fVar11 = 0.5;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                           fVar11,max_distance);
        if (-1 < iVar5) {
          pCVar4 = (this_ptr->base).victim;
          afStack_124[2] =
               (this_ptr->base).base.base.location.position.x - (pCVar4->base).location.position.x;
          afStack_124[3] =
               (this_ptr->base).base.base.location.position.y - (pCVar4->base).location.position.y;
          fStack_114 = (this_ptr->base).base.base.location.position.z -
                       (pCVar4->base).location.position.z;
          fStack_140 = afStack_124[2];
          afStack_154[(uint)bVar8 * -2 + 6] = afStack_124[(uint)bVar8 * -2 + 3];
          afStack_154[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_18 = SQRT(fStack_138 * fStack_138 + fStack_140 * fStack_140);
          uStack_13c = 0;
          fStack_30 = fStack_18;
          if ((_DAT_005f8868 < fStack_18) && (iStack_1c != 7)) {
            (this_ptr->base).attack_cooldown = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,7,1);
          }
          if ((fStack_30 <= fStack_28) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_74 = (pCVar4->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_70 = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_6c = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_ec = fStack_74;
            afStack_e8[(uint)bVar8 * -2] = afStack_b8[(uint)bVar8 * -2 + 0x12];
            afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_ec);
            uStack_68 = uStack_44;
            afStack_b8[(uint)bVar8 * -2 + 0x15] = afStack_b8[(uint)bVar8 * -2 + 0x1e];
            afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
                 afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (fStack_64 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005da661) {
              if (iStack_1c == 7) {
                iVar5 = 8;
              }
              else {
                iVar5 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,iVar5,1);
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]);
              if (iVar5 == 0) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hotdemon-attack.wav");
                this_ptr->sfx_handles[0] = uVar7;
              }
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if ((this_ptr->base).guard_distance < fStack_30) {
            pCVar1 = &(this_ptr->base).base.model;
            if (iStack_1c == 7) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,6,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_1a0);
      SStack_1a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      damage_info = &SStack_1a0;
      SStack_1a0.attacker = (CDemonActor *)this_ptr;
      SStack_1a0.wielder = (CDemonActor *)this_ptr;
      fVar11 = 0.4;
      fStack_14 = SStack_1a0.damage_amount;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01cee014);
      pfVar9 = afStack_124 + 8;
      afStack_104[0] = (float)uStack_110;
      afStack_124[(uint)bVar8 * -2 + 9] = afStack_124[(uint)bVar8 * -2 + 6];
      afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar9);
      pCVar10 = &CStack_f8;
      CStack_f8.x = afStack_154[2];
      *(float *)((int)&CStack_f8 + (uint)bVar8 * -8 + 4) = afStack_154[(uint)bVar8 * -2 + 3];
      this_ptr_00 = this_ptr;
      *(float *)((int)&CStack_f8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_154[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                (&this_ptr_00->base,pCVar10,fVar11,damage_info);
      break;
    case 5:
    case 0xb:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,0);
        puVar12 = &uStack_bc;
        uStack_bc = uStack_a4;
        afStack_b8[(uint)bVar8 * -2] = afStack_b8[(uint)bVar8 * -2 + 6];
        afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar12);
        blood_type = BLOOD_TYPE_RED;
        CStack_164.x = fStack_98;
        *(float *)((int)&CStack_164 + (uint)bVar8 * -8 + 4) = afStack_b8[(uint)bVar8 * -2 + 9];
        *(float *)((int)&CStack_164 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_164,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_004d42c8_caseD_3;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_004d3b3e:
      iVar5 = 1;
    }
    else {
LAB_004d3cfb:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_004d3b3e;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004d3cfb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar1->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004d42c8_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_5c = (this_ptr->base).base.velocity.x * delta_time;
    fStack_58 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_54 = (this_ptr->base).base.velocity.z * delta_time;
    afStack_b8[2] = fStack_5c;
    afStack_b8[(uint)bVar8 * -2 + 3] = afStack_b8[(uint)bVar8 * -2 + 0x18];
    afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
    pCVar10 = &(this_ptr->base).base.position_delta;
    fStack_158 = afStack_b8[2] + pCVar10->x;
    afStack_154[0] = afStack_b8[3] + (this_ptr->base).base.position_delta.y;
    afStack_154[1] = fStack_a8 + (this_ptr->base).base.position_delta.z;
    fStack_d4 = fStack_158;
    afStack_e8[(uint)bVar8 * -2 + 6] = afStack_154[(uint)bVar8 * -2];
    afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_154[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_e8[2] = fStack_d4 + pCVar2->x;
    afStack_e8[3] = fStack_d0 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_d8 = fStack_cc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_c8.x = afStack_e8[2];
    *(float *)((int)&CStack_c8 + (uint)bVar8 * -8 + 4) = afStack_e8[(uint)bVar8 * -2 + 3];
    *(float *)((int)&CStack_c8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_c8);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
