// Name: core_cow.cpp_CZombieCow_process_FUN_00445130
// Address: 00445130
// Address Range: [[00445130, 004456a9]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_process_FUN_00445130(CZombieCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cow_cpp_CZombieCow_process_FUN_00445130(CZombieCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  uint uVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CZombieCow *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_10b8 [997];
  uint *puVar10;
  float *pfVar11;
  CVector3f *pCVar12;
  float fVar13;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_10c [4];
  float fStack_108;
  CZombieCow *pCStack_d8;
  CZombieCow *pCStack_d4;
  uint uStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [3];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint uStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  uint uStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  uint uStack_40;
  float afStack_3c [5];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar5 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_1c = delta_time * *(float *)&(this_ptr->base).field_0xcdcc;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_1c) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&this_ptr_00->base,afStack_3c + 8);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar5);
  }
  fVar13 = *(float *)&(this_ptr->base).field_0xcdcc;
  *(float *)&(this_ptr->base).base.field_0x2524 =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar13);
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  uVar2 = *(uint *)(pSVar6 + 0x24);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(uVar2) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      if (iVar5 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                            (0x02CF5680,this_ptr->sfx_handle);
          if (iVar5 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"cow?.wav");
            this_ptr->sfx_handle = uVar8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar13 = 0x40900000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
        }
      }
      else {
        fStack_18 = 0x40900000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_64.x = 0.0;
        CStack_64.y = 0.0;
        max_distance = 0.17453292;
        CStack_64.z = fVar13;
        pCVar12 = &CStack_64;
        fVar13 = 0.5;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar12,
                           fVar13,max_distance);
        if (iVar5 < 0) {
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
        }
        else if ((0 < iVar5) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,2,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_10c);
      fStack_108 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      pCStack_d8 = this_ptr;
      pCStack_d4 = this_ptr;
      fStack_14 = fStack_108;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&(this_ptr->base).base.model.field_0xe80 + this_ptr->bone_head * 0x30
                 ,0x3f333333,aSStack_10c);
      puVar10 = &uStack_58;
      uStack_58 = uStack_d0;
      afStack_54[(uint)bVar9 * -2] = afStack_cc[(uint)bVar9 * -2];
      afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408b80(this_ptr,puVar10);
      pfVar11 = afStack_cc + 0xb;
      afStack_a0[0] = (float)uStack_88;
      afStack_cc[(uint)bVar9 * -2 + 0xc] = afStack_cc[(uint)bVar9 * -2 + 0x12];
      pCVar7 = this_ptr;
      afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
      core_enemy_cpp_FUN_004893f0(pCVar7,pfVar11);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_0054dbd0(this_ptr_00,0);
        puVar10 = &uStack_40;
        uStack_40 = afStack_3c[2];
        afStack_3c[(uint)bVar9 * -2] = afStack_3c[(uint)bVar9 * -2 + 3];
        afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408b80(this_ptr,puVar10);
        blood_type = BLOOD_TYPE_RED;
        CStack_4c.x = fStack_b8;
        *(float *)((int)&CStack_4c + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2 + 6];
        *(float *)((int)&CStack_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_4c,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_004456a3_caseD_3;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_00445202:
      iVar5 = 1;
    }
    else {
LAB_004453e7:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_00445202;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004453e7;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004456a3_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar7 = (CZombieCow *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    afStack_cc[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_cc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_bc = (this_ptr->base).base.velocity.z * delta_time;
    fStack_70 = afStack_cc[2];
    afStack_6c[(uint)bVar9 * -2] = afStack_cc[(uint)bVar9 * -2 + 3];
    afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    pCVar12 = &(this_ptr->base).base.position_delta;
    fStack_94 = fStack_70 + pCVar12->x;
    fStack_90 = afStack_6c[0] + (this_ptr->base).base.position_delta.y;
    fStack_8c = afStack_6c[1] + (this_ptr->base).base.position_delta.z;
    fStack_28 = fStack_94;
    afStack_3c[(uint)bVar9 * -2 + 6] = afStack_cc[(uint)bVar9 * -2 + 0xf];
    afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_ac = fStack_28 + pCVar1->x;
    fStack_a8 = fStack_24 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_a4 = fStack_20 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_7c.x = fStack_ac;
    *(float *)((int)&CStack_7c + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2 + 9];
    *(float *)((int)&CStack_7c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar12->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_7c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
