// Name: core_ghoul.cpp_CGhoul_process_FUN_004e6600
// Address: 004e6600
// Address Range: [[004e6600, 004e818c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004e6600(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004e6600(CGhoul *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  CCharacter *pCVar3;
  CDemonActor_vtable *pCVar4;
  bool bVar5;
  CGame *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CGhoul *pCVar10;
  CPathMap *pCVar11;
  CVector3f *pCVar12;
  CDemonActor *pCVar13;
  uint uVar14;
  CLocation *pCVar15;
  char *pcVar16;
  char *pcVar17;
  char cVar18;
  ushort in_FPUControlWord;
  float10 fVar19;
  float10 fVar20;
  int bone_index;
  CVector3f *pCVar21;
  char *in_stack_fffffc88;
  CGore *in_stack_fffffc8c;
  float fVar22;
  CGhoul *in_stack_fffffc94;
  SDamageInfo local_314;
  SDamageInfo local_2d8;
  SDamageInfo local_29c;
  char local_260 [32];
  CBoundingBox3D local_240;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210 [2];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  float local_1c8;
  float local_1c4;
  CPlatform *local_1c0;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  CVector3f local_18c;
  char local_180 [4];
  float local_17c;
  float local_178;
  CVector3f local_174;
  UOrientationVector local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  int local_138;
  float local_134;
  CMotionController_vtable *local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  int local_fc;
  int local_f8;
  CMotionController_vtable *local_f4;
  CVector3f local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  float local_84;
  CDemonActor *local_7c;
  CDemonActor *local_78;
  CMotionList *local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CMotionController *local_30;
  float local_2c;
  float local_28;
  float local_24;
  CMotionController_vtable *local_20;
  float local_1c;
  CPathMap *local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_64 = delta_time * (this_ptr->base).speed;
  local_18 = (CPathMap *)&(this_ptr->base).base.model;
switchD_004e6f9a_caseD_e:
  pCVar11 = local_18;
  if (0.0 < local_64) {
    uVar14 = core_motion_cpp_CMotionController_advance_FUN_0052d610((CMotionController *)local_18);
    switch(uVar14) {
    case 5:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3), iVar7 == 0)) {
        in_stack_fffffc88 = ((this_ptr->base).victim)->actor_name;
        pCVar13 = (**(code **)((int)(&((UOrientationVector *)
                                      ((CPathMap *)in_stack_fffffc88)->height_cache)->vec)[0x18].y +
                              0x108))((CCharacter *)in_stack_fffffc88);
        if (pCVar13 == (CDemonActor *)0x0) {
          in_stack_fffffc8c = (CGore *)0x0;
          pCVar3 = (CCharacter *)(this_ptr->base).victim;
          in_stack_fffffc88 = (char *)this_ptr;
          iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                            (pCVar3,(CDemonActor *)this_ptr,0);
          if (iVar7 != 0) {
            local_174.z = 2.5f;
            in_stack_fffffc94 = (CGhoul *)&local_1c8;
            local_174.x = 0.0;
            local_174.y = 0.0;
            in_stack_fffffc8c = (CGore *)0x4e6aec;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,(CVector3f *)in_stack_fffffc94,&local_174);
            pCVar13 = (this_ptr->base).victim;
            fVar22 = local_1c8 - (pCVar13->location).position.x;
            fVar1 = (float)local_1c0 - (pCVar13->location).position.z;
            bVar5 = SQRT(fVar1 * fVar1 + fVar22 * fVar22) <= 1.0;
            pCVar3 = (CCharacter *)(this_ptr->base).victim;
            if (ABS(local_1c4 - (pCVar3->base).location.position.y) <= (float)4) {
              if (bVar5) {
                in_stack_fffffc8c = (CGore *)0x4e6b5b;
                in_stack_fffffc94 = this_ptr;
                iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar3,(CDemonActor *)this_ptr,0);
                if (iVar7 == 0) goto LAB_004e6a5f;
              }
              if (bVar5) break;
            }
          }
        }
      }
