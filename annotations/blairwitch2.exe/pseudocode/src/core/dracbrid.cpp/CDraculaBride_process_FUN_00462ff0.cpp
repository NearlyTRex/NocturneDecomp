// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_00462ff0
// Address: 00462ff0
// Address Range: [[00462ff0, 004646f3]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00462ff0(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00462ff0(CDraculaBride *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDemonActor_vtable *pCVar2;
  CBodyPart *pCVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  CDeformableModelInstance *pCVar6;
  int iVar7;
  int iVar8;
  CDraculaBride *pCVar9;
  EDeathState EVar10;
  CDemonActor *pCVar11;
  CPathMap *pCVar12;
  CLocation *pCVar13;
  uint *puVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  ulonglong uVar19;
  float afStackY_1324 [837];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar20;
  float *pfVar21;
  CGore *this_ptr_01;
  CVector3f *pCVar22;
  float fVar23;
  SDamageInfo *pSVar24;
  EBloodType blood_type;
  float fVar25;
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
  float afStack_2c0 [5];
  float fStack_2ac;
  float fStack_2a0;
  CVector3f CStack_294;
  uint uStack_288;
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
  float afStack_224 [5];
  CVector3f CStack_210;
  float fStack_204;
  float afStack_200 [5];
  float afStack_1ec [3];
  uint uStack_1e0;
  float fStack_1d4;
  CVector3f CStack_1c8;
  float fStack_1bc;
  float afStack_1b8 [5];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  uint uStack_198;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
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
  uint uStack_108;
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
  CMotionController *pCStack_2c;
  int iStack_28;
  int iStack_24;
  CVector3f *pCStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar15 = 0;
  if (this_ptr->exploded != 0) {
    fVar23 = this_ptr->fade_timer - delta_time;
    this_ptr->fade_timer = fVar23;
    if (0.0 <= fVar23) {
      if (0 < this_ptr->part_count) {
        fVar16 = (float10)_DAT_005f5660;
        fVar17 = (float10)_DAT_005d108c;
        pCVar9 = this_ptr;
        do {
          pCVar3 = pCVar9->part_list[0];
          (pCVar3->base).is_transparent = 1;
          pCVar3->transparent_geometry_flag = 1;
          fVar18 = ((float10)this_ptr->fade_timer * fVar17) / fVar16;
          uVar19 = round();
          *(int *)((int)uVar19 + 0x10d4) = (int)ROUND(fVar18);
          pCVar9 = (CDraculaBride *)((pCVar9->base).base.base.actor_name + 4);
        } while ((int)((ulonglong)uVar19 >> 0x20) < this_ptr->part_count);
      }
    }
    else {
      this_ptr->exploded = 0;
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      this_ptr->fade_timer = 0.0;
      iVar7 = 0;
      pCVar9 = this_ptr;
      if (0 < this_ptr->part_count) {
        do {
          (pCVar9->part_list[0]->base).lifecycle_state = ACTOR_DESTROYED;
          iVar7 = iVar7 + 1;
          pCVar9 = (CDraculaBride *)((pCVar9->base).base.base.actor_name + 4);
        } while (iVar7 < this_ptr->part_count);
      }
    }
  }
  core_dracbrid_cpp_FUN_004658e0(this_ptr,delta_time);
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
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,afStack_8c + 0x10);
    if (iVar7 == 0x29a) {
      (this_ptr->base).base.damage_decal_count = 0;
      afStack_2d8[2] = 0.0;
      afStack_2d8[3] = 20.0;
      afStack_2d8[4] = 20.0;
      core_actor_cpp_FUN_00408cf0(this_ptr,afStack_2d8 + 2);
      iVar7 = 1;
      pCVar22 = &CStack_210;
      fVar23 = -1.0;
      CStack_210.x = fStack_1d4;
      *(float *)((int)&CStack_210 + (uint)bVar15 * -8 + 4) = afStack_200[(uint)bVar15 * -2 + 0xc];
      pCVar9 = this_ptr;
      *(float *)((int)&CStack_210 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
      core_dracbrid_cpp_CDraculaBride_explode_FUN_00464700(pCVar9,pCVar22,fVar23,iVar7);
      this_ptr->exploded = 1;
      pCVar2 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->fade_timer = _DAT_005f5660;
      (*pCVar2->playAmbientSound)((CDemonActor *)this_ptr,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar7);
    }
  }
  iVar7 = core_motion_cpp_FUN_005035c0(pCStack_30);
  iVar7 = *(int *)(iVar7 + 0x24);
  if (iVar7 == 9) {
    fVar25 = _DAT_005f5654 * delta_time;
    fVar23 = (this_ptr->base).speed;
    (this_ptr->base).base.turn_speed = _DAT_005f5658 * delta_time * (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = fVar23 * fVar25;
  }
  else {
    fVar25 = _DAT_005f5650 * delta_time;
    fVar23 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.turn_speed = fVar25 * fVar23;
  }
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 != 0) {
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
      iVar8 = 0;
      iVar7 = 0;
      while ((iVar8 < g_CDemonSetPtr->enemy_count &&
             ((pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                   (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar7),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar11 == (CDemonActor *)0x0 || (pCVar11[0x62].particle_systems[4].standalone == 0)))
             )) {
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 4;
      }
      if (iVar8 == g_CDemonSetPtr->enemy_count) {
        _sprintf(acStack_530,"bride-%d?.wav");
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_530,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,0x17,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
        pCVar5 = (this_ptr->base).victim;
        pCVar13 = &(pCVar5->base).location;
        this_ptr->mist_state = 1;
        if ((CLocation *)&this_ptr->new_pos != pCVar13) {
          (this_ptr->new_pos).x = (pCVar13->position).x;
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
    pSVar24 = &SStack_3f0;
    SStack_3f0.attacker = (CDemonActor *)this_ptr;
    SStack_3f0.wielder = (CDemonActor *)this_ptr;
    fVar23 = 0.4;
    fStack_14 = SStack_3f0.damage_amount;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01ba5778);
    pfVar21 = afStack_284 + 2;
    afStack_284[2] = afStack_314[2];
    afStack_284[(uint)bVar15 * -2 + 3] = afStack_314[(uint)bVar15 * -2 + 3];
    afStack_284[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_314[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar21);
    pCVar22 = &CStack_c0;
    CStack_c0.x = fStack_2f4;
    *(float *)((int)&CStack_c0 + (uint)bVar15 * -8 + 4) = afStack_314[(uint)bVar15 * -2 + 9];
    pCVar9 = this_ptr;
    *(float *)((int)&CStack_c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_314[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar22,fVar23,pSVar24);
    this_ptr->attack_landed = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_42c);
    SStack_42c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar24 = &SStack_42c;
    SStack_42c.attacker = (CDemonActor *)this_ptr;
    SStack_42c.wielder = (CDemonActor *)this_ptr;
    fVar23 = 0.4;
    fStack_14 = SStack_42c.damage_amount;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01ba5778);
    pfVar21 = afStack_8c + 2;
    afStack_8c[2] = (float)uStack_78;
    afStack_8c[(uint)bVar15 * -2 + 3] = afStack_8c[(uint)bVar15 * -2 + 6];
    afStack_8c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_8c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar21);
    pCVar22 = &CStack_d8;
    CStack_d8.x = afStack_200[2];
    *(float *)((int)&CStack_d8 + (uint)bVar15 * -8 + 4) = afStack_200[(uint)bVar15 * -2 + 3];
    pCVar9 = this_ptr;
    *(float *)((int)&CStack_d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar22,fVar23,pSVar24);
    break;
  case 7:
    if (this_ptr->exploded == 0) {
      core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01ba5794);
      pfVar21 = afStack_1b8 + 0x11;
      afStack_174[0] = afStack_224[2];
      afStack_1b8[(uint)bVar15 * -2 + 0x12] = afStack_224[(uint)bVar15 * -2 + 3];
      afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
           afStack_224[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar21);
      pCVar22 = (CVector3f *)&(this_ptr->base).base.base.orient;
      iVar8 = 0;
      fStack_24c = fStack_204;
      afStack_248[(uint)bVar15 * -2] = afStack_200[(uint)bVar15 * -2];
      afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      iVar7 = 1;
      CStack_264.x = fStack_24c;
      *(float *)((int)&CStack_264 + (uint)bVar15 * -8 + 4) = afStack_248[(uint)bVar15 * -2];
      *(float *)((int)&CStack_264 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (0x01C3DEB4,&CStack_264,pCVar22,iVar7,iVar8);
      iVar8 = 0;
      iVar7 = 1;
      puVar14 = (uint *)((int)this_ptr + (uint)bVar15 * -8 + 0x34);
      CStack_234.x = (this_ptr->base).base.base.orient.vec.x;
      *(uint *)((int)&CStack_234 + (uint)bVar15 * -8 + 4) = *puVar14;
      *(uint *)((int)&CStack_234 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           puVar14[(uint)bVar15 * -2 + 1];
      CStack_234.x = CStack_234.x + _DAT_005d10a4;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (0x01C3DEB4,&CStack_264,&CStack_234,iVar7,iVar8);
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
      if (((this_ptr->base).base.hit_points < _DAT_005f564c) || (this_ptr->action_delay < 0.0)) {
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
      core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_5f8,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_5f8,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar6 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CCharacter *)0x0) {
      if (0.0 <= this_ptr->action_delay) {
        fVar25 = 0.08726646;
        fVar23 = 0.5;
        CStack_144.x = 0.0;
        CStack_144.z = 0x40000000;
        pCVar22 = &CStack_144;
        CStack_144.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        pCVar12 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,pCVar12,pCVar22,
                           fVar23,fVar25);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,8,1);
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
          afStack_c8[(uint)bVar15 * -2] = afStack_1b8[(uint)bVar15 * -2 + 6];
          afStack_c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          if (&fStack_138 != &fStack_cc) {
            fStack_138 = fStack_cc;
            fStack_134 = afStack_c8[0];
            fStack_130 = afStack_c8[1];
          }
          if ((float)_DAT_005d1094 <
              SQRT(fStack_130 * fStack_130 + fStack_138 * fStack_138 + fStack_134 * fStack_134)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_138);
            uStack_15c = uStack_90;
            afStack_1b8[(uint)bVar15 * -2 + 0x18] = afStack_8c[(uint)bVar15 * -2];
            afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
                 afStack_8c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (fStack_158 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d109c) {
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
    iVar7 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x114))(iVar7);
    if ((iVar7 == 0) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,this_ptr->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0xd,1);
    }
    break;
  case 0xe:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_4cc,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_4cc,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_4cc,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    fVar23 = 0x3FC00000;
    pCVar6 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar6->base,0,1);
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
      fVar25 = 0.08726646;
      CStack_1c8.z = fVar23;
      pCVar22 = &CStack_1c8;
      fVar23 = 0.5;
      pCVar5 = (this_ptr->base).victim;
      pCVar12 = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,pCVar12,pCVar22,fVar23,fVar25);
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
                      (0x01C38BC0,this_ptr->rise_event);
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
    core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,0);
    pfVar21 = afStack_200 + 5;
    afStack_1ec[0] = afStack_2c0[2];
    afStack_200[(uint)bVar15 * -2 + 6] = afStack_2c0[(uint)bVar15 * -2 + 3];
    afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
         afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar21);
    blood_type = BLOOD_TYPE_RED;
    pCVar22 = &CStack_120;
    CStack_120.x = afStack_248[2];
    *(float *)((int)&CStack_120 + (uint)bVar15 * -8 + 4) = afStack_248[(uint)bVar15 * -2 + 3];
    this_ptr_01 = g_CGorePtr;
    *(float *)((int)&CStack_120 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar22,blood_type);
    goto switchD_004646db_caseD_10;
  case 0x12:
    iVar7 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x114))(iVar7);
    if ((iVar7 == 0) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,this_ptr->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_468);
    SStack_468.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar24 = &SStack_468;
    SStack_468.attacker = (CDemonActor *)this_ptr;
    SStack_468.wielder = (CDemonActor *)this_ptr;
    fVar23 = 0.4;
    fStack_14 = SStack_468.damage_amount;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01ba5778);
    pfVar21 = afStack_104 + 2;
    afStack_104[2] = afStack_1b8[2];
    afStack_104[(uint)bVar15 * -2 + 3] = afStack_1b8[(uint)bVar15 * -2 + 3];
    afStack_104[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar21);
    pCVar22 = &CStack_114;
    CStack_114.x = afStack_b0[2];
    *(float *)((int)&CStack_114 + (uint)bVar15 * -8 + 4) = afStack_b0[(uint)bVar15 * -2 + 3];
    pCVar9 = this_ptr;
    *(float *)((int)&CStack_114 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar22,fVar23,pSVar24);
    this_ptr->attack_landed = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_3b4);
    SStack_3b4.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar24 = &SStack_3b4;
    SStack_3b4.attacker = (CDemonActor *)this_ptr;
    SStack_3b4.wielder = (CDemonActor *)this_ptr;
    fVar23 = 0.4;
    fStack_14 = SStack_3b4.damage_amount;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01ba5778);
    pfVar21 = afStack_8c + 8;
    afStack_6c[0] = (float)uStack_318;
    afStack_8c[(uint)bVar15 * -2 + 9] = afStack_314[(uint)bVar15 * -2];
    afStack_8c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         afStack_314[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar21);
    pCVar22 = &CStack_f0;
    CStack_f0.x = fStack_33c;
    *(float *)((int)&CStack_f0 + (uint)bVar15 * -8 + 4) = afStack_338[(uint)bVar15 * -2];
    pCVar9 = this_ptr;
    *(float *)((int)&CStack_f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_338[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar22,fVar23,pSVar24);
    this_ptr->attack_landed = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_378);
    SStack_378.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar24 = &SStack_378;
    SStack_378.attacker = (CDemonActor *)this_ptr;
    SStack_378.wielder = (CDemonActor *)this_ptr;
    fVar23 = 0.4;
    fStack_14 = SStack_378.damage_amount;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices + _DAT_01ba5780);
    pfVar21 = afStack_338 + 2;
    afStack_338[2] = (float)uStack_300;
    afStack_338[(uint)bVar15 * -2 + 3] = afStack_314[(uint)bVar15 * -2 + 6];
    afStack_338[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_314[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar21);
    pCVar22 = &CStack_258;
    CStack_258.x = fStack_12c;
    *(float *)((int)&CStack_258 + (uint)bVar15 * -8 + 4) = afStack_128[(uint)bVar15 * -2];
    pCVar9 = this_ptr;
    *(float *)((int)&CStack_258 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar22,fVar23,pSVar24);
    break;
  case 0x17:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_594,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_594,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_594,1.0);
      }
    }
    switch(this_ptr->mist_state) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0,1);
      break;
    case 1:
      fVar23 = this_ptr->vanish_timer + delta_time;
      this_ptr->vanish_timer = fVar23;
      if (0x3F800000 < fVar23) {
        this_ptr->mist_state = 2;
        this_ptr->vanish_timer = 0x3F800000;
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
          core_skeleton_cpp_FUN_00546a90(pCStack_3c,iStack_18);
          puVar14 = &uStack_288;
          uStack_288 = uStack_198;
          afStack_284[(uint)bVar15 * -2] = afStack_1b8[(uint)bVar15 * -2 + 9];
          afStack_284[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar14);
          iVar8 = 0xffff;
          pCVar22 = &CStack_9c;
          fVar23 = 0.5;
          CStack_294.x = fStack_b4;
          *(float *)((int)&CStack_294 + (uint)bVar15 * -8 + 4) = afStack_b0[(uint)bVar15 * -2];
          *(float *)((int)&CStack_294 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
               afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          iVar7 = iStack_18 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (0x01C3DEB4,&CStack_294,fVar23,pCVar22,iVar8);
          pCVar6 = pCStack_3c;
          iStack_18 = iVar7;
        } while (iVar7 < pCStack_38->bone_count);
      }
      break;
    case 2:
      iStack_28 = 0;
      iStack_44 = 1;
      pCStack_20 = &this_ptr->new_pos;
      for (iStack_24 = 0; fVar23 = 0x3F800000, iStack_24 < g_CDemonSetPtr->character_count;
          iStack_24 = iStack_24 + 1) {
        pCVar9 = *(CDraculaBride **)((int)g_CDemonSetPtr->characters + iStack_28);
        if (((pCVar9 != (CDraculaBride *)0x0) && (pCVar9 != this_ptr)) &&
           (EVar10 = (*(((pCVar9->base).base.base.vtable._uc)->_uc).getDeathState)
                               ((CCharacter *)pCVar9), (int)EVar10 < 1)) {
          fStack_270 = (pCVar9->base).base.base.location.position.x - pCStack_20->x;
          fStack_26c = (pCVar9->base).base.base.location.position.y - pCStack_20->y;
          fStack_268 = (pCVar9->base).base.base.location.position.z - pCStack_20->z;
          fStack_228 = fStack_270;
          afStack_224[(uint)bVar15 * -2] = afStack_284[(uint)bVar15 * -2 + 6];
          afStack_224[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_284[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          if (SQRT(afStack_224[1] * afStack_224[1] +
                   fStack_228 * fStack_228 + afStack_224[0] * afStack_224[0]) < (float)_DAT_005d10b4
             ) goto switchD_00463536_default;
        }
        iStack_28 = iStack_28 + 4;
      }
      if (iStack_44 != 0) {
        this_ptr->mist_state = 3;
        pCVar13 = &(this_ptr->base).base.base.location;
        this_ptr->vanish_timer = fVar23;
        (pCVar13->position).x = pCStack_20->x;
        (this_ptr->base).base.base.location.position.y = pCStack_20->y;
        (this_ptr->base).base.base.location.position.z = pCStack_20->z;
        pCVar5 = (this_ptr->base).victim;
        if (pCVar5 != (CCharacter *)0x0) {
          fStack_1bc = (pCVar5->base).location.position.x - (pCVar13->position).x;
          afStack_1b8[0] =
               (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_1b8[1] =
               (pCVar5->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          afStack_168[0] = fStack_1bc;
          afStack_1b8[(uint)bVar15 * -2 + 0x15] = afStack_1b8[(uint)bVar15 * -2];
          afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
               afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_1b8 + 0x14);
          pUVar1 = &(this_ptr->base).base.base.orient;
          fStack_18c = fStack_2ac;
          afStack_1b8[(uint)bVar15 * -2 + 0xc] = afStack_2c0[(uint)bVar15 * -2 + 6];
          afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          if (pUVar1 != (UOrientationVector *)(afStack_1b8 + 0xb)) {
            (pUVar1->vec).x = fStack_18c;
            (this_ptr->base).base.base.orient.vec.y = fStack_188;
            (this_ptr->base).base.base.orient.vec.z = fStack_184;
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
      pCStack_2c = &pCVar6->base;
      if (0 < pCStack_34->bone_count) {
        do {
          core_skeleton_cpp_FUN_00546a90(pCStack_2c,iStack_1c);
          puVar14 = &uStack_108;
          uStack_108 = uStack_1e0;
          afStack_104[(uint)bVar15 * -2] = afStack_200[(uint)bVar15 * -2 + 9];
          afStack_104[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar14);
          iVar7 = 0xffff;
          pCVar22 = &CStack_150;
          fVar23 = 0.5;
          pCVar20 = &CStack_2e8;
          CStack_2e8.x = fStack_2a0;
          *(float *)((int)&CStack_2e8 + (uint)bVar15 * -8 + 4) = afStack_2c0[(uint)bVar15 * -2 + 9];
          this_ptr_00 = 0x01C3DEB4;
          *(float *)((int)&CStack_2e8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
               afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (this_ptr_00,pCVar20,fVar23,pCVar22,iVar7);
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < pCStack_34->bone_count);
      }
      fVar23 = this_ptr->vanish_timer - delta_time;
      this_ptr->vanish_timer = fVar23;
      if (fVar23 < 0.0) {
        this_ptr->vanish_timer = 0.0;
        this_ptr->mist_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,0xe,1);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
        this_ptr->action_delay = fStack_14;
      }
    }
    break;
  case 0x1a:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->rise_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,0,1);
    }
  }
switchD_00463536_default:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar7 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  iStack_40 = *(int *)(iVar7 + 0x24);
  if ((((iStack_40 != 0x11) && (iStack_40 != 0x10)) && (iStack_40 != 0xf)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    if (iStack_40 == 3) {
      (this_ptr->base).base.model.accumulated_root_motion.z =
           (this_ptr->base).base.model.accumulated_root_motion.z * (float)_DAT_005d10ac;
    }
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar9 = (CDraculaBride *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar9 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_2dc = (this_ptr->base).base.velocity.x * delta_time;
    afStack_2d8[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_2d8[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_e4 = fStack_2dc;
    afStack_e0[(uint)bVar15 * -2] = afStack_2d8[(uint)bVar15 * -2];
    afStack_e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_2d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    pCVar22 = &(this_ptr->base).base.position_delta;
    fStack_180 = fStack_e4 + pCVar22->x;
    fStack_17c = afStack_e0[0] + (this_ptr->base).base.position_delta.y;
    fStack_178 = afStack_e0[1] + (this_ptr->base).base.position_delta.z;
    fStack_60 = fStack_180;
    afStack_8c[(uint)bVar15 * -2 + 0xc] = afStack_1b8[(uint)bVar15 * -2 + 0xf];
    afStack_8c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         afStack_1b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
    pCVar20 = &(this_ptr->base).base.model.accumulated_root_motion;
    afStack_2d8[5] = fStack_60 + pCVar20->x;
    afStack_2c0[0] = fStack_5c + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_2c0[1] = fStack_58 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_324.x = afStack_2d8[5];
    *(float *)((int)&CStack_324 + (uint)bVar15 * -8 + 4) = afStack_2c0[(uint)bVar15 * -2];
    *(float *)((int)&CStack_324 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_2c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar22->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar23 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar23;
    pCVar20->x = fVar23;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_324);
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
