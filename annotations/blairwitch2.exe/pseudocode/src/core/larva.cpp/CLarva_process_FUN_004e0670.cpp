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
  byte *puVar1;
  byte *puVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  float fVar5;
  int iVar6;
  CLarva *pCVar7;
  CPathMap *path_map;
  uint uVar8;
  byte bVar9;
  unkbyte10 Var10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float afStackY_11a4 [962];
  CFireEffect *this_ptr_00;
  CVector3f *position;
  CGore *this_ptr_01;
  EBloodType blood_type;
  CVector3f *pCVar16;
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
  uint uStack_34;
  CMotionController *pCStack_30;
  float fStack_2c;
  float fStack_28;
  float *pfStack_24;
  float fStack_20;
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
  pfStack_24 = (float *)&(this_ptr->base).base.base.field_0x20;
  fStack_50 = delta_time * (this_ptr->base).speed;
  pCStack_30 = (CMotionController *)&(this_ptr->base).base.model;
  while (0.0 < fStack_50) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&fStack_50);
    if ((iVar6 == 100) && (pCVar4 = (this_ptr->base).victim, pCVar4 != (CCharacter *)0x0)) {
      fStack_84 = *(float *)&(pCVar4->base).field_0x20 - *pfStack_24;
      fStack_80 = *(float *)&(pCVar4->base).field_0x24 - pfStack_24[1];
      fStack_7c = *(float *)&(pCVar4->base).field_0x28 - pfStack_24[2];
      fStack_d8 = fStack_84;
      afStack_ec[(uint)bVar9 * -2 + 6] = afStack_98[(uint)bVar9 * -2 + 6];
      afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
      if (afStack_110 + 5 != afStack_ec + 5) {
        fStack_fc = fStack_d8;
        fStack_f8 = fStack_d4;
        fStack_f4 = fStack_d0;
      }
      fStack_f8 = fStack_f8 + _DAT_005dbe3e;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
      fStack_fc = fStack_14 + fStack_fc;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-2.0,2.0);
      Var10 = fsin((float10)_DAT_005dbe46);
      fVar15 = (float10)fptan((float10)_DAT_005dbe4e);
      fVar13 = (float10)fStack_14 + (float10)fStack_f4;
      fStack_f4 = (float)fVar13;
      fVar14 = (float10)fStack_fc;
      atan2();
      fVar5 = SQRT(fStack_fc * fStack_fc + fStack_f4 * fStack_f4);
      fVar11 = (float10)fcos(Var10);
      fVar12 = (float10)fsin(fVar14);
      fVar14 = (float10)fcos(fVar14);
      dStack_64 = (double)fVar5;
      fStack_2c = fVar5 * (float)_DAT_005dbe36 * fVar5;
      fVar13 = fVar11 * (float10)_DAT_005dbe3e * fVar11 *
               (fVar13 * (float10)fVar5 - (float10)fStack_f8);
      CStack_150.y = (float)-fVar15;
      fStack_28 = (float)fVar13;
      CStack_150.x = (float)(fVar12 * fVar11);
      CStack_150.z = (float)(fVar14 * fVar11);
      if ((float10)0 < fVar13) {
        fStack_20 = SQRT(fStack_2c / fStack_28);
        fStack_114 = (float)(fVar12 * fVar11) * fStack_20;
        afStack_110[0] = (float)-fVar15 * fStack_20;
        afStack_110[1] = (float)(fVar14 * fVar11) * fStack_20;
        CStack_b4.x = fStack_114;
        afStack_ec[(uint)bVar9 * -2 + 0xf] = afStack_110[(uint)bVar9 * -2];
        afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
             afStack_110[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (&CStack_150 != (CVector3f *)(afStack_ec + 0xe)) {
          CStack_150.x = CStack_b4.x;
          CStack_150.y = CStack_b4.y;
          CStack_150.z = CStack_b4.z;
        }
        uStack_a8 = 0;
        uStack_a4 = 0x3f000000;
        uStack_a0 = 0x3f800000;
        core_actor_cpp_FUN_00408d70(this_ptr);
        uVar8 = 0;
        iVar6 = 2;
        pCVar16 = &CStack_150;
        position = &CStack_120;
        CStack_120.x = fStack_144;
        *(float *)((int)&CStack_120 + (uint)bVar9 * -8 + 4) = afStack_140[(uint)bVar9 * -2];
        this_ptr_00 = 0x01C3DEB4;
        *(float *)((int)&CStack_120 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_fire_cpp_CFireEffect_createFireball_FUN_0049d500
                  (this_ptr_00,position,pCVar16,iVar6,uVar8);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"larva-blow1.wav");
      }
    }
  }
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar6 = core_motion_cpp_FUN_005035c0();
  uVar8 = *(uint *)(iVar6 + 0x24);
  uStack_3c = uVar8;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if (uVar8 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,1,1);
        }
      }
      else {
        afStack_140[2] = *(float *)&(pCVar4->base).field_0x20 - *pfStack_24;
        afStack_140[3] = *(float *)&(pCVar4->base).field_0x24 - pfStack_24[1];
        fStack_130 = *(float *)&(pCVar4->base).field_0x28 - pfStack_24[2];
        afStack_110[2] = afStack_140[2];
        afStack_110[(uint)bVar9 * -2 + 3] = afStack_140[(uint)bVar9 * -2 + 3];
        afStack_110[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_140[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        fStack_1c = fStack_100 * fStack_100 +
                    afStack_110[2] * afStack_110[2] + afStack_110[3] * afStack_110[3];
        fStack_38 = (float)(((int)fStack_1c >> 1) + _DAT_01caf5b4);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
        uStack_180 = uStack_cc;
        *(float *)(&stack0xfffffe84 + (uint)bVar9 * -8) = afStack_ec[(uint)bVar9 * -2 + 9];
        *(float *)(&stack0xfffffe88 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
        if (((float)_DAT_005dbe1e <= ABS(fStack_14)) || ((float)_DAT_005dbe26 < fStack_38)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&(this_ptr->base).base.model,1,1);
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,2,1);
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,30.0);
          (this_ptr->base).attack_cooldown = fStack_14;
        }
      }
    }
    else if (uVar8 < 2) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar5 = 0x41A00000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
        }
      }
      else {
        min_distance = 0.17453292;
        fStack_18 = 0x41A00000;
        pCVar16 = (CVector3f *)0x3f000000;
        *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
        *(uint *)&(this_ptr->base).base.model.field_0x2258 =
             *(uint *)&(this_ptr->base).base.model.field_0x225c;
        *(uint *)&(this_ptr->base).base.model.field_0x2254 =
             *(uint *)&(this_ptr->base).base.model.field_0x2258;
        uStack_78 = 0;
        fStack_70 = fVar5;
        uStack_74 = 0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                           pCVar16,min_distance,in_stack_fffffd84);
        if (iVar6 < 0) {
          engine_console_cpp_FUN_00436710();
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
        }
        if ((this_ptr->base).attack_cooldown <= 0.0) {
          pCVar4 = (this_ptr->base).victim;
          fStack_198 = *(float *)&(pCVar4->base).field_0x20 -
                       *(float *)&(this_ptr->base).base.base.field_0x20;
          fStack_194 = *(float *)&(pCVar4->base).field_0x24 -
                       *(float *)&(this_ptr->base).base.base.field_0x24;
          fStack_190 = *(float *)&(pCVar4->base).field_0x28 -
                       *(float *)&(this_ptr->base).base.base.field_0x28;
          fStack_1a4 = fStack_198;
          *(uint *)((int)&stack0xfffffe60 + (uint)bVar9 * -8) =
               *(uint *)((int)&stack0xfffffe6c + (uint)bVar9 * -8);
          *(uint *)((int)&stack0xfffffe64 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               *(uint *)((int)&stack0xfffffe70 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
          fStack_4c = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4 + fStack_1a0 * fStack_1a0;
          fStack_48 = (float)(((int)fStack_4c >> 1) + _DAT_01caf5b4);
          if (fStack_48 < (this_ptr->base).guard_distance) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            fStack_f0 = fStack_9c;
            afStack_ec[(uint)bVar9 * -2] = afStack_98[(uint)bVar9 * -2];
            afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if (&stack0xfffffe5c != &fStack_f0) {
              fStack_1a4 = fStack_f0;
              fStack_1a0 = afStack_ec[0];
              fStack_19c = afStack_ec[1];
            }
            uStack_34 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
            fStack_14 = (float)uStack_34;
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
            if (ABS(fStack_14) < (float)_DAT_005dbe1e) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&(this_ptr->base).base.model,2,1);
              (this_ptr->base).attack_cooldown = 6.0;
            }
          }
        }
      }
    }
    else if (((uVar8 == 5) && ((this_ptr->base).pool_me == 0)) &&
            (*(int *)&(this_ptr->base).base.base.field_0xdc == 0)) {
      core_skeleton_cpp_FUN_005469a0(pCStack_30);
      afStack_ec[2] = (float)uStack_1b0;
      afStack_ec[(uint)bVar9 * -2 + 3] = *(float *)(&stack0xfffffe54 + (uint)bVar9 * -8);
      afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           *(float *)(&stack0xfffffe58 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      core_actor_cpp_FUN_00408d70(this_ptr);
      pCVar16 = &CStack_12c;
      blood_type = BLOOD_TYPE_ICHOR;
      CStack_12c.x = fStack_1bc;
      *(uint *)((int)&CStack_12c + (uint)bVar9 * -8 + 4) =
           *(uint *)(&stack0xfffffe48 + (uint)bVar9 * -8);
      this_ptr_01 = g_CGorePtr;
      *(uint *)((int)&CStack_12c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)(&stack0xfffffe4c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar16,blood_type);
      (this_ptr->base).pool_me = 1;
    }
    goto LAB_004e0775;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_004e074a:
      iVar6 = 1;
    }
    else {
LAB_004e0b9d:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&(this_ptr->base).base.model,iVar6,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_004e074a;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_004e0b9d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_30,0,1);
    engine_console_cpp_FUN_00436710();
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
LAB_004e0775:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (uStack_3c == 1) {
    iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
    if (iVar6 == 0) {
      fVar15 = (float10)1;
      fVar13 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)*(float *)&(this_ptr->base).base.field_0x2824
               * (float10)_DAT_005dbe2e;
      fVar14 = (float10)f2xm1(fVar13 - (fVar13 / fVar15) * fVar15);
      fVar15 = (float10)fscale(fVar14 + fVar15,fVar13);
      dStack_6c = (double)fVar15;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.99,1.01);
      _sprintf(&stack0xfffffd7c,"slime.wav @%f *%f");
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                        ((CDemonActor *)this_ptr,&stack0xfffffd7c);
      this_ptr->sfx_handles[1] = uVar8;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar7 = (CLarva *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar7 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10(this_ptr);
    fStack_18c = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_188 = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_184 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_168 = fStack_18c;
    *(uint *)((int)&stack0xfffffe9c + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xfffffe78 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xfffffea0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xfffffe7c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    puVar1 = &(this_ptr->base).base.field_0x257c;
    afStack_98[2] = fStack_168 + *(float *)puVar1;
    afStack_98[3] = fStack_164 + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_88 = fStack_160 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_174 = afStack_98[2];
    *(float *)((int)&stack0xfffffe90 + (uint)bVar9 * -8) = afStack_98[(uint)bVar9 * -2 + 3];
    *(float *)((int)&stack0xfffffe94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         afStack_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    puVar2 = &(this_ptr->base).base.model.field_0x2254;
    fStack_c0 = fStack_174 + *(float *)puVar2;
    fStack_bc = fStack_170 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_b8 = fStack_16c + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_15c.x = fStack_c0;
    *(float *)((int)&CStack_15c + (uint)bVar9 * -8 + 4) = afStack_ec[(uint)bVar9 * -2 + 0xc];
    *(float *)((int)&CStack_15c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar1 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_15c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
