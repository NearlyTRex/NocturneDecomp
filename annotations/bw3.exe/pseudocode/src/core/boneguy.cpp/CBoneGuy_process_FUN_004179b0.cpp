// Name: core_boneguy.cpp_CBoneGuy_process_FUN_004179b0
// Address: 004179b0
// Address Range: [[004179b0, 004186ae]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004179b0(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004179b0(CBoneGuy *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  EWalkState EVar5;
  CCharacter *pCVar6;
  float fVar7;
  int iVar8;
  SBoneGuyBox *pSVar9;
  SMotion *pSVar10;
  int iVar11;
  CBoneGuy *pCVar12;
  uint uVar13;
  CPathMap *path_map;
  byte bVar14;
  float afStackY_19a8 [1493];
  uint *puVar15;
  float *pfVar16;
  CVector3f *pCVar17;
  SDamageInfo *pSVar18;
  ulonglong uVar19;
  float in_stack_fffffdc8;
  float fVar20;
  float fStack_230;
  SDamageInfo SStack_208;
  uint uStack_1cc;
  float afStack_1c8 [7];
  float fStack_1ac;
  CVector3f CStack_1a0;
  float fStack_194;
  float afStack_190 [2];
  CVector3f CStack_188;
  uint uStack_17c;
  float afStack_178 [4];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  uint uStack_128;
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
  float afStack_bc [3];
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
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
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
  
  bVar14 = 0;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"My HP: %f\n");
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,this_ptr->death_event);
  if (iVar8 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              (&(this_ptr->base).base.model.base,5,0.0);
  }
  iVar8 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    return;
  }
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar20 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar20;
    if (fVar20 <= this_ptr->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar20 = delta_time / _DAT_005dc144 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar20;
    if (fVar20 < 1.0) {
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
        pCVar17 = pCStack_18;
        pSVar9 = pSStack_30 + iStack_1c;
        pCStack_54 = pSVar9->body_part;
        afStack_178[2] = (pSVar9->pos).x - pCStack_18->x;
        afStack_178[3] = (pSVar9->pos).y - pCStack_18->y;
        fStack_168 = (pSVar9->pos).z - pCStack_18->z;
        fStack_158 = afStack_178[2];
        afStack_178[(uint)bVar14 * -2 + 9] = afStack_178[(uint)bVar14 * -2 + 3];
        afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
             afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        fStack_98 = fStack_158 * *pfStack_24;
        fStack_94 = fStack_154 * *pfStack_24;
        fStack_90 = fStack_150 * *pfStack_24;
        fStack_8c = fStack_158 * *pfStack_24;
        afStack_100[(uint)bVar14 * -2 + 0x1e] = afStack_100[(uint)bVar14 * -2 + 0x1b];
        afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f] =
             afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c];
        fStack_a4 = pCVar17->x + fStack_8c;
        fStack_a0 = pCVar17->y + fStack_88;
        fStack_9c = pCVar17->z + fStack_84;
        fStack_194 = fStack_a4;
        afStack_190[(uint)bVar14 * -2] = afStack_100[(uint)bVar14 * -2 + 0x18];
        afStack_190[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
        core_xform_cpp_slerpQuaternion_FUN_00585b20(pCStack_28,pCStack_20);
        uStack_1cc = afStack_1c8[3];
        afStack_1c8[(uint)bVar14 * -2] = afStack_1c8[(uint)bVar14 * -2 + 4];
        afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
        (afStack_1c8 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             (afStack_1c8 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
        core_xform_cpp_FUN_00585de0();
        afStack_100[2] = fStack_1ac;
        afStack_100[(uint)bVar14 * -2 + 3] = afStack_1c8[(uint)bVar14 * -2 + 8];
        afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9];
        afStack_100[2] = this_ptr->recombine_interpolation * (float)_DAT_005b6f72 + afStack_100[2];
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
        pCVar17 = &(pCStack_54->physics_box).orientation;
        if (pCVar17 != (CVector3f *)(afStack_100 + 2)) {
          pCVar17->x = afStack_100[2];
          (pCStack_54->physics_box).orientation.y = afStack_100[3];
          (pCStack_54->physics_box).orientation.z = fStack_f0;
        }
        iStack_1c = iStack_1c + 1;
        pCStack_28 = (CQuaternion4f *)((int)(pCStack_28 + 4) + 8);
        pCStack_20 = (CQuaternion4f *)((int)(pCStack_20 + 4) + 8);
        pCStack_18 = pCStack_18 + 6;
      } while (iStack_1c < this_ptr->box_count);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_FUN_0054e670();
    pCVar12 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_FUN_004f6f10(0x01D81080,pCVar12->boxes[0].body_part);
        pCVar12->boxes[0].body_part = (CBodyPart *)0x0;
        iVar8 = iVar8 + 1;
        pCVar12 = (CBoneGuy *)((pCVar12->base).base.base.orient_matrix.m + 1);
      } while (iVar8 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    fVar20 = this_ptr->recombine_time * (float)_DAT_005b6f42;
    (this_ptr->base).base.hit_points = this_ptr->start_hit_points;
    this_ptr->recombine_time = fVar20;
    if (fVar20 <= (float)_DAT_005b6f4a) {
      this_ptr->recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar2 = &(this_ptr->base).base.model;
  fStack_60 = delta_time * (this_ptr->base).speed;
  pCStack_2c = &pCVar2->base;
  while (0.0 < fStack_60) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,afStack_100 + 0x28)
    ;
    if (iVar8 == 100) {
      pCVar4 = this_ptr->pickup_target;
      if (pCVar4 != (CDemonActor *)0x0) {
        this_ptr->pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_FUN_004319d0(this_ptr,1,pCVar4,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar8);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr);
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_2c);
  iVar8 = pSVar10->state_index;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
  iStack_38 = iVar8;
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    switch(iVar8) {
    case 0:
      iVar8 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_140 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_13c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_138 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_164 = fStack_140;
      afStack_178[(uint)bVar14 * -2 + 6] = afStack_178[(uint)bVar14 * -2 + 0xf];
      afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
      if (0.0 < (this_ptr->base).attack_cooldown) {
        fStack_5c = fStack_15c * fStack_15c + fStack_164 * fStack_164 + fStack_160 * fStack_160;
        fStack_3c = (float)(((int)fStack_5c >> 1) + _DAT_01d1a0a4);
        if (fStack_3c <= 0x40400000 + (float)_DAT_005b6f62) break;
      }
      fStack_58 = fStack_15c * fStack_15c + fStack_164 * fStack_164 + fStack_160 * fStack_160;
      fStack_44 = (float)(((int)fStack_58 >> 1) + _DAT_01d1a0a4);
      pCVar2 = &(this_ptr->base).base.model;
      if (0x40400000 + (float)_DAT_005b6f62 < fStack_44) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
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
      iVar8 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_c8 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_c4 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_c0 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_104 = fStack_c8;
      afStack_100[(uint)bVar14 * -2] = afStack_100[(uint)bVar14 * -2 + 0xf];
      afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
      fStack_40 = afStack_100[1] * afStack_100[1] +
                  fStack_104 * fStack_104 + afStack_100[0] * afStack_100[0];
      fStack_50 = (float)(((int)fStack_40 >> 1) + _DAT_01d1a0a4);
      if (((fStack_50 <= 0x40400000 + (float)_DAT_005b6f62) &&
          (0.0 < (this_ptr->base).attack_cooldown)) && (this_ptr->guard_idle == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_2c,0,1);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        iVar8 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(this_ptr,delta_time);
        if (iVar8 == 0) {
          fStack_108 = 0x40400000 + (float)_DAT_005b6f6a;
          uVar19._0_4_ = 0.1;
          uVar19._4_4_ = 0.17453292;
          uStack_110 = 0;
          uStack_10c = 0;
          pCVar6 = (this_ptr->base).victim;
          fStack_34 = fStack_108;
          path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,
                             (CVector3f *)uVar19,SUB84(uVar19,4),in_stack_fffffdc8);
          pCVar2 = &(this_ptr->base).base.model;
          if (iVar8 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
          }
          else {
            pCVar6 = (this_ptr->base).victim;
            fVar20 = (this_ptr->base).base.base.location.position.x -
                     (pCVar6->base).location.position.x;
            fVar7 = (this_ptr->base).base.base.location.position.z -
                    (pCVar6->base).location.position.z;
            if ((SQRT(fVar7 * fVar7 + fVar20 * fVar20) <= fStack_34 + (float)_DAT_005b6f42) &&
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
      pSVar18 = (SDamageInfo *)&stack0xfffffdbc;
      fVar20 = 0.4;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices[DAT_007e1620].m);
      puVar15 = &uStack_17c;
      uStack_17c = uStack_14c;
      afStack_178[(uint)bVar14 * -2] = afStack_178[(uint)bVar14 * -2 + 0xc];
      afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(this_ptr,puVar15);
      pCVar17 = &CStack_11c;
      CStack_11c.x = fStack_134;
      *(float *)((int)&CStack_11c + (uint)bVar14 * -8 + 4) = afStack_178[(uint)bVar14 * -2 + 0x12];
      pCVar12 = this_ptr;
      *(float *)((int)&CStack_11c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar12->base,pCVar17,fVar20,pSVar18);
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
        fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_2c);
        if (((float)_DAT_005b6f52 < fStack_14) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_208);
          SStack_208.damage_amount = (this_ptr->base).attack_damage;
          pSVar18 = &SStack_208;
          SStack_208.attacker = (CDemonActor *)this_ptr;
          SStack_208.wielder = (CDemonActor *)this_ptr;
          fVar20 = 2.0;
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,
                     (this_ptr->base).base.model.bone_transform.bone_model_matrices[DAT_007e1628].m)
          ;
          pfVar16 = afStack_100 + 0x11;
          afStack_bc[0] = (float)uStack_128;
          afStack_100[(uint)bVar14 * -2 + 0x12] = afStack_178[(uint)bVar14 * -2 + 0x15];
          afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
               afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar16);
          pCVar17 = &CStack_1a0;
          CStack_1a0.x = fStack_80;
          *(float *)((int)&CStack_1a0 + (uint)bVar14 * -8 + 4) =
               afStack_100[(uint)bVar14 * -2 + 0x21];
          pCVar12 = this_ptr;
          *(float *)((int)&CStack_1a0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
               afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar12->base,pCVar17,fVar20,pSVar18)
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
      iVar8 = 1;
    }
    else {
LAB_004180ff:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar8,1);
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
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    pCVar6 = (this_ptr->base).victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar12 = (CBoneGuy *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar12 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0();
    fStack_e0 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_dc = (this_ptr->base).base.velocity.y * delta_time;
    fStack_d8 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_ec = fStack_e0;
    afStack_100[(uint)bVar14 * -2 + 6] = afStack_100[(uint)bVar14 * -2 + 9];
    afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
    pCVar17 = &(this_ptr->base).base.position_delta;
    fStack_b0 = fStack_ec + pCVar17->x;
    fStack_ac = fStack_e8 + (this_ptr->base).base.position_delta.y;
    fStack_a8 = fStack_e4 + (this_ptr->base).base.position_delta.z;
    fStack_74 = fStack_b0;
    afStack_100[(uint)bVar14 * -2 + 0x24] = afStack_100[(uint)bVar14 * -2 + 0x15];
    afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_d4 = fStack_74 + pCVar3->x;
    fStack_d0 = fStack_70 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_cc = fStack_6c + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_188.x = fStack_d4;
    *(float *)((int)&CStack_188 + (uint)bVar14 * -8 + 4) = afStack_100[(uint)bVar14 * -2 + 0xc];
    *(float *)((int)&CStack_188 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar17->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar20 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar20;
    pCVar3->x = fVar20;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_188);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if ((iStack_38 == 1) &&
     (iVar8 = sound_sndmain_cpp_FUN_00557170
                        ((double)(this_ptr->base).base.base.location.position.x,
                         SUB84(__BITCAST_UINT64((double)(this_ptr->base).base.base.location.position.y),0)),
     iVar8 != 0)) {
    iVar8 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handle);
    if (iVar8 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    fVar20 = 2.8026e-45;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)fStack_14,(int)fVar20);
    uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar13;
    fStack_230 = 6.015501e-39;
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  return;
}
