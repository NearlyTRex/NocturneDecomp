// Name: core_batman.cpp_CBatman_process_FUN_00412ba0
// Address: 00412ba0
// Address Range: [[00412ba0, 00413961]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_process_FUN_00412ba0(CBatman *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_process_FUN_00412ba0(CBatman *this_ptr,float delta_time)

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
  int iVar11;
  CLocation *pCVar12;
  CPathMap *path_map;
  byte bVar13;
  float afStackY_1228 [982];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar14;
  CBatman *pCVar15;
  CGore *this_ptr_01;
  uint *puVar16;
  CVector3f *pCVar17;
  float fVar18;
  float min_distance;
  float *pfVar19;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_2b8 [4];
  uint uStack_2b4;
  CBatman *pCStack_284;
  CBatman *pCStack_280;
  SDamageInfo aSStack_27c [4];
  float fStack_278;
  CBatman *pCStack_248;
  CBatman *pCStack_244;
  uint uStack_240;
  float afStack_23c [2];
  CVector3f CStack_234;
  CVector3f CStack_228;
  float fStack_21c;
  float afStack_218 [2];
  CVector3f CStack_210;
  uint uStack_204;
  float afStack_200 [5];
  float fStack_1ec;
  uint uStack_1e0;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float afStack_1bc [3];
  uint uStack_1b0;
  float fStack_1ac;
  uint uStack_1a4;
  uint uStack_198;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  CVector3f CStack_174;
  CVector3f CStack_168;
  uint uStack_15c;
  float afStack_158 [5];
  float fStack_144;
  uint uStack_140;
  float fStack_13c;
  float afStack_138 [3];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [3];
  uint uStack_114;
  float fStack_110;
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [2];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [5];
  float fStack_cc;
  float fStack_c0;
  float afStack_b4 [3];
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  float fStack_44;
  CMotionController *pCStack_40;
  CSkeleton *pCStack_3c;
  CDeformableModelInstance *pCStack_38;
  CSkeleton *pCStack_34;
  CDeformableModelInstance *pCStack_30;
  int iStack_2c;
  int iStack_28;
  CVector3f *pCStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
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
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&(this_ptr->base).base.model.base,afStack_98 + 0x11);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar6);
  }
  fVar18 = (this_ptr->base).speed;
  *(float *)&(this_ptr->base).base.field_0x2524 =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar18);
  if ((((*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[5] * 4) == 0)
       && (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[3] * 4) == 0)
       ) || (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) ==
             0)) &&
     ((0.0 <= *(float *)&this_ptr->field_0xc268 &&
      (fVar18 = *(float *)&this_ptr->field_0xc268 + delta_time,
      *(float *)&this_ptr->field_0xc268 = fVar18, (float)_DAT_005d3ac1 <= fVar18)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_2b8);
    uStack_2b4 = 0x461c3f9a;
    pCStack_284 = this_ptr;
    pCStack_280 = this_ptr;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,aSStack_2b8);
    *(uint *)&this_ptr->field_0xc268 = 0xbf800000;
  }
  pCVar5 = &(this_ptr->base).base.model;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar5->base);
  iVar6 = *(int *)(pSVar7 + 0x24);
  iStack_18 = iVar6;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar5->base,1,1);
        }
      }
      else {
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd00(0.25);
        if ((iVar6 != 0) &&
           (iVar6 = core_actor_cpp_isOfClass_FUN_0040c550
                              (&((this_ptr->base).victim)->base,"CHero"), iVar6 != 0)) {
          iVar8 = 0;
          iVar6 = 0;
          while ((iVar6 < g_CDemonSetPtr->enemy_count &&
                 ((iVar11 = core_actor_cpp_castToClassHash_FUN_0040c600
                                      (*(uint *)((int)g_CDemonSetPtr->enemies + iVar8),
                                       g_CBatmanClassInfo.name_hash), iVar11 == 0 ||
                  (*(int *)(iVar11 + 0xc308) == 0))))) {
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + 4;
          }
          if (iVar6 == g_CDemonSetPtr->enemy_count) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0xd,1);
            pCVar4 = (this_ptr->base).victim;
            pCVar12 = &(pCVar4->base).location;
            this_ptr->mist_state = 1;
            if ((CLocation *)&this_ptr->new_pos != pCVar12) {
              (this_ptr->new_pos).x = (pCVar12->position).x;
              (this_ptr->new_pos).y = (pCVar4->base).location.position.y;
              (this_ptr->new_pos).z = (pCVar4->base).location.position.z;
            }
            iStack_18 = 0xd;
            pCVar3 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->vanish_timer = 0.0;
            (*pCVar3->playSound)((CDemonActor *)this_ptr,"batman-disappear.wav");
            break;
          }
        }
        pCVar4 = (this_ptr->base).victim;
        fStack_fc = (pCVar4->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        afStack_f8[0] =
             (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_f8[1] =
             (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        fStack_1d4 = fStack_fc;
        afStack_200[(uint)bVar13 * -2 + 0xc] = afStack_f8[(uint)bVar13 * -2];
        afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
             afStack_f8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        if (SQRT(fStack_1cc * fStack_1cc + fStack_1d4 * fStack_1d4 + fStack_1d0 * fStack_1d0) <
            0x40600000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_200 + 0xb);
          uStack_114 = uStack_1e0;
          afStack_158[(uint)bVar13 * -2 + 0x12] = afStack_200[(uint)bVar13 * -2 + 9];
          afStack_158[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
               afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
          fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                       (fStack_110 - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)_DAT_005d3ac9) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,3,1);
          }
        }
        core_batman_cpp_CBatman_pickRandomMovementState_FUN_00412b20(this_ptr);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar18 = 0x40600000;
      pCStack_40 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_40,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_40,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_44 = 0x40600000;
        min_distance = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_a8.x = 0.0;
        CStack_a8.z = fVar18;
        pCVar17 = &CStack_a8;
        CStack_a8.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar17,
                           min_distance,max_distance);
        if (-1 < iVar6) {
          pCVar12 = &(this_ptr->base).base.base.location;
          pCVar4 = (this_ptr->base).victim;
          fStack_6c = (pCVar12->position).x - (pCVar4->base).location.position.x;
          fStack_68 = (this_ptr->base).base.base.location.position.y -
                      (pCVar4->base).location.position.y;
          fStack_64 = (this_ptr->base).base.base.location.position.z -
                      (pCVar4->base).location.position.z;
          fStack_144 = fStack_6c;
          afStack_158[(uint)bVar13 * -2 + 6] = afStack_98[(uint)bVar13 * -2 + 0xc];
          afStack_158[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
          fStack_50 = SQRT(fStack_13c * fStack_13c + fStack_144 * fStack_144);
          uStack_140 = 0;
          fStack_4c = fStack_50;
          if ((fStack_50 <= fStack_44) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            fStack_12c = (pCVar4->base).location.position.x - (pCVar12->position).x;
            fStack_128 = (pCVar4->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            fStack_124 = (pCVar4->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            afStack_1bc[0] = fStack_12c;
            afStack_200[(uint)bVar13 * -2 + 0x12] = afStack_158[(uint)bVar13 * -2 + 0xc];
            afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
                 afStack_158[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_200 + 0x11);
            uStack_1b0 = uStack_198;
            afStack_200[(uint)bVar13 * -2 + 0x15] = afStack_200[(uint)bVar13 * -2 + 0x1b];
            afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
                 afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                         (fStack_1ac - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d3ac9) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_40,3,1);
              uVar10 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar6 = sound_sndmain_cpp_FUN_005735a0(uVar10);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]), iVar6 == 0)) {
                uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar10;
              }
            }
          }
          if ((this_ptr->base).guard_distance < fStack_4c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_27c);
      fStack_278 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      damage_info = aSStack_27c;
      pCStack_248 = this_ptr;
      pCStack_244 = this_ptr;
      fVar18 = 0.4;
      fStack_14 = fStack_278;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&(this_ptr->base).base.model.field_0xe80 + DAT_007c37c0 * 0x30);
      puVar16 = &uStack_240;
      uStack_240 = uStack_204;
      afStack_23c[(uint)bVar13 * -2] = afStack_200[(uint)bVar13 * -2];
      afStack_23c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar16);
      pCVar17 = &CStack_108;
      CStack_108.x = fStack_1ec;
      *(float *)((int)&CStack_108 + (uint)bVar13 * -8 + 4) = afStack_200[(uint)bVar13 * -2 + 6];
      pCVar15 = this_ptr;
      *(float *)((int)&CStack_108 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar15->base,pCVar17,fVar18,damage_info)
      ;
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_00569040(pCVar5,0);
        pfVar19 = afStack_158 + 8;
        afStack_138[0] = afStack_200[2];
        afStack_158[(uint)bVar13 * -2 + 9] = afStack_200[(uint)bVar13 * -2 + 3];
        afStack_158[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
             afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
        blood_type = BLOOD_TYPE_RED;
        pCVar17 = &CStack_210;
        CStack_210.x = fStack_cc;
        *(float *)((int)&CStack_210 + (uint)bVar13 * -8 + 4) = afStack_e0[(uint)bVar13 * -2 + 6];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_210 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar17,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim != (CCharacter *)0x0) ||
         (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                            (0x01C51D80,this_ptr->fall_event), iVar6 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0xb,1);
        iVar6 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[1]);
        if ((iVar6 == 0) &&
           ((iVar6 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[2]), iVar6 == 0 &&
            (iVar6 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]), iVar6 == 0)))) {
          uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          this_ptr->sfx_handles[0] = uVar10;
        }
      }
      break;
    case 0xb:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar5->base,0xc,1);
      }
      break;
    case 0xd:
      switch(this_ptr->mist_state) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar5->base,0,1);
        break;
      case 1:
        fVar18 = this_ptr->vanish_timer + delta_time;
        this_ptr->vanish_timer = fVar18;
        if (0x3F800000 < fVar18) {
          this_ptr->mist_state = 2;
          this_ptr->vanish_timer = 0x3F800000;
        }
        pCVar5 = &(this_ptr->base).base.model;
        CStack_f0.x = 0.0;
        CStack_f0.y = 3.0;
        CStack_f0.z = 0.0;
        pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar5);
        iStack_20 = 0;
        if (0 < pCStack_34->bone_count) {
          do {
            pCStack_30 = pCVar5;
            core_skeleton_cpp_FUN_00569130(pCStack_30,iStack_20);
            pfVar19 = afStack_e0 + 0xb;
            afStack_b4[0] = (float)uStack_15c;
            afStack_e0[(uint)bVar13 * -2 + 0xc] = afStack_158[(uint)bVar13 * -2];
            afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
                 afStack_158[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
            iVar8 = 0xffff;
            pCVar17 = &CStack_f0;
            fVar18 = 0.5;
            CStack_174.x = afStack_158[2];
            *(float *)((int)&CStack_174 + (uint)bVar13 * -8 + 4) =
                 afStack_158[(uint)bVar13 * -2 + 3];
            *(float *)((int)&CStack_174 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 afStack_158[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
            iVar6 = iStack_20 + 1;
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                      (0x01C57074,&CStack_174,fVar18,pCVar17,iVar8);
            pCVar5 = pCStack_30;
            iStack_20 = iVar6;
          } while (iVar6 < pCStack_34->bone_count);
        }
        break;
      case 2:
        iStack_2c = 0;
        iStack_48 = 1;
        pCStack_24 = &this_ptr->new_pos;
        for (iStack_28 = 0; fVar18 = 0x3F800000, iStack_28 < g_CDemonSetPtr->character_count;
            iStack_28 = iStack_28 + 1) {
          pCVar15 = *(CBatman **)((int)g_CDemonSetPtr->characters + iStack_2c);
          if (((pCVar15 != (CBatman *)0x0) && (pCVar15 != this_ptr)) &&
             (EVar9 = (*(((pCVar15->base).base.base.vtable._uc)->_uc).getDeathState)
                                ((CCharacter *)pCVar15), (int)EVar9 < 1)) {
            fStack_9c = (pCVar15->base).base.base.location.position.x - pCStack_24->x;
            afStack_98[0] = (pCVar15->base).base.base.location.position.y - pCStack_24->y;
            afStack_98[1] = (pCVar15->base).base.base.location.position.z - pCStack_24->z;
            fStack_21c = fStack_9c;
            afStack_218[(uint)bVar13 * -2] = afStack_98[(uint)bVar13 * -2];
            afStack_218[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            if (SQRT(afStack_218[1] * afStack_218[1] +
                     fStack_21c * fStack_21c + afStack_218[0] * afStack_218[0]) <
                (float)_DAT_005d3ad1) goto switchD_004132d2_default;
          }
          iStack_2c = iStack_2c + 4;
        }
        if (iStack_48 != 0) {
          this_ptr->mist_state = 3;
          pCVar12 = &(this_ptr->base).base.base.location;
          this_ptr->vanish_timer = fVar18;
          (pCVar12->position).x = pCStack_24->x;
          (this_ptr->base).base.base.location.position.y = pCStack_24->y;
          (this_ptr->base).base.base.location.position.z = pCStack_24->z;
          pCVar4 = (this_ptr->base).victim;
          if (pCVar4 != (CCharacter *)0x0) {
            fStack_e4 = (pCVar4->base).location.position.x - (pCVar12->position).x;
            afStack_e0[0] =
                 (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            afStack_e0[1] =
                 (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z
            ;
            afStack_e0[2] = fStack_e4;
            afStack_e0[(uint)bVar13 * -2 + 3] = afStack_e0[(uint)bVar13 * -2];
            afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_e0 + 2);
            pUVar1 = &(this_ptr->base).base.base.orient;
            fStack_1c8 = fStack_180;
            afStack_200[(uint)bVar13 * -2 + 0xf] = afStack_200[(uint)bVar13 * -2 + 0x21];
            afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                 afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
            if (pUVar1 != (UOrientationVector *)(afStack_200 + 0xe)) {
              (pUVar1->vec).x = fStack_1c8;
              (this_ptr->base).base.base.orient.vec.y = fStack_1c4;
              (this_ptr->base).base.base.orient.vec.z = fStack_1c0;
            }
            (this_ptr->base).base.base.orient.vec.z = 0.0;
            (this_ptr->base).base.base.orient.vec.x = 0.0;
          }
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"batman-disappear.wav");
        }
        break;
      case 3:
        CStack_168.x = 0.0;
        CStack_168.y = 3.0;
        CStack_168.z = 0.0;
        pCStack_3c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar5);
        iStack_1c = 0;
        if (0 < pCStack_3c->bone_count) {
          do {
            pCStack_38 = pCVar5;
            core_skeleton_cpp_FUN_00569130(pCStack_38,iStack_1c);
            pfVar19 = afStack_158 + 0xe;
            afStack_120[0] = (float)uStack_1a4;
            afStack_158[(uint)bVar13 * -2 + 0xf] = afStack_200[(uint)bVar13 * -2 + 0x18];
            afStack_158[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                 afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
            core_actor_cpp_FUN_00408b40(this_ptr,pfVar19);
            iVar6 = 0xffff;
            pCVar17 = &CStack_168;
            fVar18 = 0.5;
            pCVar14 = &CStack_234;
            CStack_234.x = fStack_c0;
            *(float *)((int)&CStack_234 + (uint)bVar13 * -8 + 4) = afStack_e0[(uint)bVar13 * -2 + 9]
            ;
            this_ptr_00 = 0x01C57074;
            *(float *)((int)&CStack_234 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 afStack_e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                      (this_ptr_00,pCVar14,fVar18,pCVar17,iVar6);
            iStack_1c = iStack_1c + 1;
            pCVar5 = pCStack_38;
          } while (iStack_1c < pCStack_3c->bone_count);
        }
        fVar18 = this_ptr->vanish_timer - delta_time;
        this_ptr->vanish_timer = fVar18;
        if (fVar18 < 0.0) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->mist_state = 0;
          core_batman_cpp_CBatman_pickRandomMovementState_FUN_00412b20(this_ptr);
        }
      }
    }
    goto switchD_004132d2_default;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_00412c9d:
      iVar6 = 1;
    }
    else {
LAB_00412f1d:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_00412c9d;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00412f1d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004132d2_default:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if ((iVar6 != 0) && (iStack_18 != 9)) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_84 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_80 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_7c = (this_ptr->base).base.velocity.z * delta_time;
    afStack_98[2] = fStack_84;
    afStack_98[(uint)bVar13 * -2 + 3] = afStack_98[(uint)bVar13 * -2 + 6];
    afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    pCVar17 = &(this_ptr->base).base.position_delta;
    fStack_18c = afStack_98[2] + pCVar17->x;
    fStack_188 = afStack_98[3] + (this_ptr->base).base.position_delta.y;
    fStack_184 = fStack_88 + (this_ptr->base).base.position_delta.z;
    fStack_60 = fStack_18c;
    afStack_98[(uint)bVar13 * -2 + 0xf] = afStack_200[(uint)bVar13 * -2 + 0x1e];
    afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
         afStack_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
    pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_78 = fStack_60 + pCVar14->x;
    fStack_74 = fStack_5c + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_70 = fStack_58 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_228.x = fStack_78;
    *(float *)((int)&CStack_228 + (uint)bVar13 * -8 + 4) = afStack_98[(uint)bVar13 * -2 + 9];
    *(float *)((int)&CStack_228 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
         afStack_98[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar17->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_228);
  }
  if (iStack_18 != 0xd) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
