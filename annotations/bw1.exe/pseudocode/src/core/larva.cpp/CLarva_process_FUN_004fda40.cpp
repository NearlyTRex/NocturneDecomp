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
  float fVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
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
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  float fStack_198;
  float afStack_194 [4];
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  CVector3f CStack_15c;
  CVector3f CStack_150;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [2];
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [2];
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [4];
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
    if ((iVar4 == 100) && (pCVar3 = (this_ptr->base).victim, pCVar3 != (CCharacter *)0x0)) {
      afStack_8c[2] = (pCVar3->base).location.position.x - (pCStack_24->position).x;
      afStack_8c[3] = (pCVar3->base).location.position.y - (pCStack_24->position).y;
      fStack_7c = (pCVar3->base).location.position.z - (pCStack_24->position).z;
      fStack_d8 = afStack_8c[2];
      afStack_d4[(uint)bVar8 * -2] = afStack_8c[(uint)bVar8 * -2 + 3];
      afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      if (&fStack_fc != &fStack_d8) {
        fStack_fc = fStack_d8;
        fStack_f8 = afStack_d4[0];
        fStack_f4 = afStack_d4[1];
      }
      fStack_f8 = fStack_f8 + _DAT_005e6c4b;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
      fStack_fc = fStack_14 + fStack_fc;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-2.0,2.0);
      Var9 = fsin((float10)_DAT_005e6c53);
      fVar14 = (float10)fptan((float10)_DAT_005e6c5b);
      fVar12 = (float10)fStack_14 + (float10)fStack_f4;
      fStack_f4 = (float)fVar12;
      fVar13 = atan2((float10)fStack_fc,fVar12);
      fVar1 = SQRT(fStack_fc * fStack_fc + fStack_f4 * fStack_f4);
      fVar10 = (float10)fcos(Var9);
      fVar11 = (float10)fsin(fVar13);
      fVar13 = (float10)fcos(fVar13);
      dStack_64 = (double)fVar1;
      fStack_2c = fVar1 * (float)_DAT_005e6c43 * fVar1;
      fVar12 = fVar10 * (float10)_DAT_005e6c4b * fVar10 *
               (fVar12 * (float10)fVar1 - (float10)fStack_f8);
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
        afStack_bc[(uint)bVar8 * -2 + 3] = afStack_110[(uint)bVar8 * -2];
        afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_110[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (&CStack_150 != (CVector3f *)(afStack_bc + 2)) {
          CStack_150.x = CStack_b4.x;
          CStack_150.y = CStack_b4.y;
          CStack_150.z = CStack_b4.z;
        }
        CStack_a8.x = 0.0;
        CStack_a8.y = 0.5;
        CStack_a8.z = 1.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,&CStack_a8,&CStack_144);
        uVar7 = 0;
        pCVar16 = &CStack_150;
        iVar4 = 2;
        pCVar15 = &CStack_120;
        CStack_120.x = CStack_144.x;
        *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + 4);
        this_ptr_00 = 0x01C57074;
        *(uint *)((int)&CStack_120 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_144 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_fire_cpp_CFireEffect_createFireball_FUN_004b5e00
                  (this_ptr_00,pCVar15,pCVar16,iVar4,uVar7);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"larva-blow1.wav");
      }
    }
  }
  fVar1 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00435320
            ((CCharacter *)this_ptr,delta_time * fVar1);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_30->base);
  uVar7 = pSVar5->state_index;
  uStack_3c = uVar7;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if (uVar7 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar3 = (this_ptr->base).victim;
      if (pCVar3 == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_30->base,1,1);
        }
      }
      else {
        fStack_138 = (pCVar3->base).location.position.x - (pCStack_24->position).x;
        afStack_134[0] = (pCVar3->base).location.position.y - (pCStack_24->position).y;
        afStack_134[1] = (pCVar3->base).location.position.z - (pCStack_24->position).z;
        CStack_108.x = fStack_138;
        *(float *)((int)&CStack_108 + (uint)bVar8 * -8 + 4) = afStack_134[(uint)bVar8 * -2];
        *(float *)((int)&CStack_108 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
             afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fStack_1c = CStack_108.z * CStack_108.z +
                    CStack_108.x * CStack_108.x + CStack_108.y * CStack_108.y;
        fStack_38 = (float)(((int)fStack_1c >> 1) + _DAT_01cc804c);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_108,&CStack_cc);
        fStack_180 = CStack_cc.x;
        afStack_194[(uint)bVar8 * -2 + 6] = *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + 4);
        afStack_194[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             *(float *)((int)&CStack_cc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
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
      fVar1 = 0x41A00000;
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
        fStack_70 = fVar1;
        uStack_74 = 0;
        pCVar3 = (this_ptr->base).victim;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
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
          pCVar3 = (this_ptr->base).victim;
          fStack_198 = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          afStack_194[0] =
               (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          afStack_194[1] =
               (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z;
          CStack_1a4.x = fStack_198;
          *(float *)((int)&CStack_1a4 + (uint)bVar8 * -8 + 4) = afStack_194[(uint)bVar8 * -2];
          *(float *)((int)&CStack_1a4 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4 + 8) =
               afStack_194[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          fStack_4c = CStack_1a4.z * CStack_1a4.z +
                      CStack_1a4.x * CStack_1a4.x + CStack_1a4.y * CStack_1a4.y;
          fStack_48 = (float)(((int)fStack_4c >> 1) + _DAT_01cc804c);
          if (fStack_48 < (this_ptr->base).guard_distance) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_1a4,&CStack_9c)
            ;
            CStack_f0.x = CStack_9c.x;
            *(uint *)((int)&CStack_f0 + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + 4);
            *(uint *)((int)&CStack_f0 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + 4) =
                 *(uint *)((int)&CStack_9c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            if (&CStack_1a4 != &CStack_f0) {
              CStack_1a4.x = CStack_f0.x;
              CStack_1a4.y = CStack_f0.y;
              CStack_1a4.z = CStack_f0.z;
            }
            fStack_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(CStack_1a4.y);
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
      pCVar16 = &CStack_e4;
      CStack_e4.x = CStack_1b0.x;
      *(uint *)((int)&CStack_e4 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_1b0 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_1b0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar16,&CStack_1bc);
      pCVar16 = &CStack_12c;
      blood_type = BLOOD_TYPE_ICHOR;
      CStack_12c.x = CStack_1bc.x;
      *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_1bc + (uint)bVar8 * -8 + 4);
      this_ptr_01 = g_CGorePtr;
      *(uint *)((int)&CStack_12c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_1bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_01,pCVar16,blood_type);
      (this_ptr->base).pool_me = 1;
    }
    goto LAB_004fdb45;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
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
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_004fdb1a;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_004fdf6d;
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
    pCVar3 = (this_ptr->base).victim;
    if ((pCVar3 != (CCharacter *)0x0) &&
       (pCVar6 = (CLarva *)(*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3),
       pCVar6 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700((CCharacter *)this_ptr,delta_time);
    afStack_194[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_194[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_184 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_168 = afStack_194[2];
    afStack_194[(uint)bVar8 * -2 + 0xc] = afStack_194[(uint)bVar8 * -2 + 3];
    afStack_194[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_194[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    pCVar16 = &(this_ptr->base).base.position_delta;
    fStack_90 = fStack_168 + pCVar16->x;
    afStack_8c[0] = fStack_164 + (this_ptr->base).base.position_delta.y;
    afStack_8c[1] = fStack_160 + (this_ptr->base).base.position_delta.z;
    fStack_174 = fStack_90;
    afStack_194[(uint)bVar8 * -2 + 9] = afStack_8c[(uint)bVar8 * -2];
    afStack_194[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pCVar15 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_c0 = fStack_174 + pCVar15->x;
    afStack_bc[0] = fStack_170 + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_bc[1] = fStack_16c + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_15c.x = fStack_c0;
    *(float *)((int)&CStack_15c + (uint)bVar8 * -8 + 4) = afStack_bc[(uint)bVar8 * -2];
    *(float *)((int)&CStack_15c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_bc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar16->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar15->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_15c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