LAB_004e6a5f:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)local_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar14);
      break;
    case 10:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)pCVar11,1,1);
      }
      else {
        pCVar10 = (CGhoul *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar10 == this_ptr) {
          pCVar3 = (CCharacter *)(this_ptr->base).victim;
          iVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3);
          if (iVar7 == 0) {
            pCVar13 = (this_ptr->base).victim;
            (*((pCVar13->vtable)._ub)->getBoundingBox)(pCVar13,&local_240);
            pCVar13 = (this_ptr->base).victim;
            local_168.vec.x = (pCVar13->location).position.x;
            local_168.vec.z = (pCVar13->location).position.z;
            local_168.vec.y =
                 (local_240.max.y - local_240.min.y) * (float)0.69999999999999996 +
                 (pCVar13->location).position.y;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
            in_stack_fffffc88 = (char *)0x4e6c71;
            local_14 = local_29c.damage_amount;
            pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((this_ptr->base).victim,&local_f0,&local_168.vec);
            if (&local_29c.impact_direction != pCVar12) {
              local_29c.impact_direction.x = pCVar12->x;
              local_29c.impact_direction.y = pCVar12->y;
              local_29c.impact_direction.z = pCVar12->z;
            }
            in_stack_fffffc94 = (CGhoul *)&local_29c;
            local_29c.attacker = (CDemonActor *)this_ptr;
            local_29c.wielder = (CDemonActor *)this_ptr;
            pCVar3 = (CCharacter *)(this_ptr->base).victim;
            in_stack_fffffc8c = (CGore *)0x4e6cc0;
            (*(((pCVar3->base).vtable._uc)->_uc).processDamage)
                      (pCVar3,(SDamageInfo *)in_stack_fffffc94);
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              local_70 = (CMotionList *)
                         (int)ROUND(ROUND(local_ac * 2.5 * 0.25));
              in_stack_fffffc94 = (CGhoul *)0x0;
              in_stack_fffffc88 = (char *)0x4e6d0a;
              in_stack_fffffc8c = g_CGorePtr;
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                        (g_CGorePtr,&local_168.vec,(CVector3f *)0x0,(int)local_70,0);
            }
            pCVar3 = (CCharacter *)(this_ptr->base).victim;
            if (pCVar3->hit_points <= 0.0) {
              (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
              in_stack_fffffc94 = (CGhoul *)0x4e6d3f;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)local_18,1,1);
            }
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar3 = (CCharacter *)(this_ptr->base).victim;
            (*(((pCVar3->base).vtable._uc)->_uc).releaseFromGrab)(pCVar3);
            in_stack_fffffc8c = (CGore *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)pCVar11,1,1);
            in_stack_fffffc88 = (char *)pCVar11;
          }
        }
        else {
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)pCVar11,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                ((CDeformableModelInstance *)local_18);
      iVar7 = INT_02d83300;
      if (uVar14 == 0xc) {
        iVar7 = INT_02d83304;
      }
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)local_18,&local_1e0,iVar7);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_1d4,pCVar12);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      local_58 = (float)(int)ROUND(ROUND(local_14 * (float)0.25));
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_1d4,(CVector3f *)0x0,(int)local_58,0);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                ((CDeformableModelInstance *)pCVar11);
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)pCVar11,&local_1b0,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_228,pCVar12);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      local_54 = (float)(int)ROUND(ROUND(local_14 * (float)0.25));
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_228,(CVector3f *)0x0,(int)local_54,0);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                ((CDeformableModelInstance *)pCVar11);
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)pCVar11,&local_1ec,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_15c,pCVar12);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      local_84 = (float)(int)ROUND(ROUND(local_14 * (float)0.25));
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&local_15c,(CVector3f *)0x0,(int)local_84,0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar7 == 0) {
        pcVar16 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar16 = "ghoul-eat-?.wav @1.3";
      }
      pcVar17 = local_260;
      do {
        cVar18 = *pcVar16;
        *pcVar17 = cVar18;
        if (cVar18 == '\0') break;
        cVar18 = pcVar16[1];
        pcVar16 = pcVar16 + 2;
        pcVar17[1] = cVar18;
        pcVar17 = pcVar17 + 2;
      } while (cVar18 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_260);
    }
    goto switchD_004e6f9a_caseD_e;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       ((CMotionController *)local_18,1);
  local_8c = (double)delta_time;
  fVar22 = (this_ptr->base).speed;
  fVar1 = (float)1.57079632675;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).speed * local_14 * (float)3 * delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar1 * fVar22;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)local_18);
  iVar7 = pSVar8->state_index;
  if (iVar7 == 0x11) {
    fVar22 = (this_ptr->base).speed;
    fVar19 = (float10)8;
    (this_ptr->base).base.turn_speed = (float)(fVar19 * (float10)(this_ptr->base).base.turn_speed);
    (this_ptr->base).base.walk_step_speed = (float)((float10)local_8c * fVar19 * (float10)fVar22);
  }
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    local_20 = (CMotionController_vtable *)0xbf800000;
    pCVar11 = (CPathMap *)&(this_ptr->base).base.model;
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)pCVar11);
    switch(pSVar8->state_index) {
    case 0:
      if (this_ptr->stun_timer <= 0.0) {
        pCVar13 = this_ptr->dark_waypoint;
        if (pCVar13 == (CDemonActor *)0x0) {
          iVar9 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
          if (iVar9 != 0) goto LAB_004e7576;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CDemonActor *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->alert_sfx_handle);
            if (iVar9 != 0) {
              in_stack_fffffc88 = (char *)0x4e75e4;
              iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->pain_sfx_handle);
              if (iVar9 != 0) break;
            }
            in_stack_fffffc88 = (char *)this_ptr;
            uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            this_ptr->alert_sfx_handle = uVar14;
          }
        }
        else {
          local_180 = (char  [4])
                      ((pCVar13->location).position.x -
                      (this_ptr->base).base.base.location.position.x);
          local_17c = (pCVar13->location).position.y -
                      (this_ptr->base).base.base.location.position.y;
          local_178 = (pCVar13->location).position.z -
                      (this_ptr->base).base.base.location.position.z;
          if (SQRT(local_178 * local_178 +
                   (float)local_180 * (float)local_180 + local_17c * local_17c) <
              (float)4) {
            fVar22 = (this_ptr->base).base.hit_points + delta_time;
            this_ptr->heal_timer = this_ptr->heal_timer - delta_time;
            (this_ptr->base).base.hit_points = fVar22;
            if ((float)100 < fVar22) {
              (this_ptr->base).base.hit_points = 100.0;
            }
            if (this_ptr->heal_timer < 0.0) {
              this_ptr->heal_timer = 0.0;
              this_ptr->dark_waypoint = (CDemonActor *)0x0;
            }
          }
        }
      }
      else {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
      }
      break;
    case 1:
    case 0x11:
      if ((this_ptr->is_berserk != 0) && (iVar7 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x11,1);
      }
      if (0.0 < this_ptr->stun_timer) {
        this_ptr->stun_timer = this_ptr->stun_timer - delta_time;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      else {
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        cVar18 = (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_r_lower_arm]
                 != 0;
        if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_l_lower_arm] != 0)
        {
          cVar18 = cVar18 + '\x01';
        }
        iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                          (&g_HeroActors[g_LocalHeroIndex]->base);
        pCVar6 = g_CGamePtr;
        if (iVar9 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar13 = (this_ptr->base).victim;
          if (pCVar13 == (CDemonActor *)0x0) {
            in_stack_fffffc88 = (char *)0x4e77fa;
            iVar9 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
            if (iVar9 == 0) {
              in_stack_fffffc88 = (char *)&(this_ptr->base).base.model;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)in_stack_fffffc88,0,1);
            }
          }
          else {
            local_1f8 = (pCVar13->location).position.x -
                        (this_ptr->base).base.base.location.position.x;
            local_1f0 = (pCVar13->location).position.z -
                        (this_ptr->base).base.base.location.position.z;
            local_1f4 = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)25) && (cVar18 != '\0')) &&
               (this_ptr->dark_waypoint == (CDemonActor *)0x0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(this_ptr);
            }
            local_30 = &(this_ptr->base).base.model.motion_controller;
            pCVar13 = this_ptr->dark_waypoint;
            if (pCVar13 == (CDemonActor *)0x0) {
              fVar22 = 0.17453292;
              pCVar12 = (CVector3f *)0x3f800000;
              local_fc = 0;
              local_f4 = (CMotionController_vtable *)2.5f;
              local_f8 = 0;
              pCVar13 = (this_ptr->base).victim;
              in_stack_fffffc88 = (char *)(*((pCVar13->vtable)._ub)->getPathMap)(pCVar13);
              iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->location).position,
                                 (CPathMap *)in_stack_fffffc88,pCVar12,fVar22,
                                 (float)in_stack_fffffc94);
              if (iVar9 < 0) {
                in_stack_fffffc88 = (char *)0x4e7a07;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
              }
              else if (((0 < iVar9) && (cVar18 != '\0')) &&
                      (((this_ptr->base).attack_cooldown <= 0.0 &&
                       ((pCVar3 = (CCharacter *)(this_ptr->base).victim,
                        pCVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
                        pCVar13 == (CDemonActor *)0x0 && (this_ptr->flinch_blend_weight <= 0.0))))))
              {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [this_ptr->part_l_lower_arm] != 0) {
                  local_24 = (1.0 - ABS(local_48 - 3.4f) / 3.4f) *
                             (float)0.29999999999999999;
                }
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [this_ptr->part_r_lower_arm] != 0) {
                  local_40 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.40000000000000002;
                }
                pCVar3 = (CCharacter *)(this_ptr->base).victim;
                local_44 = local_48;
                iVar9 = (*(((pCVar3->base).vtable._uc)->_uc).canBeGrabbed)
                                  (pCVar3,(CDemonActor *)this_ptr,0);
                if (iVar9 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar9 = 0xb;
                    }
                    else {
                      iVar9 = 0xc;
                    }
                  }
                  else {
                    iVar9 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(this_ptr->base).base.model.motion_controller,iVar9,1);
                  (this_ptr->base).attack_cooldown = 0.7;
                }
              }
            }
            else {
              fVar22 = 0.0;
              pCVar12 = (CVector3f *)0x40400000;
              in_stack_fffffc88 = (char *)(*((pCVar13->vtable)._ub)->getPathMap)(pCVar13);
              iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                ((CCharacter *)this_ptr,
                                 &(this_ptr->dark_waypoint->location).position,
                                 (CPathMap *)in_stack_fffffc88,pCVar12,fVar22,
                                 (float)in_stack_fffffc94);
              if (0 < iVar9) {
                in_stack_fffffc88 = (char *)0x4e777f;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
                this_ptr->heal_timer = local_14;
              }
              if (iVar9 < 0) {
                this_ptr->heal_timer = 30.0;
                this_ptr->dark_waypoint = (CDemonActor *)0x0;
              }
              if (iVar7 == 1) {
                in_stack_fffffc88 = (char *)0x4e77bc;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,0x11,1);
              }
            }
          }
        }
        else {
          if (this_ptr->pending_eat_state < 0) {
            cVar18 = (this_ptr->base).base.model.part_data.visibility_flags
                     [this_ptr->part_r_lower_arm] != 0;
            if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_l_lower_arm]
                != 0) {
              cVar18 = cVar18 + '\x01';
            }
            if (cVar18 != '\0') {
              if (cVar18 == '\x01') {
                this_ptr->pending_eat_state = 0xe;
                pCVar6->player_hit_flag = 1;
              }
              else {
                iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                this_ptr->pending_eat_state = (iVar9 == 0) + 0xd;
                g_CGamePtr->player_hit_flag = 1;
              }
              goto LAB_004e7a33;
            }
            this_ptr->pending_eat_state = 0;
          }
          else {
LAB_004e7a33:
            if (this_ptr->pending_eat_state != 0) {
              local_2c = 2.0f;
              if (this_ptr->pending_eat_state == 0xe) {
                local_2c = 5.5f;
              }
              in_stack_fffffc88 = (char *)0x3db2b8c2;
              local_dc = local_2c;
              pCVar21 = (CVector3f *)0x3f000000;
              local_e4 = 0.0;
              local_e0 = 0.0;
              pCVar11 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
              pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                  (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_198,0);
              pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_150,pCVar12)
              ;
              iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                ((CCharacter *)this_ptr,pCVar12,pCVar11,pCVar21,
                                 (float)in_stack_fffffc88,(float)in_stack_fffffc8c);
              if (0 < iVar9) {
                in_stack_fffffc88 = (char *)0x4e7b00;
                iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).
                          getDeathState)(&g_HeroActors[g_LocalHeroIndex]->base);
                if (iVar9 == 2) {
                  in_stack_fffffc88 = (char *)&(this_ptr->base).base.model;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            ((CMotionController *)in_stack_fffffc88,this_ptr->pending_eat_state,1);
                  if (this_ptr->pending_eat_state == 0xd) {
                    pCVar4 = (this_ptr->base).base.base.vtable._ub;
                    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.2);
                    in_stack_fffffc88 = (char *)this_ptr;
                    (*pCVar4->playSoundWithVolume)
                              ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",local_14);
                  }
                }
              }
              break;
            }
          }
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      break;
    case 2:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
