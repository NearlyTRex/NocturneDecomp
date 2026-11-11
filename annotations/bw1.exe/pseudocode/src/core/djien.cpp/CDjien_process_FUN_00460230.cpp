// Name: core_djien.cpp_CDjien_process_FUN_00460230
// Address: 00460230
// Address Range: [[00460230, 0046095e]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_process_FUN_00460230(CDjien *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_djien_cpp_CDjien_process_FUN_00460230(CDjien *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  uint uVar4;
  CEnemy_full_vtable *pCVar5;
  CCharacter *pCVar6;
  CHero_full_vtable *pCVar7;
  float fVar8;
  float fVar9;
  CConsole *pCVar10;
  CSound *this_ptr_00;
  int iVar11;
  SMotion *pSVar12;
  uint uVar13;
  CPathMap *path_map;
  byte bVar14;
  float afStackY_1078 [1012];
  CVector3f *pCVar15;
  float min_distance;
  float max_distance;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar14 = 0;
  iVar11 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_24 = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < fStack_24) {
    iVar11 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar1->base,afStack_68 + 0x11)
    ;
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar11);
  }
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  fVar8 = delta_time * (this_ptr->base).speed * _DAT_005d8d68;
  uVar13 = pSVar12->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,fVar8);
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    if (this_ptr->walk_target != 0) {
      (this_ptr->base).victim = (CCharacter *)0x0;
      this_ptr->state_timer = 0.0;
      core_charactr_cpp_FUN_00431cc0
                (this_ptr,this_ptr->walk_target,0x3f800000,0x41000000,&this_ptr->walk_status);
      uVar4 = this_ptr->walk_status;
      if (uVar4 == 0) {
LAB_004605ea:
        this_ptr->walk_target = 0;
        this_ptr->state_timer = 4.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,0x12,1);
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: reached dest - going to protect\n");
      }
      else if (uVar4 < 2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,6,1);
      }
      else {
        if (uVar4 != 2) goto LAB_004605ea;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,7,1);
      }
    }
    this_ptr_00 = 0x02C82A60;
    if ((uVar13 < 3) || (uVar13 < 4)) {
      fVar8 = this_ptr->state_timer - delta_time;
      this_ptr->is_alert = 0;
      this_ptr->state_timer = fVar8;
      pCVar10 = g_CConsolePtr;
      if (fVar8 <= 0.0) {
        this_ptr->state_timer = 0.0;
        engine_console_cpp_FUN_00445430(pCVar10,"DJIEN: walk waited long enough - going home\n");
        iVar11 = core_charactr_cpp_FUN_00435380(this_ptr,"DjienHome");
        this_ptr->walk_target = iVar11;
      }
    }
    else if (uVar13 < 6) {
      if (uVar13 == 5) {
        this_ptr->is_alert = 1;
        iVar11 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0(this_ptr_00,this_ptr->sfx_handle)
        ;
        if (iVar11 == 0) {
          uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"djien_awake.wav @ 4");
          this_ptr->sfx_handle = uVar13;
        }
      }
    }
    else if ((uVar13 < 7) || (uVar13 < 8)) {
      pCVar7 = (this_ptr->base).base.base.vtable._uh;
      this_ptr->is_alert = 1;
      (*(pCVar7->_uh).toggleGoggles)((CHero *)this_ptr);
      fVar8 = (float)this_ptr->walk_target;
      if (fVar8 == 0.0) {
        iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                           (0x01C51D80,"DjienInZone");
        if (iVar11 == 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: got outside of box - hesitating\n");
          unkafter_djien_cpp_FUN_00460960(this_ptr);
        }
        else {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          fVar9 = 0x41000000;
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: lost victim - hesitating\n");
            unkafter_djien_cpp_FUN_00460960(this_ptr);
          }
          else {
            fStack_18 = 0x41000000;
            max_distance = 0.17453292;
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            min_distance = 0.5;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            (this_ptr->base).base.model.accumulated_root_motion.x =
                 (this_ptr->base).base.model.accumulated_root_motion.y;
            CStack_84.z = fVar9;
            pCVar15 = &CStack_84;
            pCVar6 = (this_ptr->base).victim;
            CStack_84.x = fVar8;
            CStack_84.y = fVar8;
            path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
            iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                               ((CCharacter *)this_ptr,
                                &(((this_ptr->base).victim)->base).location.position,path_map,
                                pCVar15,min_distance,max_distance);
            if (iVar11 != 0) {
              engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: reached victim or got confused - hesitating\n");
              unkafter_djien_cpp_FUN_00460960(this_ptr);
            }
          }
        }
      }
    }
    else if (uVar13 == 0x12) {
      fVar8 = this_ptr->state_timer - delta_time;
      this_ptr->is_alert = 1;
      this_ptr->state_timer = fVar8;
      if (fVar8 <= 0.0) {
        pCVar5 = (this_ptr->base).base.base.vtable._ue;
        this_ptr->state_timer = 0.0;
        (*(pCVar5->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar6 = (this_ptr->base).victim;
        if (pCVar6 != (CCharacter *)0x0) {
          fStack_48 = (pCVar6->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_44 = (pCVar6->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_40 = (pCVar6->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_30 = fStack_48;
          afStack_68[(uint)bVar14 * -2 + 0xf] = afStack_68[(uint)bVar14 * -2 + 9];
          afStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
               afStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
          fStack_1c = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
          fStack_20 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
          if (fStack_20 < (this_ptr->base).guard_distance) {
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"DJIEN: protect found victim - going to run\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      (&(this_ptr->base).base.model.base,7,1);
          }
        }
      }
    }
    goto LAB_00460332;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_00460307:
      iVar11 = 6;
    }
    else {
LAB_00460577:
      fStack_14 = core_motion_cpp_FUN_00525020(&(this_ptr->base).base.model.base);
      if (fStack_14 <= (float)_DAT_005d8d70) goto LAB_0046031a;
      iVar11 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar11,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_00460307;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00460577;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
LAB_0046031a:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00460332:
  if (this_ptr->num_sacks_to_blow <= this_ptr->num_sacks_blown) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"DjienSacksGone");
    iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                       (0x01C51D80,"DjienHeartDestroyed");
    if (iVar11 != 0) {
      pCVar1 = &(this_ptr->base).base.model;
      (this_ptr->base).base.hit_points = 0.0;
      pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
      if ((pSVar12->state_index != 0xf) && (pSVar12->state_index != 0xe)) {
        core_sound_cpp_CSound_killSound_FUN_0057d9d0(0x02C82A60,this_ptr->sfx_handle);
        uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                           ((CDemonActor *)this_ptr,"djien_die.wav@ 4");
        (this_ptr->base).pool_me = 1;
        this_ptr->sfx_handle = uVar13;
        if (this_ptr->blown_up == 0) {
          unkafter_djien_cpp_FUN_00460cb0(this_ptr);
          core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10(&pCVar1->base,0xf,0.0);
        }
      }
    }
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar11 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar11 != 0) {
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_6c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_68[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_68[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_90 = fStack_6c;
    *(float *)((int)&stack0xffffff74 + (uint)bVar14 * -8) = afStack_68[(uint)bVar14 * -2];
    *(float *)((int)&stack0xffffff78 + (uint)bVar14 * -8 + (uint)bVar14 * -8) =
         afStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    pCVar15 = &(this_ptr->base).base.position_delta;
    afStack_68[2] = fStack_90 + pCVar15->x;
    afStack_68[3] = fStack_8c + (this_ptr->base).base.position_delta.y;
    fStack_58 = fStack_88 + (this_ptr->base).base.position_delta.z;
    fStack_54 = afStack_68[2];
    afStack_68[(uint)bVar14 * -2 + 6] = afStack_68[(uint)bVar14 * -2 + 3];
    afStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_3c = fStack_54 + pCVar2->x;
    fStack_38 = fStack_50 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_34 = fStack_4c + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_78.x = fStack_3c;
    *(float *)((int)&CStack_78 + (uint)bVar14 * -8 + 4) = afStack_68[(uint)bVar14 * -2 + 0xc];
    *(float *)((int)&CStack_78 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_68[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_78);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
