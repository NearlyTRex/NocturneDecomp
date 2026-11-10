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
  byte *puVar2;
  uint uVar3;
  CDemonActor_vtable *pCVar4;
  CBodyPart *pCVar5;
  EWalkState EVar6;
  CCharacter *pCVar7;
  CDeformableModelInstance *pCVar8;
  int iVar9;
  int iVar10;
  CDraculaBride *pCVar11;
  EDeathState EVar12;
  int iVar13;
  CPathMap *pCVar14;
  byte *puVar15;
  uint *puVar16;
  byte bVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  ulonglong uVar21;
  float afStackY_1324 [837];
  CFireEffect *this_ptr_00;
  CVector3f *position;
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
  SDamageInfo aSStack_468 [4];
  float fStack_464;
  CDraculaBride *pCStack_434;
  CDraculaBride *pCStack_430;
  SDamageInfo aSStack_42c [4];
  float fStack_428;
  CDraculaBride *pCStack_3f8;
  CDraculaBride *pCStack_3f4;
  SDamageInfo aSStack_3f0 [4];
  float fStack_3ec;
  CDraculaBride *pCStack_3bc;
  CDraculaBride *pCStack_3b8;
  SDamageInfo aSStack_3b4 [4];
  float fStack_3b0;
  CDraculaBride *pCStack_380;
  CDraculaBride *pCStack_37c;
  SDamageInfo aSStack_378 [4];
  float fStack_374;
  CDraculaBride *pCStack_344;
  CDraculaBride *pCStack_340;
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
  
  bVar17 = 0;
  if (this_ptr->exploded != 0) {
    fVar24 = this_ptr->fade_timer - delta_time;
    this_ptr->fade_timer = fVar24;
    if (0.0 <= fVar24) {
      if (0 < this_ptr->part_count) {
        fVar18 = (float10)_DAT_005f5660;
        fVar19 = (float10)_DAT_005d108c;
        pCVar11 = this_ptr;
        do {
          pCVar5 = pCVar11->part_list[0];
          *(uint *)&(pCVar5->base).field_0xfc = 1;
          pCVar5->transparent_geometry_flag = 1;
          fVar20 = ((float10)this_ptr->fade_timer * fVar19) / fVar18;
          uVar21 = round();
          *(int *)((int)uVar21 + 0x10d4) = (int)ROUND(fVar20);
          pCVar11 = (CDraculaBride *)((pCVar11->base).base.base.actor_name + 4);
        } while ((int)((ulonglong)uVar21 >> 0x20) < this_ptr->part_count);
      }
    }
    else {
      this_ptr->exploded = 0;
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      this_ptr->fade_timer = 0.0;
      iVar9 = 0;
      pCVar11 = this_ptr;
      if (0 < this_ptr->part_count) {
        do {
          (pCVar11->part_list[0]->base).lifecycle_state = ACTOR_DESTROYED;
          iVar9 = iVar9 + 1;
          pCVar11 = (CDraculaBride *)((pCVar11->base).base.base.actor_name + 4);
        } while (iVar9 < this_ptr->part_count);
      }
    }
  }
  core_dracbrid_cpp_FUN_004658e0(this_ptr,delta_time);
  iVar9 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    return;
  }
  if (0.0 <= this_ptr->action_delay) {
    this_ptr->action_delay = this_ptr->action_delay - delta_time;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_4c = delta_time * (this_ptr->base).speed;
  pCStack_30 = (CMotionController *)&(this_ptr->base).base.model;
  while (0.0 < fStack_4c) {
    iVar9 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,afStack_8c + 0x10);
    if (iVar9 == 0x29a) {
      *(uint *)&(this_ptr->base).base.field_0x3448 = 0;
      afStack_2d8[2] = 0.0;
      afStack_2d8[3] = 20.0;
      afStack_2d8[4] = 20.0;
      core_actor_cpp_FUN_00408cf0(this_ptr,afStack_2d8 + 2);
      iVar9 = 1;
      pCVar23 = &CStack_210;
      fVar24 = -1.0;
      CStack_210.x = fStack_1d4;
      *(float *)((int)&CStack_210 + (uint)bVar17 * -8 + 4) = afStack_200[(uint)bVar17 * -2 + 0xc];
      pCVar11 = this_ptr;
      *(float *)((int)&CStack_210 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           afStack_200[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
      core_dracbrid_cpp_CDraculaBride_explode_FUN_00464700(pCVar11,pCVar23,fVar24,iVar9);
      this_ptr->exploded = 1;
      pCVar4 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->fade_timer = _DAT_005f5660;
      (*pCVar4->playAmbientSound)((CDemonActor *)this_ptr,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar9);
    }
  }
  iVar9 = core_motion_cpp_FUN_005035c0(pCStack_30);
  iVar9 = *(int *)(iVar9 + 0x24);
  if (iVar9 == 9) {
    fVar26 = _DAT_005f5654 * delta_time;
    fVar24 = (this_ptr->base).speed;
    *(float *)&(this_ptr->base).base.field_0x2598 =
         _DAT_005f5658 * delta_time * (this_ptr->base).speed;
    *(float *)&(this_ptr->base).base.field_0x2594 = fVar24 * fVar26;
  }
  else {
    fVar26 = _DAT_005f5650 * delta_time;
    fVar24 = (this_ptr->base).speed;
    *(uint *)&(this_ptr->base).base.field_0x2594 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(float *)&(this_ptr->base).base.field_0x2598 = fVar26 * fVar24;
  }
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 != 0) {
    EVar6 = (this_ptr->base).base.walk_state;
    if (EVar6 < 2) {
      if (EVar6 == WALK_STATE_WALKING) {
LAB_004632a3:
        iVar9 = 0xe;
      }
      else {
LAB_0046350f:
        iVar9 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,iVar9,1);
    }
    else {
      if (EVar6 < WALK_STATE_NO_PATH) goto LAB_004632a3;
      if (EVar6 != WALK_STATE_NO_PATH) goto LAB_0046350f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0,1);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2254 =
         *(uint *)&(this_ptr->base).base.model.field_0x2258;
    goto switchD_00463536_default;
  }
  switch(iVar9) {
  case 0:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar9 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0xe,1);
      }
      break;
    }
    iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.25);
    if ((iVar9 != 0) &&
       (iVar9 = core_actor_cpp_isOfClass_FUN_0040c840
                          (&((this_ptr->base).victim)->base,"CHero"), iVar9 != 0)) {
      iVar10 = 0;
      iVar9 = 0;
      while ((iVar10 < g_CDemonSetPtr->enemy_count &&
             ((iVar13 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (*(uint *)((int)g_CDemonSetPtr->enemies + iVar9),
                                   g_CDraculaBrideClassInfo.name_hash), iVar13 == 0 ||
              (*(int *)(iVar13 + 0x10b84) == 0))))) {
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 4;
      }
      if (iVar10 == g_CDemonSetPtr->enemy_count) {
        _sprintf(acStack_530,"bride-%d?.wav");
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_530,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0x17,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
        pCVar7 = (this_ptr->base).victim;
        puVar15 = &(pCVar7->base).field_0x20;
        this_ptr->mist_state = 1;
        if (&this_ptr->new_pos != (CVector3f *)puVar15) {
          (this_ptr->new_pos).x = *(float *)puVar15;
          (this_ptr->new_pos).y = *(float *)&(pCVar7->base).field_0x24;
          (this_ptr->new_pos).z = *(float *)&(pCVar7->base).field_0x28;
        }
        this_ptr->vanish_timer = 0.0;
        break;
      }
    }
    if (this_ptr->action_delay < 0.0) {
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
      this_ptr->action_delay = fStack_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0xd,1);
      break;
    }
    goto LAB_004640b3;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_3f0);
    fStack_3ec = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar25 = aSStack_3f0;
    pCStack_3bc = this_ptr;
    pCStack_3b8 = this_ptr;
    fVar24 = 0.4;
    fStack_14 = fStack_3ec;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01ba5778 * 0x30);
    pfVar22 = afStack_284 + 2;
    afStack_284[2] = afStack_314[2];
    afStack_284[(uint)bVar17 * -2 + 3] = afStack_314[(uint)bVar17 * -2 + 3];
    afStack_284[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_314[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar22);
    pCVar23 = &CStack_c0;
    CStack_c0.x = fStack_2f4;
    *(float *)((int)&CStack_c0 + (uint)bVar17 * -8 + 4) = afStack_314[(uint)bVar17 * -2 + 9];
    pCVar11 = this_ptr;
    *(float *)((int)&CStack_c0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_314[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar11->base,pCVar23,fVar24,pSVar25);
    this_ptr->attack_landed = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_42c);
    fStack_428 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar25 = aSStack_42c;
    pCStack_3f8 = this_ptr;
    pCStack_3f4 = this_ptr;
    fVar24 = 0.4;
    fStack_14 = fStack_428;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01ba5778 * 0x30);
    pfVar22 = afStack_8c + 2;
    afStack_8c[2] = (float)uStack_78;
    afStack_8c[(uint)bVar17 * -2 + 3] = afStack_8c[(uint)bVar17 * -2 + 6];
    afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar22);
    pCVar23 = &CStack_d8;
    CStack_d8.x = afStack_200[2];
    *(float *)((int)&CStack_d8 + (uint)bVar17 * -8 + 4) = afStack_200[(uint)bVar17 * -2 + 3];
    pCVar11 = this_ptr;
    *(float *)((int)&CStack_d8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_200[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar11->base,pCVar23,fVar24,pSVar25);
    break;
  case 7:
    if (this_ptr->exploded == 0) {
      core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01ba5794);
      pfVar22 = afStack_1b8 + 0x11;
      afStack_174[0] = afStack_224[2];
      afStack_1b8[(uint)bVar17 * -2 + 0x12] = afStack_224[(uint)bVar17 * -2 + 3];
      afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x13] =
           afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar22);
      pCVar23 = (CVector3f *)&(this_ptr->base).base.base.orient;
      iVar10 = 0;
      fStack_24c = fStack_204;
      afStack_248[(uint)bVar17 * -2] = afStack_200[(uint)bVar17 * -2];
      afStack_248[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
           afStack_200[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      iVar9 = 1;
      CStack_264.x = fStack_24c;
      *(float *)((int)&CStack_264 + (uint)bVar17 * -8 + 4) = afStack_248[(uint)bVar17 * -2];
      *(float *)((int)&CStack_264 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           afStack_248[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (0x01C3DEB4,&CStack_264,pCVar23,iVar9,iVar10);
      iVar10 = 0;
      iVar9 = 1;
      puVar16 = (uint *)((int)this_ptr + (uint)bVar17 * -8 + 0x34);
      CStack_234.x = (this_ptr->base).base.base.orient.vec.x;
      *(uint *)((int)&CStack_234 + (uint)bVar17 * -8 + 4) = *puVar16;
      *(uint *)((int)&CStack_234 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
           puVar16[(uint)bVar17 * -2 + 1];
      CStack_234.x = CStack_234.x + _DAT_005d10a4;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (0x01C3DEB4,&CStack_264,&CStack_234,iVar9,iVar10);
    }
    break;
  case 8:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar9 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0xe,1);
      }
    }
    else {
      if (((this_ptr->base).base.hit_points < _DAT_005f564c) || (this_ptr->action_delay < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&(this_ptr->base).base.model,0,1);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
        this_ptr->action_delay = fStack_14;
      }
      pCVar8 = &(this_ptr->base).base.model;
      if (this_ptr->attack_landed == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar8,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar8,0x19,1);
        this_ptr->attack_landed = 0;
      }
    }
    break;
  case 9:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_5f8,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_5f8,1.0);
      iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar9 != 0) {
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_5f8,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar8 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CCharacter *)0x0) {
      if (0.0 <= this_ptr->action_delay) {
        fVar26 = 0.08726646;
        fVar24 = 0.5;
        CStack_144.x = 0.0;
        CStack_144.z = 0x40000000;
        pCVar23 = &CStack_144;
        CStack_144.y = 0.0;
        pCVar7 = (this_ptr->base).victim;
        pCVar14 = (*((pCVar7->base).vtable._ub)->getPathMap)(&pCVar7->base);
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar14,
                           pCVar23,fVar24,fVar26);
        if (iVar9 < 0) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar8,8,1);
        }
        else if (iVar9 < 1) {
          pCVar7 = (this_ptr->base).victim;
          fStack_1a4 = *(float *)&(pCVar7->base).field_0x20 -
                       *(float *)&(this_ptr->base).base.base.field_0x20;
          fStack_1a0 = *(float *)&(pCVar7->base).field_0x24 -
                       *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_19c = *(float *)&(pCVar7->base).field_0x28 -
                       *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_cc = fStack_1a4;
          afStack_c8[(uint)bVar17 * -2] = afStack_1b8[(uint)bVar17 * -2 + 6];
          afStack_c8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
          if (&fStack_138 != &fStack_cc) {
            fStack_138 = fStack_cc;
            fStack_134 = afStack_c8[0];
            fStack_130 = afStack_c8[1];
          }
          if ((float)_DAT_005d1094 <
              SQRT(fStack_130 * fStack_130 + fStack_138 * fStack_138 + fStack_134 * fStack_134)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&fStack_138);
            uStack_15c = uStack_90;
            afStack_1b8[(uint)bVar17 * -2 + 0x18] = afStack_8c[(uint)bVar17 * -2];
            afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x19] =
                 afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (fStack_158 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d109c) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.7853982,0.7853982);
              (this_ptr->base).base.base.orient.vec.y =
                   fStack_14 + (this_ptr->base).base.base.orient.vec.y;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,3,1);
            }
          }
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar8,2,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-bite?.wav");
          (this_ptr->base).attack_cooldown = 1.0;
        }
      }
      else {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
        this_ptr->action_delay = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar8,0,1);
      }
      break;
    }
    iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
    if (iVar9 == 0) break;
