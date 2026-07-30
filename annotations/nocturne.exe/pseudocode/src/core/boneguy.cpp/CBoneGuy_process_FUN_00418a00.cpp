// Name: core_boneguy.cpp_CBoneGuy_process_FUN_00418a00
// Address: 00418a00
// Address Range: [[00418a00, 004194ac]]
// Convention: unknown
// Signature: void core_boneguy_cpp_CBoneGuy_process_FUN_00418a00(CBoneGuy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_boneguy_cpp_CBoneGuy_process_FUN_00418a00(CBoneGuy *param_1,float param_2)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  CCharacter *pCVar5;
  float fVar6;
  int iVar7;
  SBoneGuyBox *pSVar8;
  SMotion *pSVar9;
  int iVar10;
  CBoneGuy *pCVar11;
  uint uVar12;
  CVector3f *pCVar13;
  CPathMap *path_map;
  float *pfVar14;
  byte bVar15;
  float afStackY_1908 [1483];
  float fVar16;
  CQuaternion4f *quat_in;
  SDamageInfo *damage_info;
  float fVar17;
  SDamageInfo local_1bc;
  SDamageInfo local_180;
  CBoundingBox3D local_144;
  CQuaternion4f local_12c;
  float local_11c;
  float afStack_118 [4];
  float local_108;
  float local_104;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CBodyPart *local_44;
  float local_38;
  int local_34;
  float local_30;
  SBoneGuyBox *local_2c;
  CQuaternion4f *local_28;
  float *local_24;
  CQuaternion4f *local_20;
  int local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar15 = 0;
  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,param_1->death_event);
  if (iVar7 != 0) {
    (param_1->base).base.hit_points = 0.0;
    (param_1->base).pool_me = 1;
    param_1->recombine_interpolation = 0.0;
    if (param_1->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(param_1);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990
              (&(param_1->base).base.model.motion_controller,5,0.0);
  }
  iVar7 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar7 == 0) goto LAB_00418c90;
  if ((param_1->blown_up == 1) && (0.0 < (param_1->base).base.hit_points)) {
    fVar16 = param_1->recombine_interpolation + param_2;
    param_1->recombine_interpolation = fVar16;
    if (fVar16 <= param_1->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(param_1);
  }
  if (param_1->blown_up == 2) {
    fVar16 = param_2 / 2.0f + param_1->recombine_interpolation;
    param_1->recombine_interpolation = fVar16;
    if (fVar16 < 1.0) {
      local_1c = 0;
      if (param_1->box_count < 1) {
        return;
      }
      local_2c = param_1->boxes;
      local_24 = &param_1->recombine_interpolation;
      local_28 = &param_1->boxes[0].dest_orient;
      local_20 = &param_1->boxes[0].start_orient;
      local_18 = &param_1->boxes[0].source_pos;
      do {
        pSVar8 = local_2c + local_1c;
        local_44 = pSVar8->body_part;
        local_70 = (pSVar8->pos).x - local_18->x;
        local_6c = (pSVar8->pos).y - local_18->y;
        local_68 = (pSVar8->pos).z - local_18->z;
        local_b8 = local_70 * *local_24;
        local_b4 = local_6c * *local_24;
        local_b0 = local_68 * *local_24;
        local_ac = local_18->x + local_b8;
        local_a8 = local_18->y + local_b4;
        local_a4 = local_18->z + local_b0;
        core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                  (local_28,local_20,param_1->recombine_interpolation);
        quat_in = &local_12c;
        pCVar13 = &local_88;
        local_12c.w = local_11c;
        pfVar14 = (float *)((int)&local_12c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(float *)((int)&local_12c + (uint)bVar15 * -8 + 4) = afStack_118[(uint)bVar15 * -2];
        *pfVar14 = afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        pfVar14[(uint)bVar15 * -2 + 1] =
             (afStack_118 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(pCVar13,quat_in);
        local_88.x = param_1->recombine_interpolation * (float)6.2831853070000001 + local_88.x;
        (local_44->base).location.position.x = local_ac;
        (local_44->base).location.position.y = local_a8;
        pUVar1 = &(local_44->base).orient;
        (local_44->base).location.position.z = local_a4;
        if ((CVector3f *)pUVar1 != &local_88) {
          (pUVar1->vec).x = local_88.x;
          (local_44->base).orient.vec.y = local_88.y;
          (local_44->base).orient.vec.z = local_88.z;
        }
        if (&local_44->physics_box != (CBox *)&local_ac) {
          (local_44->physics_box).position.x = local_ac;
          (local_44->physics_box).position.y = local_a8;
          (local_44->physics_box).position.z = local_a4;
        }
        pCVar13 = &(local_44->physics_box).orientation;
        if (pCVar13 != &local_88) {
          pCVar13->x = local_88.x;
          (local_44->physics_box).orientation.y = local_88.y;
          (local_44->physics_box).orientation.z = local_88.z;
        }
        local_28 = (CQuaternion4f *)((int)(local_28 + 4) + 8);
        local_20 = (CQuaternion4f *)((int)(local_20 + 4) + 8);
        local_18 = local_18 + 6;
        local_1c = local_1c + 1;
      } while (local_1c < param_1->box_count);
      return;
    }
    iVar7 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
              (&(param_1->base).base.model);
    pCVar11 = param_1;
    if (0 < param_1->box_count) {
      do {
        core_mission_cpp_FUN_004d9110(0x01CC9450,pCVar11->boxes[0].body_part,1);
        pCVar11->boxes[0].body_part = (CBodyPart *)0x0;
        iVar7 = iVar7 + 1;
        pCVar11 = (CBoneGuy *)((pCVar11->base).base.base.orient_matrix.m + 1);
      } while (iVar7 < param_1->box_count);
    }
    param_1->blown_up = 0;
    fVar16 = param_1->recombine_time * (float)0.5;
    (param_1->base).base.hit_points = 100.0;
    param_1->recombine_time = fVar16;
    if (fVar16 <= (float)2.5) {
      param_1->recombine_time = 2.5;
    }
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  local_38 = param_2 * (param_1->base).speed;
  pCVar2 = &(param_1->base).base.model;
  while (0.0 < local_38) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar2->motion_controller,&local_38);
    if (iVar7 == 100) {
      pCVar4 = param_1->pickup_target;
      if (pCVar4 != (CDemonActor *)0x0) {
        param_1->pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                  ((CCharacter *)param_1,1,pCVar4,0.2);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar7);
    }
  }
  fVar16 = (param_1->base).speed;
  fVar6 = (float)3.1415926535000001;
  fVar17 = (float)0.25;
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.turn_speed = param_2 * fVar6 * fVar16 * fVar17;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar2->motion_controller);
  iVar7 = pSVar9->state_index;
  local_34 = iVar7;
  iVar10 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  if (iVar10 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
      if (iVar7 == 0) {
        (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
        if ((param_1->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
      if ((param_1->base).victim == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,0,1);
        }
      }
      else {
        iVar7 = core_boneguy_cpp_FUN_004196b0(param_1,param_2);
        if (iVar7 == 0) {
          local_30 = 2.0f;
          if ((param_1->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_30 = 3.0f;
          }
          fVar17 = 0.17453292;
          fVar16 = 0.5;
          local_d0.x = 0.0;
          local_d0.z = local_30;
          pCVar13 = &local_d0;
          local_d0.y = 0.0;
          pCVar5 = (param_1->base).victim;
          path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            ((CCharacter *)param_1,
                             &(((param_1->base).victim)->base).location.position,path_map,pCVar13,
                             fVar16,fVar17);
          pCVar2 = &(param_1->base).base.model;
          if (iVar7 < 0) {
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,0,1);
          }
          else {
            pCVar5 = (param_1->base).victim;
            fVar16 = (param_1->base).base.base.location.position.x -
                     (pCVar5->base).location.position.x;
            fVar17 = (param_1->base).base.base.location.position.z -
                     (pCVar5->base).location.position.z;
            if ((SQRT(fVar17 * fVar17 + fVar16 * fVar16) <= local_30 + (float)0.5) &&
               ((param_1->base).attack_cooldown <= 0.0)) {
              if ((param_1->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                iVar7 = 2;
              }
              else {
                iVar7 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,iVar7,1);
              sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handle);
              (*((param_1->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)param_1,"boneguy-swing?.wav");
              (param_1->base).attack_cooldown = 1.0;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_180);
      local_180.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      damage_info = &local_180;
      local_180.attacker = (CDemonActor *)param_1;
      local_180.wielder = (CDemonActor *)param_1;
      fVar16 = 0.4;
      local_14 = local_180.damage_amount;
      pCVar13 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (&local_94,(CVector3f *)&DAT_02dd1184,
                           (param_1->base).base.model.bone_transform.bone_world_matrices +
                           DAT_00764794);
      pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          ((CDemonActor *)param_1,&local_e8,pCVar13);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar13,fVar16,damage_info)
      ;
      break;
    case 5:
      if (((param_1->base).pool_me == 0) &&
         ((param_1->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (param_1->base).pool_me = 1;
      }
      break;
    case 6:
      pCVar4 = (param_1->base).base.carry_hands[1].carry_actor;
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->getBoundingBox)(pCVar4,&local_144);
        afStack_118[3] = local_144.min.x + local_144.max.x;
        local_c4.x = afStack_118[3] * 5.2220990168285998e-315._0_4_;
        local_108 = local_144.min.y + local_144.max.y;
        local_104 = local_144.min.z + local_144.max.z;
        local_c4.y = local_108 * 5.2220990168285998e-315._0_4_;
        local_c4.z = local_104 * 5.2220990168285998e-315._0_4_;
        if (&local_f4 != &local_c4) {
          local_f4.x = local_c4.x;
          local_f4.y = local_c4.y;
        }
        if (&local_100 != &local_f4) {
          local_100.x = local_f4.x;
          local_100.y = local_f4.y;
        }
        local_100.z = local_144.min.z;
        local_f4.z = local_144.max.z;
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((param_1->base).base.carry_hands[1].carry_actor,&local_a0,&local_100);
        if (&local_100 != pCVar13) {
          local_100.x = pCVar13->x;
          local_100.y = pCVar13->y;
          local_100.z = pCVar13->z;
        }
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                            ((param_1->base).base.carry_hands[1].carry_actor,&local_58,&local_f4);
        if (&local_f4 != pCVar13) {
          local_f4.x = pCVar13->x;
          local_f4.y = pCVar13->y;
          local_f4.z = pCVar13->z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1bc);
        local_1bc.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,25.0);
        local_1bc.attacker = (param_1->base).base.carry_hands[1].carry_actor;
        local_1bc.wielder = (CDemonActor *)param_1;
        local_14 = local_1bc.damage_amount;
        core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990
                  (&param_1->base,&local_100,&local_f4,&local_1bc);
      }
    }
  }
  else {
    uVar12 = (param_1->base).base.is_walking;
    if (uVar12 < 2) {
      if (uVar12 == 1) {
LAB_00418e39:
        iVar7 = 1;
      }
      else {
LAB_0041907c:
        iVar7 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,iVar7,1);
    }
    else {
      if (uVar12 < 3) goto LAB_00418e39;
      if (uVar12 != 3) goto LAB_0041907c;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar2->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.x =
         (param_1->base).base.model.accumulated_root_motion.y;
  }
  if (0.0 < (param_1->base).attack_cooldown) {
    (param_1->base).attack_cooldown = (param_1->base).attack_cooldown - param_2;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)param_1);
  if (iVar7 != 0) {
    pCVar5 = (param_1->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar11 = (CBoneGuy *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar11 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&((param_1->base).victim)->base);
    }
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_64 = (param_1->base).base.velocity.x * param_2;
    local_60 = (param_1->base).base.velocity.y * param_2;
    pCVar13 = &(param_1->base).base.position_delta;
    local_5c = param_2 * (param_1->base).base.velocity.z;
    pCVar3 = &(param_1->base).base.model.accumulated_root_motion;
    local_7c = local_64 + pCVar13->x;
    local_78 = local_60 + (param_1->base).base.position_delta.y;
    local_74 = local_5c + (param_1->base).base.position_delta.z;
    local_dc.x = local_7c + pCVar3->x;
    local_dc.y = local_78 + (param_1->base).base.model.accumulated_root_motion.y;
    local_dc.z = local_74 + (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar13->x = (param_1->base).base.position_delta.y;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar3->x = (param_1->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(param_1->base).base.model);
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  if ((local_34 == 1) &&
     (iVar7 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)(param_1->base).base.base.location.position.x,
                         (double)(param_1->base).base.base.location.position.y,
                         (double)(param_1->base).base.base.location.position.z,100.0), iVar7 != 0))
  {
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(param_1->sfx_handle);
    if (iVar7 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    iVar7 = 2;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_14,iVar7);
    uVar12 = (*((param_1->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)param_1,"boneGuy-walkloop.wav");
    param_1->sfx_handle = uVar12;
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return;
  }
LAB_00418c90:
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handle);
  return;
}
