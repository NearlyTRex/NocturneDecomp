// Name: core_succubus.cpp_CSuccubus_process_FUN_0056f6d0
// Address: 0056f6d0
// Address Range: [[0056f6d0, 0056fe48]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_process_FUN_0056f6d0(CSuccubus *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0056fddb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_process_FUN_0056f6d0(CSuccubus *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  byte *puVar2;
  byte *puVar3;
  uint uVar4;
  char cVar5;
  EWalkState EVar6;
  CCloth *pCVar7;
  CCharacter *pCVar8;
  CDemonActor_vtable *pCVar9;
  CDemonMission *pCVar10;
  int iVar11;
  CHotDemon *this_ptr_00;
  CHotDemon *pCVar12;
  CPathMap *path_map;
  uint uVar13;
  UOrientationVector *pUVar14;
  char *pcVar15;
  CDeformableModelInstance *pCVar16;
  char (*pacVar17) [40];
  byte bVar18;
  float afStackY_1094 [1012];
  CVector3f *direction;
  float fVar19;
  float max_distance;
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
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  char *pcStack_20;
  CMotionController *pCStack_1c;
  CHotDemon *pCStack_18;
  float fStack_14;
  
  bVar18 = 0;
  iVar11 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_28 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_28) {
    iVar11 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                       ((CMotionController *)&(this_ptr->base).base.model,afStack_48 + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar11);
  }
  *(uint *)&(this_ptr->hotdemon_model).field_0x225c = 0;
  *(uint *)&(this_ptr->hotdemon_model).field_0x2258 =
       *(uint *)&(this_ptr->hotdemon_model).field_0x225c;
  *(uint *)&(this_ptr->hotdemon_model).field_0x2254 =
       *(uint *)&(this_ptr->hotdemon_model).field_0x2258;
  fStack_28 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_28) {
    core_motion_cpp_CMotionController_advance_FUN_005030c0
              ((CMotionController *)&this_ptr->hotdemon_model,afStack_48 + 8);
  }
  fVar19 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar19);
  pCStack_1c = (CMotionController *)&(this_ptr->base).base.model;
  iVar11 = core_motion_cpp_FUN_005035c0(pCStack_1c);
  uVar13 = *(uint *)(iVar11 + 0x24);
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    if (uVar13 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar8 = (this_ptr->base).victim;
      if (pCVar8 == (CCharacter *)0x0) {
        iVar11 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar11 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
      else {
        fStack_a0 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                    *(float *)&(pCVar8->base).field_0x20;
        fStack_9c = *(float *)&(this_ptr->base).base.base.field_0x24 -
                    *(float *)&(pCVar8->base).field_0x24;
        fStack_98 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                    *(float *)&(pCVar8->base).field_0x28;
        afStack_48[2] = fStack_a0;
        afStack_48[(uint)bVar18 * -2 + 3] = *(float *)((int)&stack0xffffff64 + (uint)bVar18 * -8);
        afStack_48[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
             *(float *)((int)&stack0xffffff68 + (uint)bVar18 * -8 + (uint)bVar18 * -8);
        if (SQRT(fStack_38 * fStack_38 +
                 afStack_48[2] * afStack_48[2] + afStack_48[3] * afStack_48[3]) <
            (this_ptr->base).guard_distance) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,1,1);
        }
      }
    }
    else if ((uVar13 < 2) || (uVar13 == 2)) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar11 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        pCVar16 = &(this_ptr->base).base.model;
        if (iVar11 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar16,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar16,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fVar19 = 0.5;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        CStack_58.x = 0.0;
        CStack_58.z = 0x3FC00000;
        direction = &CStack_58;
        CStack_58.y = 0.0;
        pCVar8 = (this_ptr->base).victim;
        path_map = (*((pCVar8->base).vtable._ub)->getPathMap)(&pCVar8->base);
        iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                           ((CCharacter *)this_ptr,
                            (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                            direction,fVar19,max_distance);
        if (-1 < iVar11) {
          pCVar8 = (this_ptr->base).victim;
          fStack_4c = *(float *)&(pCVar8->base).field_0x20 -
                      *(float *)&(this_ptr->base).base.base.field_0x20;
          afStack_48[0] =
               *(float *)&(pCVar8->base).field_0x24 -
               *(float *)&(this_ptr->base).base.base.field_0x24;
          afStack_48[1] =
               *(float *)&(pCVar8->base).field_0x28 -
               *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_94 = fStack_4c;
          *(float *)((int)&stack0xffffff70 + (uint)bVar18 * -8) = afStack_48[(uint)bVar18 * -2];
          *(float *)((int)&stack0xffffff74 + (uint)bVar18 * -8 + (uint)bVar18 * -8) =
               afStack_48[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
          if ((SQRT(fStack_8c * fStack_8c + fStack_94 * fStack_94 + fStack_90 * fStack_90) <
               _DAT_005fc3d4) && (this_ptr->morph_started == 0)) {
            this_ptr->morph_started = 1;
            this_ptr->morph_timer = 0.0;
            sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
            pCVar9 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->ambient_sfx_cooldown = 9999.9;
            (*pCVar9->playAmbientSound)((CDemonActor *)this_ptr,"succubus-morph.wav");
          }
        }
      }
    }
    goto LAB_0056f82c;
  }
  EVar6 = (this_ptr->base).base.walk_state;
  if (EVar6 < 2) {
    if (EVar6 == WALK_STATE_WALKING) {
LAB_0056f801:
      iVar11 = 1;
    }
    else {
LAB_0056fba2:
      iVar11 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar11,1);
  }
  else {
    if (EVar6 < WALK_STATE_NO_PATH) goto LAB_0056f801;
    if (EVar6 != WALK_STATE_NO_PATH) goto LAB_0056fba2;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_1c,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,">%s confused while walking to scriptDest!\n" + 1,this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
LAB_0056f82c:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar11 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar11 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_88 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_84 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_80 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_ac = fStack_88;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar18 * -8) =
         *(uint *)((int)&stack0xffffff7c + (uint)bVar18 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar18 * -8 + (uint)bVar18 * -8) =
         *(uint *)((int)&stack0xffffff80 + (uint)bVar18 * -8 + (uint)bVar18 * -8);
    puVar2 = &(this_ptr->base).base.field_0x257c;
    fStack_34 = fStack_ac + *(float *)puVar2;
    fStack_30 = fStack_a8 + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_2c = fStack_a4 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_70 = fStack_34;
    *(float *)((int)&stack0xffffff94 + (uint)bVar18 * -8) = afStack_48[(uint)bVar18 * -2 + 6];
    *(float *)((int)&stack0xffffff98 + (uint)bVar18 * -8 + (uint)bVar18 * -8) =
         afStack_48[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
    puVar3 = &(this_ptr->base).base.model.field_0x2254;
    fStack_7c = fStack_70 + *(float *)puVar3;
    fStack_78 = fStack_6c + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_74 = fStack_68 + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_64.x = fStack_7c;
    *(uint *)((int)&CStack_64 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&stack0xffffff88 + (uint)bVar18 * -8);
    *(uint *)((int)&CStack_64 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar18 * -8 + (uint)bVar18 * -8);
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    uVar4 = *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 = uVar4;
    *(uint *)puVar3 = uVar4;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_64);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  pCVar16 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(pCVar16);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  pcStack_20 = (char *)core_motion_cpp_FUN_005035c0(pCVar16);
  fStack_24 = *(float *)&(this_ptr->base).base.model.field_0x8;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            ((CMotionController *)&this_ptr->hotdemon_model,pcStack_20,fStack_24);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            (&this_ptr->hotdemon_model);
  if ((this_ptr->morph_started != 0) &&
     (fVar19 = this_ptr->morph_timer + delta_time, this_ptr->morph_timer = fVar19,
     _DAT_005fc3d8 < fVar19)) {
    this_ptr_00 = (CHotDemon *)debugAllocTracked1(0x10b2c);
    pCVar12 = (CHotDemon *)0x0;
    if (this_ptr_00 != (CHotDemon *)0x0) {
      pCVar12 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(this_ptr_00);
    }
    pCVar10 = 0x01D182F0;
    pCStack_18 = pCVar12;
    if (pCVar12 != (CHotDemon *)0x0) {
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(pCVar10,(CDemonActor *)pCVar12);
      *(uint *)&(pCVar12->base).base.base.field_0x20 =
           *(uint *)&(this_ptr->base).base.base.field_0x20;
      *(uint *)&(pCVar12->base).base.base.field_0x24 =
           *(uint *)&(this_ptr->base).base.base.field_0x24;
      *(uint *)&(pCVar12->base).base.base.field_0x28 =
           *(uint *)&(this_ptr->base).base.base.field_0x28;
      pUVar14 = &(pCVar12->base).base.base.orient;
      *(uint *)&(pCVar12->base).base.base.field_0x2c =
           *(uint *)&(this_ptr->base).base.base.field_0x2c;
      pUVar1 = &(this_ptr->base).base.base.orient;
      if (pUVar14 != pUVar1) {
        (pUVar14->vec).x = (pUVar1->vec).x;
        (pCVar12->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y;
        (pCVar12->base).base.base.orient.vec.z = (this_ptr->base).base.base.orient.vec.z;
      }
      pcVar15 = "hdwing.cth";
      pacVar17 = (pCStack_18->base).base.cloth_list.filenames;
      (pCStack_18->base).base.cloth_list.count = 1;
      do {
        cVar5 = *pcVar15;
        (*pacVar17)[0] = cVar5;
        if (cVar5 == '\0') break;
        cVar5 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        (*pacVar17)[1] = cVar5;
        pacVar17 = (char (*) [40])(*pacVar17 + 2);
      } while (cVar5 != '\0');
      (*((pCStack_18->base).base.base.vtable._ub)->setup)((CDemonActor *)pCStack_18);
      pCVar16 = &(pCStack_18->base).base.model;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
                ((CMotionController *)pCVar16,pcStack_20,fStack_24);
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(pCVar16);
      pCVar12 = pCStack_18;
      *(uint *)&(pCStack_18->base).base.base.field_0x108 =
           *(uint *)&(this_ptr->base).base.base.field_0x108;
      pCVar10 = 0x01D182F0;
      *(uint *)&(pCStack_18->base).base.base.field_0x10c =
           *(uint *)&(this_ptr->base).base.base.field_0x10c;
      *(uint *)&(pCStack_18->base).base.base.field_0x110 =
           *(uint *)&(this_ptr->base).base.base.field_0x110;
      core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(pCVar10,(CDemonActor *)pCStack_18);
      pCVar7 = (this_ptr->hotdemon_cloth_list).cloths[0];
      (this_ptr->hotdemon_cloth_list).cloths[0] = (pCVar12->base).base.cloth_list.cloths[0];
      (pCVar12->base).base.cloth_list.cloths[0] = pCVar7;
    }
  }
  if ((this_ptr->base).base.was_rendered_opaque != 0) {
    core_cloth_cpp_CClothList_process_FUN_005b1780
              (&this_ptr->hotdemon_cloth_list,(CVector3f *)&(this_ptr->base).base.base.field_0x20,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&this_ptr->hotdemon_model);
  }
  iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                     (0x01C38BC0,"succubusShutUp");
  if (iVar11 == 0) {
    iVar11 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
    if ((iVar11 == 0) &&
       (fVar19 = this_ptr->ambient_sfx_cooldown - delta_time,
       this_ptr->ambient_sfx_cooldown = fVar19, fVar19 < 0.0)) {
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,10.0);
      pCVar9 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->ambient_sfx_cooldown = fStack_14;
      uVar13 = (*pCVar9->playSound)((CDemonActor *)this_ptr,"succubus-horny-?.wav");
      this_ptr->sfx_handle = uVar13;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  return;
}
