// Name: core_cow.cpp_CZombieCow_process_FUN_004392b0
// Address: 004392b0
// Address Range: [[004392b0, 00439820]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_process_FUN_004392b0(CZombieCow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cow_cpp_CZombieCow_process_FUN_004392b0(CZombieCow *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  byte *puVar1;
  byte *puVar2;
  uint uVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  int iVar6;
  CZombieCow *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_10b8 [997];
  uint *puVar10;
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *damage_info;
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
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [4];
  float fStack_8c;
  CVector3f CStack_88;
  uint uStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  CVector3f CStack_58;
  uint uStack_4c;
  float afStack_48 [5];
  float fStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  fStack_1c = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < fStack_1c) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)this_ptr_00,&fStack_1c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
  }
  fVar12 = (this_ptr->base).speed;
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar12);
  iVar6 = core_motion_cpp_FUN_005035c0(this_ptr_00);
  uVar3 = *(uint *)(iVar6 + 0x24);
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(uVar3) {
    case 0:
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0055af70
                            (0x0264B290,this_ptr->sfx_handle);
          if (iVar6 == 0) {
            uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"cow?.wav");
            this_ptr->sfx_handle = uVar8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr_00,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar12 = 0x40900000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,0,1);
        }
      }
      else {
        fStack_18 = 0x40900000;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        CStack_88.x = 0.0;
        CStack_88.y = 0.0;
        max_distance = 0.17453292;
        CStack_88.z = fVar12;
        pCVar11 = &CStack_88;
        fVar12 = 0.5;
        pCVar5 = (this_ptr->base).victim;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                           pCVar11,fVar12,max_distance);
        if (iVar6 < 0) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,0,1);
        }
        else if ((0 < iVar6) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr_00,2,1);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_10c);
      fStack_108 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      pCStack_d8 = this_ptr;
      pCStack_d4 = this_ptr;
      damage_info = aSStack_10c;
      fVar12 = 0.7;
      fStack_14 = fStack_108;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,&(this_ptr->base).base.model.field_0xe80 + this_ptr->bone_head * 0x30
                );
      puVar10 = &uStack_4c;
      uStack_4c = uStack_d0;
      afStack_48[(uint)bVar9 * -2] = afStack_cc[(uint)bVar9 * -2];
      afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr,puVar10);
      pCVar11 = &CStack_ac;
      CStack_ac.x = fStack_64;
      *(float *)((int)&CStack_ac + (uint)bVar9 * -8 + 4) = afStack_78[(uint)bVar9 * -2 + 6];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_ac + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar7->base,pCVar11,fVar12,damage_info);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        core_skeleton_cpp_FUN_005469a0(this_ptr_00,0);
        puVar10 = &uStack_7c;
        uStack_7c = afStack_48[2];
        afStack_78[(uint)bVar9 * -2] = afStack_48[(uint)bVar9 * -2 + 3];
        afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar10);
        blood_type = BLOOD_TYPE_RED;
        CStack_58.x = fStack_34;
        *(float *)((int)&CStack_58 + (uint)bVar9 * -8 + 4) = afStack_48[(uint)bVar9 * -2 + 6];
        *(float *)((int)&CStack_58 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&CStack_58,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_0043981a_caseD_3;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_0043937b:
      iVar6 = 1;
    }
    else {
LAB_00439560:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_0043937b;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_00439560;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr_00,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
switchD_0043981a_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar7 = (CZombieCow *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    afStack_cc[2] = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    afStack_cc[3] = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_bc = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    afStack_9c[2] = afStack_cc[2];
    afStack_9c[(uint)bVar9 * -2 + 3] = afStack_cc[(uint)bVar9 * -2 + 3];
    afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    puVar1 = &(this_ptr->base).base.field_0x257c;
    fStack_a0 = afStack_9c[2] + *(float *)puVar1;
    afStack_9c[0] = afStack_9c[3] + *(float *)&(this_ptr->base).base.field_0x2580;
    afStack_9c[1] = fStack_8c + *(float *)&(this_ptr->base).base.field_0x2584;
    afStack_78[2] = fStack_a0;
    afStack_78[(uint)bVar9 * -2 + 3] = afStack_9c[(uint)bVar9 * -2];
    afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    fStack_b8 = afStack_78[2] + *(float *)puVar2;
    fStack_b4 = afStack_78[3] + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_b0 = fStack_68 + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_28.x = fStack_b8;
    *(float *)((int)&CStack_28 + (uint)bVar9 * -8 + 4) = afStack_cc[(uint)bVar9 * -2 + 6];
    *(float *)((int)&CStack_28 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_cc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_28);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
