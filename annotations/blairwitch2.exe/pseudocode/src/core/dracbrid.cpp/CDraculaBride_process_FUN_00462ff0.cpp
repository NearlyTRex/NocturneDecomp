// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_00462ff0
// Address: 00462ff0
// Address Range: [[00462ff0, 004646f3]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00462ff0(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00462ff0(CDraculaBride *this_ptr,float delta_time)

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
  double dVar17;
  float afStackY_1324 [837];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar18;
  CGore *this_ptr_01;
  CVector3f *pCVar19;
  float fVar20;
  SDamageInfo *pSVar21;
  EBloodType blood_type;
  float fVar22;
  char acStack_5f8 [100];
  char acStack_594 [100];
  char acStack_530 [100];
  char acStack_4cc [100];
  SDamageInfo SStack_468;
  SDamageInfo SStack_42c;
  SDamageInfo SStack_3f0;
  SDamageInfo SStack_3b4;
  SDamageInfo SStack_378;
  CVector3f CStack_33c;
  CVector3f CStack_330;
  CVector3f CStack_324;
  CVector3f CStack_318;
  CVector3f CStack_30c;
  CVector3f CStack_300;
  CVector3f CStack_2f4;
  CVector3f CStack_2e8;
  float fStack_2dc;
  float afStack_2d8 [2];
  CVector3f CStack_2d0;
  float fStack_2c4;
  float afStack_2c0 [2];
  CVector3f CStack_2b8;
  CVector3f CStack_2ac;
  CVector3f CStack_2a0;
  CVector3f CStack_294;
  CVector3f CStack_288;
  CVector3f CStack_27c;
  float fStack_270;
  float afStack_26c [2];
  CVector3f CStack_264;
  CVector3f CStack_258;
  float fStack_24c;
  float afStack_248 [2];
  CVector3f CStack_240;
  CVector3f CStack_234;
  float fStack_228;
  float afStack_224 [2];
  CVector3f CStack_21c;
  CVector3f CStack_210;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  CVector3f CStack_1ec;
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  float fStack_1bc;
  float afStack_1b8 [2];
  CVector3f CStack_1b0;
  float fStack_1a4;
  float afStack_1a0 [2];
  CVector3f CStack_198;
  float fStack_18c;
  float afStack_188 [4];
  float fStack_178;
  CVector3f CStack_174;
  CVector3f CStack_168;
  float fStack_15c;
  float afStack_158 [2];
  CVector3f CStack_150;
  CVector3f CStack_144;
  CVector3f CStack_138;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
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
    fVar20 = this_ptr->fade_timer - delta_time;
    this_ptr->fade_timer = fVar20;
    fVar22 = 5.0f;
    if (0.0 <= fVar20) {
      iVar7 = 0;
      if (0 < this_ptr->part_count) {
        fVar20 = (float)65535;
        pCVar10 = this_ptr;
        do {
          pCVar3 = pCVar10->part_list[0];
          (pCVar3->base).is_transparent = 1;
          pCVar3->transparent_geometry_flag = 1;
          iVar7 = iVar7 + 1;
          acStack_5f8[0] = -0x18;
          acStack_5f8[1] = '1';
          acStack_5f8[2] = 'F';
          acStack_5f8[3] = '\0';
          dVar17 = round((double)((this_ptr->fade_timer * fVar20) / fVar22))
          ;
          pCVar3->render_alpha = (int)ROUND(dVar17);
          pCVar10 = (CDraculaBride *)((pCVar10->base).base.base.actor_name + 4);
        } while (iVar7 < this_ptr->part_count);
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
  core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_004658e0(this_ptr,delta_time);
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
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
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,afStack_5c + 4);
    if (iVar7 == 0x29a) {
      (this_ptr->base).base.damage_decal_count = 0;
      CStack_2d0.x = 0.0;
      CStack_2d0.y = 20.0;
      CStack_2d0.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                ((CDemonActor *)this_ptr,&CStack_2d0,&CStack_1d4);
      iVar7 = 1;
      pCVar19 = &CStack_210;
      fVar20 = -1.0;
      CStack_210.x = CStack_1d4.x;
      *(uint *)((int)&CStack_210 + (uint)bVar16 * -8 + 4) =
           *(uint *)((int)&CStack_1d4 + (uint)bVar16 * -8 + 4);
      pCVar10 = this_ptr;
      *(uint *)((int)&CStack_210 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           *(uint *)((int)&CStack_1d4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
      core_dracbrid_cpp_CDraculaBride_explode_FUN_00464700(pCVar10,pCVar19,fVar20,iVar7);
      this_ptr->exploded = 1;
      pCVar2 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->fade_timer = 5.0f;
      (*pCVar2->playAmbientSound)((CDemonActor *)this_ptr,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar7);
    }
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(pCStack_30);
  iVar7 = pSVar8->state_index;
  if (iVar7 == 9) {
    fVar22 = 6.0f * delta_time;
    fVar20 = (this_ptr->base).speed;
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time * (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = fVar20 * fVar22;
  }
  else {
    fVar22 = 1.570796f * delta_time;
    fVar20 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.turn_speed = fVar22 * fVar20;
  }
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 != 0) {
    EVar4 = (this_ptr->base).base.walk_state;
    if (EVar4 < 2) {
      if (EVar4 == WALK_STATE_WALKING) {
LAB_004632a3:
        iVar7 = 0xe;
      }
      else {
LAB_0046350f:
        iVar7 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar7,1);
    }
    else {
      if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004632a3;
      if (EVar4 != WALK_STATE_NO_PATH) goto LAB_0046350f;
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
    goto switchD_00463536_default;
  }
  switch(iVar7) {
  case 0:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0xe,1);
      }
      break;
    }
    iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.25);
    if ((iVar7 != 0) &&
       (iVar7 = core_actor_cpp_isOfClass_FUN_0040c840
                          (&((this_ptr->base).victim)->base,"CHero"), iVar7 != 0)) {
      iVar9 = 0;
      iVar7 = 0;
      while ((iVar9 < g_CDemonSetPtr->enemy_count &&
             ((pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                   (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar12 == (CDemonActor *)0x0 || (pCVar12[0x62].particle_systems[4].standalone == 0)))
             )) {
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 4;
      }
      if (iVar9 == g_CDemonSetPtr->enemy_count) {
        _sprintf(acStack_530,"bride-%d?.wav");
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_00465400(this_ptr,acStack_530,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
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
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
      this_ptr->action_delay = fStack_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0xd,1);
      break;
    }
    goto LAB_004640b3;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_3f0);
    SStack_3f0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar21 = &SStack_3f0;
    SStack_3f0.attacker = (CDemonActor *)this_ptr;
    SStack_3f0.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    fStack_14 = SStack_3f0.damage_amount;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               g_INT_ARRAY_01ba5778[0],&CStack_30c);
    pCVar19 = &CStack_27c;
    CStack_27c.x = CStack_30c.x;
    *(uint *)((int)&CStack_27c + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_30c + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_27c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_30c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar19,&CStack_2f4);
    pCVar19 = &CStack_c0;
    CStack_c0.x = CStack_2f4.x;
    *(uint *)((int)&CStack_c0 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_2f4 + (uint)bVar16 * -8 + 4);
    pCVar10 = this_ptr;
    *(uint *)((int)&CStack_c0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_2f4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,pCVar19,fVar20,pSVar21);
    this_ptr->attack_landed = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_42c);
    SStack_42c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar21 = &SStack_42c;
    SStack_42c.attacker = (CDemonActor *)this_ptr;
    SStack_42c.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    fStack_14 = SStack_42c.damage_amount;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               g_INT_ARRAY_01ba5778[0],&CStack_78);
    pCVar19 = &CStack_84;
    CStack_84.x = CStack_78.x;
    *(uint *)((int)&CStack_84 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_78 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_84 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_78 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar19,&CStack_1f8);
    pCVar19 = &CStack_d8;
    CStack_d8.x = CStack_1f8.x;
    *(uint *)((int)&CStack_d8 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_1f8 + (uint)bVar16 * -8 + 4);
    pCVar10 = this_ptr;
    *(uint *)((int)&CStack_d8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_1f8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,pCVar19,fVar20,pSVar21);
    break;
  case 7:
    if (this_ptr->exploded == 0) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                (&(this_ptr->base).base.model,g_INT_ARRAY_01ba5778[7],&CStack_21c);
      pCVar19 = &CStack_174;
      CStack_174.x = CStack_21c.x;
      *(uint *)((int)&CStack_174 + (uint)bVar16 * -8 + 4) =
           *(uint *)((int)&CStack_21c + (uint)bVar16 * -8 + 4);
      *(uint *)((int)&CStack_174 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           *(uint *)((int)&CStack_21c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar19,&CStack_204);
      pCVar19 = (CVector3f *)&(this_ptr->base).base.base.orient;
      iVar9 = 0;
      fStack_24c = CStack_204.x;
      afStack_248[(uint)bVar16 * -2] = *(float *)((int)&CStack_204 + (uint)bVar16 * -8 + 4);
      afStack_248[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           *(float *)((int)&CStack_204 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
      iVar7 = 1;
      CStack_264.x = fStack_24c;
      *(float *)((int)&CStack_264 + (uint)bVar16 * -8 + 4) = afStack_248[(uint)bVar16 * -2];
      *(float *)((int)&CStack_264 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_248[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (g_CFireEffect_PTR_00614d30,&CStack_264,pCVar19,iVar7,iVar9);
      iVar9 = 0;
      iVar7 = 1;
      puVar15 = (uint *)((int)this_ptr + (uint)bVar16 * -8 + 0x34);
      CStack_234.x = (this_ptr->base).base.base.orient.vec.x;
      *(uint *)((int)&CStack_234 + (uint)bVar16 * -8 + 4) = *puVar15;
      *(uint *)((int)&CStack_234 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           puVar15[(uint)bVar16 * -2 + 1];
      CStack_234.x = CStack_234.x + -1.570796f;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (g_CFireEffect_PTR_00614d30,&CStack_264,&CStack_234,iVar7,iVar9);
    }
    break;
  case 8:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0xe,1);
      }
    }
    else {
      if (((this_ptr->base).base.hit_points < 20.0f) || (this_ptr->action_delay < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0,1);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
        this_ptr->action_delay = fStack_14;
      }
      pCVar6 = &(this_ptr->base).base.model;
      if (this_ptr->attack_landed == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,0x19,1);
        this_ptr->attack_landed = 0;
      }
    }
    break;
  case 9:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_5f8,"bride-%d?.wav");
      core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_00465400(this_ptr,acStack_5f8,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_00465400(this_ptr,acStack_5f8,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar6 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CCharacter *)0x0) {
      if (0.0 <= this_ptr->action_delay) {
        fVar22 = 0.08726646;
        fVar20 = 0.5;
        CStack_144.x = 0.0;
        CStack_144.z = 2.0f;
        pCVar19 = &CStack_144;
        CStack_144.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        pCVar13 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar13,pCVar19,
                           fVar20,fVar22);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,8,1);
        }
        else if (iVar7 < 1) {
          pCVar5 = (this_ptr->base).victim;
          fStack_1a4 = (pCVar5->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          afStack_1a0[0] =
               (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_1a0[1] =
               (pCVar5->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          CStack_cc.x = fStack_1a4;
          *(float *)((int)&CStack_cc + (uint)bVar16 * -8 + 4) = afStack_1a0[(uint)bVar16 * -2];
          *(float *)((int)&CStack_cc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               afStack_1a0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          if (&CStack_138 != &CStack_cc) {
            CStack_138.x = CStack_cc.x;
            CStack_138.y = CStack_cc.y;
            CStack_138.z = CStack_cc.z;
          }
          if ((float)10 <
              SQRT(CStack_138.z * CStack_138.z +
                   CStack_138.x * CStack_138.x + CStack_138.y * CStack_138.y)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_138,&CStack_90)
            ;
            fStack_15c = CStack_90.x;
            afStack_158[(uint)bVar16 * -2] = *(float *)((int)&CStack_90 + (uint)bVar16 * -8 + 4);
            afStack_158[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 *(float *)((int)&CStack_90 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (afStack_158[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)0.39269908168750001) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.7853982,0.7853982);
              (this_ptr->base).base.base.orient.vec.y =
                   fStack_14 + (this_ptr->base).base.base.orient.vec.y;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,3,1);
            }
          }
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,2,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-bite?.wav");
          (this_ptr->base).attack_cooldown = 1.0;
        }
      }
      else {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
        this_ptr->action_delay = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,0,1);
      }
      break;
    }
    iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
    if (iVar7 == 0) break;
