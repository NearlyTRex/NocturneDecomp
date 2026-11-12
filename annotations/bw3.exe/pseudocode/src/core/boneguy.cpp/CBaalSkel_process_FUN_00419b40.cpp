// Name: core_boneguy.cpp_CBaalSkel_process_FUN_00419b40
// Address: 00419b40
// Address Range: [[00419b40, 0041a809]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBaalSkel_process_FUN_00419b40(CBaalSkel *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBaalSkel_process_FUN_00419b40(CBaalSkel *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  float fVar6;
  int iVar7;
  SBoneGuyBox *pSVar8;
  SMotion *pSVar9;
  int iVar10;
  CDemonActor *pCVar11;
  uint uVar12;
  CPathMap *path_map;
  CVector3f *pCVar13;
  byte bVar14;
  float afStackY_19a8 [1493];
  CEnemy *pCVar15;
  SDamageInfo *pSVar16;
  ulonglong uVar17;
  float in_stack_fffffdc8;
  float fVar18;
  float fStack_230;
  SDamageInfo SStack_208;
  uint uStack_1cc;
  float afStack_1c8 [7];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  CVector3f CStack_170;
  uint uStack_164;
  float afStack_160 [5];
  uint uStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [5];
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CBodyPart *pCStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  SBoneGuyBox *pSStack_38;
  CMotionController *pCStack_34;
  CQuaternion4f *pCStack_30;
  float *pfStack_2c;
  CQuaternion4f *pCStack_28;
  int iStack_24;
  CVector3f *pCStack_20;
  float fStack_1c;
  float fStack_14;
  
  bVar14 = 0;
  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,(this_ptr->base).death_event);
  if (iVar7 != 0) {
    (this_ptr->base).base.base.hit_points = 0.0;
    (this_ptr->base).base.pool_me = 1;
    (this_ptr->base).recombine_interpolation = 0.0;
    if ((this_ptr->base).blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(&this_ptr->base);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              (&(this_ptr->base).base.base.model.base,5,0.0);
  }
  iVar7 = (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).randomize)((CEnemy *)this_ptr);
  if (iVar7 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).sfx_handle);
    return;
  }
  if (((this_ptr->base).blown_up == 1) && (0.0 < (this_ptr->base).base.base.hit_points)) {
    (this_ptr->base).recombine_interpolation = (this_ptr->base).recombine_interpolation + delta_time
    ;
    return;
  }
  if ((this_ptr->base).blown_up == 2) {
    fVar18 = delta_time / _DAT_005dc144 + (this_ptr->base).recombine_interpolation;
    (this_ptr->base).recombine_interpolation = fVar18;
    if (fVar18 < 1.0) {
      iStack_24 = 0;
      if ((this_ptr->base).box_count < 1) {
        return;
      }
      pSStack_38 = (this_ptr->base).boxes;
      pfStack_2c = &(this_ptr->base).recombine_interpolation;
      pCStack_30 = &(this_ptr->base).boxes[0].dest_orient;
      pCStack_28 = &(this_ptr->base).boxes[0].start_orient;
      pCStack_20 = &(this_ptr->base).boxes[0].source_pos;
      do {
        pCVar13 = pCStack_20;
        pSVar8 = pSStack_38 + iStack_24;
        pCStack_54 = pSVar8->body_part;
        fStack_140 = (pSVar8->pos).x - pCStack_20->x;
        fStack_13c = (pSVar8->pos).y - pCStack_20->y;
        fStack_138 = (pSVar8->pos).z - pCStack_20->z;
        fStack_80 = fStack_140;
        afStack_d0[(uint)bVar14 * -2 + 0x15] = afStack_160[(uint)bVar14 * -2 + 9];
        afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
             afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        fStack_128 = fStack_80 * *pfStack_2c;
        fStack_124 = fStack_7c * *pfStack_2c;
        fStack_120 = fStack_78 * *pfStack_2c;
        fStack_1ac = fStack_80 * *pfStack_2c;
        afStack_1c8[(uint)bVar14 * -2 + 8] = afStack_160[(uint)bVar14 * -2 + 0xf];
        afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9] =
             afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
        fStack_8c = pCVar13->x + fStack_1ac;
        fStack_88 = pCVar13->y + fStack_1a8;
        fStack_84 = pCVar13->z + fStack_1a4;
        fStack_98 = fStack_8c;
        afStack_d0[(uint)bVar14 * -2 + 0xf] = afStack_d0[(uint)bVar14 * -2 + 0x12];
        afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
             afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
        core_xform_cpp_slerpQuaternion_FUN_00585b20();
        uStack_1cc = afStack_1c8[3];
        afStack_1c8[(uint)bVar14 * -2] = afStack_1c8[(uint)bVar14 * -2 + 4];
        afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
        (afStack_1c8 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             (afStack_1c8 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
        core_xform_cpp_FUN_00585de0();
        fStack_17c = afStack_d0[2];
        afStack_1c8[(uint)bVar14 * -2 + 0x14] = afStack_d0[(uint)bVar14 * -2 + 3];
        afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x15] =
             afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        fStack_17c = (this_ptr->base).recombine_interpolation * (float)_DAT_005b7252 + fStack_17c;
        (pCStack_54->base).location.position.x = fStack_98;
        (pCStack_54->base).location.position.y = fStack_94;
        pUVar1 = &(pCStack_54->base).orient;
        (pCStack_54->base).location.position.z = fStack_90;
        if (pUVar1 != (UOrientationVector *)(afStack_1c8 + 0x13)) {
          (pUVar1->vec).x = fStack_17c;
          (pCStack_54->base).orient.vec.y = fStack_178;
          (pCStack_54->base).orient.vec.z = fStack_174;
        }
        if (&pCStack_54->physics_box != (CBox *)(afStack_d0 + 0xe)) {
          (pCStack_54->physics_box).position.x = fStack_98;
          (pCStack_54->physics_box).position.y = fStack_94;
          (pCStack_54->physics_box).position.z = fStack_90;
        }
        pCVar13 = &(pCStack_54->physics_box).orientation;
        if (pCVar13 != (CVector3f *)(afStack_1c8 + 0x13)) {
          pCVar13->x = fStack_17c;
          (pCStack_54->physics_box).orientation.y = fStack_178;
          (pCStack_54->physics_box).orientation.z = fStack_174;
        }
        iStack_24 = iStack_24 + 1;
        pCStack_30 = (CQuaternion4f *)((int)(pCStack_30 + 4) + 8);
        pCStack_28 = (CQuaternion4f *)((int)(pCStack_28 + 4) + 8);
        pCStack_20 = pCStack_20 + 6;
      } while (iStack_24 < (this_ptr->base).box_count);
      return;
    }
    iVar7 = 0;
    core_skeleton_cpp_FUN_0054e670();
    pCVar13 = (CVector3f *)this_ptr;
    if (0 < (this_ptr->base).box_count) {
      do {
        core_mission_cpp_FUN_004f6f10();
        pCVar13[0x116f].x = 0;
        iVar7 = iVar7 + 1;
        pCVar13 = pCVar13 + 6;
      } while (iVar7 < (this_ptr->base).box_count);
    }
    (this_ptr->base).blown_up = 0;
    fVar18 = (this_ptr->base).recombine_time * (float)_DAT_005b722a;
    (this_ptr->base).base.base.hit_points = 10.0;
    (this_ptr->base).recombine_time = fVar18;
    if (fVar18 <= (float)_DAT_005b7232) {
      (this_ptr->base).recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.base.model.accumulated_root_motion.y =
       (this_ptr->base).base.base.model.accumulated_root_motion.z;
  (this_ptr->base).base.base.model.accumulated_root_motion.x =
       (this_ptr->base).base.base.model.accumulated_root_motion.y;
  pCVar2 = &(this_ptr->base).base.base.model;
  fStack_48 = delta_time * (this_ptr->base).base.speed;
  pCStack_34 = &pCVar2->base;
  while (0.0 < fStack_48) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,&fStack_48);
    if (iVar7 == 100) {
      pCVar11 = (this_ptr->base).pickup_target;
      if (pCVar11 != (CDemonActor *)0x0) {
        (this_ptr->base).pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_FUN_004319d0(this_ptr,1,pCVar11,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar7);
    }
  }
  (this_ptr->base).base.base.walk_step_speed =
       (this_ptr->base).base.base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr);
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_34);
  iVar7 = pSVar9->state_index;
  iStack_40 = iVar7;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_1a0 = (this_ptr->base).base.base.base.location.position.x - *(float *)(iVar7 + 0x20);
      fStack_19c = (this_ptr->base).base.base.base.location.position.y - *(float *)(iVar7 + 0x24);
      fStack_198 = (this_ptr->base).base.base.base.location.position.z - *(float *)(iVar7 + 0x28);
      fStack_b0 = fStack_1a0;
      afStack_d0[(uint)bVar14 * -2 + 9] = afStack_1c8[(uint)bVar14 * -2 + 0xb];
      afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
           afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xc];
      if (0.0 < (this_ptr->base).base.attack_cooldown) {
        fStack_60 = fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac;
        fStack_5c = (float)(((int)fStack_60 >> 1) + _DAT_01d1a0a4);
        if (fStack_5c <= 0x40400000 + (float)_DAT_005b724a) break;
      }
      fStack_1c = fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac;
      fStack_58 = (float)(((int)fStack_1c >> 1) + _DAT_01d1a0a4);
      pCVar2 = &(this_ptr->base).base.base.model;
      if (0x40400000 + (float)_DAT_005b724a < fStack_58) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
        if (iVar7 == 0) {
          (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).updateVictim)
                    ((CEnemy *)this_ptr,delta_time);
          if ((this_ptr->base).base.victim != (CCharacter *)0x0) {
            (this_ptr->base).guard_idle = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
          }
        }
        else {
          (this_ptr->base).guard_idle = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
        }
      }
      else {
        (this_ptr->base).guard_idle = 1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,6,1);
      }
      break;
    case 1:
      iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_194 = (this_ptr->base).base.base.base.location.position.x - *(float *)(iVar7 + 0x20);
      fStack_190 = (this_ptr->base).base.base.base.location.position.y - *(float *)(iVar7 + 0x24);
      fStack_18c = (this_ptr->base).base.base.base.location.position.z - *(float *)(iVar7 + 0x28);
      fStack_188 = fStack_194;
      afStack_1c8[(uint)bVar14 * -2 + 0x11] = afStack_1c8[(uint)bVar14 * -2 + 0xe];
      afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x12] =
           afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xf];
      fStack_44 = fStack_180 * fStack_180 + fStack_188 * fStack_188 + fStack_184 * fStack_184;
      fStack_50 = (float)(((int)fStack_44 >> 1) + _DAT_01d1a0a4);
      if (((fStack_50 <= 0x40400000 + (float)_DAT_005b724a) &&
          (0.0 < (this_ptr->base).base.attack_cooldown)) && ((this_ptr->base).guard_idle == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0,1);
      }
      (*(((this_ptr->base).base.base.base.vtable._ue)->_ue).updateVictim)
                ((CEnemy *)this_ptr,delta_time);
      if ((this_ptr->base).base.victim == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.base.model.base,0,1);
        }
      }
      else {
        iVar7 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930
                          (&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          fStack_3c = 0x40400000;
          uVar17._0_4_ = 0.5;
          uVar17._4_4_ = 0.17453292;
          uStack_110 = 0;
          fStack_108 = 0x40400000;
          uStack_10c = 0;
          pCVar5 = (this_ptr->base).base.victim;
          path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).base.victim)->base).location.position,path_map,
                             (CVector3f *)uVar17,SUB84(uVar17,4),in_stack_fffffdc8);
          pCVar2 = &(this_ptr->base).base.base.model;
          if (iVar7 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
          }
          else {
            pCVar5 = (this_ptr->base).base.victim;
            fVar18 = (this_ptr->base).base.base.base.location.position.x -
                     (pCVar5->base).location.position.x;
            fVar6 = (this_ptr->base).base.base.base.location.position.z -
                    (pCVar5->base).location.position.z;
            if ((SQRT(fVar6 * fVar6 + fVar18 * fVar18) <= fStack_3c + (float)_DAT_005b722a) &&
               ((this_ptr->base).base.attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,6,1);
              (this_ptr->base).guard_idle = 1;
              sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).sfx_handle);
              (*((this_ptr->base).base.base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
              (this_ptr->base).base.attack_cooldown = 1.0;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffdbc);
      pSVar16 = (SDamageInfo *)&stack0xfffffdbc;
      fVar18 = 0.4;
      core_xform_cpp_FUN_00583260(&DAT_02cfd900);
      afStack_160[2] = (float)uStack_14c;
      afStack_160[(uint)bVar14 * -2 + 3] = afStack_160[(uint)bVar14 * -2 + 6];
      afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      core_actor_cpp_FUN_00408b80(this_ptr);
      pCVar13 = &CStack_170;
      CStack_170.x = fStack_134;
      *(float *)((int)&CStack_170 + (uint)bVar14 * -8 + 4) = afStack_160[(uint)bVar14 * -2 + 0xc];
      pCVar15 = (CEnemy *)this_ptr;
      *(float *)((int)&CStack_170 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(pCVar15,pCVar13,fVar18,pSVar16);
      break;
    case 5:
      if (((this_ptr->base).base.pool_me == 0) &&
         ((this_ptr->base).base.base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).base.pool_me = 1;
      }
      break;
    case 6:
      pCVar11 = (this_ptr->base).base.base.carry_hands[1].carry_actor;
      if (pCVar11 == (CDemonActor *)0x0) {
        fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_34);
        if (((float)_DAT_005b723a < fStack_14) && ((this_ptr->base).base.attack_cooldown <= 0.0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_208);
          SStack_208.damage_amount = (this_ptr->base).base.attack_damage;
          pSVar16 = &SStack_208;
          SStack_208.attacker = (CDemonActor *)this_ptr;
          SStack_208.wielder = (CDemonActor *)this_ptr;
          fVar18 = 2.0;
          core_xform_cpp_FUN_00583260(&DAT_02cfd900);
          uStack_bc = uStack_164;
          afStack_d0[(uint)bVar14 * -2 + 6] = afStack_160[(uint)bVar14 * -2];
          afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
               afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          core_actor_cpp_FUN_00408b80(this_ptr);
          pCVar13 = &CStack_74;
          CStack_74.x = fStack_11c;
          *(float *)((int)&CStack_74 + (uint)bVar14 * -8 + 4) =
               afStack_160[(uint)bVar14 * -2 + 0x12];
          pCVar15 = (CEnemy *)this_ptr;
          *(float *)((int)&CStack_74 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               afStack_160[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(pCVar15,pCVar13,fVar18,pSVar16);
          (this_ptr->base).base.attack_cooldown = 2.5;
        }
      }
      else {
        (*((pCVar11->vtable)._ub)->processMeleeHit)(pCVar11,2);
        (this_ptr->base).base.attack_cooldown = 2.5;
      }
    }
    goto switchD_0041a7ec_caseD_3;
  }
  EVar4 = (this_ptr->base).base.base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_00419fef:
      iVar7 = 1;
    }
    else {
LAB_0041a251:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.base.model.base,iVar7,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_00419fef;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0041a251;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.base.model.accumulated_root_motion.y =
       (this_ptr->base).base.base.model.accumulated_root_motion.z;
  (this_ptr->base).base.base.model.accumulated_root_motion.x =
       (this_ptr->base).base.base.model.accumulated_root_motion.y;
switchD_0041a7ec_caseD_3:
  if (0.0 < (this_ptr->base).base.attack_cooldown) {
    (this_ptr->base).base.attack_cooldown = (this_ptr->base).base.attack_cooldown - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    pCVar5 = (this_ptr->base).base.victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar11 = (*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar11 == (CDemonActor *)this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).base.victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0();
    fStack_104 = (this_ptr->base).base.base.velocity.x * delta_time;
    afStack_100[0] = (this_ptr->base).base.base.velocity.y * delta_time;
    afStack_100[1] = (this_ptr->base).base.base.velocity.z * delta_time;
    fStack_d4 = fStack_104;
    afStack_d0[(uint)bVar14 * -2] = afStack_100[(uint)bVar14 * -2];
    afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    pCVar13 = &(this_ptr->base).base.base.position_delta;
    afStack_100[2] = fStack_d4 + pCVar13->x;
    afStack_100[3] = afStack_d0[0] + (this_ptr->base).base.base.position_delta.y;
    fStack_f0 = afStack_d0[1] + (this_ptr->base).base.base.position_delta.z;
    fStack_ec = afStack_100[2];
    afStack_100[(uint)bVar14 * -2 + 6] = afStack_100[(uint)bVar14 * -2 + 3];
    afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    pCVar3 = &(this_ptr->base).base.base.model.accumulated_root_motion;
    fStack_a4 = fStack_ec + pCVar3->x;
    fStack_a0 = fStack_e8 + (this_ptr->base).base.base.model.accumulated_root_motion.y;
    fStack_9c = fStack_e4 + (this_ptr->base).base.base.model.accumulated_root_motion.z;
    CStack_e0.x = fStack_a4;
    *(float *)((int)&CStack_e0 + (uint)bVar14 * -8 + 4) = afStack_d0[(uint)bVar14 * -2 + 0xc];
    *(float *)((int)&CStack_e0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
    (this_ptr->base).base.base.position_delta.z = 0.0;
    (this_ptr->base).base.base.position_delta.y = (this_ptr->base).base.base.position_delta.z;
    pCVar13->x = (this_ptr->base).base.base.position_delta.y;
    (this_ptr->base).base.base.model.accumulated_root_motion.z = 0.0;
    fVar18 = (this_ptr->base).base.base.model.accumulated_root_motion.z;
    (this_ptr->base).base.base.model.accumulated_root_motion.y = fVar18;
    pCVar3->x = fVar18;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_e0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if ((iStack_40 == 1) &&
     (iVar7 = sound_sndmain_cpp_FUN_00557170
                        ((double)(this_ptr->base).base.base.base.location.position.x,
                         (double)(this_ptr->base).base.base.base.location.position.y), iVar7 != 0))
  {
    iVar7 = sound_sndmain_cpp_FUN_00556700((this_ptr->base).sfx_handle);
    if (iVar7 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    fVar18 = 2.8026e-45;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)fStack_14,(int)fVar18);
    uVar12 = (*((this_ptr->base).base.base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    (this_ptr->base).sfx_handle = uVar12;
    fStack_230 = 6.027454e-39;
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).sfx_handle);
  return;
}
