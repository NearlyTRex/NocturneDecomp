// Name: core_ghoul.cpp_CGhoul_process_FUN_004e6600
// Address: 004e6600
// Address Range: [[004e6600, 004e818c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004e6600(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004e6600(CGhoul *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  CDemonActor_vtable *pCVar7;
  bool bVar8;
  CGame *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  int iVar12;
  CGhoul *pCVar13;
  int extraout_EAX;
  CVector3f *pCVar14;
  int extraout_EAX_00;
  int extraout_EAX_01;
  uint uVar15;
  CLocation *pCVar16;
  char *pcVar17;
  char *pcVar18;
  char cVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
  int force_immediate;
  SDamageInfo local_314;
  SDamageInfo local_2d8;
  SDamageInfo local_29c;
  char local_260 [36];
  float local_23c;
  float local_230;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210 [2];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  CVector3f local_1c8;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  uint local_138;
  uint local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  uint local_fc;
  uint local_f8;
  float local_f4;
  CVector3f local_f0;
  uint local_e4;
  uint local_e0;
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
  int local_84;
  float local_7c;
  float local_78;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
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
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar10 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_64 = delta_time * (this_ptr->base).speed;
  local_18 = &(this_ptr->base).base.model;
switchD_004e6f9a_caseD_e:
  pCVar2 = local_18;
  if (0.0 < local_64) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_18->motion_controller);
    switch(iVar10) {
    case 5:
      iVar10 = *(int *)((this_ptr->base).unk2 + 4);
      if ((((iVar10 != 0) &&
           (iVar10 = (**(code **)(*(int *)(iVar10 + 0x154) + 0x120))(), iVar10 == 0)) &&
          (iVar10 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108))(),
          iVar10 == 0)) &&
         (iVar10 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xfc))(),
         iVar10 != 0)) {
        local_174.z = 2.5f;
        local_174.x = 0.0;
        local_174.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_1c8,&local_174);
        iVar10 = *(int *)((this_ptr->base).unk2 + 4);
        fVar3 = local_1c8.x - *(float *)(iVar10 + 0x20);
        fVar4 = local_1c8.z - *(float *)(iVar10 + 0x28);
        bVar8 = SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= 1.0;
        iVar10 = *(int *)((this_ptr->base).unk2 + 4);
        if (((ABS(local_1c8.y - *(float *)(iVar10 + 0x24)) <= (float)4) &&
            ((!bVar8 || (iVar10 = (**(code **)(*(int *)(iVar10 + 0x154) + 0x100))(), iVar10 != 0))))
           && (bVar8)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&local_18->motion_controller,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      break;
    case 10:
      iVar10 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar10 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        pCVar13 = (CGhoul *)(**(code **)(*(int *)(iVar10 + 0x154) + 0x108))();
        if (pCVar13 == this_ptr) {
          iVar10 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x120))();
          if (iVar10 == 0) {
            (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x14))();
            iVar10 = *(int *)((this_ptr->base).unk2 + 4);
            local_168.x = *(float *)(iVar10 + 0x20);
            local_168.z = *(float *)(iVar10 + 0x28);
            local_168.y = (local_230 - local_23c) * (float)0.69999999999999996 +
                          *(float *)(iVar10 + 0x24);
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
            local_14 = local_29c.damage_amount;
            pCVar14 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (*(CDemonActor **)((this_ptr->base).unk2 + 4),&local_f0,&local_168);
            if (&local_29c.impact_direction != pCVar14) {
              local_29c.impact_direction.x = pCVar14->x;
              local_29c.impact_direction.y = pCVar14->y;
              local_29c.impact_direction.z = pCVar14->z;
            }
            local_29c.attacker = (CDemonActor *)this_ptr;
            local_29c.wielder = (CDemonActor *)this_ptr;
            (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x11c))();
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              dVar22 = round(local_ac * 2.5 * 0.25);
              local_70 = (int)ROUND(dVar22);
              core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
            }
            iVar10 = *(int *)((this_ptr->base).unk2 + 4);
            if (*(float *)(iVar10 + 0x243c) <= 0.0) {
              (**(code **)(*(int *)(iVar10 + 0x154) + 0x104))();
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&local_18->motion_controller,1,1);
            }
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x104))();
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(local_18);
      iVar12 = INT_02d83300;
      if (iVar10 == 0xc) {
        iVar12 = INT_02d83304;
      }
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (local_18,&local_1e0,iVar12);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_1d4,pCVar14);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar22 = round((double)(local_14 * (float)0.25));
      local_58 = (int)ROUND(dVar22);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar2,&local_1b0,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_228,pCVar14);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar22 = round((double)(local_14 * (float)0.25));
      local_54 = (int)ROUND(dVar22);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar2,&local_1ec,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_15c,pCVar14);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar22 = round((double)(local_14 * (float)0.25));
      local_84 = (int)ROUND(dVar22);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar10 == 0) {
        pcVar17 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar17 = "ghoul-eat-?.wav @1.3";
      }
      pcVar18 = local_260;
      do {
        cVar19 = *pcVar17;
        *pcVar18 = cVar19;
        if (cVar19 == '\0') break;
        cVar19 = pcVar17[1];
        pcVar17 = pcVar17 + 2;
        pcVar18[1] = cVar19;
        pcVar18 = pcVar18 + 2;
      } while (cVar19 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_260);
    }
    goto switchD_004e6f9a_caseD_e;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&local_18->motion_controller,1);
  local_8c = (double)delta_time;
  fVar3 = (this_ptr->base).speed;
  fVar4 = (float)1.57079632675;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).speed * local_14 * (float)3 * delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar4 * fVar3;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&local_18->motion_controller);
  iVar10 = pSVar11->state_index;
  if (iVar10 == 0x11) {
    fVar3 = (this_ptr->base).speed;
    fVar20 = (float10)8;
    (this_ptr->base).base.turn_speed = (float)(fVar20 * (float10)(this_ptr->base).base.turn_speed);
    (this_ptr->base).base.walk_step_speed = (float)((float10)local_8c * fVar20 * (float10)fVar3);
  }
  iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar12 == 0) {
    local_20 = -1.0;
    pCVar2 = &(this_ptr->base).base.model;
    pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar2->motion_controller);
    switch(pSVar11->state_index) {
    case 0:
      if (*(float *)(this_ptr->unk3 + 0x38) <= 0.0) {
        iVar12 = *(int *)(this_ptr->unk3 + 0x3c);
        if (iVar12 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX_00 != 0) goto LAB_004e7576;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
          if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x2c));
            if ((iVar12 == 0) ||
               (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                   (*(uint *)(this_ptr->unk3 + 0x30)), iVar12 == 0)) {
              uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                 ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
              *(uint *)(this_ptr->unk3 + 0x2c) = uVar15;
            }
          }
        }
        else {
          local_180 = *(float *)(iVar12 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_17c = *(float *)(iVar12 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_178 = *(float *)(iVar12 + 0x28) - (this_ptr->base).base.base.location.position.z;
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)4) {
            fVar3 = (this_ptr->base).base.hit_points + delta_time;
            *(float *)(this_ptr->unk3 + 0x40) = *(float *)(this_ptr->unk3 + 0x40) - delta_time;
            (this_ptr->base).base.hit_points = fVar3;
            if ((float)100 < fVar3) {
              (this_ptr->base).base.hit_points = 100.0;
            }
            if (*(float *)(this_ptr->unk3 + 0x40) < 0.0) {
              this_ptr->unk3[0x40] = '\0';
              this_ptr->unk3[0x41] = '\0';
              this_ptr->unk3[0x42] = '\0';
              this_ptr->unk3[0x43] = '\0';
              this_ptr->unk3[0x3c] = '\0';
              this_ptr->unk3[0x3d] = '\0';
              this_ptr->unk3[0x3e] = '\0';
              this_ptr->unk3[0x3f] = '\0';
            }
          }
        }
      }
      else {
        *(float *)(this_ptr->unk3 + 0x38) = *(float *)(this_ptr->unk3 + 0x38) - delta_time;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)(this_ptr->unk3 + 0x44) != 0) && (iVar10 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x11,1);
      }
      if (0.0 < *(float *)(this_ptr->unk3 + 0x38)) {
        *(float *)(this_ptr->unk3 + 0x38) = *(float *)(this_ptr->unk3 + 0x38) - delta_time;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
      else {
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        cVar19 = (this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 4)] !=
                 0;
        if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 0xc)] != 0)
        {
          cVar19 = cVar19 + '\x01';
        }
        iVar12 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                           (&g_HeroActors[g_LocalHeroIndex]->base);
        pCVar9 = g_CGamePtr;
        if (iVar12 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
          iVar12 = *(int *)((this_ptr->base).unk2 + 4);
          if (iVar12 == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
            if (extraout_EAX_01 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0,1);
            }
          }
          else {
            local_1f8 = *(float *)(iVar12 + 0x20) - (this_ptr->base).base.base.location.position.x;
            local_1f0 = *(float *)(iVar12 + 0x28) - (this_ptr->base).base.base.location.position.z;
            local_1f4 = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)25) && (cVar19 != '\0')) &&
               (*(int *)(this_ptr->unk3 + 0x3c) == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(this_ptr);
            }
            local_30 = &(this_ptr->base).base.model.motion_controller;
            if (*(int *)(this_ptr->unk3 + 0x3c) == 0) {
              local_fc = 0;
              local_f4 = 2.5f;
              local_f8 = 0;
              (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
              iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr)
              ;
              if (iVar12 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
              }
              else if (((0 < iVar12) && (cVar19 != '\0')) &&
                      ((*(float *)(this_ptr->base).unk2 <= 0.0 &&
                       ((iVar12 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154)
                                              + 0x108))(), iVar12 == 0 &&
                        (*(float *)(this_ptr->unk2 + 4) <= 0.0)))))) {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if ((this_ptr->base).base.model.part_visibility_flags
                    [*(int *)(this_ptr->unk3 + 0xc)] != 0) {
                  local_24 = (1.0 - ABS(local_48 - 3.4f) / 3.4f) *
                             (float)0.29999999999999999;
                }
                if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 4)]
                    != 0) {
                  local_40 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.40000000000000002;
                }
                local_44 = local_48;
                iVar12 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xfc))
                                   ();
                if (iVar12 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar12 = 0xb;
                    }
                    else {
                      iVar12 = 0xc;
                    }
                  }
                  else {
                    iVar12 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(this_ptr->base).base.model.motion_controller,iVar12,1);
                  builtin_strncpy((this_ptr->base).unk2,"333?",4);
                }
              }
            }
            else {
              (**(code **)(*(int *)(*(int *)(this_ptr->unk3 + 0x3c) + 0x154) + 0xbc))();
              iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr)
              ;
              if (0 < iVar12) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
                *(float *)(this_ptr->unk3 + 0x40) = local_14;
              }
              if (iVar12 < 0) {
                this_ptr->unk3[0x40] = '\0';
                this_ptr->unk3[0x41] = '\0';
                this_ptr->unk3[0x42] = -0x10;
                this_ptr->unk3[0x43] = 'A';
                this_ptr->unk3[0x3c] = '\0';
                this_ptr->unk3[0x3d] = '\0';
                this_ptr->unk3[0x3e] = '\0';
                this_ptr->unk3[0x3f] = '\0';
              }
              if (iVar10 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)this_ptr->unk2 < 0) {
            cVar19 = (this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 4)]
                     != 0;
            if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 0xc)] !=
                0) {
              cVar19 = cVar19 + '\x01';
            }
            if (cVar19 != '\0') {
              if (cVar19 == '\x01') {
                this_ptr->unk2[0] = '\x0e';
                this_ptr->unk2[1] = '\0';
                this_ptr->unk2[2] = '\0';
                this_ptr->unk2[3] = '\0';
                pCVar9->unk11 = 1;
              }
              else {
                iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                *(uint *)this_ptr->unk2 = (iVar12 == 0) + 0xd;
                g_CGamePtr->unk11 = 1;
              }
              goto LAB_004e7a33;
            }
            this_ptr->unk2[0] = '\0';
            this_ptr->unk2[1] = '\0';
            this_ptr->unk2[2] = '\0';
            this_ptr->unk2[3] = '\0';
          }
          else {
LAB_004e7a33:
            if (*(int *)this_ptr->unk2 != 0) {
              local_2c = 2.0f;
              if (*(int *)this_ptr->unk2 == 0xe) {
                local_2c = 5.5f;
              }
              local_dc = local_2c;
              local_e4 = 0;
              local_e0 = 0;
              (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
              pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                  (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_198,0);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_150,pCVar14);
              iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr)
              ;
              if (((0 < iVar12) &&
                  (iVar12 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).
                              isDamageable)(&g_HeroActors[g_LocalHeroIndex]->base), iVar12 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(this_ptr->base).base.model.motion_controller,*(int *)this_ptr->unk2,1
                            ), *(int *)this_ptr->unk2 == 0xd)) {
                pCVar7 = (this_ptr->base).base.base.vtable._ub;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.2);
                (*pCVar7->playSoundWithVolume)
                          ((CDemonActor *)this_ptr,"ghoul-scream-!-?.wav",local_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
        }
      }
      break;
    case 2:
      iVar12 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar12 == 0) {
LAB_004e7576:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
      }
      else {
        iVar12 = (**(code **)(*(int *)(iVar12 + 0x154) + 0x108))();
        if (iVar12 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          iVar12 = *(int *)(this_ptr->unk3 + 0xc);
          *(float *)(this_ptr->base).unk2 = local_14;
          if ((this_ptr->base).base.model.part_visibility_flags[iVar12] != 0) {
            local_50 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                 (&pCVar2->motion_controller);
            local_9c = (double)local_50;
            local_14 = local_50;
            if ((local_50 <= (float)2) && (local_20 = 3.4f, 1.0 <= local_9c)
               ) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2d8);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_2d8.damage_amount = local_14;
              if (*(int *)(this_ptr->unk3 + 0x44) != 0) {
                local_2d8.damage_amount = local_14 * (float)2;
              }
              local_2d8.attacker = (CDemonActor *)this_ptr;
              local_2d8.wielder = (CDemonActor *)this_ptr;
              pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_114,(CVector3f *)&INT_02d832b4,
                                   (CMatrix3x4f *)
                                   (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                   [INT_02d83304].m);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_1bc,pCVar14);
              iVar12 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              if (iVar12 != 0) {
                (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      break;
    case 10:
      if ((((this_ptr->base).pool_me == 0) && (this_ptr->lives_left < 1)) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_108,pCVar14);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      iVar12 = this_ptr->spasm_count;
      this_ptr->unk3[0x44] = '\0';
      this_ptr->unk3[0x45] = '\0';
      this_ptr->unk3[0x46] = '\0';
      this_ptr->unk3[0x47] = '\0';
      if (((0 < iVar12) || (0 < this_ptr->lives_left)) &&
         (iVar12 = *(int *)(this_ptr->unk1 + 0x10) - g_GlobalDeltaTimeInt,
         *(int *)(this_ptr->unk1 + 0x10) = iVar12, iVar12 < 1)) {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,12.0);
          force_immediate = 0xf;
          iVar12 = 0x4e71df;
          dVar22 = round((double)(local_14 * (float)65536));
          *(int *)(this_ptr->unk1 + 0x10) = (int)ROUND(dVar22);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,iVar12,force_immediate);
        }
      }
      if (0 < this_ptr->lives_left) {
        if (this_ptr->arise_timer < 1) {
          iVar12 = this_ptr->arise_timer + g_GlobalDeltaTimeInt;
          this_ptr->arise_timer = iVar12;
          if (iVar12 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
            iVar12 = *(int *)((this_ptr->base).unk2 + 4);
            if (iVar12 != 0) {
              local_120 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar12 + 0x20)
              ;
              local_11c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar12 + 0x24)
              ;
              local_118 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar12 + 0x28)
              ;
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
              local_78 = (float)(((int)local_7c >> 1) + INT_02d7a7b8);
              if (local_78 < (float)8) goto LAB_004e7243;
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
            iVar12 = 0;
            do {
              local_68 = (float)iVar12 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (float)iVar12;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar20 = (float10)fcos((float10)local_68);
              fVar21 = (float10)fsin((float10)local_68);
              local_6c = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                    (this_ptr->base).base.base.location.position.z,
                                    (float)(fVar21 * (float10)0.050000000000000003),
                                    (float)(fVar20 * (float10)0.050000000000000003),
                                    (this_ptr->base).base.collision_cylinder_radius,
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            (this_ptr->base).base.collision_cylinder_bottom),
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            local_1c));
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              if (local_6c < 1.0) break;
              iVar12 = iVar12 + 1;
            } while (iVar12 < 4);
            if (iVar12 < 4) {
              this_ptr->arise_timer = 3;
              (this_ptr->base).unk2[4] = '\0';
              (this_ptr->base).unk2[5] = '\0';
              (this_ptr->base).unk2[6] = '\0';
              (this_ptr->base).unk2[7] = '\0';
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
          iVar12 = this_ptr->arise_timer - g_GlobalDeltaTimeInt;
          this_ptr->arise_timer = iVar12;
          if (iVar12 < 1) {
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
            dVar22 = round((double)(-local_14 * 65536.0f));
            this_ptr->arise_timer = (int)ROUND(dVar22);
          }
        }
      }
      break;
    case 0xb:
      iVar12 = *(int *)((this_ptr->base).unk2 + 4);
      if (iVar12 == 0) {
LAB_004e7d9a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,1,1);
      }
      else {
        iVar12 = (**(code **)(*(int *)(iVar12 + 0x154) + 0x108))();
        if (iVar12 == 0) {
          local_20 = 2.5f;
        }
        else {
          pCVar13 = (CGhoul *)
                    (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108))();
          if (pCVar13 != this_ptr) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
        }
      }
      break;
    case 0xc:
      iVar12 = *(int *)((this_ptr->base).unk2 + 4);
      if ((iVar12 == 0) || (iVar12 = (**(code **)(*(int *)(iVar12 + 0x154) + 0x108))(), iVar12 != 0)
         ) goto LAB_004e7d9a;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
      iVar12 = *(int *)(this_ptr->unk3 + 4);
      *(float *)(this_ptr->base).unk2 = local_14;
      if ((this_ptr->base).base.model.part_visibility_flags[iVar12] != 0) {
        local_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                             (&pCVar2->motion_controller);
        local_a4 = (double)local_4c;
        local_14 = local_4c;
        if (local_4c <= (float)2) {
          local_20 = 2.5f;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_314);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            local_314.damage_amount = local_14;
            if (*(int *)(this_ptr->unk3 + 0x44) != 0) {
              local_314.damage_amount = local_14 * (float)2;
            }
            local_314.attacker = (CDemonActor *)this_ptr;
            local_314.wielder = (CDemonActor *)this_ptr;
            pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (local_210,(CVector3f *)&INT_02d832a8,
                                 (CMatrix3x4f *)
                                 (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                 [INT_02d83300].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_21c,pCVar14);
            iVar12 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
            if (iVar12 != 0) {
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar12 = *(int *)(this_ptr->unk1 + 0xc) - g_GlobalDeltaTimeInt;
      *(int *)(this_ptr->unk1 + 0xc) = iVar12;
      if (iVar12 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
        dVar22 = round((double)(local_14 * (float)65536));
        *(int *)(this_ptr->unk1 + 0xc) = (int)ROUND(dVar22);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
      if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    if (((0.0 <= local_20) && (*(float *)(this_ptr->unk2 + 4) <= 0.0)) &&
       (*(int *)((this_ptr->base).unk2 + 4) != 0)) {
      local_138 = 0;
      local_134 = 0;
      local_130 = local_20;
      (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)(*(int *)((this_ptr->base).unk2 + 4) + 0x158)
                           ,&local_1a4,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (*(CDemonActor **)((this_ptr->base).unk2 + 4),&local_144,pCVar14);
      iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if (iVar12 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004e6754;
  }
  uVar6 = (this_ptr->base).base.field22_0x25b0;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
      iVar12 = 1;
    }
    else {
LAB_004e6fdc:
      iVar12 = 0;
    }
LAB_004e672d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar12,1);
  }
  else {
    if (uVar6 < 3) {
      iVar12 = 0x11;
      goto LAB_004e672d;
    }
    if (uVar6 != 3) goto LAB_004e6fdc;
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
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  iVar12 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar12 != 0) {
    iVar12 = *(int *)((this_ptr->base).unk2 + 4);
    if ((iVar12 != 0) &&
       (pCVar13 = (CGhoul *)(**(code **)(*(int *)(iVar12 + 0x154) + 0x108))(), pCVar13 == this_ptr))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
    }
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_cc = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_c8 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar14 = &(this_ptr->base).base.field6_0x241c;
    local_c4 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_d8 = local_cc + pCVar14->x;
    local_d4 = local_c8 + (this_ptr->base).base.field6_0x241c.y;
    local_d0 = local_c4 + (this_ptr->base).base.field6_0x241c.z;
    local_18c = local_d8 + pCVar1->x;
    local_188 = local_d4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_184 = local_d0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar14->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar2);
  local_b4 = (double)*(float *)(this_ptr->unk2 + 4);
  if (0.0 < local_b4) {
    local_60 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar2->motion_controller,*(int *)(this_ptr->unk2 + 8),
                          1.0 - *(float *)(this_ptr->unk2 + 4));
    fVar3 = 1.0 - *(float *)(this_ptr->unk2 + 4);
    local_5c = 1.0 - fVar3 * fVar3 * fVar3;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (pCVar2,*(int *)(this_ptr->unk2 + 8),local_60,local_5c,INT_02d83320,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar3 = *(float *)(this_ptr->unk2 + 4) - delta_time / 0.7f;
    *(float *)(this_ptr->unk2 + 4) = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->unk2[4] = '\0';
      this_ptr->unk2[5] = '\0';
      this_ptr->unk2[6] = '\0';
      this_ptr->unk2[7] = '\0';
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  if (((float)0.01 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar3 = (this_ptr->base).base.field6_0x241c.y, fVar4 = (this_ptr->base).base.field6_0x241c.x,
     fVar5 = (this_ptr->base).base.field6_0x241c.z,
     (float)0.01 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,*(uint *)(this_ptr->unk1 + 8));
    if (extraout_EAX == 0) {
      _sprintf
                (&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)(this_ptr->base).speed);
      uVar15 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffc88);
      *(uint *)(this_ptr->unk1 + 8) = uVar15;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,*(uint *)(this_ptr->unk1 + 8));
  }
  if ((this_ptr->base).pool_me == 0) {
    if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 0x24)] != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)this_ptr->unk3] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 8)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
    }
    core_charactr_cpp_CCharacter_FUN_0042b810((CCharacter *)this_ptr);
    core_charactr_cpp_CCharacter_FUN_0042b670((CCharacter *)this_ptr);
  }
  if ((*(int *)(this_ptr->unk3 + 0x3c) != 0) && (iVar10 == 0x11)) {
    fVar3 = (this_ptr->base).base.base.location.position.x - *(float *)(this_ptr->unk3 + 0x4c);
    fVar4 = (this_ptr->base).base.base.location.position.z - *(float *)(this_ptr->unk3 + 0x54);
    if (delta_time * (float)0.5 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
      this_ptr->unk3[0x48] = '\0';
      this_ptr->unk3[0x49] = '\0';
      this_ptr->unk3[0x4a] = -0x80;
      this_ptr->unk3[0x4b] = '?';
    }
    else {
      fVar3 = *(float *)(this_ptr->unk3 + 0x48) - delta_time;
      *(float *)(this_ptr->unk3 + 0x48) = fVar3;
      if (fVar3 < 0.0) {
        this_ptr->unk3[0x40] = '\0';
        this_ptr->unk3[0x41] = '\0';
        this_ptr->unk3[0x42] = -0x10;
        this_ptr->unk3[0x43] = 'A';
        this_ptr->unk3[0x3c] = '\0';
        this_ptr->unk3[0x3d] = '\0';
        this_ptr->unk3[0x3e] = '\0';
        this_ptr->unk3[0x3f] = '\0';
        this_ptr->unk3[0x44] = '\0';
        this_ptr->unk3[0x45] = '\0';
        this_ptr->unk3[0x46] = '\0';
        this_ptr->unk3[0x47] = '\0';
      }
    }
  }
  pCVar16 = &(this_ptr->base).base.base.location;
  if ((CLocation *)(this_ptr->unk3 + 0x4c) == pCVar16) {
    return;
  }
  *(float *)(this_ptr->unk3 + 0x4c) = (pCVar16->position).x;
  *(float *)(this_ptr->unk3 + 0x50) = (this_ptr->base).base.base.location.position.y;
  *(float *)(this_ptr->unk3 + 0x54) = (this_ptr->base).base.base.location.position.z;
  return;
}
