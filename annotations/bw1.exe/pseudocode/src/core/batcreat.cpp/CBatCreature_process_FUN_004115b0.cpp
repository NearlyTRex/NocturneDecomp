// Name: core_batcreat.cpp_CBatCreature_process_FUN_004115b0
// Address: 004115b0
// Address Range: [[004115b0, 00412100]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_004115b0(CBatCreature *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_004115b0(CBatCreature *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CPathMap *path_map;
  uint uVar7;
  byte bVar8;
  float afStackY_11ac [982];
  CBatCreature *this_ptr_00;
  CGore *this_ptr_01;
  float *pfVar9;
  CVector3f *pCVar10;
  float fVar11;
  float min_distance;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_23c;
  SDamageInfo SStack_200;
  float fStack_1c4;
  float afStack_1c0 [5];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  float afStack_17c [3];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [3];
  CVector3f CStack_134;
  uint uStack_128;
  float afStack_124 [4];
  float fStack_114;
  CVector3f CStack_110;
  uint uStack_104;
  float afStack_100 [4];
  float fStack_f0;
  uint uStack_ec;
  float fStack_e8;
  uint uStack_e0;
  float afStack_d4 [3];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [3];
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [5];
  uint uStack_80;
  float afStack_74 [3];
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [5];
  uint uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_38 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_38) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&(this_ptr->base).base.model.base,afStack_58 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar5);
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar11);
  if (((((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0xb]] == 0)
       && ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] == 0))
      || ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0))
     && ((0.0 <= this_ptr->dismember_death_timer &&
         (fVar11 = this_ptr->dismember_death_timer + delta_time,
         this_ptr->dismember_death_timer = fVar11, (float)_DAT_005d3861 <= fVar11)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_200);
    SStack_200.damage_amount = 9999.9;
    SStack_200.attacker = (CDemonActor *)this_ptr;
    SStack_200.wielder = (CDemonActor *)this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_200);
    this_ptr->dismember_death_timer = -1.0;
  }
  pCStack_1c = &(this_ptr->base).base.model.base;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_1c);
  iStack_28 = pSVar6->state_index;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(iStack_28) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
      else {
        fStack_170 = (pCVar4->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        fStack_16c = (pCVar4->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        fStack_168 = (pCVar4->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_194 = fStack_170;
        afStack_1c0[(uint)bVar8 * -2 + 0xc] = afStack_1c0[(uint)bVar8 * -2 + 0x15];
        afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
             afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
        fStack_34 = SQRT(fStack_18c * fStack_18c + fStack_194 * fStack_194 + fStack_190 * fStack_190
                        );
        fStack_24 = fStack_34;
        if (fStack_34 < 0x40600000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_1c0 + 0xb);
          uStack_ec = uStack_e0;
          afStack_100[(uint)bVar8 * -2 + 6] = afStack_100[(uint)bVar8 * -2 + 9];
          afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                (fStack_e8 - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)_DAT_005d3869) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,3,1);
            iVar5 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
            if ((iVar5 == 0) &&
               (iVar5 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]), iVar5 == 0)) {
              uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"batman-attack?.wav");
              this_ptr->sfx_handles[2] = uVar7;
            }
          }
        }
        if (fStack_34 < (this_ptr->base).guard_distance) {
          pCStack_20 = &(this_ptr->base).base.model.base;
          if (fStack_34 < _DAT_005fbfd8) {
            iVar5 = 1;
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            (this_ptr->base).attack_cooldown = 0.0;
            iVar5 = core_actor_cpp_randomChance_FUN_0040cd00(0.1);
            if (iVar5 == 0) {
              iVar5 = 1;
            }
            else {
              pCVar4 = (this_ptr->base).victim;
              fStack_1c4 = (pCVar4->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
              afStack_1c0[0] =
                   (pCVar4->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
              afStack_1c0[1] =
                   (pCVar4->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
              afStack_140[0] = fStack_1c4;
              afStack_1c0[(uint)bVar8 * -2 + 0x21] = afStack_1c0[(uint)bVar8 * -2];
              afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
                   afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_1c0 + 0x20);
              afStack_94[2] = (float)uStack_98;
              afStack_94[(uint)bVar8 * -2 + 3] = afStack_94[(uint)bVar8 * -2];
              afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                   afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                    (afStack_94[3] - (this_ptr->base).base.base.orient.vec.y);
              if ((float)_DAT_005d3869 <= ABS(fStack_14)) {
                iVar5 = 1;
              }
              else if ((float)_DAT_005d3871 <=
                       ABS((((this_ptr->base).victim)->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y)) {
                iVar5 = 1;
              }
              else {
                iVar5 = 2;
              }
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_20,iVar5,1);
          if ((((this_ptr->alert_played == 0) &&
               (iVar5 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]), iVar5 == 0)) &&
              (iVar5 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]), iVar5 == 0)) &&
             (iVar5 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]), iVar5 == 0)) {
            uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"batman-alert.wav");
            this_ptr->alert_played = 1;
            this_ptr->sfx_handles[0] = uVar7;
          }
        }
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar11 = 0x40600000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_30 = 0x40600000;
        min_distance = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_134.x = 0.0;
        CStack_134.z = fVar11;
        pCVar10 = &CStack_134;
        CStack_134.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                           min_distance,max_distance);
        if (-1 < iVar5) {
          pCVar1 = &(this_ptr->base).base.base.location;
          pCVar4 = (this_ptr->base).victim;
          fStack_14c = (pCVar1->position).x - (pCVar4->base).location.position.x;
          fStack_148 = (this_ptr->base).base.base.location.position.y -
                       (pCVar4->base).location.position.y;
          fStack_144 = (this_ptr->base).base.base.location.position.z -
                       (pCVar4->base).location.position.z;
          fStack_5c = fStack_14c;
          afStack_58[(uint)bVar8 * -2] = afStack_1c0[(uint)bVar8 * -2 + 0x1e];
          afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
          fStack_18 = SQRT(afStack_58[1] * afStack_58[1] + fStack_5c * fStack_5c);
          afStack_58[0] = 0.0;
          fStack_2c = fStack_18;
          if ((_DAT_005fbfd8 < fStack_18) &&
             ((this_ptr->base).attack_cooldown = 0.0, iStack_28 == 1)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_1ac = (pCVar4->base).location.position.x - (pCVar1->position).x;
            fStack_1a8 = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_1a4 = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            afStack_d4[0] = fStack_1ac;
            afStack_100[(uint)bVar8 * -2 + 0xc] = afStack_1c0[(uint)bVar8 * -2 + 6];
            afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                 afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_100 + 0xb);
            uStack_104 = afStack_58[2];
            afStack_100[(uint)bVar8 * -2] = afStack_58[(uint)bVar8 * -2 + 3];
            afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (afStack_100[0] - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(fStack_14) < (float)_DAT_005d3869) &&
               (ABS((((this_ptr->base).victim)->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y) < (float)_DAT_005d3871)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,2,1);
              uVar7 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 0.0;
              iVar5 = sound_sndmain_cpp_FUN_005735a0(uVar7);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]), iVar5 == 0)) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar7;
              }
            }
          }
          if ((fStack_2c <= fStack_30) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_bc = (pCVar4->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_b8 = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_b4 = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            afStack_74[0] = fStack_bc;
            afStack_94[(uint)bVar8 * -2 + 9] = afStack_100[(uint)bVar8 * -2 + 0x12];
            afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
                 afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_94 + 8);
            uStack_128 = uStack_44;
            afStack_124[(uint)bVar8 * -2] = afStack_58[(uint)bVar8 * -2 + 6];
            afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_58[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (afStack_124[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d3869) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,3,1);
              uVar7 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar5 = sound_sndmain_cpp_FUN_005735a0(uVar7);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]), iVar5 == 0)) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar7;
              }
            }
          }
          if ((this_ptr->base).guard_distance < fStack_2c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_23c);
      SStack_23c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      damage_info = &SStack_23c;
      SStack_23c.attacker = (CDemonActor *)this_ptr;
      SStack_23c.wielder = (CDemonActor *)this_ptr;
      fVar11 = 0.4;
      fStack_14 = SStack_23c.damage_amount;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007c3754);
      pfVar9 = afStack_100 + 0x14;
      afStack_b0[0] = (float)uStack_188;
      afStack_100[(uint)bVar8 * -2 + 0x15] = afStack_1c0[(uint)bVar8 * -2 + 0xf];
      afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
           afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
      pCVar10 = &CStack_a4;
      CStack_a4.x = afStack_1c0[2];
      *(float *)((int)&CStack_a4 + (uint)bVar8 * -8 + 4) = afStack_1c0[(uint)bVar8 * -2 + 3];
      this_ptr_00 = this_ptr;
      *(float *)((int)&CStack_a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770
                (&this_ptr_00->base,pCVar10,fVar11,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(pCStack_1c,0);
        pfVar9 = afStack_1c0 + 0x11;
        afStack_17c[0] = (float)uStack_80;
        afStack_1c0[(uint)bVar8 * -2 + 0x12] = afStack_94[(uint)bVar8 * -2 + 6];
        afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
             afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
        blood_type = BLOOD_TYPE_RED;
        pCVar10 = &CStack_110;
        CStack_110.x = fStack_164;
        *(float *)((int)&CStack_110 + (uint)bVar8 * -8 + 4) = afStack_1c0[(uint)bVar8 * -2 + 0x18];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_110 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar10,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_004120fa_caseD_2;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_004116b0:
      iVar5 = 1;
    }
    else {
LAB_0041191c:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_004116b0;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_0041191c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004120fa_caseD_2:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_c8 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_c4 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_c0 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_158 = fStack_c8;
    afStack_1c0[(uint)bVar8 * -2 + 0x1b] = afStack_100[(uint)bVar8 * -2 + 0xf];
    afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c] =
         afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
    pCVar10 = &(this_ptr->base).base.position_delta;
    afStack_124[2] = fStack_158 + pCVar10->x;
    afStack_124[3] = fStack_154 + (this_ptr->base).base.position_delta.y;
    fStack_114 = fStack_150 + (this_ptr->base).base.position_delta.z;
    afStack_100[2] = afStack_124[2];
    afStack_100[(uint)bVar8 * -2 + 3] = afStack_124[(uint)bVar8 * -2 + 3];
    afStack_100[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1a0 = afStack_100[2] + pCVar2->x;
    fStack_19c = afStack_100[3] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_198 = fStack_f0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_68.x = fStack_1a0;
    *(float *)((int)&CStack_68 + (uint)bVar8 * -8 + 4) = afStack_1c0[(uint)bVar8 * -2 + 9];
    *(float *)((int)&CStack_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_1c0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_68);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