LAB_004e7576:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
      }
      else {
        pCVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar13 == (CDemonActor *)0x0) {
          in_stack_fffffc88 = (char *)0x3f000000;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          iVar9 = this_ptr->part_l_lower_arm;
          (this_ptr->base).attack_cooldown = local_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar9] != 0) {
            local_50 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                 ((CMotionController *)pCVar11);
            local_9c = (double)local_50;
            in_stack_fffffc88 = (char *)pCVar11;
            local_14 = local_50;
            if ((local_50 <= (float)2) &&
               (local_20 = (CMotionController_vtable *)3.4f, 1.0 <= local_9c)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2d8);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_2d8.damage_amount = local_14;
              if (this_ptr->is_berserk != 0) {
                local_2d8.damage_amount = local_14 * (float)2;
              }
              in_stack_fffffc88 = (char *)&local_2d8;
              local_2d8.attacker = (CDemonActor *)this_ptr;
              local_2d8.wielder = (CDemonActor *)this_ptr;
              pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_114,(CVector3f *)&INT_02d832b4,
                                   (CMatrix3x4f *)
                                   (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                   [INT_02d83304].m);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_1bc,pCVar12);
              iVar9 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              if (iVar9 != 0) {
                in_stack_fffffc88 = "gh-hits?.wav";
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          in_stack_fffffc88 = (char *)0x1;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    ((CMotionController *)pCVar11,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            ((CDeformableModelInstance *)pCVar11,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_108,pCVar12);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_108,0);
        (this_ptr->base).pool_me = 1;
      }
      this_ptr->is_berserk = 0;
      if (((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) &&
         (iVar9 = this_ptr->spasm_timer - g_GlobalDeltaTimeInt, this_ptr->spasm_timer = iVar9,
         iVar9 < 1)) {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,12.0);
          this_ptr->spasm_timer = (int)ROUND(ROUND(local_14 * (float)65536));
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0xf,1);
        }
      }
      if (0 < this_ptr->lives_left) {
        if (this_ptr->arise_timer < 1) {
          iVar9 = this_ptr->arise_timer + g_GlobalDeltaTimeInt;
          this_ptr->arise_timer = iVar9;
          if (iVar9 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar13 = (this_ptr->base).victim;
            if (pCVar13 != (CDemonActor *)0x0) {
              local_120 = (this_ptr->base).base.base.location.position.x -
                          (pCVar13->location).position.x;
              local_11c = (this_ptr->base).base.base.location.position.y -
                          (pCVar13->location).position.y;
              local_118 = (this_ptr->base).base.base.location.position.z -
                          (pCVar13->location).position.z;
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = (CDemonActor *)
                         (local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc);
              local_78 = (CDemonActor *)(((int)local_7c >> 1) + INT_02d7a7b8);
              if ((float)local_78 < (float)8) goto LAB_004e7243;
            }
          }
          else {
            this_ptr->arise_timer = 0;
LAB_004e7243:
            local_1c = (this_ptr->base).base.collision_cylinder_top;
            if (local_1c < (this_ptr->base).base.collision_cylinder_bottom) {
              local_1c = (this_ptr->base).base.model.bounding_box.max.y;
            }
            if (local_1c < (this_ptr->base).base.collision_cylinder_bottom) {
              local_1c = (this_ptr->base).base.collision_cylinder_bottom + (float)0.5;
            }
            fVar22 = 0.0;
            do {
              local_68 = (float)(int)fVar22 * (float)6.2831853070000001 * (float)0.25;
              local_14 = fVar22;
              core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar19 = (float10)fcos((float10)local_68);
              fVar20 = (float10)fsin((float10)local_68);
              local_6c = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                    (this_ptr->base).base.base.location.position.z,
                                    (float)(fVar20 * (float10)0.050000000000000003),
                                    (float)(fVar19 * (float10)0.050000000000000003),
                                    (this_ptr->base).base.collision_cylinder_radius,
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            (this_ptr->base).base.collision_cylinder_bottom),
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            local_1c));
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
              if (local_6c < 1.0) break;
              fVar22 = (float)((int)fVar22 + 1);
            } while ((int)fVar22 < 4);
            if ((int)fVar22 < 4) {
              this_ptr->arise_timer = 3;
              (this_ptr->base).victim = (CDemonActor *)0x0;
            }
            else {
              local_14 = (float)(this_ptr->lives_left + 1);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                   (10.0,(float)(int)local_14 * (float)10);
              (this_ptr->base).base.hit_points = local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0x10,1);
            }
          }
        }
        else {
          iVar9 = this_ptr->arise_timer - g_GlobalDeltaTimeInt;
          this_ptr->arise_timer = iVar9;
          if (iVar9 < 1) {
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
            this_ptr->arise_timer = (int)ROUND(ROUND(-local_14 * 65536.0f));
          }
        }
      }
      break;
    case 0xb:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
