// Name: core_boneguy.cpp_CBoneGuy_process_FUN_004179b0
// Address: 004179b0
// Address Range: [[004179b0, 004186ae]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004179b0(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004179b0(CBoneGuy *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  EWalkState EVar5;
  CCharacter *pCVar6;
  CHero *pCVar7;
  float fVar8;
  int iVar9;
  SBoneGuyBox *pSVar10;
  SMotion *pSVar11;
  int iVar12;
  CBoneGuy *pCVar13;
  uint uVar14;
  CPathMap *path_map;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  float afStackY_19a8 [1493];
  CVector3f *pCVar18;
  SDamageInfo *pSVar19;
  ulonglong uVar20;
  float in_stack_fffffdc8;
  float fVar21;
  float fStack_230;
  SDamageInfo SStack_208;
  CQuaternion4f CStack_1cc;
  CQuaternion4f CStack_1bc;
  CVector3f CStack_1ac;
  CVector3f CStack_1a0;
  float fStack_194;
  float afStack_190 [2];
  CVector3f CStack_188;
  CVector3f CStack_17c;
  float fStack_170;
  float afStack_16c [4];
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  CVector3f CStack_134;
  CVector3f CStack_128;
  CVector3f CStack_11c;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  CBodyPart *pCStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  SBoneGuyBox *pSStack_30;
  CMotionController *pCStack_2c;
  CQuaternion4f *pCStack_28;
  float *pfStack_24;
  CQuaternion4f *pCStack_20;
  int iStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar17 = 0;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"My HP: %f\n");
  iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (g_CEventList_PTR_005fba60,this_ptr->death_event);
  if (iVar9 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              (&(this_ptr->base).base.model.base,5,0.0);
  }
  iVar9 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar9 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    return;
  }
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar21 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar21;
    if (fVar21 <= this_ptr->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar21 = delta_time / 2.0f + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar21;
    if (fVar21 < 1.0) {
      iStack_1c = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      pSStack_30 = this_ptr->boxes;
      pfStack_24 = &this_ptr->recombine_interpolation;
      pCStack_28 = &this_ptr->boxes[0].dest_orient;
      pCStack_20 = &this_ptr->boxes[0].start_orient;
      pCStack_18 = &this_ptr->boxes[0].source_pos;
      do {
        pCVar18 = pCStack_18;
        pSVar10 = pSStack_30 + iStack_1c;
        pCStack_54 = pSVar10->body_part;
        fStack_170 = (pSVar10->pos).x - pCStack_18->x;
        afStack_16c[0] = (pSVar10->pos).y - pCStack_18->y;
        afStack_16c[1] = (pSVar10->pos).z - pCStack_18->z;
        fStack_158 = fStack_170;
        afStack_16c[(uint)bVar17 * -2 + 6] = afStack_16c[(uint)bVar17 * -2];
        afStack_16c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
             afStack_16c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        fStack_98 = fStack_158 * *pfStack_24;
        fStack_94 = fStack_154 * *pfStack_24;
        fStack_90 = fStack_150 * *pfStack_24;
        fStack_8c = fStack_158 * *pfStack_24;
        afStack_ac[(uint)bVar17 * -2 + 9] = afStack_ac[(uint)bVar17 * -2 + 6];
        afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
             afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
        afStack_ac[2] = pCVar18->x + fStack_8c;
        afStack_ac[3] = pCVar18->y + fStack_88;
        fStack_9c = pCVar18->z + fStack_84;
        fStack_194 = afStack_ac[2];
        afStack_190[(uint)bVar17 * -2] = afStack_ac[(uint)bVar17 * -2 + 3];
        afStack_190[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
             afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_00585b20
                  (pCStack_28,pCStack_20,this_ptr->recombine_interpolation,&CStack_1bc);
        CStack_1cc.w = CStack_1bc.w;
        puVar16 = (uint *)((int)&CStack_1cc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        puVar15 = (uint *)((int)&CStack_1bc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        *(uint *)((int)&CStack_1cc + (uint)bVar17 * -8 + 4) =
             *(uint *)((int)&CStack_1bc + (uint)bVar17 * -8 + 4);
        *puVar16 = *puVar15;
        puVar16[(uint)bVar17 * -2 + 1] = puVar15[(uint)bVar17 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_00585de0(&CStack_1cc,&CStack_1ac);
        afStack_100[2] = CStack_1ac.x;
        afStack_100[(uint)bVar17 * -2 + 3] = *(float *)((int)&CStack_1ac + (uint)bVar17 * -8 + 4);
        afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             *(float *)((int)&CStack_1ac + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        afStack_100[2] =
             this_ptr->recombine_interpolation * (float)6.2831853070000001 + afStack_100[2];
        (pCStack_54->base).location.position.x = fStack_194;
        (pCStack_54->base).location.position.y = afStack_190[0];
        pUVar1 = &(pCStack_54->base).orient;
        (pCStack_54->base).location.position.z = afStack_190[1];
        if (pUVar1 != (UOrientationVector *)(afStack_100 + 2)) {
          (pUVar1->vec).x = afStack_100[2];
          (pCStack_54->base).orient.vec.y = afStack_100[3];
          (pCStack_54->base).orient.vec.z = fStack_f0;
        }
        if (&pCStack_54->physics_box != (CBox *)&fStack_194) {
          (pCStack_54->physics_box).position.x = fStack_194;
          (pCStack_54->physics_box).position.y = afStack_190[0];
          (pCStack_54->physics_box).position.z = afStack_190[1];
        }
        pCVar18 = &(pCStack_54->physics_box).orientation;
        if (pCVar18 != (CVector3f *)(afStack_100 + 2)) {
          pCVar18->x = afStack_100[2];
          (pCStack_54->physics_box).orientation.y = afStack_100[3];
          (pCStack_54->physics_box).orientation.z = fStack_f0;
        }
        iStack_1c = iStack_1c + 1;
        pCStack_28 = (CQuaternion4f *)&pCStack_28[4].y;
        pCStack_20 = (CQuaternion4f *)&pCStack_20[4].y;
        pCStack_18 = pCStack_18 + 6;
      } while (iStack_1c < this_ptr->box_count);
      return;
    }
    iVar9 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0054e670
              (&(this_ptr->base).base.model);
    pCVar13 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_004f6f10
                  (g_CDemonMission_PTR_00600530,&(pCVar13->boxes[0].body_part)->base,1);
        pCVar13->boxes[0].body_part = (CBodyPart *)0x0;
        iVar9 = iVar9 + 1;
        pCVar13 = (CBoneGuy *)((pCVar13->base).base.base.orient_matrix.m + 1);
      } while (iVar9 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    fVar21 = this_ptr->recombine_time * (float)0.5;
    (this_ptr->base).base.hit_points = this_ptr->start_hit_points;
    this_ptr->recombine_time = fVar21;
    if (fVar21 <= (float)2.5) {
      this_ptr->recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar2 = &(this_ptr->base).base.model;
  afStack_6c[3] = delta_time * (this_ptr->base).speed;
  pCStack_2c = &pCVar2->base;
  while (0.0 < afStack_6c[3]) {
    iVar9 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,afStack_6c + 3);
    if (iVar9 == 100) {
      pCVar4 = this_ptr->pickup_target;
      if (pCVar4 != (CDemonActor *)0x0) {
        this_ptr->pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_004319d0
                  ((CCharacter *)this_ptr,1,pCVar4,0.2,(CMatrix3x4f *)0x0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar9);
    }
  }
  fVar21 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar21);
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_2c);
  iVar9 = pSVar11->state_index;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
  iStack_38 = iVar9;
  iVar12 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    switch(iVar9) {
    case 0:
      pCVar7 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_140 = (this_ptr->base).base.base.location.position.x -
                   (pCVar7->base).base.location.position.x;
      afStack_13c[0] =
           (this_ptr->base).base.base.location.position.y - (pCVar7->base).base.location.position.y;
      afStack_13c[1] =
           (this_ptr->base).base.base.location.position.z - (pCVar7->base).base.location.position.z;
      afStack_16c[2] = fStack_140;
      afStack_16c[(uint)bVar17 * -2 + 3] = afStack_13c[(uint)bVar17 * -2];
      afStack_16c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
           afStack_13c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      if (0.0 < (this_ptr->base).attack_cooldown) {
        fStack_5c = fStack_15c * fStack_15c +
                    afStack_16c[2] * afStack_16c[2] + afStack_16c[3] * afStack_16c[3];
        fStack_3c = (float)(((int)fStack_5c >> 1) + g_INT_01d1a0a4);
        if (fStack_3c <= 3.0f + (float)0.20000000000000001) break;
      }
      fStack_58 = fStack_15c * fStack_15c +
                  afStack_16c[2] * afStack_16c[2] + afStack_16c[3] * afStack_16c[3];
      fStack_44 = (float)(((int)fStack_58 >> 1) + g_INT_01d1a0a4);
      pCVar2 = &(this_ptr->base).base.model;
      if (3.0f + (float)0.20000000000000001 < fStack_44) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar9 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            this_ptr->guard_idle = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
          }
        }
        else {
          this_ptr->guard_idle = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
        }
      }
      else {
        this_ptr->guard_idle = 1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,6,1);
      }
      break;
    case 1:
      pCVar7 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
      fStack_c8 = (this_ptr->base).base.base.location.position.x -
                  (pCVar7->base).base.location.position.x;
      fStack_c4 = (this_ptr->base).base.base.location.position.y -
                  (pCVar7->base).base.location.position.y;
      fStack_c0 = (this_ptr->base).base.base.location.position.z -
                  (pCVar7->base).base.location.position.z;
      fStack_104 = fStack_c8;
      afStack_100[(uint)bVar17 * -2] = afStack_100[(uint)bVar17 * -2 + 0xf];
      afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
      fStack_40 = afStack_100[1] * afStack_100[1] +
                  fStack_104 * fStack_104 + afStack_100[0] * afStack_100[0];
      fStack_50 = (float)(((int)fStack_40 >> 1) + g_INT_01d1a0a4);
      if (((fStack_50 <= 3.0f + (float)0.20000000000000001) &&
          (0.0 < (this_ptr->base).attack_cooldown)) && (this_ptr->guard_idle == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_2c,0,1);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar9 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        iVar9 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(this_ptr,delta_time);
        if (iVar9 == 0) {
          fStack_108 = 3.0f + (float)-0.5;
          uVar20._0_4_ = 0.1;
          uVar20._4_4_ = 0.17453292;
          uStack_110 = 0;
          uStack_10c = 0;
          pCVar6 = (this_ptr->base).victim;
          fStack_34 = fStack_108;
          path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
          iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,
                             (CVector3f *)uVar20,SUB84(uVar20,4),in_stack_fffffdc8);
          pCVar2 = &(this_ptr->base).base.model;
          if (iVar9 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
          }
          else {
            pCVar6 = (this_ptr->base).victim;
            fVar21 = (this_ptr->base).base.base.location.position.x -
                     (pCVar6->base).location.position.x;
            fVar8 = (this_ptr->base).base.base.location.position.z -
                    (pCVar6->base).location.position.z;
            if ((SQRT(fVar8 * fVar8 + fVar21 * fVar21) <= fStack_34 + (float)0.5) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,6,1);
              this_ptr->guard_idle = 1;
              sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffdbc);
      pSVar19 = (SDamageInfo *)&stack0xfffffdbc;
      fVar21 = 0.4;
      core_xform_cpp_transformVector3x4_FUN_00583260
                (&g_CVector3f_02cfd900,
                 (CMatrix3x4f *)
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices[g_INT_007e1620].m,
                 &CStack_14c);
      pCVar18 = &CStack_17c;
      CStack_17c.x = CStack_14c.x;
      *(uint *)((int)&CStack_17c + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_14c + (uint)bVar17 * -8 + 4);
      *(uint *)((int)&CStack_17c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_14c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar18,&CStack_134);
      pCVar18 = &CStack_11c;
      CStack_11c.x = CStack_134.x;
      *(uint *)((int)&CStack_11c + (uint)bVar17 * -8 + 4) =
           *(uint *)((int)&CStack_134 + (uint)bVar17 * -8 + 4);
      pCVar13 = this_ptr;
      *(uint *)((int)&CStack_11c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           *(uint *)((int)&CStack_134 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar13->base,pCVar18,fVar21,pSVar19);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 6:
      pCVar4 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar4 == (CDemonActor *)0x0) {
        fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930(pCStack_2c)
        ;
        if (((float)0.55000000000000004 < fStack_14) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_208);
          SStack_208.damage_amount = (this_ptr->base).attack_damage;
          pSVar19 = &SStack_208;
          SStack_208.attacker = (CDemonActor *)this_ptr;
          SStack_208.wielder = (CDemonActor *)this_ptr;
          fVar21 = 2.0;
          core_xform_cpp_transformVector3x4_FUN_00583260
                    (&g_CVector3f_02cfd900,
                     (CMatrix3x4f *)
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices[g_INT_007e1628].
                     m,&CStack_128);
          pCVar18 = &CStack_bc;
          CStack_bc.x = CStack_128.x;
          *(uint *)((int)&CStack_bc + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&CStack_128 + (uint)bVar17 * -8 + 4);
          *(uint *)((int)&CStack_bc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               *(uint *)((int)&CStack_128 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                    ((CDemonActor *)this_ptr,pCVar18,&CStack_80);
          pCVar18 = &CStack_1a0;
          CStack_1a0.x = CStack_80.x;
          *(uint *)((int)&CStack_1a0 + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&CStack_80 + (uint)bVar17 * -8 + 4);
          pCVar13 = this_ptr;
          *(uint *)((int)&CStack_1a0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               *(uint *)((int)&CStack_80 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar13->base,pCVar18,fVar21,pSVar19)
          ;
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      else {
        (*((pCVar4->vtable)._ub)->processMeleeHit)(pCVar4,2);
        (this_ptr->base).attack_cooldown = 2.5;
      }
    }
    goto switchD_00418691_caseD_3;
  }
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_00417e96:
      iVar9 = 1;
    }
    else {
LAB_004180ff:
      iVar9 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar9,1);
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_00417e96;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_004180ff;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_2c,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00418691_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar9 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar9 != 0) {
    pCVar6 = (this_ptr->base).victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar13 = (CBoneGuy *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar13 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    fStack_e0 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_dc = (this_ptr->base).base.velocity.y * delta_time;
    fStack_d8 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_ec = fStack_e0;
    afStack_100[(uint)bVar17 * -2 + 6] = afStack_100[(uint)bVar17 * -2 + 9];
    afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    pCVar18 = &(this_ptr->base).base.position_delta;
    fStack_b0 = fStack_ec + pCVar18->x;
    afStack_ac[0] = fStack_e8 + (this_ptr->base).base.position_delta.y;
    afStack_ac[1] = fStack_e4 + (this_ptr->base).base.position_delta.z;
    fStack_74 = fStack_b0;
    afStack_6c[(uint)bVar17 * -2 + -1] = afStack_ac[(uint)bVar17 * -2];
    afStack_6c[(uint)bVar17 * -2 + (uint)bVar17 * -2] =
         afStack_ac[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_d4 = fStack_74 + pCVar3->x;
    fStack_d0 = fStack_70 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_cc = afStack_6c[0] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_188.x = fStack_d4;
    *(float *)((int)&CStack_188 + (uint)bVar17 * -8 + 4) = afStack_100[(uint)bVar17 * -2 + 0xc];
    *(float *)((int)&CStack_188 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_100[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar18->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar21 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar21;
    pCVar3->x = fVar21;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_188);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if ((iStack_38 == 1) &&
     (iVar9 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00557170
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,100.0), iVar9 != 0))
  {
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
    if (iVar9 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    fVar21 = 2.8026e-45;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)fStack_14,(int)fVar21);
    uVar14 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar14;
    fStack_230 = 6.015501e-39;
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  return;
}
