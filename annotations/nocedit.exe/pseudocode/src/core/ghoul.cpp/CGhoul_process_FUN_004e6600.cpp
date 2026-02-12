// Name: core_ghoul.cpp_CGhoul_process_FUN_004e6600
// Address: 004e6600
// Address Range: [[004e6600, 004e818c]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004e6600(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_process_FUN_004e6600(CGhoul *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CCharacter *pCVar2;
  CDemonActor_vtable *pCVar3;
  bool bVar4;
  CGame *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  CGhoul *pCVar9;
  int extraout_EAX;
  uint uVar10;
  CPathMap *pCVar11;
  int extraout_EAX_00;
  int extraout_EAX_01;
  CDemonActor *pCVar12;
  uint uVar13;
  CLocation *pCVar14;
  char *pcVar15;
  char *pcVar16;
  char cVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  CVector3f *pCVar21;
  float fVar22;
  int iVar23;
  char *in_stack_fffffc88;
  CVector3f *pCVar24;
  CVector3f *in_stack_fffffc8c;
  float fVar25;
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
  float local_1c0;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  CVector3f local_18c;
  float local_180;
  float local_17c;
  float local_178;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  int local_138;
  int local_134;
  CMotionController_vtable *local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  int local_fc;
  int local_f8;
  float local_f4;
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
  int local_84;
  CDemonActor *local_7c;
  CDemonActor *local_78;
  CMotionList *local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
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
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
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
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610((CMotionController *)local_18);
    switch(uVar10) {
    case 5:
      pCVar2 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2), iVar6 == 0)) {
        in_stack_fffffc88 = ((this_ptr->base).victim)->actor_name;
        pCVar12 = (**(code **)((int)(&((UOrientationVector *)
                                      ((CPathMap *)in_stack_fffffc88)->height_cache)->vec)[0x18].y +
                              0x108))((CCharacter *)in_stack_fffffc88);
        if (pCVar12 == (CDemonActor *)0x0) {
          in_stack_fffffc8c = (CVector3f *)0x0;
          pCVar2 = (CCharacter *)(this_ptr->base).victim;
          in_stack_fffffc88 = (char *)this_ptr;
          iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                            (pCVar2,(CDemonActor *)this_ptr,0);
          if (iVar6 != 0) {
            local_174.z = 2.5f;
            in_stack_fffffc94 = (CGhoul *)&local_1c8;
            local_174.x = 0.0;
            local_174.y = 0.0;
            in_stack_fffffc8c = (CVector3f *)0x4e6aec;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,(CVector3f *)in_stack_fffffc94,&local_174);
            pCVar12 = (this_ptr->base).victim;
            fVar25 = local_1c8 - (pCVar12->location).position.x;
            fVar22 = local_1c0 - (pCVar12->location).position.z;
            bVar4 = SQRT(fVar22 * fVar22 + fVar25 * fVar25) <= 1.0;
            pCVar2 = (CCharacter *)(this_ptr->base).victim;
            if (ABS(local_1c4 - (pCVar2->base).location.position.y) <= (float)4) {
              if (bVar4) {
                in_stack_fffffc8c = (CVector3f *)0x4e6b5b;
                in_stack_fffffc94 = this_ptr;
                iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar2,(CDemonActor *)this_ptr,0);
                if (iVar6 == 0) goto LAB_004e6a5f;
              }
              if (bVar4) break;
            }
          }
        }
      }