LAB_004640b3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,0xe,1);
    break;
  case 0xc:
    iVar9 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar9 = (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x114))(iVar9);
    if ((iVar9 == 0) &&
       (iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,this_ptr->rise_event), iVar9 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0xd,1);
    }
    break;
  case 0xe:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_4cc,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_4cc,1.0);
      iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar9 != 0) {
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_4cc,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    fVar24 = 0x3FC00000;
    pCVar8 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar9 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar9 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar8,0,1);
      }
    }
    else {
      fStack_48 = 0x3FC00000;
      *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
      *(uint *)&(this_ptr->base).base.model.field_0x2258 =
           *(uint *)&(this_ptr->base).base.model.field_0x225c;
      *(uint *)&(this_ptr->base).base.model.field_0x2254 =
           *(uint *)&(this_ptr->base).base.model.field_0x2258;
      CStack_1c8.x = 0.0;
      CStack_1c8.y = 0.0;
      fVar26 = 0.08726646;
      CStack_1c8.z = fVar24;
      pCVar23 = &CStack_1c8;
      fVar24 = 0.5;
      pCVar7 = (this_ptr->base).victim;
      pCVar14 = (*((pCVar7->base).vtable._ub)->getPathMap)(&pCVar7->base);
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,
                         (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,pCVar14,pCVar23,
                         fVar24,fVar26);
      if (iVar9 < 0) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar8,0,1);
      }
      else if ((0 < iVar9) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        iVar9 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
        if (iVar9 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar8,0x13,1);
        }
        if (iVar9 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0x14,1);
        }
        if (iVar9 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,0x15,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-swipe?.wav");
        }
        (this_ptr->base).attack_cooldown = 1.0;
      }
    }
    break;
  case 0xf:
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->rise_event);
    if (iVar9 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004646db_caseD_10;
  case 0x11:
    if (((this_ptr->base).pool_me != 0) || (*(int *)&(this_ptr->base).base.base.field_0xdc != 0))
    break;
    core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,0);
    pfVar22 = afStack_200 + 5;
    afStack_1ec[0] = afStack_2c0[2];
    afStack_200[(uint)bVar17 * -2 + 6] = afStack_2c0[(uint)bVar17 * -2 + 3];
    afStack_200[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         afStack_2c0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar22);
    blood_type = BLOOD_TYPE_RED;
    pCVar23 = &CStack_120;
    CStack_120.x = afStack_248[2];
    *(float *)((int)&CStack_120 + (uint)bVar17 * -8 + 4) = afStack_248[(uint)bVar17 * -2 + 3];
    this_ptr_01 = g_CGorePtr;
    *(float *)((int)&CStack_120 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_248[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar23,blood_type);
    goto switchD_004646db_caseD_10;
  case 0x12:
    iVar9 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar9 = (**(code **)(*(int *)(iVar9 + 0x2b0) + 0x114))(iVar9);
    if ((iVar9 == 0) &&
       (iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,this_ptr->rise_event), iVar9 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_468);
    fStack_464 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar25 = aSStack_468;
    pCStack_434 = this_ptr;
    pCStack_430 = this_ptr;
    fVar24 = 0.4;
    fStack_14 = fStack_464;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01ba5778 * 0x30);
    pfVar22 = afStack_104 + 2;
    afStack_104[2] = afStack_1b8[2];
    afStack_104[(uint)bVar17 * -2 + 3] = afStack_1b8[(uint)bVar17 * -2 + 3];
    afStack_104[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar22);
    pCVar23 = &CStack_114;
    CStack_114.x = afStack_b0[2];
    *(float *)((int)&CStack_114 + (uint)bVar17 * -8 + 4) = afStack_b0[(uint)bVar17 * -2 + 3];
    pCVar11 = this_ptr;
    *(float *)((int)&CStack_114 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar11->base,pCVar23,fVar24,pSVar25);
    this_ptr->attack_landed = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_3b4);
    fStack_3b0 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar25 = aSStack_3b4;
    pCStack_380 = this_ptr;
    pCStack_37c = this_ptr;
    fVar24 = 0.4;
    fStack_14 = fStack_3b0;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01ba5778 * 0x30);
    pfVar22 = afStack_8c + 8;
    afStack_6c[0] = (float)uStack_318;
    afStack_8c[(uint)bVar17 * -2 + 9] = afStack_314[(uint)bVar17 * -2];
    afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
         afStack_314[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar22);
    pCVar23 = &CStack_f0;
    CStack_f0.x = fStack_33c;
    *(float *)((int)&CStack_f0 + (uint)bVar17 * -8 + 4) = afStack_338[(uint)bVar17 * -2];
    pCVar11 = this_ptr;
    *(float *)((int)&CStack_f0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_338[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar11->base,pCVar23,fVar24,pSVar25);
    this_ptr->attack_landed = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_378);
    fStack_374 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar25 = aSStack_378;
    pCStack_344 = this_ptr;
    pCStack_340 = this_ptr;
    fVar24 = 0.4;
    fStack_14 = fStack_374;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + _DAT_01ba5780 * 0x30);
    pfVar22 = afStack_338 + 2;
    afStack_338[2] = (float)uStack_300;
    afStack_338[(uint)bVar17 * -2 + 3] = afStack_314[(uint)bVar17 * -2 + 6];
    afStack_338[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_314[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    core_actor_cpp_FUN_00408d70(this_ptr,pfVar22);
    pCVar23 = &CStack_258;
    CStack_258.x = fStack_12c;
    *(float *)((int)&CStack_258 + (uint)bVar17 * -8 + 4) = afStack_128[(uint)bVar17 * -2];
    pCVar11 = this_ptr;
    *(float *)((int)&CStack_258 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_128[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar11->base,pCVar23,fVar24,pSVar25);
    break;
  case 0x17:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf(acStack_594,"bride-%d?.wav");
      core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_594,1.0);
      iVar9 = core_actor_cpp_randomChance_FUN_0040d060(0.2);
      if (iVar9 != 0) {
        core_dracbrid_cpp_FUN_00465400(this_ptr,acStack_594,1.0);
      }
    }
    switch(this_ptr->mist_state) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0,1);
      break;
    case 1:
      fVar24 = this_ptr->vanish_timer + delta_time;
      this_ptr->vanish_timer = fVar24;
      if (0x3F800000 < fVar24) {
        this_ptr->mist_state = 2;
        this_ptr->vanish_timer = 0x3F800000;
      }
      pCVar8 = &(this_ptr->base).base.model;
      CStack_9c.x = 0.0;
      CStack_9c.y = 3.0;
      CStack_9c.z = 0.0;
      pCStack_38 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar8);
      iStack_18 = 0;
      if (0 < pCStack_38->bone_count) {
        do {
          pCStack_3c = pCVar8;
          core_skeleton_cpp_FUN_00546a90(pCStack_3c,iStack_18);
          puVar16 = &uStack_288;
          uStack_288 = uStack_198;
          afStack_284[(uint)bVar17 * -2] = afStack_1b8[(uint)bVar17 * -2 + 9];
          afStack_284[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar16);
          iVar10 = 0xffff;
          pCVar23 = &CStack_9c;
          fVar24 = 0.5;
          CStack_294.x = fStack_b4;
          *(float *)((int)&CStack_294 + (uint)bVar17 * -8 + 4) = afStack_b0[(uint)bVar17 * -2];
          *(float *)((int)&CStack_294 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               afStack_b0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          iVar9 = iStack_18 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (0x01C3DEB4,&CStack_294,fVar24,pCVar23,iVar10);
          pCVar8 = pCStack_3c;
          iStack_18 = iVar9;
        } while (iVar9 < pCStack_38->bone_count);
      }
      break;
    case 2:
      iStack_28 = 0;
      iStack_44 = 1;
      pCStack_20 = &this_ptr->new_pos;
      for (iStack_24 = 0; fVar24 = 0x3F800000, iStack_24 < g_CDemonSetPtr->character_count;
          iStack_24 = iStack_24 + 1) {
        pCVar11 = *(CDraculaBride **)((int)g_CDemonSetPtr->characters + iStack_28);
        if (((pCVar11 != (CDraculaBride *)0x0) && (pCVar11 != this_ptr)) &&
           (EVar12 = (*(((pCVar11->base).base.base.vtable._uc)->_uc).getDeathState)
                               ((CCharacter *)pCVar11), (int)EVar12 < 1)) {
          fStack_270 = *(float *)&(pCVar11->base).base.base.field_0x20 - pCStack_20->x;
          fStack_26c = *(float *)&(pCVar11->base).base.base.field_0x24 - pCStack_20->y;
          fStack_268 = *(float *)&(pCVar11->base).base.base.field_0x28 - pCStack_20->z;
          fStack_228 = fStack_270;
          afStack_224[(uint)bVar17 * -2] = afStack_284[(uint)bVar17 * -2 + 6];
          afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               afStack_284[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
          if (SQRT(afStack_224[1] * afStack_224[1] +
                   fStack_228 * fStack_228 + afStack_224[0] * afStack_224[0]) < (float)_DAT_005d10b4
             ) goto switchD_00463536_default;
        }
        iStack_28 = iStack_28 + 4;
      }
      if (iStack_44 != 0) {
        this_ptr->mist_state = 3;
        puVar15 = &(this_ptr->base).base.base.field_0x20;
        this_ptr->vanish_timer = fVar24;
        *(float *)puVar15 = pCStack_20->x;
        *(float *)&(this_ptr->base).base.base.field_0x24 = pCStack_20->y;
        *(float *)&(this_ptr->base).base.base.field_0x28 = pCStack_20->z;
        pCVar7 = (this_ptr->base).victim;
        if (pCVar7 != (CCharacter *)0x0) {
          fStack_1bc = *(float *)&(pCVar7->base).field_0x20 - *(float *)puVar15;
          afStack_1b8[0] =
               *(float *)&(pCVar7->base).field_0x24 -
               *(float *)&(this_ptr->base).base.base.field_0x24;
          afStack_1b8[1] =
               *(float *)&(pCVar7->base).field_0x28 -
               *(float *)&(this_ptr->base).base.base.field_0x28;
          afStack_168[0] = fStack_1bc;
          afStack_1b8[(uint)bVar17 * -2 + 0x15] = afStack_1b8[(uint)bVar17 * -2];
          afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x16] =
               afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_1b8 + 0x14);
          pUVar1 = &(this_ptr->base).base.base.orient;
          fStack_18c = fStack_2ac;
          afStack_1b8[(uint)bVar17 * -2 + 0xc] = afStack_2c0[(uint)bVar17 * -2 + 6];
          afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
               afStack_2c0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
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
      pCVar8 = &(this_ptr->base).base.model;
      CStack_150.x = 0.0;
      CStack_150.y = 3.0;
      CStack_150.z = 0.0;
      pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar8);
      iStack_1c = 0;
      pCStack_2c = (CMotionController *)pCVar8;
      if (0 < pCStack_34->bone_count) {
        do {
          core_skeleton_cpp_FUN_00546a90(pCStack_2c,iStack_1c);
          puVar16 = &uStack_108;
          uStack_108 = uStack_1e0;
          afStack_104[(uint)bVar17 * -2] = afStack_200[(uint)bVar17 * -2 + 9];
          afStack_104[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
               afStack_200[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar16);
          iVar9 = 0xffff;
          pCVar23 = &CStack_150;
          fVar24 = 0.5;
          position = &CStack_2e8;
          CStack_2e8.x = fStack_2a0;
          *(float *)((int)&CStack_2e8 + (uint)bVar17 * -8 + 4) = afStack_2c0[(uint)bVar17 * -2 + 9];
          this_ptr_00 = 0x01C3DEB4;
          *(float *)((int)&CStack_2e8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
               afStack_2c0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (this_ptr_00,position,fVar24,pCVar23,iVar9);
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < pCStack_34->bone_count);
      }
      fVar24 = this_ptr->vanish_timer - delta_time;
      this_ptr->vanish_timer = fVar24;
      if (fVar24 < 0.0) {
        this_ptr->vanish_timer = 0.0;
        this_ptr->mist_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,0xe,1);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
        this_ptr->action_delay = fStack_14;
      }
    }
    break;
  case 0x1a:
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->rise_event);
    if (iVar9 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,0,1);
    }
  }
