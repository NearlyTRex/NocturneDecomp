// Name: core_larva.cpp_CLarva_process_FUN_004e0670
// Address: 004e0670
// Address Range: [[004e0670, 004e1079]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_process_FUN_004e0670(CLarva *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004e0fc6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_larva_cpp_CLarva_process_FUN_004e0670(CLarva *this_ptr,float delta_time)

{
  EWalkState EVar1;
  CCharacter *pCVar2;
  float fVar3;
  int iVar4;
  CLarva *pCVar5;
  CPathMap *path_map;
  uint uVar6;
  byte bVar7;
  unkbyte10 Var8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_11a4 [962];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar14;
  CGore *this_ptr_01;
  EBloodType blood_type;
  CVector3f *pCVar15;
  float min_distance;
  float in_stack_fffffd84;
  float fStack_1bc;
  uint uStack_1b0;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
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
  CMotionController *pCStack_30;
  float fStack_2c;
  float fStack_28;
  CLocation *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
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
  pCStack_30 = &(this_ptr->base).base.model.base;
  while (0.0 < fStack_50) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&fStack_50);
    if ((iVar4 == 100) && (pCVar2 = (this_ptr->base).victim, pCVar2 != (CCharacter *)0x0)) {
      fStack_84 = (pCVar2->base).location.position.x - (pCStack_24->position).x;
      fStack_80 = (pCVar2->base).location.position.y - (pCStack_24->position).y;
      fStack_7c = (pCVar2->base).location.position.z - (pCStack_24->position).z;
      fStack_d8 = fStack_84;
      afStack_ec[(uint)bVar7 * -2 + 6] = afStack_98[(uint)bVar7 * -2 + 6];
      afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      if (afStack_110 + 5 != afStack_ec + 5) {
        fStack_fc = fStack_d8;
        fStack_f8 = fStack_d4;
        fStack_f4 = fStack_d0;
      }
      fStack_f8 = fStack_f8 + _DAT_005dbe3e;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
      fStack_fc = fStack_14 + fStack_fc;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
      Var8 = fsin((float10)_DAT_005dbe46);
      fVar13 = (float10)fptan((float10)_DAT_005dbe4e);
      fVar11 = (float10)fStack_14 + (float10)fStack_f4;
      fStack_f4 = (float)fVar11;
      fVar12 = (float10)fStack_fc;
      atan2();
      fVar3 = SQRT(fStack_fc * fStack_fc + fStack_f4 * fStack_f4);
      fVar9 = (float10)fcos(Var8);
      fVar10 = (float10)fsin(fVar12);
      fVar12 = (float10)fcos(fVar12);
      dStack_64 = (double)fVar3;
      fStack_2c = fVar3 * (float)_DAT_005dbe36 * fVar3;
      fVar11 = fVar9 * (float10)_DAT_005dbe3e * fVar9 *
               (fVar11 * (float10)fVar3 - (float10)fStack_f8);
      CStack_150.y = (float)-fVar13;
      fStack_28 = (float)fVar11;
      CStack_150.x = (float)(fVar10 * fVar9);
      CStack_150.z = (float)(fVar12 * fVar9);
      if ((float10)0 < fVar11) {
        fStack_20 = SQRT(fStack_2c / fStack_28);
        fStack_114 = (float)(fVar10 * fVar9) * fStack_20;
        afStack_110[0] = (float)-fVar13 * fStack_20;
        afStack_110[1] = (float)(fVar12 * fVar9) * fStack_20;
        CStack_b4.x = fStack_114;
        afStack_ec[(uint)bVar7 * -2 + 0xf] = afStack_110[(uint)bVar7 * -2];
        afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
             afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        if (&CStack_150 != (CVector3f *)(afStack_ec + 0xe)) {
          CStack_150.x = CStack_b4.x;
          CStack_150.y = CStack_b4.y;
          CStack_150.z = CStack_b4.z;
        }
        uStack_a8 = 0;
        uStack_a4 = 0x3f000000;
        uStack_a0 = 0x3f800000;
        core_actor_cpp_FUN_00408d70(this_ptr);
        uVar6 = 0;
        iVar4 = 2;
        pCVar15 = &CStack_150;
        pCVar14 = &CStack_120;
        CStack_120.x = fStack_144;
        *(float *)((int)&CStack_120 + (uint)bVar7 * -8 + 4) = afStack_140[(uint)bVar7 * -2];
        this_ptr_00 = 0x01C3DEB4;
        *(float *)((int)&CStack_120 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        core_fire_cpp_CFireEffect_createFireball_FUN_0049d500
                  (this_ptr_00,pCVar14,pCVar15,iVar4,uVar6);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"larva-blow1.wav");
      }
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar4 = core_motion_cpp_FUN_005035c0();
  uVar6 = *(uint *)(iVar4 + 0x24);
  uStack_3c = uVar6;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if (uVar6 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar2 = (this_ptr->base).victim;
      if (pCVar2 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,1,1);
        }
      }
      else {
        afStack_140[2] = (pCVar2->base).location.position.x - (pCStack_24->position).x;
        afStack_140[3] = (pCVar2->base).location.position.y - (pCStack_24->position).y;
        fStack_130 = (pCVar2->base).location.position.z - (pCStack_24->position).z;
        afStack_110[2] = afStack_140[2];
        afStack_110[(uint)bVar7 * -2 + 3] = afStack_140[(uint)bVar7 * -2 + 3];
        afStack_110[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        fStack_1c = fStack_100 * fStack_100 +
                    afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3];
        fStack_38 = (float)(((int)fStack_1c >> 1) + _DAT_01caf5b4);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
        uStack_180 = uStack_cc;
        *(float *)(&stack0xfffffe88 + (uint)bVar7 * -8 + -4) = afStack_ec[(uint)bVar7 * -2 + 9];
        *(float *)(&stack0xfffffe88 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
             afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                              (fStack_17c - (this_ptr->base).base.base.orient.vec.y);
        if (((float)_DAT_005dbe1e <= ABS(fStack_14)) || ((float)_DAT_005dbe26 < fStack_38)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,1,1);
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,2,1);
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
          (this_ptr->base).attack_cooldown = fStack_14;
        }
      }
    }
    else if (uVar6 < 2) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar3 = 0x41A00000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
        }
      }
      else {
        min_distance = 0.17453292;
        fStack_18 = 0x41A00000;
        pCVar15 = (CVector3f *)0x3f000000;
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
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar15,
                           min_distance,in_stack_fffffd84);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
        }
        if ((this_ptr->base).attack_cooldown <= 0.0) {
          pCVar2 = (this_ptr->base).victim;
          fStack_198 = (pCVar2->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          fStack_194 = (pCVar2->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          fStack_190 = (pCVar2->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          fStack_1a4 = fStack_198;
          *(uint *)((int)&stack0xfffffe60 + (uint)bVar7 * -8) =
               *(uint *)((int)&stack0xfffffe6c + (uint)bVar7 * -8);
          *(uint *)((int)&stack0xfffffe64 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
               *(uint *)((int)&stack0xfffffe70 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
          fStack_4c = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4 + fStack_1a0 * fStack_1a0;
          fStack_48 = (float)(((int)fStack_4c >> 1) + _DAT_01caf5b4);
          if (fStack_48 < (this_ptr->base).guard_distance) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            fStack_f0 = fStack_9c;
            afStack_ec[(uint)bVar7 * -2] = afStack_98[(uint)bVar7 * -2];
            afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if (&stack0xfffffe5c != &fStack_f0) {
              fStack_1a4 = fStack_f0;
              fStack_1a0 = afStack_ec[0];
              fStack_19c = afStack_ec[1];
            }
            fStack_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_1a0);
            fStack_14 = fStack_34;
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  ((this_ptr->base).base.base.orient.vec.y);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_34 - fStack_14);
            if (ABS(fStack_14) < (float)_DAT_005dbe1e) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,2,1);
              (this_ptr->base).attack_cooldown = 6.0;
            }
          }
        }
      }
    }
    else if (((uVar6 == 5) && ((this_ptr->base).pool_me == 0)) &&
            ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      core_skeleton_cpp_FUN_005469a0(pCStack_30);
      afStack_ec[2] = (float)uStack_1b0;
      afStack_ec[(uint)bVar7 * -2 + 3] = *(float *)(&stack0xfffffe54 + (uint)bVar7 * -8);
      afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)(&stack0xfffffe58 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      core_actor_cpp_FUN_00408d70(this_ptr);
      pCVar15 = &CStack_12c;
      blood_type = BLOOD_TYPE_ICHOR;
      CStack_12c.x = fStack_1bc;
      *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + 4) =
           *(uint *)(&stack0xfffffe48 + (uint)bVar7 * -8);
      this_ptr_01 = g_CGorePtr;
      *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)(&stack0xfffffe4c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar15,blood_type);
      (this_ptr->base).pool_me = 1;
    }
    goto LAB_004e0775;
  }
  EVar1 = (this_ptr->base).base.walk_state;
  if (EVar1 < 2) {
    if (EVar1 == WALK_STATE_WALKING) {
LAB_004e074a:
      iVar4 = 1;
    }
    else {
LAB_004e0b9d:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar1 < WALK_STATE_NO_PATH) goto LAB_004e074a;
    if (EVar1 != WALK_STATE_NO_PATH) goto LAB_004e0b9d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_004e0775:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (uStack_3c == 1) {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar4 == 0) {
      fVar13 = (float10)1;
      fVar11 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)(this_ptr->base).base.size_scale *
               (float10)_DAT_005dbe2e;
      fVar12 = (float10)f2xm1(fVar11 - (fVar11 / fVar13) * fVar13);
      fVar13 = (float10)fscale(fVar12 + fVar13,fVar11);
      dStack_6c = (double)fVar13;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.99,1.01);
      _sprintf(&stack0xfffffd7c,"slime.wav @%f *%f");
      uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,&stack0xfffffd7c);
      this_ptr->sfx_handles[1] = uVar6;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar5 = (CLarva *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar5 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr);
    fStack_18c = (this_ptr->base).base.velocity.x * delta_time;
    fStack_188 = (this_ptr->base).base.velocity.y * delta_time;
    fStack_184 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_168 = fStack_18c;
    *(uint *)((int)&stack0xfffffe9c + (uint)bVar7 * -8) =
         *(uint *)((int)&stack0xfffffe78 + (uint)bVar7 * -8);
    *(uint *)((int)&stack0xfffffea0 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
         *(uint *)((int)&stack0xfffffe7c + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
    pCVar15 = &(this_ptr->base).base.position_delta;
    afStack_98[2] = fStack_168 + pCVar15->x;
    afStack_98[3] = fStack_164 + (this_ptr->base).base.position_delta.y;
    fStack_88 = fStack_160 + (this_ptr->base).base.position_delta.z;
    fStack_174 = afStack_98[2];
    *(float *)((int)&stack0xfffffe90 + (uint)bVar7 * -8) = afStack_98[(uint)bVar7 * -2 + 3];
    *(float *)((int)&stack0xfffffe94 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
         afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_c0 = fStack_174 + pCVar14->x;
    fStack_bc = fStack_170 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_b8 = fStack_16c + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_15c.x = fStack_c0;
    *(float *)((int)&CStack_15c + (uint)bVar7 * -8 + 4) = afStack_ec[(uint)bVar7 * -2 + 0xc];
    *(float *)((int)&CStack_15c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_15c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
