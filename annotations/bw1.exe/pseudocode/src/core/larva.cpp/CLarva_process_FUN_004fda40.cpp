// Name: core_larva.cpp_CLarva_process_FUN_004fda40
// Address: 004fda40
// Address Range: [[004fda40, 004fe449]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_process_FUN_004fda40(CLarva *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004fe396) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_larva_cpp_CLarva_process_FUN_004fda40(CLarva *this_ptr,float delta_time)

{
  EWalkState EVar1;
  CCharacter *pCVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CLarva *pCVar6;
  CPathMap *path_map;
  uint uVar7;
  byte bVar8;
  unkbyte10 Var9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float afStackY_11a4 [962];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar15;
  CGore *this_ptr_01;
  EBloodType blood_type;
  CVector3f *pCVar16;
  float min_distance;
  float in_stack_fffffd84;
  float fStack_1bc;
  CVector3f CStack_1b0;
  float fStack_1a4;
  float afStack_1a0 [4];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  float fStack_17c;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  CVector3f CStack_15c;
  CVector3f CStack_150;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [4];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [5];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  CVector3f CStack_b4;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  float fStack_70;
  double dStack_6c;
  double dStack_64;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  CDeformableModelInstance *pCStack_30;
  float fStack_2c;
  float fStack_28;
  CLocation *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCStack_24 = &(this_ptr->base).base.base.location;
  fStack_50 = delta_time * (this_ptr->base).speed;
  pCStack_30 = &(this_ptr->base).base.model;
  while (0.0 < fStack_50) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCStack_30->base,&fStack_50);
    if ((iVar4 == 100) && (pCVar2 = (this_ptr->base).victim, pCVar2 != (CCharacter *)0x0)) {
      fStack_84 = (pCVar2->base).location.position.x - (pCStack_24->position).x;
      fStack_80 = (pCVar2->base).location.position.y - (pCStack_24->position).y;
      fStack_7c = (pCVar2->base).location.position.z - (pCStack_24->position).z;
      fStack_d8 = fStack_84;
      afStack_ec[(uint)bVar8 * -2 + 6] = afStack_98[(uint)bVar8 * -2 + 6];
      afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      if (afStack_110 + 5 != afStack_ec + 5) {
        fStack_fc = fStack_d8;
        fStack_f8 = fStack_d4;
        fStack_f4 = fStack_d0;
      }
      fStack_f8 = fStack_f8 + _DAT_005e6c4b;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
      fStack_fc = fStack_14 + fStack_fc;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
      Var9 = fsin((float10)_DAT_005e6c53);
      fVar14 = (float10)fptan((float10)_DAT_005e6c5b);
      fVar12 = (float10)fStack_14 + (float10)fStack_f4;
      fStack_f4 = (float)fVar12;
      fVar13 = (float10)fStack_fc;
      atan2();
      fVar3 = SQRT(fStack_fc * fStack_fc + fStack_f4 * fStack_f4);
      fVar10 = (float10)fcos(Var9);
      fVar11 = (float10)fsin(fVar13);
      fVar13 = (float10)fcos(fVar13);
      dStack_64 = (double)fVar3;
      fStack_2c = fVar3 * (float)_DAT_005e6c43 * fVar3;
      fVar12 = fVar10 * (float10)_DAT_005e6c4b * fVar10 *
               (fVar12 * (float10)fVar3 - (float10)fStack_f8);
      CStack_150.y = (float)-fVar14;
      fStack_28 = (float)fVar12;
      CStack_150.x = (float)(fVar11 * fVar10);
      CStack_150.z = (float)(fVar13 * fVar10);
      if ((float10)0 < fVar12) {
        fStack_20 = SQRT(fStack_2c / fStack_28);
        fStack_114 = (float)(fVar11 * fVar10) * fStack_20;
        afStack_110[0] = (float)-fVar14 * fStack_20;
        afStack_110[1] = (float)(fVar13 * fVar10) * fStack_20;
        CStack_b4.x = fStack_114;
        afStack_ec[(uint)bVar8 * -2 + 0xf] = afStack_110[(uint)bVar8 * -2];
        afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
             afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (&CStack_150 != (CVector3f *)(afStack_ec + 0xe)) {
          CStack_150.x = CStack_b4.x;
          CStack_150.y = CStack_b4.y;
          CStack_150.z = CStack_b4.z;
        }
        uStack_a8 = 0;
        uStack_a4 = 0x3f000000;
        uStack_a0 = 0x3f800000;
        core_actor_cpp_FUN_00408b40(this_ptr);
        uVar7 = 0;
        iVar4 = 2;
        pCVar16 = &CStack_150;
        pCVar15 = &CStack_120;
        CStack_120.x = fStack_144;
        *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + 4) = afStack_140[(uint)bVar8 * -2];
        this_ptr_00 = 0x01C57074;
        *(float *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        core_fire_cpp_CFireEffect_createFireball_FUN_004b5e00
                  (this_ptr_00,pCVar15,pCVar16,iVar4,uVar7);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"larva-blow1.wav");
      }
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_30->base);
  uVar7 = pSVar5->state_index;
  uStack_3c = uVar7;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if (uVar7 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_30->base,1,1);
        }
      }
      else {
        afStack_140[2] = (pCVar2->base).location.position.x - (pCStack_24->position).x;
        afStack_140[3] = (pCVar2->base).location.position.y - (pCStack_24->position).y;
        fStack_130 = (pCVar2->base).location.position.z - (pCStack_24->position).z;
        afStack_110[2] = afStack_140[2];
        afStack_110[(uint)bVar8 * -2 + 3] = afStack_140[(uint)bVar8 * -2 + 3];
        afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        fStack_1c = fStack_100 * fStack_100 +
                    afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3];
        fStack_38 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
        uStack_180 = uStack_cc;
        afStack_1a0[(uint)bVar8 * -2 + 9] = afStack_ec[(uint)bVar8 * -2 + 9];
        afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                              (fStack_17c - (this_ptr->base).base.base.orient.vec.y);
        if (((float)_DAT_005e6c2b <= ABS(fStack_14)) || ((float)_DAT_005e6c33 < fStack_38)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,1,1);
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_30->base,2,1);
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,30.0);
          (this_ptr->base).attack_cooldown = fStack_14;
        }
      }
    }
    else if (uVar7 < 2) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar3 = 0x41A00000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_30->base,0,1);
        }
      }
      else {
        min_distance = 0.17453292;
        fStack_18 = 0x41A00000;
        pCVar16 = (CVector3f *)0x3f000000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        uStack_78 = 0;
        fStack_70 = fVar3;
        uStack_74 = 0;
        pCVar2 = (this_ptr->base).victim;
        path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar16,
                           min_distance,in_stack_fffffd84);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_30->base,0,1);
        }
        if ((this_ptr->base).attack_cooldown <= 0.0) {
          pCVar2 = (this_ptr->base).victim;
          afStack_1a0[2] =
               (pCVar2->base).location.position.x - (this_ptr->base).base.base.location.position.x;
          afStack_1a0[3] =
               (pCVar2->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          fStack_190 = (pCVar2->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_1a4 = afStack_1a0[2];
          afStack_1a0[(uint)bVar8 * -2] = afStack_1a0[(uint)bVar8 * -2 + 3];
          afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_4c = afStack_1a0[1] * afStack_1a0[1] +
                      fStack_1a4 * fStack_1a4 + afStack_1a0[0] * afStack_1a0[0];
          fStack_48 = (float)(((int)fStack_4c >> 1) + _DAT_01cc804c);
          if (fStack_48 < (this_ptr->base).guard_distance) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
            fStack_f0 = fStack_9c;
            afStack_ec[(uint)bVar8 * -2] = afStack_98[(uint)bVar8 * -2];
            afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (&fStack_1a4 != &fStack_f0) {
              fStack_1a4 = fStack_f0;
              afStack_1a0[0] = afStack_ec[0];
              afStack_1a0[1] = afStack_ec[1];
            }
            fStack_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_1a0[0]);
            fStack_14 = fStack_34;
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                  ((this_ptr->base).base.base.orient.vec.y);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(fStack_34 - fStack_14);
            if (ABS(fStack_14) < (float)_DAT_005e6c2b) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,2,1);
              (this_ptr->base).attack_cooldown = 6.0;
            }
          }
        }
      }
    }
    else if (((uVar7 == 5) && ((this_ptr->base).pool_me == 0)) &&
            ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (pCStack_30,0,&CStack_1b0);
      afStack_ec[2] = CStack_1b0.x;
      afStack_ec[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_1b0 + (uint)bVar8 * -8 + 4);
      afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&CStack_1b0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr);
      pCVar16 = &CStack_12c;
      blood_type = BLOOD_TYPE_ICHOR;
      CStack_12c.x = fStack_1bc;
      *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + 4) =
           *(uint *)(&stack0xfffffe48 + (uint)bVar8 * -8);
      this_ptr_01 = g_CGorePtr;
      *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)(&stack0xfffffe4c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar16,blood_type);
      (this_ptr->base).pool_me = 1;
    }
    goto LAB_004fdb45;
  }
  EVar1 = (this_ptr->base).base.walk_state;
  if (EVar1 < 2) {
    if (EVar1 == WALK_STATE_WALKING) {
LAB_004fdb1a:
      iVar4 = 1;
    }
    else {
LAB_004fdf6d:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar1 < WALK_STATE_NO_PATH) goto LAB_004fdb1a;
    if (EVar1 != WALK_STATE_NO_PATH) goto LAB_004fdf6d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_30->base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004fdb45:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (uStack_3c == 1) {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005735a0(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      fVar14 = (float10)1;
      fVar12 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)(this_ptr->base).base.size_scale *
               (float10)_DAT_005e6c3b;
      fVar13 = (float10)f2xm1(fVar12 - (fVar12 / fVar14) * fVar14);
      fVar14 = (float10)fscale(fVar13 + fVar14,fVar12);
      dStack_6c = (double)fVar14;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.99,1.01);
      _sprintf(&stack0xfffffd7c,"slime.wav @%f *%f");
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,&stack0xfffffd7c);
      this_ptr->sfx_handles[1] = uVar7;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[1]);
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar6 = (CLarva *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar6 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700(this_ptr);
    fStack_18c = (this_ptr->base).base.velocity.x * delta_time;
    fStack_188 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_184 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_168 = fStack_18c;
    afStack_1a0[(uint)bVar8 * -2 + 0xf] = afStack_1a0[(uint)bVar8 * -2 + 6];
    afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    pCVar16 = &(this_ptr->base).base.position_delta;
    afStack_98[2] = fStack_168 + pCVar16->x;
    afStack_98[3] = fStack_164 + (this_ptr->base).base.position_delta.y;
    fStack_88 = fStack_160 + (this_ptr->base).base.position_delta.z;
    fStack_174 = afStack_98[2];
    afStack_1a0[(uint)bVar8 * -2 + 0xc] = afStack_98[(uint)bVar8 * -2 + 3];
    afStack_1a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    pCVar15 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_c0 = fStack_174 + pCVar15->x;
    fStack_bc = fStack_170 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_b8 = fStack_16c + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_15c.x = fStack_c0;
    *(float *)((int)&CStack_15c + (uint)bVar8 * -8 + 4) = afStack_ec[(uint)bVar8 * -2 + 0xc];
    *(float *)((int)&CStack_15c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar16->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar15->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_15c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