LAB_004640b3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0xe,1);
    break;
  case 0xc:
    EVar11 = (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uc)->_uc).
               getDeathState)(&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base);
    if ((EVar11 == DEATH_STATE_ALIVE) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (g_CEventList_PTR_006141f0,this_ptr->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0xd,1);
    }
    break;
  case 0xe:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_4cc,"bride-%d?.wav");
      core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_00465400(this_ptr,acStack_4cc,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_00465400(this_ptr,acStack_4cc,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    fVar20 = 1.5f;
    pCVar6 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,0,1);
      }
    }
    else {
      fStack_48 = 1.5f;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      CStack_1c8.x = 0.0;
      CStack_1c8.y = 0.0;
      fVar22 = 0.08726646;
      CStack_1c8.z = fVar20;
      pCVar19 = &CStack_1c8;
      fVar20 = 0.5;
      pCVar5 = (this_ptr->base).victim;
      pCVar13 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar13,pCVar19,fVar20,fVar22);
      if (iVar7 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n");
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,0,1);
      }
      else if ((0 < iVar7) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,0x13,1);
        }
        if (iVar7 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x14,1);
        }
        if (iVar7 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,0x15,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-swipe?.wav");
        }
        (this_ptr->base).attack_cooldown = 1.0;
      }
    }
    break;
  case 0xf:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (g_CEventList_PTR_006141f0,this_ptr->rise_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004646db_caseD_10;
  case 0x11:
    if (((this_ptr->base).pool_me != 0) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) break;
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
              (&(this_ptr->base).base.model,0,&CStack_2b8);
    pCVar19 = &CStack_1ec;
    CStack_1ec.x = CStack_2b8.x;
    *(uint *)((int)&CStack_1ec + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_2b8 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_1ec + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_2b8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar19,&CStack_240);
    blood_type = BLOOD_TYPE_RED;
    pCVar19 = &CStack_120;
    CStack_120.x = CStack_240.x;
    *(uint *)((int)&CStack_120 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_240 + (uint)bVar16 * -8 + 4);
    this_ptr_01 = g_CGorePtr;
    *(uint *)((int)&CStack_120 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_240 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar19,blood_type);
    goto switchD_004646db_caseD_10;
  case 0x12:
    EVar11 = (*(((g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base).base.vtable._uc)->_uc).
               getDeathState)(&g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->base);
    if ((EVar11 == DEATH_STATE_ALIVE) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (g_CEventList_PTR_006141f0,this_ptr->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_468);
    SStack_468.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar21 = &SStack_468;
    SStack_468.attacker = (CDemonActor *)this_ptr;
    SStack_468.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    fStack_14 = SStack_468.damage_amount;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               g_INT_ARRAY_01ba5778[0],&CStack_1b0);
    pCVar19 = &CStack_fc;
    CStack_fc.x = CStack_1b0.x;
    *(uint *)((int)&CStack_fc + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_1b0 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_fc + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_1b0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar19,&CStack_a8);
    pCVar19 = &CStack_114;
    CStack_114.x = CStack_a8.x;
    *(uint *)((int)&CStack_114 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_a8 + (uint)bVar16 * -8 + 4);
    pCVar10 = this_ptr;
    *(uint *)((int)&CStack_114 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_a8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,pCVar19,fVar20,pSVar21);
    this_ptr->attack_landed = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_3b4);
    SStack_3b4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar21 = &SStack_3b4;
    SStack_3b4.attacker = (CDemonActor *)this_ptr;
    SStack_3b4.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    fStack_14 = SStack_3b4.damage_amount;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               g_INT_ARRAY_01ba5778[0],&CStack_318);
    pCVar19 = &CStack_6c;
    CStack_6c.x = CStack_318.x;
    *(uint *)((int)&CStack_6c + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_318 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_6c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_318 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar19,&CStack_33c);
    pCVar19 = &CStack_f0;
    CStack_f0.x = CStack_33c.x;
    *(uint *)((int)&CStack_f0 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_33c + (uint)bVar16 * -8 + 4);
    pCVar10 = this_ptr;
    *(uint *)((int)&CStack_f0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_33c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,pCVar19,fVar20,pSVar21);
    this_ptr->attack_landed = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_378);
    SStack_378.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar21 = &SStack_378;
    SStack_378.attacker = (CDemonActor *)this_ptr;
    SStack_378.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    fStack_14 = SStack_378.damage_amount;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_CVector3f_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               g_INT_ARRAY_01ba5778[2],&CStack_300);
    pCVar19 = &CStack_330;
    CStack_330.x = CStack_300.x;
    *(uint *)((int)&CStack_330 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_300 + (uint)bVar16 * -8 + 4);
    *(uint *)((int)&CStack_330 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_300 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar19,&CStack_12c);
    pCVar19 = &CStack_258;
    CStack_258.x = CStack_12c.x;
    *(uint *)((int)&CStack_258 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_12c + (uint)bVar16 * -8 + 4);
    pCVar10 = this_ptr;
    *(uint *)((int)&CStack_258 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&CStack_12c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,pCVar19,fVar20,pSVar21);
    break;
  case 0x17:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_594,"bride-%d?.wav");
      core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_00465400(this_ptr,acStack_594,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_00465400(this_ptr,acStack_594,1.0);
      }
    }
    switch(this_ptr->mist_state) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0,1);
      break;
    case 1:
      fVar20 = this_ptr->vanish_timer + delta_time;
      this_ptr->vanish_timer = fVar20;
      if (1.0f < fVar20) {
        this_ptr->mist_state = 2;
        this_ptr->vanish_timer = 1.0f;
      }
      pCVar6 = &(this_ptr->base).base.model;
      CStack_9c.x = 0.0;
      CStack_9c.y = 3.0;
      CStack_9c.z = 0.0;
      pCStack_38 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar6);
      iStack_18 = 0;
      if (0 < pCStack_38->bone_count) {
        do {
          pCStack_3c = pCVar6;
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                    (pCStack_3c,iStack_18,&CStack_198);
          pCVar19 = &CStack_288;
          CStack_288.x = CStack_198.x;
          *(uint *)((int)&CStack_288 + (uint)bVar16 * -8 + 4) =
               *(uint *)((int)&CStack_198 + (uint)bVar16 * -8 + 4);
          *(uint *)((int)&CStack_288 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               *(uint *)((int)&CStack_198 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar19,&CStack_b4);
          iVar9 = 0xffff;
          pCVar19 = &CStack_9c;
          fVar20 = 0.5;
          CStack_294.x = CStack_b4.x;
          *(uint *)((int)&CStack_294 + (uint)bVar16 * -8 + 4) =
               *(uint *)((int)&CStack_b4 + (uint)bVar16 * -8 + 4);
          *(uint *)((int)&CStack_294 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               *(uint *)((int)&CStack_b4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          iVar7 = iStack_18 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (g_CFireEffect_PTR_00614d30,&CStack_294,fVar20,pCVar19,iVar9);
          pCVar6 = pCStack_3c;
          iStack_18 = iVar7;
        } while (iVar7 < pCStack_38->bone_count);
      }
      break;
    case 2:
      iStack_28 = 0;
      iStack_44 = 1;
      pCStack_20 = &this_ptr->new_pos;
      for (iStack_24 = 0; fVar20 = 1.0f, iStack_24 < g_CDemonSetPtr->character_count;
          iStack_24 = iStack_24 + 1) {
        pCVar10 = *(CDraculaBride **)((int)g_CDemonSetPtr->characters + iStack_28);
        if (((pCVar10 != (CDraculaBride *)0x0) && (pCVar10 != this_ptr)) &&
           (EVar11 = (*(((pCVar10->base).base.base.vtable._uc)->_uc).getDeathState)
                               ((CCharacter *)pCVar10), (int)EVar11 < 1)) {
          fStack_270 = (pCVar10->base).base.base.location.position.x - pCStack_20->x;
          afStack_26c[0] = (pCVar10->base).base.base.location.position.y - pCStack_20->y;
          afStack_26c[1] = (pCVar10->base).base.base.location.position.z - pCStack_20->z;
          fStack_228 = fStack_270;
          afStack_224[(uint)bVar16 * -2] = afStack_26c[(uint)bVar16 * -2];
          afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_26c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          if (SQRT(afStack_224[1] * afStack_224[1] +
                   fStack_228 * fStack_228 + afStack_224[0] * afStack_224[0]) <
              (float)5) goto switchD_00463536_default;
        }
        iStack_28 = iStack_28 + 4;
      }
      if (iStack_44 != 0) {
        this_ptr->mist_state = 3;
        pCVar14 = &(this_ptr->base).base.base.location;
        this_ptr->vanish_timer = fVar20;
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
          CStack_168.x = fStack_1bc;
          *(float *)((int)&CStack_168 + (uint)bVar16 * -8 + 4) = afStack_1b8[(uint)bVar16 * -2];
          *(float *)((int)&CStack_168 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               afStack_1b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_168,&CStack_2ac);
          pUVar1 = &(this_ptr->base).base.base.orient;
          fStack_18c = CStack_2ac.x;
          afStack_188[(uint)bVar16 * -2] = *(float *)((int)&CStack_2ac + (uint)bVar16 * -8 + 4);
          afStack_188[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               *(float *)((int)&CStack_2ac + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
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
      pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar6);
      iStack_1c = 0;
      pCStack_2c = pCVar6;
      if (0 < pCStack_34->bone_count) {
        do {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                    (pCStack_2c,iStack_1c,&CStack_1e0);
          pCVar19 = &CStack_108;
          CStack_108.x = CStack_1e0.x;
          *(uint *)((int)&CStack_108 + (uint)bVar16 * -8 + 4) =
               *(uint *)((int)&CStack_1e0 + (uint)bVar16 * -8 + 4);
          *(uint *)((int)&CStack_108 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               *(uint *)((int)&CStack_1e0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr,pCVar19,&CStack_2a0);
          iVar7 = 0xffff;
          pCVar19 = &CStack_150;
          fVar20 = 0.5;
          pCVar18 = &CStack_2e8;
          CStack_2e8.x = CStack_2a0.x;
          *(uint *)((int)&CStack_2e8 + (uint)bVar16 * -8 + 4) =
               *(uint *)((int)&CStack_2a0 + (uint)bVar16 * -8 + 4);
          this_ptr_00 = g_CFireEffect_PTR_00614d30;
          *(uint *)((int)&CStack_2e8 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
               *(uint *)((int)&CStack_2a0 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (this_ptr_00,pCVar18,fVar20,pCVar19,iVar7);
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < pCStack_34->bone_count);
      }
      fVar20 = this_ptr->vanish_timer - delta_time;
      this_ptr->vanish_timer = fVar20;
      if (fVar20 < 0.0) {
        this_ptr->vanish_timer = 0.0;
        this_ptr->mist_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCStack_2c->base,0xe,1);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
        this_ptr->action_delay = fStack_14;
      }
    }
    break;
  case 0x1a:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (g_CEventList_PTR_006141f0,this_ptr->rise_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0,1);
    }
  }
switchD_00463536_default:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  iStack_40 = pSVar8->state_index;
  if ((((iStack_40 != 0x11) && (iStack_40 != 0x10)) && (iStack_40 != 0xf)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    if (iStack_40 == 3) {
      (this_ptr->base).base.model.accumulated_root_motion.z =
           (this_ptr->base).base.model.accumulated_root_motion.z * (float)2;
    }
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar10 = (CDraculaBride *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    fStack_2dc = (this_ptr->base).base.velocity.x * delta_time;
    afStack_2d8[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_2d8[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_e4 = fStack_2dc;
    afStack_e0[(uint)bVar16 * -2] = afStack_2d8[(uint)bVar16 * -2];
    afStack_e0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_2d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    pCVar19 = &(this_ptr->base).base.position_delta;
    afStack_188[2] = fStack_e4 + pCVar19->x;
    afStack_188[3] = afStack_e0[0] + (this_ptr->base).base.position_delta.y;
    fStack_178 = afStack_e0[1] + (this_ptr->base).base.position_delta.z;
    fStack_60 = afStack_188[2];
    afStack_5c[(uint)bVar16 * -2] = afStack_188[(uint)bVar16 * -2 + 3];
    afStack_5c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_188[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    pCVar18 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_2c4 = fStack_60 + pCVar18->x;
    afStack_2c0[0] = afStack_5c[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_2c0[1] = afStack_5c[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_324.x = fStack_2c4;
    *(float *)((int)&CStack_324 + (uint)bVar16 * -8 + 4) = afStack_2c0[(uint)bVar16 * -2];
    *(float *)((int)&CStack_324 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_2c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar19->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar20 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar20;
    pCVar18->x = fVar20;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_324);
  }
  if (iStack_40 != 0x17) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
switchD_004646db_caseD_10:
  (this_ptr->base).pool_me = 1;
  goto switchD_00463536_default;
}