LAB_004e7d9a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)pCVar11,1,1);
      }
      else {
        pCVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar13 == (CDemonActor *)0x0) {
          local_20 = (CMotionController_vtable *)2.5f;
        }
        else {
          in_stack_fffffc88 = ((this_ptr->base).victim)->actor_name;
          pCVar10 = (CGhoul *)
                    (**(code **)((int)(&((UOrientationVector *)
                                        ((CPathMap *)in_stack_fffffc88)->height_cache)->vec)[0x18].y
                                + 0x108))((CCharacter *)in_stack_fffffc88);
          if (pCVar10 != this_ptr) {
            in_stack_fffffc88 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)pCVar11,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar3 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar3 == (CCharacter *)0x0) ||
         (pCVar13 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
         pCVar13 != (CDemonActor *)0x0)) goto LAB_004e7d9a;
      in_stack_fffffc88 = (char *)0x3f000000;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
      iVar9 = this_ptr->part_r_lower_arm;
      (this_ptr->base).attack_cooldown = local_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar9] != 0) {
        local_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                             ((CMotionController *)pCVar11);
        local_a4 = (double)local_4c;
        in_stack_fffffc88 = (char *)pCVar11;
        local_14 = local_4c;
        if (local_4c <= (float)2) {
          local_20 = (CMotionController_vtable *)2.5f;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_314);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            local_314.damage_amount = local_14;
            if (this_ptr->is_berserk != 0) {
              local_314.damage_amount = local_14 * (float)2;
            }
            in_stack_fffffc88 = (char *)&local_314;
            local_314.attacker = (CDemonActor *)this_ptr;
            local_314.wielder = (CDemonActor *)this_ptr;
            pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (local_210,(CVector3f *)&INT_02d832a8,
                                 (CMatrix3x4f *)
                                 (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                 [INT_02d83300].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_21c,pCVar12);
            iVar9 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
            if (iVar9 != 0) {
              in_stack_fffffc88 = "gh-hits?.wav";
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar9 = this_ptr->burp_timer - g_GlobalDeltaTimeInt;
      this_ptr->burp_timer = iVar9;
      if (iVar9 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
        in_stack_fffffc88 = (char *)CONCAT22((short)((uint)local_14 >> 0x10),in_FPUControlWord);
        this_ptr->burp_timer = (int)ROUND(ROUND(local_14 * (float)65536));
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        in_stack_fffffc88 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    if (((0.0 <= (float)local_20) && (this_ptr->flinch_blend_weight <= 0.0)) &&
       ((this_ptr->base).victim != (CDemonActor *)0x0)) {
      local_138 = 0;
      local_134 = 0.0;
      local_130 = local_20;
      fVar22 = 0.5235988;
      pCVar21 = (CVector3f *)0x40400000;
      pCVar13 = (this_ptr->base).victim;
      pCVar11 = (*((pCVar13->vtable)._ub)->getPathMap)(pCVar13);
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)((this_ptr->base).victim + 1),&local_1a4,0);
      pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((this_ptr->base).victim,&local_144,pCVar12);
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,pCVar12,pCVar11,pCVar21,fVar22,
                         (float)in_stack_fffffc88);
      if (iVar9 != 1) {
        in_stack_fffffc88 = (char *)0x1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004e6754;
  }
  uVar14 = (this_ptr->base).base.is_walking;
  if (uVar14 < 2) {
    if (uVar14 == 1) {
      iVar9 = 1;
    }
    else {
LAB_004e6fdc:
      iVar9 = 0;
    }
LAB_004e672d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar9,1);
  }
  else {
    if (uVar14 < 3) {
      iVar9 = 0x11;
      goto LAB_004e672d;
    }
    if (uVar14 != 3) goto LAB_004e6fdc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004e6754:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    pCVar3 = (CCharacter *)(this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar10 = (CGhoul *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar10 == this_ptr)) {
      in_stack_fffffc88 = ((this_ptr->base).victim)->actor_name;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffc88);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_cc = (this_ptr->base).base.velocity.x * delta_time;
    local_c8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar12 = &(this_ptr->base).base.position_delta;
    local_c4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar21 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_d8 = local_cc + pCVar12->x;
    local_d4 = local_c8 + (this_ptr->base).base.position_delta.y;
    local_d0 = local_c4 + (this_ptr->base).base.position_delta.z;
    local_18c.x = local_d8 + pCVar21->x;
    local_18c.y = local_d4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_18c.z = local_d0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar12->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar21->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_18c);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(this_ptr_00);
  local_b4 = (double)this_ptr->flinch_blend_weight;
  if (0.0 < local_b4) {
    local_60 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&this_ptr_00->motion_controller,this_ptr->flinch_motion_index,
                          1.0 - this_ptr->flinch_blend_weight);
    fVar22 = 1.0 - this_ptr->flinch_blend_weight;
    local_5c = 1.0 - fVar22 * fVar22 * fVar22;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_00,this_ptr->flinch_motion_index,local_60,local_5c,INT_02d83320,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar22 = this_ptr->flinch_blend_weight - delta_time / 0.7f;
    this_ptr->flinch_blend_weight = fVar22;
    if (fVar22 < 0.0) {
      this_ptr->flinch_blend_weight = 0.0;
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffc88);
  if (((float)0.01 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar22 = (this_ptr->base).base.position_delta.y,
     fVar1 = (this_ptr->base).base.position_delta.x, fVar2 = (this_ptr->base).base.position_delta.z,
     (float)0.01 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar22 * fVar22))) {
    iVar9 = core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,this_ptr->walk_sfx_handle)
    ;
    if (iVar9 == 0) {
      _sprintf
                (&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)(this_ptr->base).speed);
      uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffc88);
      this_ptr->walk_sfx_handle = uVar14;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,this_ptr->walk_sfx_handle);
  }
  if ((this_ptr->base).pool_me == 0) {
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_upper_torso] == 0) {
      fVar22 = 0.5;
      iVar9 = this_ptr->part_upper_torso;
      bone_index = INT_02d83324;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_r_upper_arm,INT_02d83310,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_r_upper_arm] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_r_lower_arm,INT_02d83308,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,this_ptr->part_l_upper_arm,INT_02d83314,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_l_upper_arm] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,this_ptr->part_l_lower_arm,INT_02d8330c,0.2);
      }
      fVar22 = 0.7;
      iVar9 = this_ptr->part_head;
      bone_index = INT_02d832fc;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
              ((CCharacter *)this_ptr,iVar9,bone_index,fVar22);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670((CCharacter *)this_ptr);
  }
  if ((this_ptr->dark_waypoint != (CDemonActor *)0x0) && (iVar7 == 0x11)) {
    fVar22 = (this_ptr->base).base.base.location.position.x - (this_ptr->prev_position).x;
    fVar1 = (this_ptr->base).base.base.location.position.z - (this_ptr->prev_position).z;
    if (delta_time * (float)0.5 <= SQRT(fVar1 * fVar1 + fVar22 * fVar22)) {
      this_ptr->stuck_timer = 1.0;
    }
    else {
      fVar22 = this_ptr->stuck_timer - delta_time;
      this_ptr->stuck_timer = fVar22;
      if (fVar22 < 0.0) {
        this_ptr->heal_timer = 30.0;
        this_ptr->dark_waypoint = (CDemonActor *)0x0;
        this_ptr->is_berserk = 0;
      }
    }
  }
  pCVar15 = &(this_ptr->base).base.base.location;
  if ((CLocation *)&this_ptr->prev_position == pCVar15) {
    return;
  }
  (this_ptr->prev_position).x = (pCVar15->position).x;
  (this_ptr->prev_position).y = (this_ptr->base).base.base.location.position.y;
  (this_ptr->prev_position).z = (this_ptr->base).base.base.location.position.z;
  return;
}