switchD_00463536_default:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar9 = core_motion_cpp_FUN_005035c0(&(this_ptr->base).base.model);
  iStack_40 = *(int *)(iVar9 + 0x24);
  if ((((iStack_40 != 0x11) && (iStack_40 != 0x10)) && (iStack_40 != 0xf)) ||
     (*(int *)&(this_ptr->base).base.base.field_0xdc != 0)) {
    if (iStack_40 == 3) {
      *(float *)&(this_ptr->base).base.model.field_0x225c =
           *(float *)&(this_ptr->base).base.model.field_0x225c * (float)_DAT_005d10ac;
    }
    pCVar7 = (this_ptr->base).victim;
    if ((pCVar7 != (CCharacter *)0x0) &&
       (pCVar11 = (CDraculaBride *)(*(((pCVar7->base).vtable._uc)->_uc).getGrabber)(pCVar7),
       pCVar11 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_2dc = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    afStack_2d8[0] = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    afStack_2d8[1] = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_e4 = fStack_2dc;
    afStack_e0[(uint)bVar17 * -2] = afStack_2d8[(uint)bVar17 * -2];
    afStack_e0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_2d8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    puVar15 = &(this_ptr->base).base.field_0x257c;
    fStack_180 = fStack_e4 + *(float *)puVar15;
    fStack_17c = afStack_e0[0] + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_178 = afStack_e0[1] + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_60 = fStack_180;
    afStack_8c[(uint)bVar17 * -2 + 0xc] = afStack_1b8[(uint)bVar17 * -2 + 0xf];
    afStack_8c[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
         afStack_1b8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    afStack_2d8[5] = fStack_60 + *(float *)puVar2;
    afStack_2c0[0] = fStack_5c + *(float *)&(this_ptr->base).base.model.field_0x2258;
    afStack_2c0[1] = fStack_58 + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_324.x = afStack_2d8[5];
    *(float *)((int)&CStack_324 + (uint)bVar17 * -8 + 4) = afStack_2c0[(uint)bVar17 * -2];
    *(float *)((int)&CStack_324 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_2c0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar15 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    uVar3 = *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 = uVar3;
    *(uint *)puVar2 = uVar3;
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
