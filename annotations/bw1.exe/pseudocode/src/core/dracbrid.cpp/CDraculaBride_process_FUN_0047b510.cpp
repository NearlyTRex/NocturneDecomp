// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_0047b510
// Address: 0047b510
// Address Range: [[0047b510, 0047cc13]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_0047b510(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_0047b510(CDraculaBride *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDemonActor_vtable *pCVar2;
  CBodyPart *pCVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  CDeformableModelInstance *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CDraculaBride *pCVar10;
  EDeathState EVar11;
  CDemonActor *pCVar12;
  CPathMap *pCVar13;
  CLocation *pCVar14;
  uint *puVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  ulonglong uVar20;
  float afStackY_1324 [837];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar21;
  float *pfVar22;
  CGore *this_ptr_01;
  CVector3f *pCVar23;
  float fVar24;
  SDamageInfo *pSVar25;
  EBloodType blood_type;
  float fVar26;
  char acStack_5f8 [100];
  char acStack_594 [100];
  char acStack_530 [100];
  char acStack_4cc [100];
  SDamageInfo SStack_468;
  SDamageInfo SStack_42c;
  SDamageInfo SStack_3f0;
  SDamageInfo SStack_3b4;
  SDamageInfo SStack_378;
  float fStack_33c;
  float afStack_338 [5];
  CVector3f CStack_324;
  uint uStack_318;
  float afStack_314 [5];
  uint uStack_300;
  float fStack_2f4;
  CVector3f CStack_2e8;
  float fStack_2dc;
  float afStack_2d8 [6];
  float afStack_2c0 [2];
  CVector3f CStack_2b8;
  float fStack_2ac;
  float afStack_2a8 [5];
  CVector3f CStack_294;
  float fStack_288;
  float afStack_284 [5];
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  CVector3f CStack_264;
  CVector3f CStack_258;
  float fStack_24c;
  float afStack_248 [5];
  CVector3f CStack_234;
  float fStack_228;
  float afStack_224 [2];
  CVector3f CStack_21c;
  CVector3f CStack_210;
  float fStack_204;
  float afStack_200 [5];
  float afStack_1ec [3];
  CVector3f CStack_1e0;
  float fStack_1d4;
  float afStack_1d0 [2];
  CVector3f CStack_1c8;
  float fStack_1bc;
  float afStack_1b8 [5];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  CVector3f CStack_198;
  float fStack_18c;
  float afStack_188 [4];
  float fStack_178;
  float afStack_174 [3];
  float afStack_168 [3];
  uint uStack_15c;
  float fStack_158;
  CVector3f CStack_150;
  CVector3f CStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [5];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [5];
  CVector3f CStack_9c;
  uint uStack_90;
  float afStack_8c [5];
  uint uStack_78;
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  CDeformableModelInstance *pCStack_3c;
  CSkeleton *pCStack_38;
  CSkeleton *pCStack_34;
  CMotionController *pCStack_30;
  CDeformableModelInstance *pCStack_2c;
  int iStack_28;
  int iStack_24;
  CVector3f *pCStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar16 = 0;
  if (this_ptr->exploded != 0) {
    fVar24 = this_ptr->fade_timer - delta_time;
    this_ptr->fade_timer = fVar24;
    if (0.0 <= fVar24) {
      if (0 < this_ptr->part_count) {
        fVar17 = (float10)_DAT_005ff1a0;
        fVar18 = (float10)_DAT_005dae85;
        pCVar10 = this_ptr;
        do {
          pCVar3 = pCVar10->part_list[0];
          (pCVar3->base).is_transparent = 1;
          pCVar3->transparent_geometry_flag = 1;
          fVar19 = ((float10)this_ptr->fade_timer * fVar18) / fVar17;
          uVar20 = round();
          *(int *)((int)uVar20 + 0xcc0) = (int)ROUND(fVar19);
          pCVar10 = (CDraculaBride *)((pCVar10->base).base.base.actor_name + 4);
        } while ((int)((ulonglong)uVar20 >> 0x20) < this_ptr->part_count);
      }
    }
    else {
      this_ptr->exploded = 0;
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      this_ptr->fade_timer = 0.0;
      iVar7 = 0;
      pCVar10 = this_ptr;
      if (0 < this_ptr->part_count) {
        do {
          (pCVar10->part_list[0]->base).lifecycle_state = ACTOR_DESTROYED;
          iVar7 = iVar7 + 1;
          pCVar10 = (CDraculaBride *)((pCVar10->base).base.base.actor_name + 4);
        } while (iVar7 < this_ptr->part_count);
      }
    }
  }
  core_dracbrid_cpp_FUN_0047de00(this_ptr,delta_time);
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  if (0.0 <= this_ptr->action_delay) {
    this_ptr->action_delay = this_ptr->action_delay - delta_time;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_4c = delta_time * (this_ptr->base).speed;
  pCStack_30 = &(this_ptr->base).base.model.base;
  while (0.0 < fStack_4c) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_30,afStack_8c + 0x10);
    if (iVar7 == 0x29a) {
      (this_ptr->base).base.damage_decal_count = 0;
      afStack_2d8[2] = 0.0;
      afStack_2d8[3] = 20.0;
      afStack_2d8[4] = 20.0;
      core_actor_cpp_FUN_00408ac0(this_ptr,afStack_2d8 + 2);
      iVar7 = 1;
      pCVar23 = &CStack_210;
      fVar24 = -1.0;
      CStack_210.x = fStack_1d4;
      *(float *)((int)&CStack_210 + (uint)bVar16 * -8 + 4) = afStack_1d0[(uint)bVar16 * -2];
      pCVar10 = this_ptr;
      *(float *)((int)&CStack_210 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_1d0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      core_dracbrid_cpp_CDraculaBride_explode_FUN_0047cc20(pCVar10,pCVar23,fVar24,iVar7);
      this_ptr->exploded = 1;
      pCVar2 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->fade_timer = _DAT_005ff1a0;
      (*pCVar2->playAmbientSound)((CDemonActor *)this_ptr,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar7);
    }
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_30);
  iVar7 = pSVar8->state_index;
  if (iVar7 == 9) {
    fVar26 = _DAT_005ff194 * delta_time;
    fVar24 = (this_ptr->base).speed;
    (this_ptr->base).base.turn_speed = _DAT_005ff198 * delta_time * (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = fVar24 * fVar26;
  }
  else {
    fVar26 = _DAT_005ff190 * delta_time;
    fVar24 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.turn_speed = fVar26 * fVar24;
  }
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 != 0) {
    EVar4 = (this_ptr->base).base.walk_state;
    if (EVar4 < 2) {
      if (EVar4 == WALK_STATE_WALKING) {
LAB_0047b7c3:
        iVar7 = 0xe;
      }
      else {
LAB_0047ba2f:
        iVar7 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar7,1);
    }
    else {
      if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0047b7c3;
      if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0047ba2f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto switchD_0047ba56_default;
  }
  switch(iVar7) {
  case 0:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0xe,1);
      }
      break;
    }
    iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.25);
    if ((iVar7 != 0) &&
       (iVar7 = core_actor_cpp_isOfClass_FUN_0040c550
                          (&((this_ptr->base).victim)->base,"CHero"), iVar7 != 0)) {
      iVar9 = 0;
      iVar7 = 0;
      while ((iVar9 < g_CDemonSetPtr->enemy_count &&
             ((pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c600
                                   (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar12 == (CDemonActor *)0x0 || (*(int *)(pCVar12[0x91].actor_name + 0x1c) == 0)))))
      {
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 4;
      }
      if (iVar9 == g_CDemonSetPtr->enemy_count) {
        _sprintf(acStack_530,"bride-%d?.wav");
        core_dracbrid_cpp_FUN_0047d920(this_ptr,acStack_530,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0x17,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
        pCVar5 = (this_ptr->base).victim;
        pCVar14 = &(pCVar5->base).location;
        this_ptr->mist_state = 1;
        if ((CLocation *)&this_ptr->new_pos != pCVar14) {
          (this_ptr->new_pos).x = (pCVar14->position).x;
          (this_ptr->new_pos).y = (pCVar5->base).location.position.y;
          (this_ptr->new_pos).z = (pCVar5->base).location.position.z;
        }
        this_ptr->vanish_timer = 0.0;
        break;
      }
    }
    if (this_ptr->action_delay < 0.0) {
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(2.0,20.0);
      this_ptr->action_delay = fStack_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0xd,1);
      break;
    }
    goto LAB_0047c5d3;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_3f0);
    SStack_3f0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
    pSVar25 = &SStack_3f0;
    SStack_3f0.attacker = (CDemonActor *)this_ptr;
    SStack_3f0.wielder = (CDemonActor *)this_ptr;
    fVar24 = 0.4;
    fStack_14 = SStack_3f0.damage_amount;
    core_xform_cpp_FUN_005b5080
              (&DAT_02c8af28,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01bc0d34);
    pfVar22 = afStack_284 + 2;
    afStack_284[2] = afStack_314[2];
    afStack_284[(uint)bVar16 * -2 + 3] = afStack_314[(uint)bVar16 * -2 + 3];
    afStack_284[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_314[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
    pCVar23 = &CStack_c0;
    CStack_c0.x = fStack_2f4;
    *(float *)((int)&CStack_c0 + (uint)bVar16 * -8 + 4) = afStack_314[(uint)bVar16 * -2 + 9];
    pCVar10 = this_ptr;
    *(float *)((int)&CStack_c0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_314[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar23,fVar24,pSVar25);
    this_ptr->attack_landed = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_42c);
    SStack_42c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
    pSVar25 = &SStack_42c;
    SStack_42c.attacker = (CDemonActor *)this_ptr;
    SStack_42c.wielder = (CDemonActor *)this_ptr;
    fVar24 = 0.4;
    fStack_14 = SStack_42c.damage_amount;
    core_xform_cpp_FUN_005b5080
              (&DAT_02c8af28,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01bc0d34);
    pfVar22 = afStack_8c + 2;
    afStack_8c[2] = (float)uStack_78;
    afStack_8c[(uint)bVar16 * -2 + 3] = afStack_8c[(uint)bVar16 * -2 + 6];
    afStack_8c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_8c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
    pCVar23 = &CStack_d8;
    CStack_d8.x = afStack_200[2];
    *(float *)((int)&CStack_d8 + (uint)bVar16 * -8 + 4) = afStack_200[(uint)bVar16 * -2 + 3];
    pCVar10 = this_ptr;
    *(float *)((int)&CStack_d8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_200[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar23,fVar24,pSVar25);
    break;
  case 7:
    if (this_ptr->exploded == 0) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                (&(this_ptr->base).base.model,_DAT_01bc0d50,&CStack_21c);
      pfVar22 = afStack_188 + 5;
      afStack_174[0] = CStack_21c.x;
      afStack_188[(uint)bVar16 * -2 + 6] = *(float *)((int)&CStack_21c + (uint)bVar16 * -8 + 4);
      afStack_188[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
           *(float *)((int)&CStack_21c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
      pCVar23 = (CVector3f *)&(this_ptr->base).base.base.orient;
      iVar9 = 0;
      fStack_24c = fStack_204;
      afStack_248[(uint)bVar16 * -2] = afStack_200[(uint)bVar16 * -2];
      afStack_248[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_200[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      iVar7 = 1;
      CStack_264.x = fStack_24c;
      *(float *)((int)&CStack_264 + (uint)bVar16 * -8 + 4) = afStack_248[(uint)bVar16 * -2];
      *(float *)((int)&CStack_264 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_248[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
                (0x01C57074,&CStack_264,pCVar23,iVar7,iVar9);
      iVar9 = 0;
      iVar7 = 1;
      puVar15 = (uint *)((int)this_ptr + (uint)bVar16 * -8 + 0x34);
      CStack_234.x = (this_ptr->base).base.base.orient.vec.x;
      *(uint *)((int)&CStack_234 + (uint)bVar16 * -8 + 4) = *puVar15;
      *(uint *)((int)&CStack_234 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           puVar15[(uint)bVar16 * -2 + 1];
      CStack_234.x = CStack_234.x + _DAT_005dae9d;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
                (0x01C57074,&CStack_264,&CStack_234,iVar7,iVar9);
    }
    break;
  case 8:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0xe,1);
      }
    }
    else {
      if (((this_ptr->base).base.hit_points < _DAT_005ff18c) || (this_ptr->action_delay < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0,1);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(2.0,20.0);
        this_ptr->action_delay = fStack_14;
      }
      pCVar6 = &(this_ptr->base).base.model;
      if (this_ptr->attack_landed == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,0x19,1);
        this_ptr->attack_landed = 0;
      }
    }
    break;
  case 9:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_5f8,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_0047d920(this_ptr,acStack_5f8,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_0047d920(this_ptr,acStack_5f8,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar6 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CCharacter *)0x0) {
      if (0.0 <= this_ptr->action_delay) {
        fVar26 = 0.08726646;
        fVar24 = 0.5;
        CStack_144.x = 0.0;
        CStack_144.z = 0x40000000;
        pCVar23 = &CStack_144;
        CStack_144.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        pCVar13 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar13,pCVar23,
                           fVar24,fVar26);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,8,1);
        }
        else if (iVar7 < 1) {
          pCVar5 = (this_ptr->base).victim;
          fStack_1a4 = (pCVar5->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          fStack_1a0 = (pCVar5->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          fStack_19c = (pCVar5->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_cc = fStack_1a4;
          afStack_c8[(uint)bVar16 * -2] = afStack_1b8[(uint)bVar16 * -2 + 6];
          afStack_c8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_1b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
          if (&fStack_138 != &fStack_cc) {
            fStack_138 = fStack_cc;
            fStack_134 = afStack_c8[0];
            fStack_130 = afStack_c8[1];
          }
          if ((float)_DAT_005dae8d <
              SQRT(fStack_130 * fStack_130 + fStack_138 * fStack_138 + fStack_134 * fStack_134)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&fStack_138);
            uStack_15c = uStack_90;
            afStack_188[(uint)bVar16 * -2 + 0xc] = afStack_8c[(uint)bVar16 * -2];
            afStack_188[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
                 afStack_8c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  (fStack_158 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005dae95) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-0.7853982,0.7853982);
              (this_ptr->base).base.base.orient.vec.y =
                   fStack_14 + (this_ptr->base).base.base.orient.vec.y;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,3,1);
            }
          }
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,2,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-bite?.wav");
          (this_ptr->base).attack_cooldown = 1.0;
        }
      }
      else {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(2.0,20.0);
        this_ptr->action_delay = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,0,1);
      }
      break;
    }
    iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
    if (iVar7 == 0) break;
LAB_0047c5d3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,0xe,1);
    break;
  case 0xc:
    iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))(iVar7);
    if ((iVar7 == 0) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,this_ptr->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0xd,1);
    }
    break;
  case 0xe:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_4cc,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_0047d920(this_ptr,acStack_4cc,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_0047d920(this_ptr,acStack_4cc,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    fVar24 = 0x3FC00000;
    pCVar6 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,0,1);
      }
    }
    else {
      fStack_48 = 0x3FC00000;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      CStack_1c8.x = 0.0;
      CStack_1c8.y = 0.0;
      fVar26 = 0.08726646;
      CStack_1c8.z = fVar24;
      pCVar23 = &CStack_1c8;
      fVar24 = 0.5;
      pCVar5 = (this_ptr->base).victim;
      pCVar13 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar13,pCVar23,fVar24,fVar26);
      if (iVar7 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n");
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,0,1);
      }
      else if ((0 < iVar7) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar6->base,0x13,1);
        }
        if (iVar7 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x14,1);
        }
        if (iVar7 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,0x15,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-swipe?.wav");
        }
        (this_ptr->base).attack_cooldown = 1.0;
      }
    }
    break;
  case 0xf:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->rise_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_0047cbfb_caseD_10;
  case 0x11:
    if (((this_ptr->base).pool_me != 0) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) break;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
              (&(this_ptr->base).base.model,0,&CStack_2b8);
    pfVar22 = afStack_200 + 5;
    afStack_1ec[0] = CStack_2b8.x;
    afStack_200[(uint)bVar16 * -2 + 6] = *(float *)((int)&CStack_2b8 + (uint)bVar16 * -8 + 4);
    afStack_200[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
         *(float *)((int)&CStack_2b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
    blood_type = BLOOD_TYPE_RED;
    pCVar23 = &CStack_120;
    CStack_120.x = afStack_248[2];
    *(float *)((int)&CStack_120 + (uint)bVar16 * -8 + 4) = afStack_248[(uint)bVar16 * -2 + 3];
    this_ptr_01 = g_CGorePtr;
    *(float *)((int)&CStack_120 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_248[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar23,blood_type);
    goto switchD_0047cbfb_caseD_10;
  case 0x12:
    iVar7 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))(iVar7);
    if ((iVar7 == 0) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,this_ptr->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_468);
    SStack_468.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
    pSVar25 = &SStack_468;
    SStack_468.attacker = (CDemonActor *)this_ptr;
    SStack_468.wielder = (CDemonActor *)this_ptr;
    fVar24 = 0.4;
    fStack_14 = SStack_468.damage_amount;
    core_xform_cpp_FUN_005b5080
              (&DAT_02c8af28,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01bc0d34);
    pfVar22 = afStack_104 + 2;
    afStack_104[2] = afStack_1b8[2];
    afStack_104[(uint)bVar16 * -2 + 3] = afStack_1b8[(uint)bVar16 * -2 + 3];
    afStack_104[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_1b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
    pCVar23 = &CStack_114;
    CStack_114.x = afStack_b0[2];
    *(float *)((int)&CStack_114 + (uint)bVar16 * -8 + 4) = afStack_b0[(uint)bVar16 * -2 + 3];
    pCVar10 = this_ptr;
    *(float *)((int)&CStack_114 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar23,fVar24,pSVar25);
    this_ptr->attack_landed = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_3b4);
    SStack_3b4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
    pSVar25 = &SStack_3b4;
    SStack_3b4.attacker = (CDemonActor *)this_ptr;
    SStack_3b4.wielder = (CDemonActor *)this_ptr;
    fVar24 = 0.4;
    fStack_14 = SStack_3b4.damage_amount;
    core_xform_cpp_FUN_005b5080
              (&DAT_02c8af28,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01bc0d34);
    pfVar22 = afStack_8c + 8;
    afStack_6c[0] = (float)uStack_318;
    afStack_8c[(uint)bVar16 * -2 + 9] = afStack_314[(uint)bVar16 * -2];
    afStack_8c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
         afStack_314[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
    pCVar23 = &CStack_f0;
    CStack_f0.x = fStack_33c;
    *(float *)((int)&CStack_f0 + (uint)bVar16 * -8 + 4) = afStack_338[(uint)bVar16 * -2];
    pCVar10 = this_ptr;
    *(float *)((int)&CStack_f0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_338[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar23,fVar24,pSVar25);
    this_ptr->attack_landed = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_378);
    SStack_378.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
    pSVar25 = &SStack_378;
    SStack_378.attacker = (CDemonActor *)this_ptr;
    SStack_378.wielder = (CDemonActor *)this_ptr;
    fVar24 = 0.4;
    fStack_14 = SStack_378.damage_amount;
    core_xform_cpp_FUN_005b5080
              (&DAT_02c8af28,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01bc0d3c);
    pfVar22 = afStack_338 + 2;
    afStack_338[2] = (float)uStack_300;
    afStack_338[(uint)bVar16 * -2 + 3] = afStack_314[(uint)bVar16 * -2 + 6];
    afStack_338[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_314[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
    core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
    pCVar23 = &CStack_258;
    CStack_258.x = fStack_12c;
    *(float *)((int)&CStack_258 + (uint)bVar16 * -8 + 4) = afStack_128[(uint)bVar16 * -2];
    pCVar10 = this_ptr;
    *(float *)((int)&CStack_258 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_128[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar23,fVar24,pSVar25);
    break;
  case 0x17:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_594,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_0047d920(this_ptr,acStack_594,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040cd00(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_0047d920(this_ptr,acStack_594,1.0);
      }
    }
    switch(this_ptr->mist_state) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0,1);
      break;
    case 1:
      fVar24 = this_ptr->vanish_timer + delta_time;
      this_ptr->vanish_timer = fVar24;
      if (0x3F800000 < fVar24) {
        this_ptr->mist_state = 2;
        this_ptr->vanish_timer = 0x3F800000;
      }
      pCVar6 = &(this_ptr->base).base.model;
      CStack_9c.x = 0.0;
      CStack_9c.y = 3.0;
      CStack_9c.z = 0.0;
      pCStack_38 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar6);
      iStack_18 = 0;
      if (0 < pCStack_38->bone_count) {
        do {
          pCStack_3c = pCVar6;
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                    (pCStack_3c,iStack_18,&CStack_198);
          pfVar22 = &fStack_288;
          fStack_288 = CStack_198.x;
          afStack_284[(uint)bVar16 * -2] = *(float *)((int)&CStack_198 + (uint)bVar16 * -8 + 4);
          afStack_284[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               *(float *)((int)&CStack_198 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
          iVar9 = 0xffff;
          pCVar23 = &CStack_9c;
          fVar24 = 0.5;
          CStack_294.x = fStack_b4;
          *(float *)((int)&CStack_294 + (uint)bVar16 * -8 + 4) = afStack_b0[(uint)bVar16 * -2];
          *(float *)((int)&CStack_294 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               afStack_b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          iVar7 = iStack_18 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                    (0x01C57074,&CStack_294,fVar24,pCVar23,iVar9);
          pCVar6 = pCStack_3c;
          iStack_18 = iVar7;
        } while (iVar7 < pCStack_38->bone_count);
      }
      break;
    case 2:
      iStack_28 = 0;
      iStack_44 = 1;
      pCStack_20 = &this_ptr->new_pos;
      for (iStack_24 = 0; fVar24 = 0x3F800000, iStack_24 < g_CDemonSetPtr->character_count;
          iStack_24 = iStack_24 + 1) {
        pCVar10 = *(CDraculaBride **)((int)g_CDemonSetPtr->characters + iStack_28);
        if (((pCVar10 != (CDraculaBride *)0x0) && (pCVar10 != this_ptr)) &&
           (EVar11 = (*(((pCVar10->base).base.base.vtable._uc)->_uc).getDeathState)
                               ((CCharacter *)pCVar10), (int)EVar11 < 1)) {
          fStack_270 = (pCVar10->base).base.base.location.position.x - pCStack_20->x;
          fStack_26c = (pCVar10->base).base.base.location.position.y - pCStack_20->y;
          fStack_268 = (pCVar10->base).base.base.location.position.z - pCStack_20->z;
          fStack_228 = fStack_270;
          afStack_224[(uint)bVar16 * -2] = afStack_284[(uint)bVar16 * -2 + 6];
          afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_284[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
          if (SQRT(afStack_224[1] * afStack_224[1] +
                   fStack_228 * fStack_228 + afStack_224[0] * afStack_224[0]) < (float)_DAT_005daead
             ) goto switchD_0047ba56_default;
        }
        iStack_28 = iStack_28 + 4;
      }
      if (iStack_44 != 0) {
        this_ptr->mist_state = 3;
        pCVar14 = &(this_ptr->base).base.base.location;
        this_ptr->vanish_timer = fVar24;
        (pCVar14->position).x = pCStack_20->x;
        (this_ptr->base).base.base.location.position.y = pCStack_20->y;
        (this_ptr->base).base.base.location.position.z = pCStack_20->z;
        pCVar5 = (this_ptr->base).victim;
        if (pCVar5 != (CCharacter *)0x0) {
          fStack_1bc = (pCVar5->base).location.position.x - (pCVar14->position).x;
          afStack_1b8[0] =
               (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_1b8[1] =
               (pCVar5->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          afStack_168[0] = fStack_1bc;
          afStack_188[(uint)bVar16 * -2 + 9] = afStack_1b8[(uint)bVar16 * -2];
          afStack_188[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
               afStack_1b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_188 + 8);
          pUVar1 = &(this_ptr->base).base.base.orient;
          fStack_18c = fStack_2ac;
          afStack_188[(uint)bVar16 * -2] = afStack_2a8[(uint)bVar16 * -2];
          afStack_188[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          if (pUVar1 != (UOrientationVector *)&fStack_18c) {
            (pUVar1->vec).x = fStack_18c;
            (this_ptr->base).base.base.orient.vec.y = afStack_188[0];
            (this_ptr->base).base.base.orient.vec.z = afStack_188[1];
          }
          (this_ptr->base).base.base.orient.vec.z = 0.0;
          (this_ptr->base).base.base.orient.vec.x = 0.0;
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
      }
      break;
    case 3:
      pCVar6 = &(this_ptr->base).base.model;
      CStack_150.x = 0.0;
      CStack_150.y = 3.0;
      CStack_150.z = 0.0;
      pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar6);
      iStack_1c = 0;
      pCStack_2c = pCVar6;
      if (0 < pCStack_34->bone_count) {
        do {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                    (pCStack_2c,iStack_1c,&CStack_1e0);
          pfVar22 = &fStack_108;
          fStack_108 = CStack_1e0.x;
          afStack_104[(uint)bVar16 * -2] = *(float *)((int)&CStack_1e0 + (uint)bVar16 * -8 + 4);
          afStack_104[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               *(float *)((int)&CStack_1e0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          core_actor_cpp_FUN_00408b40(this_ptr,pfVar22);
          iVar7 = 0xffff;
          pCVar23 = &CStack_150;
          fVar24 = 0.5;
          pCVar21 = &CStack_2e8;
          CStack_2e8.x = afStack_2a8[2];
          *(float *)((int)&CStack_2e8 + (uint)bVar16 * -8 + 4) = afStack_2a8[(uint)bVar16 * -2 + 3];
          this_ptr_00 = 0x01C57074;
          *(float *)((int)&CStack_2e8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               afStack_2a8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                    (this_ptr_00,pCVar21,fVar24,pCVar23,iVar7);
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < pCStack_34->bone_count);
      }
      fVar24 = this_ptr->vanish_timer - delta_time;
      this_ptr->vanish_timer = fVar24;
      if (fVar24 < 0.0) {
        this_ptr->vanish_timer = 0.0;
        this_ptr->mist_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_2c->base,0xe,1);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(2.0,20.0);
        this_ptr->action_delay = fStack_14;
      }
    }
    break;
  case 0x1a:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->rise_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,0,1);
    }
  }
switchD_0047ba56_default:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  iStack_40 = pSVar8->state_index;
  if ((((iStack_40 != 0x11) && (iStack_40 != 0x10)) && (iStack_40 != 0xf)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    if (iStack_40 == 3) {
      (this_ptr->base).base.model.accumulated_root_motion.z =
           (this_ptr->base).base.model.accumulated_root_motion.z * (float)_DAT_005daea5;
    }
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar10 = (CDraculaBride *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_2dc = (this_ptr->base).base.velocity.x * delta_time;
    afStack_2d8[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_2d8[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_e4 = fStack_2dc;
    afStack_e0[(uint)bVar16 * -2] = afStack_2d8[(uint)bVar16 * -2];
    afStack_e0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_2d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    pCVar23 = &(this_ptr->base).base.position_delta;
    afStack_188[2] = fStack_e4 + pCVar23->x;
    afStack_188[3] = afStack_e0[0] + (this_ptr->base).base.position_delta.y;
    fStack_178 = afStack_e0[1] + (this_ptr->base).base.position_delta.z;
    fStack_60 = afStack_188[2];
    afStack_8c[(uint)bVar16 * -2 + 0xc] = afStack_188[(uint)bVar16 * -2 + 3];
    afStack_8c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
         afStack_188[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    pCVar21 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_2d8[5] = fStack_60 + pCVar21->x;
    afStack_2c0[0] = fStack_5c + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_2c0[1] = fStack_58 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_324.x = afStack_2d8[5];
    *(float *)((int)&CStack_324 + (uint)bVar16 * -8 + 4) = afStack_2c0[(uint)bVar16 * -2];
    *(float *)((int)&CStack_324 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_2c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar23->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar24 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar24;
    pCVar21->x = fVar24;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_324);
  }
  if (iStack_40 != 0x17) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
switchD_0047cbfb_caseD_10:
  (this_ptr->base).pool_me = 1;
  goto switchD_0047ba56_default;
}
