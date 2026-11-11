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
  int iVar7;
  EDeathState EVar8;
  uint uVar9;
  int iVar10;
  CLocation *pCVar11;
  CPathMap *path_map;
  byte bVar12;
  float afStackY_1228 [997];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar13;
  CBatman *pCVar14;
  CGore *this_ptr_01;
  float *pfVar15;
  CVector3f *pCVar16;
  float fVar17;
  float min_distance;
  uint *puVar18;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_27c;
  float fStack_240;
  float afStack_23c [4];
  float fStack_22c;
  uint uStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
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
  float afStack_18c [3];
  uint uStack_180;
  float fStack_174;
  float afStack_168 [3];
  float fStack_15c;
  uint uStack_158;
  float fStack_154;
  CVector3f CStack_150;
  uint uStack_144;
  float afStack_140 [5];
  float fStack_12c;
  uint uStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  CVector3f CStack_108;
  uint uStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  uint uStack_cc;
  float afStack_c8 [5];
  float fStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [5];
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
  
  bVar12 = 0;
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
  iVar6 = core_motion_cpp_FUN_005035c0(pCVar5);
  iVar6 = *(int *)(iVar6 + 0x24);
  iStack_1c = iVar6;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
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
          iVar7 = 0;
          iVar6 = 0;
          while ((iVar6 < g_CDemonSetPtr->enemy_count &&
                 ((iVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                      (*(uint *)((int)g_CDemonSetPtr->enemies + iVar7),
                                       g_CBatmanClassInfo.name_hash), iVar10 == 0 ||
                  (*(int *)(iVar10 + 0x10b94) == 0))))) {
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 4;
          }
          if (iVar6 == g_CDemonSetPtr->enemy_count) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0xd,1);
            pCVar4 = (this_ptr->base).victim;
            pCVar11 = &(pCVar4->base).location;
            this_ptr->mist_state = 1;
            if ((CLocation *)&this_ptr->new_pos != pCVar11) {
              (this_ptr->new_pos).x = (pCVar11->position).x;
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
        afStack_23c[(uint)bVar12 * -2 + 9] = afStack_1c4[(uint)bVar12 * -2 + 6];
        afStack_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
             afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
        if (SQRT(fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218) <
            0x40600000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_23c + 8);
          uStack_120 = uStack_fc;
          afStack_140[(uint)bVar12 * -2 + 9] = afStack_f8[(uint)bVar12 * -2];
          afStack_140[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
               afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                       (fStack_11c - (this_ptr->base).base.base.orient.vec.y);
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
        pCVar13 = &CStack_a8;
        CStack_a8.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar13,
                           min_distance,max_distance);
        if (-1 < iVar6) {
          pCVar11 = &(this_ptr->base).base.base.location;
          pCVar4 = (this_ptr->base).victim;
          afStack_f8[2] = (pCVar11->position).x - (pCVar4->base).location.position.x;
          afStack_f8[3] =
               (this_ptr->base).base.base.location.position.y - (pCVar4->base).location.position.y;
          fStack_e8 = (this_ptr->base).base.base.location.position.z -
                      (pCVar4->base).location.position.z;
          fStack_15c = afStack_f8[2];
          afStack_1c4[(uint)bVar12 * -2 + 0x1b] = afStack_f8[(uint)bVar12 * -2 + 3];
          afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c] =
               afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          fStack_18 = SQRT(fStack_154 * fStack_154 + fStack_15c * fStack_15c);
          uStack_158 = 0;
          fStack_50 = fStack_18;
          if ((fStack_18 <= fStack_48) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            fStack_210 = (pCVar4->base).location.position.x - (pCVar11->position).x;
            fStack_20c = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_208 = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            afStack_168[0] = fStack_210;
            afStack_1c4[(uint)bVar12 * -2 + 0x18] = afStack_23c[(uint)bVar12 * -2 + 0xc];
            afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
                 afStack_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_1c4 + 0x17);
            afStack_1e8[2] = afStack_68[2];
            afStack_1e8[(uint)bVar12 * -2 + 3] = afStack_68[(uint)bVar12 * -2 + 3];
            afStack_1e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                 afStack_68[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (afStack_1e8[3] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005cbb4e) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_44,3,1);
              uVar9 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar6 = sound_sndmain_cpp_FUN_00550b70(uVar9);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar6 == 0)) {
                uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar9;
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
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007bc7c0);
      pfVar15 = afStack_8c + 2;
      afStack_8c[2] = (float)uStack_228;
      afStack_8c[(uint)bVar12 * -2 + 3] = afStack_23c[(uint)bVar12 * -2 + 6];
      afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar15);
      pCVar13 = &CStack_78;
      CStack_78.x = fStack_240;
      *(float *)((int)&CStack_78 + (uint)bVar12 * -8 + 4) = afStack_23c[(uint)bVar12 * -2];
      pCVar14 = this_ptr;
      *(float *)((int)&CStack_78 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
           afStack_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar14->base,pCVar13,fVar17,damage_info)
      ;
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_005469a0(pCVar5,0);
        puVar18 = &uStack_144;
        uStack_144 = afStack_140[2];
        afStack_140[(uint)bVar12 * -2] = afStack_140[(uint)bVar12 * -2 + 3];
        afStack_140[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             afStack_140[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar18);
        blood_type = BLOOD_TYPE_RED;
        pCVar13 = &CStack_150;
        CStack_150.x = fStack_12c;
        *(float *)((int)&CStack_150 + (uint)bVar12 * -8 + 4) = afStack_140[(uint)bVar12 * -2 + 6];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_150 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_140[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar13,blood_type);
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
        iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
        if ((iVar6 == 0) &&
           ((iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar6 == 0 &&
            (iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]), iVar6 == 0)))) {
          uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"batman-alert.wav");
          this_ptr->sfx_handles[0] = uVar9;
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
            core_skeleton_cpp_FUN_00546a90(pCStack_3c,iStack_20);
            puVar18 = &uStack_cc;
            uStack_cc = afStack_c8[2];
            afStack_c8[(uint)bVar12 * -2] = afStack_c8[(uint)bVar12 * -2 + 3];
            afStack_c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            core_actor_cpp_FUN_00408d70(this_ptr,puVar18);
            iVar7 = 0xffff;
            pCVar13 = &CStack_108;
            fVar17 = 0.5;
            CStack_1f8.x = fStack_b4;
            *(float *)((int)&CStack_1f8 + (uint)bVar12 * -8 + 4) = afStack_c8[(uint)bVar12 * -2 + 6]
            ;
            *(float *)((int)&CStack_1f8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 afStack_c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
            iVar6 = iStack_20 + 1;
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                      (0x01C3DEB4,&CStack_1f8,fVar17,pCVar13,iVar7);
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
          pCVar14 = *(CBatman **)((int)g_CDemonSetPtr->characters + iStack_2c);
          if (((pCVar14 != (CBatman *)0x0) && (pCVar14 != this_ptr)) &&
             (EVar8 = (*(((pCVar14->base).base.base.vtable._uc)->_uc).getDeathState)
                                ((CCharacter *)pCVar14), (int)EVar8 < 1)) {
            fStack_90 = (pCVar14->base).base.base.location.position.x - pCStack_28->x;
            afStack_8c[0] = (pCVar14->base).base.base.location.position.y - pCStack_28->y;
            afStack_8c[1] = (pCVar14->base).base.base.location.position.z - pCStack_28->z;
            fStack_198 = fStack_90;
            afStack_1c4[(uint)bVar12 * -2 + 0xc] = afStack_8c[(uint)bVar12 * -2];
            afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
                 afStack_8c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            if (SQRT(fStack_190 * fStack_190 + fStack_198 * fStack_198 + fStack_194 * fStack_194) <
                (float)_DAT_005cbb56) goto switchD_004135d2_default;
          }
          iStack_2c = iStack_2c + 4;
        }
        if (iStack_4c != 0) {
          this_ptr->mist_state = 3;
          pCVar11 = &(this_ptr->base).base.base.location;
          this_ptr->vanish_timer = fVar17;
          (pCVar11->position).x = pCStack_28->x;
          (this_ptr->base).base.base.location.position.y = pCStack_28->y;
          (this_ptr->base).base.base.location.position.z = pCStack_28->z;
          pCVar4 = (this_ptr->base).victim;
          if (pCVar4 != (CCharacter *)0x0) {
            fStack_204 = (pCVar4->base).location.position.x - (pCVar11->position).x;
            fStack_200 = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_1fc = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            fStack_6c = fStack_204;
            afStack_68[(uint)bVar12 * -2] = afStack_23c[(uint)bVar12 * -2 + 0xf];
            afStack_68[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_6c);
            pUVar1 = &(this_ptr->base).base.base.orient;
            fStack_114 = fStack_1ec;
            afStack_140[(uint)bVar12 * -2 + 0xc] = afStack_1e8[(uint)bVar12 * -2];
            afStack_140[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
                 afStack_1e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            if (pUVar1 != (UOrientationVector *)(afStack_140 + 0xb)) {
              (pUVar1->vec).x = fStack_114;
              (this_ptr->base).base.base.orient.vec.y = fStack_110;
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
            core_skeleton_cpp_FUN_00546a90(pCStack_40,iStack_24);
            pfVar15 = afStack_1c4 + 0xe;
            afStack_18c[0] = (float)uStack_180;
            afStack_1c4[(uint)bVar12 * -2 + 0xf] = afStack_1c4[(uint)bVar12 * -2 + 0x12];
            afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                 afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
            core_actor_cpp_FUN_00408d70(this_ptr,pfVar15);
            iVar6 = 0xffff;
            pCVar16 = &CStack_1d4;
            fVar17 = 0.5;
            pCVar13 = &CStack_9c;
            CStack_9c.x = fStack_174;
            *(float *)((int)&CStack_9c + (uint)bVar12 * -8 + 4) =
                 afStack_1c4[(uint)bVar12 * -2 + 0x15];
            this_ptr_00 = 0x01C3DEB4;
            *(float *)((int)&CStack_9c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
                 afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                      (this_ptr_00,pCVar13,fVar17,pCVar16,iVar6);
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
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
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
    afStack_23c[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_23c[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_22c = (this_ptr->base).base.velocity.z * delta_time;
    afStack_1c4[2] = afStack_23c[2];
    afStack_1c4[(uint)bVar12 * -2 + 3] = afStack_23c[(uint)bVar12 * -2 + 3];
    afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         afStack_23c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    pCVar13 = &(this_ptr->base).base.position_delta;
    fStack_e4 = afStack_1c4[2] + pCVar13->x;
    fStack_e0 = afStack_1c4[3] + (this_ptr->base).base.position_delta.y;
    fStack_dc = fStack_1b4 + (this_ptr->base).base.position_delta.z;
    fStack_1c8 = fStack_e4;
    afStack_1c4[(uint)bVar12 * -2] = afStack_f8[(uint)bVar12 * -2 + 6];
    afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_1a4 = fStack_1c8 + pCVar16->x;
    fStack_1a0 = afStack_1c4[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_19c = afStack_1c4[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_d8.x = fStack_1a4;
    *(float *)((int)&CStack_d8 + (uint)bVar12 * -8 + 4) = afStack_1c4[(uint)bVar12 * -2 + 9];
    *(float *)((int)&CStack_d8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_1c4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar13->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar17 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar17;
    pCVar16->x = fVar17;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_d8);
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
