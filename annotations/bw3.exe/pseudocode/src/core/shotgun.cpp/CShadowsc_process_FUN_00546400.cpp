// Name: core_shotgun.cpp_CShadowsc_process_FUN_00546400
// Address: 00546400
// Address Range: [[00546400, 00546d43]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_process_FUN_00546400(CShadowsc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shotgun_cpp_CShadowsc_process_FUN_00546400(CShadowsc *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  CShadowsc *pCVar6;
  uint uVar7;
  CPathMap *path_map;
  byte bVar8;
  float afStackY_1130 [997];
  float *pfVar9;
  uint *puVar10;
  CGore *this_ptr_01;
  CMotionController *pCVar11;
  CVector3f *pCVar12;
  float fVar13;
  int iVar14;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_184;
  uint uStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_124 [3];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [3];
  uint uStack_ac;
  uint uStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  uint uStack_64;
  float afStack_60 [5];
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
  int iStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar8 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,(this_ptr->base).pool_me == 1);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_2c = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  while (0.0 < fStack_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      (&(this_ptr->base).base.model.base,afStack_60 + 0xd);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
  }
  pCStack_1c = &(this_ptr->base).base.model.base;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_1c);
  fVar13 = (this_ptr->base).speed;
  iStack_24 = pSVar5->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar13);
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    switch(iStack_24) {
    case 1:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      pCVar11 = pCStack_1c;
      if (iVar4 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 != (CCharacter *)0x0) {
          fStack_94 = (pCVar3->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_90 = (pCVar3->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_8c = (pCVar3->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_130 = fStack_94;
          afStack_144[(uint)bVar8 * -2 + 6] = afStack_144[(uint)bVar8 * -2 + 0x2d];
          afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2e];
          fStack_34 = fStack_128 * fStack_128 + fStack_130 * fStack_130 + fStack_12c * fStack_12c;
          fStack_30 = (float)(((int)fStack_34 >> 1) + _DAT_01d1a0a4);
          if (fStack_30 < _DAT_005e4358) {
            iVar14 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          }
          else {
            iVar14 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (pCStack_1c,iVar4 + 2,iVar14);
          iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                            (0x02CF5680,this_ptr->sfx_handle);
          if (iVar4 == 0) {
            uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar7;
          }
        }
      }
      else {
        pCStack_14 = (CMatrix3x4f *)core_motion_cpp_FUN_004fc930(pCStack_1c);
        if ((float)_DAT_005d14de < (float)pCStack_14) {
          iVar14 = 1;
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCVar11,iVar4 + 2,iVar14);
        }
      }
      break;
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          iVar14 = 1;
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (pCStack_1c,iVar4 + 1,iVar14);
        }
        else {
          pCStack_14 = (CMatrix3x4f *)core_motion_cpp_FUN_004fc930(pCStack_1c);
          if ((float)_DAT_005d14de < (float)pCStack_14) {
            iVar14 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (pCStack_1c,iVar4 + 2,iVar14);
          }
        }
        break;
      }
      fStack_118 = (this_ptr->base).base.base.location.position.x -
                   (pCVar3->base).location.position.x;
      fStack_114 = (this_ptr->base).base.base.location.position.y -
                   (pCVar3->base).location.position.y;
      fStack_110 = (this_ptr->base).base.base.location.position.z -
                   (pCVar3->base).location.position.z;
      fStack_100 = fStack_118;
      afStack_144[(uint)bVar8 * -2 + 0x12] = afStack_144[(uint)bVar8 * -2 + 0xc];
      pCVar11 = pCStack_1c;
      afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
           afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
      fStack_28 = SQRT(fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc);
      fStack_20 = fStack_28;
      if ((_DAT_005e4358 < fStack_28) && (iStack_24 == 2)) {
        if ((this_ptr->base).attack_cooldown <= (float)_DAT_005d14d6) {
          pCStack_14 = (CMatrix3x4f *)core_motion_cpp_FUN_004fc930(pCStack_1c);
          if ((float)_DAT_005d14de < (float)pCStack_14) {
            iVar14 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            goto LAB_00546b5f;
          }
        }
        else {
          pCStack_14 = (CMatrix3x4f *)core_motion_cpp_FUN_004fc930(pCStack_1c);
          if ((float)_DAT_005d14de < (float)pCStack_14) {
            iVar14 = 1;
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            pCVar11 = pCStack_1c;
LAB_00546b5f:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCVar11,iVar4 + 2,iVar14)
            ;
          }
        }
      }
      if (((_DAT_005d14e6 < fStack_20) && (fStack_20 < _DAT_005d14ea)) &&
         (iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,10), iVar4 == 5)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,3,1);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      CStack_70.z = 0x41000000;
      max_distance = 0.17453292;
      fStack_18 = 0x41000000;
      fVar13 = 0.5;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      CStack_70.x = 0.0;
      pCVar12 = &CStack_70;
      CStack_70.y = 0.0;
      pCVar3 = (this_ptr->base).victim;
      path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->base).location.position
                         ,path_map,pCVar12,fVar13,max_distance);
      this_ptr_00 = &(this_ptr->base).base.model;
      if (iVar4 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1);
      }
      else if ((0 < iVar4) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,3,1);
        (this_ptr->base).attack_cooldown = 2.5;
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_184);
      SStack_184.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,35.0);
      SStack_184.attacker = (CDemonActor *)this_ptr;
      SStack_184.wielder = (CDemonActor *)this_ptr;
      pCStack_14 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,pCStack_14 + this_ptr->bone_indices[2],0x3fd9999a,&SStack_184);
      pfVar9 = afStack_144 + 2;
      afStack_144[2] = (float)uStack_e8;
      afStack_144[(uint)bVar8 * -2 + 3] = afStack_144[(uint)bVar8 * -2 + 0x18];
      afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar9);
      puVar10 = &uStack_148;
      uStack_148 = uStack_d0;
      afStack_144[(uint)bVar8 * -2] = afStack_144[(uint)bVar8 * -2 + 0x1e];
      pCVar6 = this_ptr;
      afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
      core_enemy_cpp_FUN_004893f0(pCVar6,puVar10);
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,pCStack_14 + this_ptr->bone_indices[3],0x3fd9999a,&SStack_184);
      pfVar9 = afStack_144 + 8;
      afStack_124[0] = (float)uStack_ac;
      afStack_144[(uint)bVar8 * -2 + 9] = afStack_144[(uint)bVar8 * -2 + 0x27];
      afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
           afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar9);
      pfVar9 = afStack_144 + 0x23;
      afStack_b8[0] = (float)uStack_a0;
      afStack_144[(uint)bVar8 * -2 + 0x24] = afStack_144[(uint)bVar8 * -2 + 0x2a];
      pCVar6 = this_ptr;
      afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
           afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2b];
      core_enemy_cpp_FUN_004893f0(pCVar6,pfVar9);
      iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
      if (iVar4 == 0) {
        uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar7;
      }
      break;
    case 7:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_1c,0);
        puVar10 = &uStack_64;
        uStack_64 = afStack_60[2];
        afStack_60[(uint)bVar8 * -2] = afStack_60[(uint)bVar8 * -2 + 3];
        afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        core_actor_cpp_FUN_00408b80(this_ptr,puVar10);
        blood_type = BLOOD_TYPE_RED;
        pCVar12 = &CStack_88;
        CStack_88.x = fStack_10c;
        *(float *)((int)&CStack_88 + (uint)bVar8 * -8 + 4) = afStack_144[(uint)bVar8 * -2 + 0xf];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_88 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar12,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00546d3d_caseD_5;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_0054652d:
      pCStack_14 = (CMatrix3x4f *)core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base);
      if ((float)pCStack_14 <= (float)_DAT_005d14de) goto LAB_0054656e;
      iVar14 = 1;
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar4 = iVar4 + 2;
    }
    else {
LAB_00546726:
      pCStack_14 = (CMatrix3x4f *)core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base);
      if ((float)pCStack_14 <= (float)_DAT_005d14de) goto LAB_0054656e;
      iVar14 = 1;
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar4 = iVar4 + 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar4,iVar14);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_0054652d;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00546726;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
LAB_0054656e:
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00546d3d_caseD_5:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar6 = (CShadowsc *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar6 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_f4 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_f0 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_ec = (this_ptr->base).base.velocity.z * delta_time;
    fStack_c4 = fStack_f4;
    afStack_144[(uint)bVar8 * -2 + 0x21] = afStack_144[(uint)bVar8 * -2 + 0x15];
    afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
         afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    pCVar12 = &(this_ptr->base).base.position_delta;
    fStack_4c = fStack_c4 + pCVar12->x;
    fStack_48 = fStack_c0 + (this_ptr->base).base.position_delta.y;
    fStack_44 = fStack_bc + (this_ptr->base).base.position_delta.z;
    fStack_dc = fStack_4c;
    afStack_144[(uint)bVar8 * -2 + 0x1b] = afStack_60[(uint)bVar8 * -2 + 6];
    afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c] =
         afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_40 = fStack_dc + pCVar1->x;
    fStack_3c = fStack_d8 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_38 = fStack_d4 + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_7c.x = fStack_40;
    *(float *)((int)&CStack_7c + (uint)bVar8 * -8 + 4) = afStack_60[(uint)bVar8 * -2 + 9];
    *(float *)((int)&CStack_7c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
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