LAB_004e6a5f:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)local_18,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar10);
      break;
    case 10:
      pCVar2 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)pCVar11,1,1);
      }
      else {
        pCVar9 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar9 == this_ptr) {
          pCVar2 = (CCharacter *)(this_ptr->base).victim;
          iVar6 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2);
          if (iVar6 == 0) {
            pCVar12 = (this_ptr->base).victim;
            (*((pCVar12->vtable)._ub)->getBoundingBox)(pCVar12,&local_240);
            pCVar12 = (this_ptr->base).victim;
            local_168.x = (pCVar12->location).position.x;
            local_168.z = (pCVar12->location).position.z;
            local_168.y = (local_240.max.y - local_240.min.y) * (float)0.69999999999999996 +
                          (pCVar12->location).position.y;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
            in_stack_fffffc88 = (char *)0x4e6c71;
            local_14 = local_29c.damage_amount;
            pCVar21 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                ((this_ptr->base).victim,&local_f0,&local_168);
            if (&local_29c.impact_direction != pCVar21) {
              local_29c.impact_direction.x = pCVar21->x;
              local_29c.impact_direction.y = pCVar21->y;
              local_29c.impact_direction.z = pCVar21->z;
            }
            local_29c.attacker = (CDemonActor *)this_ptr;
            local_29c.wielder = (CDemonActor *)this_ptr;
            pCVar2 = (CCharacter *)(this_ptr->base).victim;
            in_stack_fffffc8c = (CVector3f *)0x4e6cc0;
            (*(((pCVar2->base).vtable._uc)->_uc).processDamage)(pCVar2,&local_29c);
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              dVar20 = round(local_ac * 2.5 * 0.25);
              local_70 = (CMotionList *)(int)ROUND(dVar20);
              in_stack_fffffc8c = &local_168;
              in_stack_fffffc88 = &g_CGorePtr->unk;
              core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
            }
            pCVar2 = (CCharacter *)(this_ptr->base).victim;
            if (pCVar2->hit_points <= 0.0) {
              (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)local_18,1,1);
            }
            in_stack_fffffc94 = this_ptr;
            (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
          }
          else {
            pCVar2 = (CCharacter *)(this_ptr->base).victim;
            (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
            in_stack_fffffc8c = (CVector3f *)0x1;
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
      iVar6 = INT_02d83300;
      if (uVar10 == 0xc) {
        iVar6 = INT_02d83304;
      }
      pCVar21 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)local_18,&local_1e0,iVar6);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_1d4,pCVar21);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar20 = round((double)(local_14 * (float)0.25));
      local_58 = (int)ROUND(dVar20);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
                ((CDeformableModelInstance *)pCVar11);
      pCVar21 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)pCVar11,&local_1b0,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_228,pCVar21);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar20 = round((double)(local_14 * (float)0.25));
      local_54 = (float)(int)ROUND(dVar20);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
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
      pCVar21 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)pCVar11,&local_1ec,INT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_15c,pCVar21);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar20 = round((double)(local_14 * (float)0.25));
      local_84 = (int)ROUND(dVar20);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
      iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar6 == 0) {
        pcVar15 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar15 = "ghoul-eat-?.wav @1.3";
      }
      pcVar16 = local_260;
      do {
        cVar17 = *pcVar15;
        *pcVar16 = cVar17;
        if (cVar17 == '\0') break;
        cVar17 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar16[1] = cVar17;
        pcVar16 = pcVar16 + 2;
      } while (cVar17 != '\0');
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,local_260);
    }
    goto switchD_004e6f9a_caseD_e;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       ((CMotionController *)local_18,1);
  local_8c = (double)delta_time;
  fVar25 = (this_ptr->base).speed;
  fVar22 = (float)1.57079632675;
  (this_ptr->base).base.walk_step_speed =
       (this_ptr->base).speed * local_14 * (float)3 * delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar22 * fVar25;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)local_18);
  iVar6 = pSVar7->state_index;
  if (iVar6 == 0x11) {
    fVar25 = (this_ptr->base).speed;
    fVar18 = (float10)8;
    (this_ptr->base).base.turn_speed = (float)(fVar18 * (float10)(this_ptr->base).base.turn_speed);
    (this_ptr->base).base.walk_step_speed = (float)((float10)local_8c * fVar18 * (float10)fVar25);
  }
  pCVar21 = (CVector3f *)0x4e6708;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    local_20 = (CMotionController_vtable *)0xbf800000;
    pCVar11 = (CPathMap *)&(this_ptr->base).base.model;
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)pCVar11);
    switch(pSVar7->state_index) {
    case 0:
      if (*(float *)(this_ptr->unk3 + 0x38) <= 0.0) {
        iVar8 = *(int *)(this_ptr->unk3 + 0x3c);
        if (iVar8 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
          if (extraout_EAX_00 != 0) goto LAB_004e7576;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CDemonActor *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,1,1);
            iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x2c));
            if (iVar8 != 0) {
              in_stack_fffffc88 = (char *)0x4e75e4;
              iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x30));
              if (iVar8 != 0) break;
            }
            in_stack_fffffc88 = (char *)this_ptr;
            uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                               ((CDemonActor *)this_ptr,"ghoul-alert-?.wav");
            *(uint *)(this_ptr->unk3 + 0x2c) = uVar13;
          }
        }
        else {
          local_180 = *(float *)(iVar8 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_17c = *(float *)(iVar8 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_178 = *(float *)(iVar8 + 0x28) - (this_ptr->base).base.base.location.position.z;
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)4) {
            fVar25 = (this_ptr->base).base.hit_points + delta_time;
            *(float *)(this_ptr->unk3 + 0x40) = *(float *)(this_ptr->unk3 + 0x40) - delta_time;
            (this_ptr->base).base.hit_points = fVar25;
            if ((float)100 < fVar25) {
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
      if ((*(int *)(this_ptr->unk3 + 0x44) != 0) && (iVar6 == 1)) {
        pCVar21 = (CVector3f *)&(this_ptr->base).base.model;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)pCVar21,0x11,1);
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
        cVar17 = (this_ptr->base).base.model.part_data.visibility_flags
                 [*(int *)(this_ptr->unk3 + 4)] != 0;
        if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk3 + 0xc)]
            != 0) {
          cVar17 = cVar17 + '\x01';
        }
        iVar8 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                          (&g_HeroActors[g_LocalHeroIndex]->base);
        pCVar5 = g_CGamePtr;
        if (iVar8 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar12 = (this_ptr->base).victim;
          if (pCVar12 == (CDemonActor *)0x0) {
            in_stack_fffffc88 = (char *)0x4e77fa;
            core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
            if (extraout_EAX_01 == 0) {
              in_stack_fffffc88 = (char *)&(this_ptr->base).base.model;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)in_stack_fffffc88,0,1);
            }
          }
          else {
            local_1f8 = (pCVar12->location).position.x -
                        (this_ptr->base).base.base.location.position.x;
            local_1f0 = (pCVar12->location).position.z -
                        (this_ptr->base).base.base.location.position.z;
            local_1f4 = 0.0;
            if ((((this_ptr->base).base.hit_points < (float)25) && (cVar17 != '\0')) &&
               (*(int *)(this_ptr->unk3 + 0x3c) == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(this_ptr);
            }
            local_30 = &(this_ptr->base).base.model.motion_controller;
            fVar25 = *(float *)(this_ptr->unk3 + 0x3c);
            if (fVar25 == 0.0) {
              fVar25 = 0.17453292;
              pCVar21 = (CVector3f *)0x3f800000;
              local_fc = 0;
              local_f4 = 2.5f;
              local_f8 = 0;
              pCVar12 = (this_ptr->base).victim;
              in_stack_fffffc88 = (char *)(*((pCVar12->vtable)._ub)->getPathMap)(pCVar12);
              iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                ((CCharacter *)this_ptr,
                                 &(((this_ptr->base).victim)->location).position,
                                 (CPathMap *)in_stack_fffffc88,pCVar21,fVar25,
                                 (float)in_stack_fffffc94);
              if (iVar8 < 0) {
                in_stack_fffffc88 = (char *)0x4e7a07;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
              }
              else if (((0 < iVar8) && (cVar17 != '\0')) &&
                      ((*(float *)(this_ptr->base).unk2 <= 0.0 &&
                       ((pCVar2 = (CCharacter *)(this_ptr->base).victim,
                        pCVar12 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
                        pCVar12 == (CDemonActor *)0x0 && (*(float *)(this_ptr->unk2 + 4) <= 0.0)))))
                      ) {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [*(int *)(this_ptr->unk3 + 0xc)] != 0) {
                  local_24 = (1.0 - ABS(local_48 - 3.4f) / 3.4f) *
                             (float)0.29999999999999999;
                }
                if ((this_ptr->base).base.model.part_data.visibility_flags
                    [*(int *)(this_ptr->unk3 + 4)] != 0) {
                  local_40 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.40000000000000002;
                }
                pCVar2 = (CCharacter *)(this_ptr->base).victim;
                local_44 = local_48;
                iVar8 = (*(((pCVar2->base).vtable._uc)->_uc).canBeGrabbed)
                                  (pCVar2,(CDemonActor *)this_ptr,0);
                if (iVar8 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 2.5f) / 2.5f) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar8 = 0xb;
                    }
                    else {
                      iVar8 = 0xc;
                    }
                  }
                  else {
                    iVar8 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(this_ptr->base).base.model.motion_controller,iVar8,1);
                  builtin_strncpy((this_ptr->base).unk2,"333?",4);
                }
              }
            }
            else {
              pCVar24 = &g_ZeroVector;
              fVar22 = 7.205977e-39;
              pCVar11 = (CPathMap *)(**(code **)(*(int *)((int)fVar25 + 0x154) + 0xbc))();
              iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                ((CCharacter *)this_ptr,
                                 (CVector3f *)(*(int *)(this_ptr->unk3 + 0x3c) + 0x20),pCVar11,
                                 pCVar21,fVar22,fVar25);
              if (0 < iVar8) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
                *(float *)(this_ptr->unk3 + 0x40) = local_14;
              }
              if (iVar8 < 0) {
                this_ptr->unk3[0x40] = '\0';
                this_ptr->unk3[0x41] = '\0';
                this_ptr->unk3[0x42] = -0x10;
                this_ptr->unk3[0x43] = 'A';
                this_ptr->unk3[0x3c] = '\0';
                this_ptr->unk3[0x3d] = '\0';
                this_ptr->unk3[0x3e] = '\0';
                this_ptr->unk3[0x3f] = '\0';
              }
              in_stack_fffffc88 = (char *)pCVar24;
              if (iVar6 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,0x11,1);
                in_stack_fffffc88 = (char *)pCVar24;
              }
            }
          }
        }
        else {
          if (*(int *)this_ptr->unk2 < 0) {
            cVar17 = (this_ptr->base).base.model.part_data.visibility_flags
                     [*(int *)(this_ptr->unk3 + 4)] != 0;
            if ((this_ptr->base).base.model.part_data.visibility_flags
                [*(int *)(this_ptr->unk3 + 0xc)] != 0) {
              cVar17 = cVar17 + '\x01';
            }
            if (cVar17 != '\0') {
              if (cVar17 == '\x01') {
                this_ptr->unk2[0] = '\x0e';
                this_ptr->unk2[1] = '\0';
                this_ptr->unk2[2] = '\0';
                this_ptr->unk2[3] = '\0';
                pCVar5->unk11 = 1;
              }
              else {
                iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                *(uint *)this_ptr->unk2 = (iVar8 == 0) + 0xd;
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
              in_stack_fffffc88 = (char *)0x3db2b8c2;
              local_dc = local_2c;
              pCVar24 = (CVector3f *)0x3f000000;
              local_e4 = 0.0;
              local_e0 = 0.0;
              pCVar11 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
              pCVar21 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                  (&(g_HeroActors[g_LocalHeroIndex]->base).model,&local_198,0);
              pCVar21 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                  ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_150,pCVar21)
              ;
              iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                ((CCharacter *)this_ptr,pCVar21,pCVar11,pCVar24,
                                 (float)in_stack_fffffc88,(float)in_stack_fffffc8c);
              if (0 < iVar8) {
                in_stack_fffffc88 = (char *)0x4e7b00;
                iVar8 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).
                          getDeathState)(&g_HeroActors[g_LocalHeroIndex]->base);
                if (iVar8 == 2) {
                  in_stack_fffffc88 = (char *)&(this_ptr->base).base.model;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            ((CMotionController *)in_stack_fffffc88,*(int *)this_ptr->unk2,1);
                  if (*(int *)this_ptr->unk2 == 0xd) {
                    pCVar3 = (this_ptr->base).base.base.vtable._ub;
                    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.2);
                    in_stack_fffffc88 = (char *)this_ptr;
                    (*pCVar3->playSoundWithVolume)
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
      pCVar2 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
LAB_004e7576:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
      }
      else {
        pCVar12 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar12 == (CDemonActor *)0x0) {
          in_stack_fffffc88 = (char *)0x3f000000;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          iVar8 = *(int *)(this_ptr->unk3 + 0xc);
          *(float *)(this_ptr->base).unk2 = local_14;
          if ((this_ptr->base).base.model.part_data.visibility_flags[iVar8] != 0) {
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
              if (*(int *)(this_ptr->unk3 + 0x44) != 0) {
                local_2d8.damage_amount = local_14 * (float)2;
              }
              in_stack_fffffc88 = (char *)&local_2d8;
              local_2d8.attacker = (CDemonActor *)this_ptr;
              local_2d8.wielder = (CDemonActor *)this_ptr;
              pCVar21 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_114,(CVector3f *)&INT_02d832b4,
                                   (CMatrix3x4f *)
                                   (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                   [INT_02d83304].m);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_1bc,pCVar21);
              iVar8 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
              if (iVar8 != 0) {
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
        pCVar21 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            ((CDeformableModelInstance *)pCVar11,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_108,pCVar21);
        core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
        (this_ptr->base).pool_me = 1;
      }
      iVar8 = this_ptr->spasm_count;
      this_ptr->unk3[0x44] = '\0';
      this_ptr->unk3[0x45] = '\0';
      this_ptr->unk3[0x46] = '\0';
      this_ptr->unk3[0x47] = '\0';
      if (((0 < iVar8) || (0 < this_ptr->lives_left)) &&
         (iVar8 = *(int *)(this_ptr->unk1 + 8) - g_GlobalDeltaTimeInt,
         *(int *)(this_ptr->unk1 + 8) = iVar8, iVar8 < 1)) {
        if (this_ptr->lives_left < 1) {
          this_ptr->spasm_count = this_ptr->spasm_count + -1;
        }
        if ((0 < this_ptr->spasm_count) || (0 < this_ptr->lives_left)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,12.0);
          iVar23 = 0xf;
          iVar8 = 0x4e71df;
          dVar20 = round((double)(local_14 * (float)65536));
          *(int *)(this_ptr->unk1 + 8) = (int)ROUND(dVar20);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,iVar8,iVar23);
        }
      }
      if (0 < this_ptr->lives_left) {
        if (this_ptr->arise_timer < 1) {
          iVar8 = this_ptr->arise_timer + g_GlobalDeltaTimeInt;
          this_ptr->arise_timer = iVar8;
          if (iVar8 < 0) {
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            pCVar12 = (this_ptr->base).victim;
            if (pCVar12 != (CDemonActor *)0x0) {
              local_120 = (this_ptr->base).base.base.location.position.x -
                          (pCVar12->location).position.x;
              local_11c = (this_ptr->base).base.base.location.position.y -
                          (pCVar12->location).position.y;
              local_118 = (this_ptr->base).base.base.location.position.z -
                          (pCVar12->location).position.z;
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
            fVar25 = 0.0;
            do {
              local_68 = (float)(int)fVar25 * (float)6.2831853070000001 * (float)0.25;
              local_14 = fVar25;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar18 = (float10)fcos((float10)local_68);
              fVar19 = (float10)fsin((float10)local_68);
              local_6c = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x,
                                    (this_ptr->base).base.base.location.position.z,
                                    (float)(fVar19 * (float10)0.050000000000000003),
                                    (float)(fVar18 * (float10)0.050000000000000003),
                                    (this_ptr->base).base.collision_cylinder_radius,
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            (this_ptr->base).base.collision_cylinder_bottom),
                                    (void *)((this_ptr->base).base.base.location.position.y +
                                            local_1c));
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              if (local_6c < 1.0) break;
              fVar25 = (float)((int)fVar25 + 1);
            } while ((int)fVar25 < 4);
            if ((int)fVar25 < 4) {
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
          iVar8 = this_ptr->arise_timer - g_GlobalDeltaTimeInt;
          this_ptr->arise_timer = iVar8;
          if (iVar8 < 1) {
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
            in_stack_fffffc88 = (char *)0x4e7215;
            dVar20 = round((double)(-local_14 * 65536.0f));
            this_ptr->arise_timer = (int)ROUND(dVar20);
          }
        }
      }
      break;
    case 0xb:
      pCVar2 = (CCharacter *)(this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
LAB_004e7d9a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  ((CMotionController *)pCVar11,1,1);
      }
      else {
        pCVar12 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2);
        if (pCVar12 == (CDemonActor *)0x0) {
          local_20 = (CMotionController_vtable *)2.5f;
        }
        else {
          in_stack_fffffc88 = ((this_ptr->base).victim)->actor_name;
          pCVar9 = (CGhoul *)
                   (**(code **)((int)(&((UOrientationVector *)
                                       ((CPathMap *)in_stack_fffffc88)->height_cache)->vec)[0x18].y
                               + 0x108))((CCharacter *)in_stack_fffffc88);
          if (pCVar9 != this_ptr) {
            in_stack_fffffc88 = (char *)0x1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)pCVar11,1,1);
          }
        }
      }
      break;
    case 0xc:
      pCVar2 = (CCharacter *)(this_ptr->base).victim;
      if ((pCVar2 == (CCharacter *)0x0) ||
         (pCVar12 = (*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
         pCVar12 != (CDemonActor *)0x0)) goto LAB_004e7d9a;
      in_stack_fffffc88 = (char *)0x3f000000;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
      iVar8 = *(int *)(this_ptr->unk3 + 4);
      *(float *)(this_ptr->base).unk2 = local_14;
      if ((this_ptr->base).base.model.part_data.visibility_flags[iVar8] != 0) {
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
            if (*(int *)(this_ptr->unk3 + 0x44) != 0) {
              local_314.damage_amount = local_14 * (float)2;
            }
            in_stack_fffffc88 = (char *)&local_314;
            local_314.attacker = (CDemonActor *)this_ptr;
            local_314.wielder = (CDemonActor *)this_ptr;
            pCVar21 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (local_210,(CVector3f *)&INT_02d832a8,
                                 (CMatrix3x4f *)
                                 (this_ptr->base).base.model.bone_transform.bone_world_matrices
                                 [INT_02d83300].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_21c,pCVar21);
            iVar8 = core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
            if (iVar8 != 0) {
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
      iVar8 = *(int *)(this_ptr->unk1 + 4) - g_GlobalDeltaTimeInt;
      *(int *)(this_ptr->unk1 + 4) = iVar8;
      if (iVar8 < 1) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"burp[1,2].wav");
        in_stack_fffffc88 = (char *)0x41700000;
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
        dVar20 = round((double)(local_14 * (float)65536));
        *(int *)(this_ptr->unk1 + 4) = (int)ROUND(dVar20);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim != (CDemonActor *)0x0) {
        in_stack_fffffc88 = (char *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
      }
    }
    if (((0.0 <= (float)local_20) && (*(float *)(this_ptr->unk2 + 4) <= 0.0)) &&
       ((this_ptr->base).victim != (CDemonActor *)0x0)) {
      local_138 = 0;
      local_134 = 0;
      local_130 = local_20;
      fVar25 = 0.5235988;
      pCVar24 = (CVector3f *)0x40400000;
      pCVar12 = (this_ptr->base).victim;
      pCVar11 = (*((pCVar12->vtable)._ub)->getPathMap)(pCVar12);
      pCVar21 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)((this_ptr->base).victim + 1),&local_1a4,0);
      pCVar21 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((this_ptr->base).victim,&local_144,pCVar21);
      iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        ((CCharacter *)this_ptr,pCVar21,pCVar11,pCVar24,fVar25,
                         (float)in_stack_fffffc88);
      if (iVar8 != 1) {
        in_stack_fffffc88 = (char *)0x1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
      }
    }
    goto LAB_004e6754;
  }
  uVar10 = (this_ptr->base).base.is_walking;
  if (uVar10 < 2) {
    if (uVar10 == 1) {
      iVar8 = 1;
    }
    else {
LAB_004e6fdc:
      iVar8 = 0;
    }
LAB_004e672d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar8,1);
  }
  else {
    if (uVar10 < 3) {
      iVar8 = 0x11;
      goto LAB_004e672d;
    }
    if (uVar10 != 3) goto LAB_004e6fdc;
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
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    pCVar2 = (CCharacter *)(this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar9 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar9 == this_ptr)) {
      in_stack_fffffc88 = ((this_ptr->base).victim)->actor_name;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffc88);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_cc = (this_ptr->base).base.velocity.x * delta_time;
    local_c8 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar21 = &(this_ptr->base).base.position_delta;
    local_c4 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar24 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_d8 = local_cc + pCVar21->x;
    local_d4 = local_c8 + (this_ptr->base).base.position_delta.y;
    local_d0 = local_c4 + (this_ptr->base).base.position_delta.z;
    local_18c.x = local_d8 + pCVar24->x;
    local_18c.y = local_d4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_18c.z = local_d0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar21->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar24->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_18c);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(this_ptr_00);
  local_b4 = (double)*(float *)(this_ptr->unk2 + 4);
  if (0.0 < local_b4) {
    local_60 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&this_ptr_00->motion_controller,*(int *)(this_ptr->unk2 + 8),
                          1.0 - *(float *)(this_ptr->unk2 + 4));
    fVar25 = 1.0 - *(float *)(this_ptr->unk2 + 4);
    local_5c = 1.0 - fVar25 * fVar25 * fVar25;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr_00,*(int *)(this_ptr->unk2 + 8),local_60,local_5c,INT_02d83320,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar25 = *(float *)(this_ptr->unk2 + 4) - delta_time / 0.7f;
    *(float *)(this_ptr->unk2 + 4) = fVar25;
    if (fVar25 < 0.0) {
      this_ptr->unk2[4] = '\0';
      this_ptr->unk2[5] = '\0';
      this_ptr->unk2[6] = '\0';
      this_ptr->unk2[7] = '\0';
    }
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffc88);
  if (((float)0.01 < ABS((this_ptr->base).base.turn_angle_accumulator)) ||
     (fVar25 = (this_ptr->base).base.position_delta.y,
     fVar22 = (this_ptr->base).base.position_delta.x, fVar1 = (this_ptr->base).base.position_delta.z
     , (float)0.01 < SQRT(fVar1 * fVar1 + fVar22 * fVar22 + fVar25 * fVar25))) {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(g_CSoundPtr,*(uint *)this_ptr->unk1);
    if (extraout_EAX == 0) {
      _sprintf
                (&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)(this_ptr->base).speed);
      uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffc88);
      *(uint *)this_ptr->unk1 = uVar13;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_005b3b90(g_CSoundPtr,*(uint *)this_ptr->unk1);
  }
  if ((this_ptr->base).pool_me == 0) {
    if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk3 + 0x24)] == 0
       ) {
      fVar25 = 0.5;
      iVar8 = *(int *)(this_ptr->unk3 + 0x24);
      iVar23 = INT_02d83324;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,*(int *)this_ptr->unk3,INT_02d83310,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)this_ptr->unk3] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk3 + 4),INT_02d83308,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk3 + 8),INT_02d83314,0.2);
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk3 + 8)] != 0)
      {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk3 + 0xc),INT_02d8330c,0.2);
      }
      fVar25 = 0.7;
      iVar8 = *(int *)(this_ptr->unk3 + 0x28);
      iVar23 = INT_02d832fc;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
              ((CCharacter *)this_ptr,iVar8,iVar23,fVar25);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_0042b670((CCharacter *)this_ptr);
  }
  if ((*(int *)(this_ptr->unk3 + 0x3c) != 0) && (iVar6 == 0x11)) {
    fVar25 = (this_ptr->base).base.base.location.position.x - *(float *)(this_ptr->unk3 + 0x4c);
    fVar22 = (this_ptr->base).base.base.location.position.z - *(float *)(this_ptr->unk3 + 0x54);
    if (delta_time * (float)0.5 <= SQRT(fVar22 * fVar22 + fVar25 * fVar25)) {
      this_ptr->unk3[0x48] = '\0';
      this_ptr->unk3[0x49] = '\0';
      this_ptr->unk3[0x4a] = -0x80;
      this_ptr->unk3[0x4b] = '?';
    }
    else {
      fVar25 = *(float *)(this_ptr->unk3 + 0x48) - delta_time;
      *(float *)(this_ptr->unk3 + 0x48) = fVar25;
      if (fVar25 < 0.0) {
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
  pCVar14 = &(this_ptr->base).base.base.location;
  if ((CLocation *)(this_ptr->unk3 + 0x4c) == pCVar14) {
    return;
  }
  *(float *)(this_ptr->unk3 + 0x4c) = (pCVar14->position).x;
  *(float *)(this_ptr->unk3 + 0x50) = (this_ptr->base).base.base.location.position.y;
  *(float *)(this_ptr->unk3 + 0x54) = (this_ptr->base).base.base.location.position.z;
  return;
}
