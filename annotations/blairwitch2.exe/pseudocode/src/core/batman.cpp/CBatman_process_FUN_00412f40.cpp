// Name: core_batman.cpp_CBatman_process_FUN_00412f40
// Address: 00412f40
// Address Range: [[00412f40, 00413c61]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_process_FUN_00412f40(CBatman *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_process_FUN_00412f40(CBatman *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  EWalkState EVar2;
  CDemonActor_vtable *pCVar3;
  CCharacter *pCVar4;
  CDeformableModelInstance *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  EDeathState EVar9;
  uint uVar10;
  CDemonActor *pCVar11;
  CLocation *pCVar12;
  CPathMap *path_map;
  byte bVar13;
  float afStackY_1228 [997];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar14;
  CBatman *pCVar15;
  CGore *this_ptr_01;
  CVector3f *pCVar16;
  float fVar17;
  float min_distance;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_27c;
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [2];
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [4];
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  CVector3f CStack_1f8;
  float fStack_1ec;
  float afStack_1e8 [5];
  CVector3f CStack_1d4;
  float fStack_1c8;
  float afStack_1c4 [4];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  CVector3f CStack_18c;
  CVector3f CStack_180;
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [5];
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  uint uStack_120;
  float afStack_11c [4];
  float fStack_10c;
  CVector3f CStack_108;
  uint uStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [2];
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [5];
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  float fStack_48;
  CMotionController *pCStack_44;
  CDeformableModelInstance *pCStack_40;
  CDeformableModelInstance *pCStack_3c;
  CSkeleton *pCStack_38;
  CSkeleton *pCStack_34;
  int iStack_30;
  int iStack_2c;
  CVector3f *pCStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_54 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_54) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(this_ptr->base).base.model.base,afStack_68 + 5);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
  }
  fVar17 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar17);
  pCVar5 = &(this_ptr->base).base.model;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar5->base);
  iVar6 = pSVar7->state_index;
  iStack_1c = iVar6;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar5->base,1,1);
        }
      }
      else {
        iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.25);
        if ((iVar6 != 0) &&
           (iVar6 = core_actor_cpp_isOfClass_FUN_0040c840
                              (&((this_ptr->base).victim)->base,"CHero"), iVar6 != 0)) {
          iVar8 = 0;
          iVar6 = 0;
          while ((iVar6 < g_CDemonSetPtr->enemy_count &&
                 ((pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                       (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar8),
                                        g_CBatmanClassInfo.name_hash), pCVar11 == (CDemonActor *)0x0
                  || (pCVar11[0x62].footstep_effects_enabled == 0))))) {
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + 4;
          }
          if (iVar6 == g_CDemonSetPtr->enemy_count) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0xd,1);
            pCVar4 = (this_ptr->base).victim;
            pCVar12 = &(pCVar4->base).location;
            this_ptr->mist_state = 1;
            if ((CLocation *)&this_ptr->new_pos != pCVar12) {
              (this_ptr->new_pos).x = (pCVar12->position).x;
              (this_ptr->new_pos).y = (pCVar4->base).location.position.y;
              (this_ptr->new_pos).z = (pCVar4->base).location.position.z;
            }
            iStack_1c = 0xd;
            pCVar3 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->vanish_timer = 0.0;
            (*pCVar3->playSound)((CDemonActor *)this_ptr,"batman-disappear.wav");
            break;
          }
        }
        pCVar4 = (this_ptr->base).victim;
        fStack_1b0 = (pCVar4->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        fStack_1ac = (pCVar4->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        fStack_1a8 = (pCVar4->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_21c = fStack_1b0;
        afStack_218[(uint)bVar13 * -2] = afStack_1c4[(uint)bVar13 * -2 + 6];
        afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_1c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        if (SQRT(afStack_218[1] * afStack_218[1] +
                 fStack_21c * fStack_21c + afStack_218[0] * afStack_218[0]) < 0x40600000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_21c);
          uStack_120 = uStack_fc;
          afStack_11c[(uint)bVar13 * -2] = afStack_f8[(uint)bVar13 * -2];
          afStack_11c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                (afStack_11c[0] - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)_DAT_005cbb4e) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,3,1);
          }
        }
        core_batman_cpp_CBatman_pickRandomMovementState_FUN_00412ec0(this_ptr);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar17 = 0x40600000;
      pCStack_44 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_44,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_44,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_48 = 0x40600000;
        min_distance = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_a8.x = 0.0;
        CStack_a8.z = fVar17;
        pCVar14 = &CStack_a8;
        CStack_a8.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar14,
                           min_distance,max_distance);
        if (-1 < iVar6) {
          pCVar12 = &(this_ptr->base).base.base.location;
          pCVar4 = (this_ptr->base).victim;
          afStack_f8[2] = (pCVar12->position).x - (pCVar4->base).location.position.x;
          afStack_f8[3] =
               (this_ptr->base).base.base.location.position.y - (pCVar4->base).location.position.y;
          fStack_e8 = (this_ptr->base).base.base.location.position.z -
                      (pCVar4->base).location.position.z;
          afStack_164[2] = afStack_f8[2];
          afStack_164[(uint)bVar13 * -2 + 3] = afStack_f8[(uint)bVar13 * -2 + 3];
          afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
               afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          fStack_18 = SQRT(afStack_164[4] * afStack_164[4] + afStack_164[2] * afStack_164[2]);
          afStack_164[3] = 0.0;
          fStack_50 = fStack_18;
          if ((fStack_18 <= fStack_48) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            afStack_218[2] = (pCVar4->base).location.position.x - (pCVar12->position).x;
            afStack_218[3] =
                 (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_208 = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            fStack_168 = afStack_218[2];
            afStack_164[(uint)bVar13 * -2] = afStack_218[(uint)bVar13 * -2 + 3];
            afStack_164[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_168);
            afStack_1e8[2] = afStack_68[2];
            afStack_1e8[(uint)bVar13 * -2 + 3] = afStack_68[(uint)bVar13 * -2 + 3];
            afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_68[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (afStack_1e8[3] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005cbb4e) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_44,3,1);
              uVar10 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(uVar10);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]),
                 iVar6 == 0)) {
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar10;
              }
            }
          }
          if ((this_ptr->base).guard_distance < fStack_50) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_27c);
      SStack_27c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      damage_info = &SStack_27c;
      SStack_27c.attacker = (CDemonActor *)this_ptr;
      SStack_27c.wielder = (CDemonActor *)this_ptr;
      fVar17 = 0.4;
      fStack_14 = SStack_27c.damage_amount;
      core_xform_cpp_transformVector3x4_FUN_00591530
                ((CVector3f *)&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007bc7c0,
                 &CStack_228);
      pCVar14 = &CStack_84;
      CStack_84.x = CStack_228.x;
      *(uint *)((int)&CStack_84 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_228 + (uint)bVar13 * -8 + 4);
      *(uint *)((int)&CStack_84 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_228 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar14,&CStack_240);
      pCVar14 = &CStack_78;
      CStack_78.x = CStack_240.x;
      *(uint *)((int)&CStack_78 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)&CStack_240 + (uint)bVar13 * -8 + 4);
      pCVar15 = this_ptr;
      *(uint *)((int)&CStack_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           *(uint *)((int)&CStack_240 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar15->base,pCVar14,fVar17,damage_info)
      ;
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCVar5,0,&CStack_138);
        pCVar14 = &CStack_144;
        CStack_144.x = CStack_138.x;
        *(uint *)((int)&CStack_144 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&CStack_138 + (uint)bVar13 * -8 + 4);
        *(uint *)((int)&CStack_144 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&CStack_138 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr,pCVar14,&CStack_12c);
        blood_type = BLOOD_TYPE_RED;
        pCVar14 = &CStack_150;
        CStack_150.x = CStack_12c.x;
        *(uint *)((int)&CStack_150 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&CStack_12c + (uint)bVar13 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_150 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&CStack_12c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar14,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim != (CCharacter *)0x0) ||
         (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                            (0x01C38BC0,this_ptr->fall_event), iVar6 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0xb,1);
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
        if ((iVar6 == 0) &&
           ((iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]),
            iVar6 == 0 &&
            (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]),
            iVar6 == 0)))) {
          uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          this_ptr->sfx_handles[0] = uVar10;
        }
      }
      break;
    case 0xb:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar5->base,0xc,1);
      }
      break;
    case 0xd:
      switch(this_ptr->mist_state) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar5->base,0,1);
        break;
      case 1:
        fVar17 = this_ptr->vanish_timer + delta_time;
        this_ptr->vanish_timer = fVar17;
        if (0x3F800000 < fVar17) {
          this_ptr->mist_state = 2;
          this_ptr->vanish_timer = 0x3F800000;
        }
        pCVar5 = &(this_ptr->base).base.model;
        CStack_108.x = 0.0;
        CStack_108.y = 3.0;
        CStack_108.z = 0.0;
        pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar5);
        iStack_20 = 0;
        if (0 < pCStack_34->bone_count) {
          do {
            pCStack_3c = pCVar5;
            core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                      (pCStack_3c,iStack_20,&CStack_c0);
            pCVar14 = &CStack_cc;
            CStack_cc.x = CStack_c0.x;
            *(uint *)((int)&CStack_cc + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_c0 + (uint)bVar13 * -8 + 4);
            *(uint *)((int)&CStack_cc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_c0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar14,&CStack_b4);
            iVar8 = 0xffff;
            pCVar14 = &CStack_108;
            fVar17 = 0.5;
            CStack_1f8.x = CStack_b4.x;
            *(uint *)((int)&CStack_1f8 + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_b4 + (uint)bVar13 * -8 + 4);
            *(uint *)((int)&CStack_1f8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_b4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            iVar6 = iStack_20 + 1;
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                      (0x01C3DEB4,&CStack_1f8,fVar17,pCVar14,iVar8);
            pCVar5 = pCStack_3c;
            iStack_20 = iVar6;
          } while (iVar6 < pCStack_34->bone_count);
        }
        break;
      case 2:
        iStack_4c = 1;
        pCStack_28 = &this_ptr->new_pos;
        iStack_2c = 0;
        for (iStack_30 = 0; fVar17 = 0x3F800000, iStack_30 < g_CDemonSetPtr->character_count;
            iStack_30 = iStack_30 + 1) {
          pCVar15 = *(CBatman **)((int)g_CDemonSetPtr->characters + iStack_2c);
          if (((pCVar15 != (CBatman *)0x0) && (pCVar15 != this_ptr)) &&
             (EVar9 = (*(((pCVar15->base).base.base.vtable._uc)->_uc).getDeathState)
                                ((CCharacter *)pCVar15), (int)EVar9 < 1)) {
            fStack_90 = (pCVar15->base).base.base.location.position.x - pCStack_28->x;
            afStack_8c[0] = (pCVar15->base).base.base.location.position.y - pCStack_28->y;
            afStack_8c[1] = (pCVar15->base).base.base.location.position.z - pCStack_28->z;
            fStack_198 = fStack_90;
            afStack_1c4[(uint)bVar13 * -2 + 0xc] = afStack_8c[(uint)bVar13 * -2];
            afStack_1c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
                 afStack_8c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            if (SQRT(fStack_190 * fStack_190 + fStack_198 * fStack_198 + fStack_194 * fStack_194) <
                (float)_DAT_005cbb56) goto switchD_004135d2_default;
          }
          iStack_2c = iStack_2c + 4;
        }
        if (iStack_4c != 0) {
          this_ptr->mist_state = 3;
          pCVar12 = &(this_ptr->base).base.base.location;
          this_ptr->vanish_timer = fVar17;
          (pCVar12->position).x = pCStack_28->x;
          (this_ptr->base).base.base.location.position.y = pCStack_28->y;
          (this_ptr->base).base.base.location.position.z = pCStack_28->z;
          pCVar4 = (this_ptr->base).victim;
          if (pCVar4 != (CCharacter *)0x0) {
            fStack_204 = (pCVar4->base).location.position.x - (pCVar12->position).x;
            fStack_200 = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_1fc = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            fStack_6c = fStack_204;
            afStack_68[(uint)bVar13 * -2] = afStack_218[(uint)bVar13 * -2 + 6];
            afStack_68[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_6c);
            pUVar1 = &(this_ptr->base).base.base.orient;
            afStack_11c[2] = fStack_1ec;
            afStack_11c[(uint)bVar13 * -2 + 3] = afStack_1e8[(uint)bVar13 * -2];
            afStack_11c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_1e8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            if (pUVar1 != (UOrientationVector *)(afStack_11c + 2)) {
              (pUVar1->vec).x = afStack_11c[2];
              (this_ptr->base).base.base.orient.vec.y = afStack_11c[3];
              (this_ptr->base).base.base.orient.vec.z = fStack_10c;
            }
            (this_ptr->base).base.base.orient.vec.z = 0.0;
            (this_ptr->base).base.base.orient.vec.x = 0.0;
          }
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"batman-disappear.wav");
        }
        break;
      case 3:
        CStack_1d4.x = 0.0;
        CStack_1d4.y = 3.0;
        CStack_1d4.z = 0.0;
        pCStack_38 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar5);
        iStack_24 = 0;
        if (0 < pCStack_38->bone_count) {
          do {
            pCStack_40 = pCVar5;
            core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                      (pCStack_40,iStack_24,&CStack_180);
            pCVar14 = &CStack_18c;
            CStack_18c.x = CStack_180.x;
            *(uint *)((int)&CStack_18c + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_180 + (uint)bVar13 * -8 + 4);
            *(uint *)((int)&CStack_18c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_180 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar14,&CStack_174);
            iVar6 = 0xffff;
            pCVar16 = &CStack_1d4;
            fVar17 = 0.5;
            pCVar14 = &CStack_9c;
            CStack_9c.x = CStack_174.x;
            *(uint *)((int)&CStack_9c + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_174 + (uint)bVar13 * -8 + 4);
            this_ptr_00 = 0x01C3DEB4;
            *(uint *)((int)&CStack_9c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_174 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                      (this_ptr_00,pCVar14,fVar17,pCVar16,iVar6);
            iStack_24 = iStack_24 + 1;
            pCVar5 = pCStack_40;
          } while (iStack_24 < pCStack_38->bone_count);
        }
        fVar17 = this_ptr->vanish_timer - delta_time;
        this_ptr->vanish_timer = fVar17;
        if (fVar17 < 0.0) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->mist_state = 0;
          core_batman_cpp_CBatman_pickRandomMovementState_FUN_00412ec0(this_ptr);
        }
      }
    }
    goto switchD_004135d2_default;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_00413014:
      iVar6 = 1;
    }
    else {
LAB_00413214:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_00413014;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00413214;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004135d2_default:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if ((iVar6 != 0) && (iStack_1c != 9)) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_234 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_230[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_230[1] = (this_ptr->base).base.velocity.z * delta_time;
    afStack_1c4[2] = fStack_234;
    afStack_1c4[(uint)bVar13 * -2 + 3] = afStack_230[(uint)bVar13 * -2];
    afStack_1c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_230[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    pCVar14 = &(this_ptr->base).base.position_delta;
    fStack_e4 = afStack_1c4[2] + pCVar14->x;
    fStack_e0 = afStack_1c4[3] + (this_ptr->base).base.position_delta.y;
    fStack_dc = fStack_1b4 + (this_ptr->base).base.position_delta.z;
    fStack_1c8 = fStack_e4;
    afStack_1c4[(uint)bVar13 * -2] = afStack_f8[(uint)bVar13 * -2 + 6];
    afStack_1c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1a4 = fStack_1c8 + pCVar16->x;
    fStack_1a0 = afStack_1c4[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_19c = afStack_1c4[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_d8.x = fStack_1a4;
    *(float *)((int)&CStack_d8 + (uint)bVar13 * -8 + 4) = afStack_1c4[(uint)bVar13 * -2 + 9];
    *(float *)((int)&CStack_d8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         afStack_1c4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar14->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar17 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar17;
    pCVar16->x = fVar17;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_d8);
  }
  if (iStack_1c != 0xd) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
