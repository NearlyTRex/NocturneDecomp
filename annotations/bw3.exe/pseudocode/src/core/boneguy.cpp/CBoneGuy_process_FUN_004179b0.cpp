// Name: core_boneguy.cpp_CBoneGuy_process_FUN_004179b0
// Address: 004179b0
// Address Range: [[004179b0, 004186ae]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004179b0(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004179b0(CBoneGuy *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  EWalkState EVar5;
  CCharacter *pCVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  SMotion *pSVar10;
  int iVar11;
  CBoneGuy *pCVar12;
  uint uVar13;
  CPathMap *path_map;
  byte bVar14;
  float afStackY_19a8 [1493];
  uint *puVar15;
  float *pfVar16;
  ulonglong uVar17;
  float in_stack_fffffdc8;
  uint uStack_230;
  SDamageInfo aSStack_208 [4];
  uint uStack_204;
  CBoneGuy *pCStack_1d4;
  CBoneGuy *pCStack_1d0;
  uint uStack_1cc;
  float afStack_1c8 [7];
  float fStack_1ac;
  float afStack_1a0 [3];
  float fStack_194;
  uint uStack_190;
  uint uStack_18c;
  CVector3f CStack_188;
  uint uStack_17c;
  float afStack_178 [4];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint uStack_134;
  uint uStack_128;
  float afStack_11c [3];
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float afStack_100 [4];
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [3];
  float fStack_b0;
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
  uint uStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  byte *puStack_30;
  CMotionController *pCStack_2c;
  byte *puStack_28;
  float *pfStack_24;
  byte *puStack_20;
  int iStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar14 = 0;
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"My HP: %f\n",(double)(this_ptr->base).base.hit_points);
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,&this_ptr->field_0xd07c);
  if (iVar8 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    *(uint *)&this_ptr->field_0xd694 = 0;
    if (*(int *)&this_ptr->field_0xd0e4 == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              (&(this_ptr->base).base.model.base,5,0.0);
  }
  iVar8 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd078);
    return;
  }
  if ((*(int *)&this_ptr->field_0xd0e4 == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar4 = *(float *)&this_ptr->field_0xd694 + delta_time;
    *(float *)&this_ptr->field_0xd694 = fVar4;
    if (fVar4 <= *(float *)&this_ptr->field_0xd0e0) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790(this_ptr);
  }
  if (*(int *)&this_ptr->field_0xd0e4 == 2) {
    fVar4 = delta_time / _DAT_005dc144 + *(float *)&this_ptr->field_0xd694;
    *(float *)&this_ptr->field_0xd694 = fVar4;
    if (fVar4 < 1.0) {
      iStack_1c = 0;
      if (*(int *)&this_ptr->field_0xd0e8 < 1) {
        return;
      }
      puStack_30 = &this_ptr->field_0xd0f0;
      pfStack_24 = (float *)&this_ptr->field_0xd694;
      puStack_28 = &this_ptr->field_0xd108;
      puStack_20 = &this_ptr->field_0xd118;
      pfStack_18 = (float *)&this_ptr->field_0xd128;
      do {
        pfVar16 = pfStack_18;
        pfVar9 = (float *)(puStack_30 + iStack_1c * 0x48);
        fStack_54 = pfVar9[0x11];
        afStack_178[2] = *pfVar9 - *pfStack_18;
        afStack_178[3] = pfVar9[1] - pfStack_18[1];
        fStack_168 = pfVar9[2] - pfStack_18[2];
        fStack_158 = *pfVar9 - *pfStack_18;
        afStack_178[(uint)bVar14 * -2 + 9] = afStack_178[(uint)bVar14 * -2 + 3];
        afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
             afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
        fStack_98 = fStack_158 * *pfStack_24;
        fStack_94 = fStack_154 * *pfStack_24;
        fStack_90 = fStack_150 * *pfStack_24;
        fStack_8c = fStack_158 * *pfStack_24;
        afStack_100[(uint)bVar14 * -2 + 0x1e] = afStack_100[(uint)bVar14 * -2 + 0x1b];
        afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f] =
             afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c];
        fStack_a4 = *pfVar16 + fStack_8c;
        fStack_a0 = pfVar16[1] + fStack_88;
        fStack_9c = pfVar16[2] + fStack_84;
        fStack_194 = *pfVar16 + fStack_8c;
        afStack_1c8[(uint)bVar14 * -2 + 0xe] = afStack_100[(uint)bVar14 * -2 + 0x18];
        afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xf] =
             afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
        core_xform_cpp_slerpQuaternion_FUN_00585b20(puStack_28,puStack_20);
        uStack_1cc = afStack_1c8[3];
        afStack_1c8[(uint)bVar14 * -2] = afStack_1c8[(uint)bVar14 * -2 + 4];
        afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
        (afStack_1c8 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             (afStack_1c8 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
        core_xform_cpp_FUN_00585de0();
        afStack_100[2] = fStack_1ac;
        afStack_100[(uint)bVar14 * -2 + 3] = afStack_1c8[(uint)bVar14 * -2 + 8];
        afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9];
        afStack_100[2] = *(float *)&this_ptr->field_0xd694 * (float)_DAT_005b6f72 + afStack_100[2];
        *(float *)((int)fStack_54 + 0x20) = fStack_194;
        *(uint *)((int)fStack_54 + 0x24) = uStack_190;
        *(uint *)((int)fStack_54 + 0x28) = uStack_18c;
        if ((float *)((int)fStack_54 + 0x30) != afStack_100 + 2) {
          *(float *)((int)fStack_54 + 0x30) = afStack_100[2];
          *(float *)((int)fStack_54 + 0x34) = afStack_100[3];
          *(uint *)((int)fStack_54 + 0x38) = uStack_f0;
        }
        if ((float *)((int)fStack_54 + 0xcd0) != afStack_1c8 + 0xd) {
          *(float *)((int)fStack_54 + 0xcd0) = fStack_194;
          *(uint *)((int)fStack_54 + 0xcd4) = uStack_190;
          *(uint *)((int)fStack_54 + 0xcd8) = uStack_18c;
        }
        if ((float *)((int)fStack_54 + 0xcdc) != afStack_100 + 2) {
          *(float *)((int)fStack_54 + 0xcdc) = afStack_100[2];
          *(float *)((int)fStack_54 + 0xce0) = afStack_100[3];
          *(uint *)((int)fStack_54 + 0xce4) = uStack_f0;
        }
        iStack_1c = iStack_1c + 1;
        puStack_28 = puStack_28 + 0x48;
        puStack_20 = puStack_20 + 0x48;
        pfStack_18 = pfStack_18 + 0x12;
      } while (iStack_1c < *(int *)&this_ptr->field_0xd0e8);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_FUN_0054e670();
    pCVar12 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0xd0e8) {
      do {
        core_mission_cpp_FUN_004f6f10(0x01D81080,*(uint *)&pCVar12->field_0xd134);
        *(uint *)&pCVar12->field_0xd134 = 0;
        iVar8 = iVar8 + 1;
        pCVar12 = (CBoneGuy *)((pCVar12->base).base.base.orient_matrix.m + 1);
      } while (iVar8 < *(int *)&this_ptr->field_0xd0e8);
    }
    *(uint *)&this_ptr->field_0xd0e4 = 0;
    fVar4 = *(float *)&this_ptr->field_0xd0e0 * (float)_DAT_005b6f42;
    (this_ptr->base).base.hit_points = *(float *)&this_ptr->field_0xd058;
    *(float *)&this_ptr->field_0xd0e0 = fVar4;
    if (fVar4 <= (float)_DAT_005b6f4a) {
      *(uint *)&this_ptr->field_0xd0e0 = 0x40200000;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  pCVar1 = &(this_ptr->base).base.model;
  fStack_60 = delta_time * *(float *)&(this_ptr->base).field_0xcdcc;
  pCStack_2c = &pCVar1->base;
  while (0.0 < fStack_60) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar1->base,afStack_100 + 0x28)
    ;
    if (iVar8 == 100) {
      iVar8 = *(int *)&this_ptr->field_0xd064;
      if (iVar8 != 0) {
        *(uint *)&this_ptr->field_0xd064 = 0;
        core_charactr_cpp_FUN_004319d0(this_ptr,1,iVar8,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar8);
    }
  }
  *(float *)&(this_ptr->base).base.field_0x2524 =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr);
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_2c);
  iVar8 = *(int *)(pSVar10 + 0x24);
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
  iStack_38 = iVar8;
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    switch(iVar8) {
    case 0:
      iVar8 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_140 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_13c = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_138 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_164 = fStack_140;
      afStack_178[(uint)bVar14 * -2 + 6] = afStack_178[(uint)bVar14 * -2 + 0xf];
      afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
      if (0.0 < (this_ptr->base).attack_cooldown) {
        fStack_5c = fStack_15c * fStack_15c + fStack_164 * fStack_164 + fStack_160 * fStack_160;
        fStack_3c = (float)(((int)fStack_5c >> 1) + _DAT_01d1a0a4);
        if (fStack_3c <= 0x40400000 + (float)_DAT_005b6f62) break;
      }
      fStack_58 = fStack_15c * fStack_15c + fStack_164 * fStack_164 + fStack_160 * fStack_160;
      fStack_44 = (float)(((int)fStack_58 >> 1) + _DAT_01d1a0a4);
      pCVar1 = &(this_ptr->base).base.model;
      if (0x40400000 + (float)_DAT_005b6f62 < fStack_44) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          if ((this_ptr->base).victim != (CCharacter *)0x0) {
            *(uint *)&this_ptr->field_0xd690 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,1,1);
          }
        }
        else {
          *(uint *)&this_ptr->field_0xd690 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,1,1);
        }
      }
      else {
        *(uint *)&this_ptr->field_0xd690 = 1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,6,1);
      }
      break;
    case 1:
      iVar8 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_c8 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar8 + 0x20);
      fStack_c4 = (this_ptr->base).base.base.location.position.y - *(float *)(iVar8 + 0x24);
      fStack_c0 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar8 + 0x28);
      fStack_104 = fStack_c8;
      afStack_100[(uint)bVar14 * -2] = afStack_100[(uint)bVar14 * -2 + 0xf];
      afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
      fStack_40 = afStack_100[1] * afStack_100[1] +
                  fStack_104 * fStack_104 + afStack_100[0] * afStack_100[0];
      fStack_50 = (float)(((int)fStack_40 >> 1) + _DAT_01d1a0a4);
      if (((fStack_50 <= 0x40400000 + (float)_DAT_005b6f62) &&
          (0.0 < (this_ptr->base).attack_cooldown)) && (*(int *)&this_ptr->field_0xd690 == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_2c,0,1);
      }
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0,1);
        }
      }
      else {
        iVar8 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(this_ptr,delta_time);
        if (iVar8 == 0) {
          fStack_108 = 0x40400000 + (float)_DAT_005b6f6a;
          uVar17 = 0x3e32b8c23dcccccd;
          uStack_110 = 0;
          uStack_10c = 0;
          pCVar6 = (this_ptr->base).victim;
          fStack_34 = fStack_108;
          path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,
                             (CVector3f *)uVar17,(float)((ulonglong)uVar17 >> 0x20),
                             in_stack_fffffdc8);
          pCVar1 = &(this_ptr->base).base.model;
          if (iVar8 < 0) {
            engine_console_cpp_FUN_00441ff0();
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,0,1);
          }
          else {
            pCVar6 = (this_ptr->base).victim;
            fVar4 = (this_ptr->base).base.base.location.position.x -
                    (pCVar6->base).location.position.x;
            fVar7 = (this_ptr->base).base.base.location.position.z -
                    (pCVar6->base).location.position.z;
            if ((SQRT(fVar7 * fVar7 + fVar4 * fVar4) <= fStack_34 + (float)_DAT_005b6f42) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar1->base,6,1);
              *(uint *)&this_ptr->field_0xd690 = 1;
              sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd078);
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffdbc);
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&(this_ptr->base).base.model.field_0xe80 + DAT_007e1620 * 0x30,
                 0x3ecccccd);
      puVar15 = &uStack_17c;
      uStack_17c = uStack_14c;
      afStack_178[(uint)bVar14 * -2] = afStack_178[(uint)bVar14 * -2 + 0xc];
      afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(this_ptr,puVar15);
      pfVar16 = afStack_178 + 0x17;
      afStack_11c[0] = (float)uStack_134;
      afStack_178[(uint)bVar14 * -2 + 0x18] = afStack_178[(uint)bVar14 * -2 + 0x12];
      pCVar12 = this_ptr;
      afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19] =
           afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
      core_enemy_cpp_FUN_004893f0(pCVar12,pfVar16);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 6:
      iVar8 = *(int *)&(this_ptr->base).base.field_0x2628;
      if (iVar8 == 0) {
        fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_2c);
        if (((float)_DAT_005b6f52 < fStack_14) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_208);
          uStack_204 = *(uint *)&(this_ptr->base).field_0xce5c;
          pCStack_1d4 = this_ptr;
          pCStack_1d0 = this_ptr;
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,&(this_ptr->base).base.model.field_0xe80 + DAT_007e1628 * 0x30,
                     0x40000000);
          pfVar16 = afStack_100 + 0x11;
          afStack_bc[0] = (float)uStack_128;
          afStack_100[(uint)bVar14 * -2 + 0x12] = afStack_178[(uint)bVar14 * -2 + 0x15];
          afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
               afStack_178[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
          core_actor_cpp_FUN_00408b80(this_ptr,pfVar16);
          pfVar16 = afStack_1c8 + 10;
          afStack_1a0[0] = (float)uStack_80;
          afStack_1c8[(uint)bVar14 * -2 + 0xb] = afStack_100[(uint)bVar14 * -2 + 0x21];
          pCVar12 = this_ptr;
          afStack_1c8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xc] =
               afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
          core_enemy_cpp_FUN_004893f0(pCVar12,pfVar16);
          (this_ptr->base).attack_cooldown = 2.5;
        }
      }
      else {
        (**(code **)(*(int *)(iVar8 + 0x154) + 0x78))(iVar8);
        (this_ptr->base).attack_cooldown = 2.5;
      }
    }
    goto switchD_00418691_caseD_3;
  }
  EVar5 = (this_ptr->base).base.walk_state;
  if (EVar5 < 2) {
    if (EVar5 == WALK_STATE_WALKING) {
LAB_00417e96:
      iVar8 = 1;
    }
    else {
LAB_004180ff:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar8,1);
  }
  else {
    if (EVar5 < WALK_STATE_NO_PATH) goto LAB_00417e96;
    if (EVar5 != WALK_STATE_NO_PATH) goto LAB_004180ff;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_2c,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00418691_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    pCVar6 = (this_ptr->base).victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar12 = (CBoneGuy *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar12 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0();
    fStack_e0 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_dc = (this_ptr->base).base.velocity.y * delta_time;
    fStack_d8 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_ec = fStack_e0;
    afStack_100[(uint)bVar14 * -2 + 6] = afStack_100[(uint)bVar14 * -2 + 9];
    afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
    pCVar2 = &(this_ptr->base).base.position_delta;
    fStack_b0 = fStack_ec + pCVar2->x;
    fStack_ac = fStack_e8 + (this_ptr->base).base.position_delta.y;
    fStack_a8 = fStack_e4 + (this_ptr->base).base.position_delta.z;
    fStack_74 = fStack_b0;
    afStack_100[(uint)bVar14 * -2 + 0x24] = afStack_100[(uint)bVar14 * -2 + 0x15];
    afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_d4 = fStack_74 + pCVar3->x;
    fStack_d0 = fStack_70 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_cc = fStack_6c + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_188.x = fStack_d4;
    *(float *)((int)&CStack_188 + (uint)bVar14 * -8 + 4) = afStack_100[(uint)bVar14 * -2 + 0xc];
    *(float *)((int)&CStack_188 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_100[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar2->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar4 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar4;
    pCVar3->x = fVar4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_188);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if ((iStack_38 == 1) &&
     (iVar8 = sound_sndmain_cpp_FUN_00557170
                        ((double)(this_ptr->base).base.base.location.position.x,
                         SUB84(__BITCAST_UINT64((double)(this_ptr->base).base.base.location.position.y),0)),
     iVar8 != 0)) {
    iVar8 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd078);
    if (iVar8 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00555fd0();
    iVar8 = 2;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60((double)fStack_14,iVar8);
    uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    *(uint *)&this_ptr->field_0xd078 = uVar13;
    uStack_230 = 0x4180c5;
    sound_sndmain_cpp_popSfxOptions_FUN_00556050();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd078);
  return;
}
