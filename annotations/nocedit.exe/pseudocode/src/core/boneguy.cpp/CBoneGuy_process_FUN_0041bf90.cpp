// Name: core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90
// Address: 0041bf90
// Address Range: [[0041bf90, 0041ca3c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bf90(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bf90(CBoneGuy *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  CCharacter *this_ptr_00;
  float fVar5;
  float fVar6;
  int iVar7;
  SBoneGuyBox *pSVar8;
  uint uVar9;
  SMotion *pSVar10;
  int iVar11;
  CBoneGuy *pCVar12;
  CVector3f *pCVar13;
  int extraout_EAX;
  int extraout_EAX_00;
  CPathMap *path_map;
  uint *puVar14;
  uint *puVar15;
  byte bVar16;
  float afStackY_1908 [1486];
  CQuaternion4f *quat_in;
  float fVar17;
  float in_stack_fffffe4c;
  CDemonActor *in_stack_fffffe50;
  float fStack_1ac;
  SDamageInfo local_180;
  CBoundingBox3D local_144;
  CVector3f local_12c;
  CQuaternion4f local_11c;
  float local_10c;
  float local_108;
  float local_104;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  uint local_d0;
  uint local_cc;
  float local_c8;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  CQuaternion4f local_88;
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
  
  bVar16 = 0;
  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->death_event);
  if (iVar7 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              (&(this_ptr->base).base.model.motion_controller,5,0.0);
  }
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) goto LAB_0041c220;
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar17 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar17;
    if (fVar17 <= this_ptr->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_FUN_0041d8a0(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar17 = delta_time / 2.0f + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar17;
    if (fVar17 < 1.0) {
      local_1c = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      local_2c = this_ptr->boxes;
      local_24 = &this_ptr->recombine_interpolation;
      local_28 = &this_ptr->boxes[0].dest_orient;
      local_20 = &this_ptr->boxes[0].start_orient;
      local_18 = &this_ptr->boxes[0].source_pos;
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
        core_xform_cpp_slerpQuaternion_FUN_005f77e0
                  (local_28,local_20,this_ptr->recombine_interpolation,&local_11c);
        pCVar13 = &local_12c;
        quat_in = &local_88;
        local_12c.x = local_11c.w;
        puVar15 = (uint *)((int)&local_12c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        puVar14 = (uint *)((int)&local_11c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        *(uint *)((int)&local_12c + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&local_11c + (uint)bVar16 * -8 + 4);
        *puVar15 = *puVar14;
        puVar15[(uint)bVar16 * -2 + 1] = puVar14[(uint)bVar16 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(quat_in,pCVar13);
        local_88.w = this_ptr->recombine_interpolation * (float)6.2831853070000001 + local_88.w;
        (local_44->base).location.position.x = local_ac;
        (local_44->base).location.position.y = local_a8;
        pUVar1 = &(local_44->base).orient;
        (local_44->base).location.position.z = local_a4;
        if ((CQuaternion4f *)pUVar1 != &local_88) {
          (pUVar1->vec).x = local_88.w;
          (local_44->base).orient.vec.y = local_88.x;
          (local_44->base).orient.vec.z = local_88.y;
        }
        if (&local_44->sim_box != (CBox *)&local_ac) {
          (local_44->sim_box).position.x = local_ac;
          (local_44->sim_box).position.y = local_a8;
          (local_44->sim_box).position.z = local_a4;
        }
        pCVar13 = &(local_44->sim_box).orientation;
        if ((CQuaternion4f *)pCVar13 != &local_88) {
          pCVar13->x = local_88.w;
          (local_44->sim_box).orientation.y = local_88.x;
          (local_44->sim_box).orientation.z = local_88.y;
        }
        local_28 = (CQuaternion4f *)&local_28[4].y;
        local_20 = (CQuaternion4f *)&local_20[4].y;
        local_18 = local_18 + 6;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->box_count);
      return;
    }
    iVar7 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
              (&(this_ptr->base).base.model);
    pCVar12 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                  (g_CDemonMissionPtr,&(pCVar12->boxes[0].body_part)->base,1);
        pCVar12->boxes[0].body_part = (CBodyPart *)0x0;
        iVar7 = iVar7 + 1;
        pCVar12 = (CBoneGuy *)((pCVar12->base).base.base.orient_matrix.m + 1);
      } while (iVar7 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    fVar17 = this_ptr->recombine_time * (float)0.5;
    (this_ptr->base).base.hit_points = 100.0;
    this_ptr->recombine_time = fVar17;
    if (fVar17 <= (float)2.5) {
      this_ptr->recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_38 = delta_time * (this_ptr->base).speed;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < local_38) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (uVar9 == 100) {
      pCVar4 = this_ptr->pickup_target;
      if (pCVar4 != (CDemonActor *)0x0) {
        this_ptr->pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,pCVar4,0.2);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar9);
    }
  }
  fVar17 = (this_ptr->base).speed;
  fVar6 = (float)3.1415926535000001;
  fVar5 = (float)0.25;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar6 * fVar17 * fVar5;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar2->motion_controller);
  iVar7 = pSVar10->state_index;
  local_34 = iVar7;
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    switch(iVar7) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CDemonActor *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
      }
      else {
        iVar7 = core_boneguy_cpp_CBoneGuy_FUN_0041cc40(this_ptr);
        if (iVar7 == 0) {
          local_30 = 2.0f;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_30 = 3.0f;
          }
          fVar17 = 0.17453292;
          pCVar13 = (CVector3f *)0x3f000000;
          local_d0 = 0;
          local_c8 = local_30;
          local_cc = 0;
          pCVar4 = (this_ptr->base).victim;
          path_map = (*((pCVar4->vtable)._ub)->getPathMap)(pCVar4);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                             path_map,pCVar13,fVar17,in_stack_fffffe4c);
          pCVar2 = &(this_ptr->base).base.model;
          if (iVar7 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
          }
          else {
            pCVar4 = (this_ptr->base).victim;
            fVar17 = (this_ptr->base).base.base.location.position.x - (pCVar4->location).position.x;
            fVar5 = (this_ptr->base).base.base.location.position.z - (pCVar4->location).position.z;
            if ((SQRT(fVar5 * fVar5 + fVar17 * fVar17) <= local_30 + (float)0.5) &&
               (*(float *)(this_ptr->base).unk2 <= 0.0)) {
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                fVar17 = 2.8026e-45;
              }
              else {
                fVar17 = 8.40779e-45;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,(int)fVar17,1);
              sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
              (this_ptr->base).unk2[0] = '\0';
              (this_ptr->base).unk2[1] = '\0';
              (this_ptr->base).unk2[2] = -0x80;
              (this_ptr->base).unk2[3] = '?';
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_180);
      local_180.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_180.attacker = (CDemonActor *)this_ptr;
      local_180.wielder = (CDemonActor *)this_ptr;
      local_14 = local_180.damage_amount;
      pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_94,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices
                           [DAT_00822944].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_e8,pCVar13);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 6:
      pCVar4 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->getBoundingBox)(pCVar4,&local_144);
        local_10c = local_144.min.x + local_144.max.x;
        local_c4.x = local_10c * 0.5f;
        local_108 = local_144.min.y + local_144.max.y;
        local_104 = local_144.min.z + local_144.max.z;
        local_c4.y = local_108 * 0.5f;
        local_c4.z = local_104 * 0.5f;
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
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((this_ptr->base).base.carry_hands[1].carry_actor,&local_a0,&local_100);
        if (&local_100 != pCVar13) {
          local_100.x = pCVar13->x;
          local_100.y = pCVar13->y;
          local_100.z = pCVar13->z;
        }
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((this_ptr->base).base.carry_hands[1].carry_actor,&local_58,&local_f4);
        if (&local_f4 != pCVar13) {
          local_f4.x = pCVar13->x;
          local_f4.y = pCVar13->y;
          local_f4.z = pCVar13->z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe44);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
        core_enemy_cpp_CEnemy_FUN_004a9930(&this_ptr->base);
      }
    }
  }
  else {
    uVar9 = (this_ptr->base).base.is_walking;
    if (uVar9 < 2) {
      if (uVar9 == 1) {
LAB_0041c3c9:
        iVar7 = 1;
      }
      else {
LAB_0041c60c:
        iVar7 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar7,1);
    }
    else {
      if (uVar9 < 3) goto LAB_0041c3c9;
      if (uVar9 != 3) goto LAB_0041c60c;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    this_ptr_00 = (CCharacter *)(this_ptr->base).victim;
    if ((this_ptr_00 != (CCharacter *)0x0) &&
       (pCVar12 = (CBoneGuy *)(*(((this_ptr_00->base).vtable._uc)->_uc).getGrabber)(this_ptr_00),
       pCVar12 == this_ptr)) {
      in_stack_fffffe50 = (this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_fffffe50);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_64 = (this_ptr->base).base.velocity.x * delta_time;
    local_60 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar13 = &(this_ptr->base).base.position_delta;
    local_5c = delta_time * (this_ptr->base).base.velocity.z;
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_88.z = local_64 + pCVar13->x;
    local_78 = local_60 + (this_ptr->base).base.position_delta.y;
    local_74 = local_5c + (this_ptr->base).base.position_delta.z;
    local_dc.x = local_88.z + pCVar3->x;
    local_dc.y = local_78 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_dc.z = local_74 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar13->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar3->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffe50);
  if ((local_34 == 1) &&
     (iVar7 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,100.0), iVar7 != 0))
  {
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
    if (iVar7 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    iVar7 = 2;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar7);
    uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                      ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar9;
    fStack_1ac = 6.040276e-39;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
LAB_0041c220:
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  return;
}
