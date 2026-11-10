// Name: core_boneguy.cpp_CBoneGuy_process_FUN_004186c0
// Address: 004186c0
// Address Range: [[004186c0, 0041929b]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004186c0(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_004186c0(CBoneGuy *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  byte *puVar2;
  byte *puVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  float fVar6;
  int iVar7;
  SBoneGuyBox *pSVar8;
  int iVar9;
  CBoneGuy *pCVar10;
  uint uVar11;
  CPathMap *path_map;
  float *pfVar12;
  float *pfVar13;
  byte bVar14;
  float afStackY_19a4 [1480];
  CVector3f *point;
  float fVar15;
  SDamageInfo *damage_info;
  ulonglong uVar16;
  float in_stack_fffffd98;
  uint uStack_260;
  SDamageInfo aSStack_234 [4];
  float fStack_230;
  uint uStack_200;
  CBoneGuy *pCStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float afStack_1e0 [6];
  uint uStack_1c8;
  float afStack_1c4 [7];
  float fStack_1a8;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_154;
  uint uStack_150;
  float fStack_14c;
  uint uStack_148;
  float afStack_144 [2];
  CVector3f CStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  CVector3f CStack_124;
  float fStack_118;
  float afStack_114 [2];
  CVector3f CStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  uint uStack_dc;
  float afStack_d8 [4];
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_44;
  float afStack_40 [2];
  float fStack_38;
  SBoneGuyBox *pSStack_34;
  float *pfStack_30;
  byte *puStack_2c;
  byte *puStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  float fStack_14;
  
  bVar14 = 0;
  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,this_ptr->death_event);
  if (iVar7 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0c0(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
              ((CMotionController *)&(this_ptr->base).base.model,5,0.0);
  }
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) goto LAB_0041898f;
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar15 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar15;
    if (fVar15 <= this_ptr->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a2e0(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar15 = delta_time / _DAT_005f3838 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar15;
    if (fVar15 < 1.0) {
      iStack_24 = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      pSStack_34 = this_ptr->boxes;
      pfStack_30 = &this_ptr->recombine_interpolation;
      puStack_28 = &this_ptr->boxes[0].field_0x18;
      puStack_2c = &this_ptr->boxes[0].field_0x28;
      pfStack_20 = (float *)&this_ptr->boxes[0].field_0x38;
      do {
        pfVar12 = pfStack_20;
        pSVar8 = pSStack_34 + iStack_24;
        iStack_44 = *(int *)&pSVar8->field_0x44;
        fStack_184 = *(float *)pSVar8 - *pfStack_20;
        fStack_180 = *(float *)&pSVar8->field_0x4 - pfStack_20[1];
        fStack_17c = *(float *)&pSVar8->field_0x8 - pfStack_20[2];
        fStack_a0 = *(float *)pSVar8 - *pfStack_20;
        afStack_d8[(uint)bVar14 * -2 + 0xf] = afStack_1c4[(uint)bVar14 * -2 + 0x11];
        afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x12];
        fStack_70 = fStack_a0 * *pfStack_30;
        fStack_6c = fStack_9c * *pfStack_30;
        fStack_68 = fStack_98 * *pfStack_30;
        fStack_64 = fStack_a0 * *pfStack_30;
        *(uint *)((int)&CStack_7c + ((uint)bVar14 * -2 + 6) * 4 + 4) =
             *(uint *)((int)&CStack_7c + ((uint)bVar14 * -2 + 3) * 4 + 4);
        *(uint *)((int)&CStack_7c + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 7) * 4 + 4) =
             *(uint *)((int)&CStack_7c + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 4) * 4 + 4);
        fStack_58 = *pfVar12 + fStack_64;
        fStack_54 = pfVar12[1] + fStack_60;
        fStack_50 = pfVar12[2] + fStack_5c;
        afStack_d8[2] = *pfVar12 + fStack_64;
        afStack_d8[(uint)bVar14 * -2 + 3] =
             *(float *)((int)&CStack_7c + ((uint)bVar14 * -2 + 9) * 4 + 4);
        afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             *(float *)((int)&CStack_7c + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 10) * 4 + 4);
        core_xform_cpp_slerpQuaternion_FUN_00593df0();
        uStack_1c8 = afStack_1c4[3];
        afStack_1c4[(uint)bVar14 * -2] = afStack_1c4[(uint)bVar14 * -2 + 4];
        afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
        (afStack_1c4 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             (afStack_1c4 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
        core_xform_cpp_FUN_005940b0();
        fStack_ac = fStack_b8;
        afStack_d8[(uint)bVar14 * -2 + 0xc] = afStack_d8[(uint)bVar14 * -2 + 9];
        afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
             afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        fStack_ac = this_ptr->recombine_interpolation * (float)_DAT_005cc1ea + fStack_ac;
        *(float *)(iStack_44 + 0x20) = afStack_d8[2];
        *(float *)(iStack_44 + 0x24) = afStack_d8[3];
        *(uint *)(iStack_44 + 0x28) = uStack_c8;
        if ((float *)(iStack_44 + 0x30) != afStack_d8 + 0xb) {
          *(float *)(iStack_44 + 0x30) = fStack_ac;
          *(uint *)(iStack_44 + 0x34) = uStack_a8;
          *(uint *)(iStack_44 + 0x38) = uStack_a4;
        }
        if ((float *)(iStack_44 + 0x10e0) != afStack_d8 + 2) {
          *(float *)(iStack_44 + 0x10e0) = afStack_d8[2];
          *(float *)(iStack_44 + 0x10e4) = afStack_d8[3];
          *(uint *)(iStack_44 + 0x10e8) = uStack_c8;
        }
        if ((float *)(iStack_44 + 0x10ec) != afStack_d8 + 0xb) {
          *(float *)(iStack_44 + 0x10ec) = fStack_ac;
          *(uint *)(iStack_44 + 0x10f0) = uStack_a8;
          *(uint *)(iStack_44 + 0x10f4) = uStack_a4;
        }
        iStack_24 = iStack_24 + 1;
        puStack_28 = puStack_28 + 0x48;
        puStack_2c = puStack_2c + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < this_ptr->box_count);
      return;
    }
    iVar7 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00547440
              (&(this_ptr->base).base.model);
    pCVar10 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_FUN_004fc7b0();
        *(uint *)&pCVar10->boxes[0].field_0x44 = 0;
        iVar7 = iVar7 + 1;
        pCVar10 = (CBoneGuy *)((pCVar10->base).base.base.orient_matrix.m + 1);
      } while (iVar7 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    fVar15 = this_ptr->recombine_time * (float)_DAT_005cc1d2;
    (this_ptr->base).base.hit_points = 100.0;
    this_ptr->recombine_time = fVar15;
    if (fVar15 <= (float)_DAT_005cc1da) {
      this_ptr->recombine_time = 2.5;
    }
  }
  *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
  *(uint *)&(this_ptr->base).base.model.field_0x2258 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  *(uint *)&(this_ptr->base).base.model.field_0x2254 =
       *(uint *)&(this_ptr->base).base.model.field_0x2258;
  afStack_40[0] = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < afStack_40[0]) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)pCVar1,afStack_40);
    if (iVar7 == 100) {
      iVar7 = *(int *)&this_ptr->field_0x10b04;
      if (iVar7 != 0) {
        *(uint *)&this_ptr->field_0x10b04 = 0;
        core_charactr_cpp_FUN_00428b10(this_ptr,1,iVar7,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar7);
    }
  }
  *(uint *)&(this_ptr->base).base.field_0x2594 =
       *(uint *)&(this_ptr->base).base.model.field_0x225c;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar7 = core_motion_cpp_FUN_005035c0();
  iVar7 = *(int *)(iVar7 + 0x24);
  iStack_1c = iVar7;
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
      if (iVar7 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar1,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCVar1,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)pCVar1,0,1);
        }
      }
      else {
        iVar7 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00419520(this_ptr,delta_time);
        if (iVar7 == 0) {
          fStack_38 = 0x40000000;
          if (*(int *)&(this_ptr->base).base.field_0x2698 != 0) {
            fStack_38 = 0x40400000;
          }
          uVar16 = 0x3e32b8c23f000000;
          uStack_154 = 0;
          fStack_14c = fStack_38;
          uStack_150 = 0;
          pCVar5 = (this_ptr->base).victim;
          path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                            ((CCharacter *)this_ptr,
                             (CVector3f *)&(((this_ptr->base).victim)->base).field_0x20,path_map,
                             (CVector3f *)uVar16,(float)((ulonglong)uVar16 >> 0x20),
                             in_stack_fffffd98);
          pCVar1 = &(this_ptr->base).base.model;
          if (iVar7 < 0) {
            engine_console_cpp_FUN_00436710();
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)pCVar1,0,1);
          }
          else {
            pCVar5 = (this_ptr->base).victim;
            fVar15 = *(float *)&(this_ptr->base).base.base.field_0x20 -
                     *(float *)&(pCVar5->base).field_0x20;
            fVar6 = *(float *)&(this_ptr->base).base.base.field_0x28 -
                    *(float *)&(pCVar5->base).field_0x28;
            if ((SQRT(fVar6 * fVar6 + fVar15 * fVar15) <= fStack_38 + (float)_DAT_005cc1d2) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              if (*(int *)&(this_ptr->base).base.field_0x2698 == 0) {
                iVar7 = 2;
              }
              else {
                iVar7 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)pCVar1,iVar7,1);
              sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffd90);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      damage_info = (SDamageInfo *)&stack0xfffffd90;
      fVar15 = 0.4;
      core_xform_cpp_FUN_00591530(&DAT_0265370c);
      uStack_dc = uStack_148;
      afStack_d8[(uint)bVar14 * -2] = afStack_144[(uint)bVar14 * -2];
      afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_144[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_actor_cpp_FUN_00408d70(this_ptr);
      point = &CStack_f4;
      CStack_f4.x = fStack_118;
      *(float *)((int)&CStack_f4 + (uint)bVar14 * -8 + 4) = afStack_114[(uint)bVar14 * -2];
      pCVar10 = this_ptr;
      *(float *)((int)&CStack_f4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_114[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar10->base,point,fVar15,damage_info);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) && (*(int *)&(this_ptr->base).base.base.field_0xdc == 0))
      {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 6:
      iVar7 = *(int *)&(this_ptr->base).base.field_0x2698;
      if (iVar7 != 0) {
        (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x24))();
        pfVar12 = afStack_1e0;
        pfVar13 = &fStack_1f8;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar13 = *pfVar12;
          pfVar12 = pfVar12 + (uint)bVar14 * -2 + 1;
          pfVar13 = pfVar13 + (uint)bVar14 * -2 + 1;
        }
        fStack_178 = fStack_1f8 + fStack_1ec;
        fStack_174 = fStack_1f4 + fStack_1e8;
        fStack_170 = fStack_1f0 + fStack_1e4;
        fStack_160 = fStack_1f8 + fStack_1ec;
        afStack_1c4[(uint)bVar14 * -2 + 0x1a] = afStack_1c4[(uint)bVar14 * -2 + 0x14];
        afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1b] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x15];
        fStack_94 = fStack_160 * _DAT_005cc1e2;
        fStack_90 = fStack_15c * _DAT_005cc1e2;
        fStack_8c = fStack_158 * _DAT_005cc1e2;
        CStack_7c.x = fStack_160 * _DAT_005cc1e2;
        *(float *)((int)&CStack_7c + (uint)bVar14 * -8 + 4) = afStack_d8[(uint)bVar14 * -2 + 0x12];
        *(float *)((int)&CStack_7c + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 1) * 4 + 4) =
             afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
        if (&CStack_88 != &CStack_7c) {
          CStack_88.x = CStack_7c.x;
          CStack_88.y = CStack_7c.y;
        }
        if (&CStack_e8 != &CStack_88) {
          CStack_e8.x = CStack_88.x;
          CStack_e8.y = CStack_88.y;
        }
        CStack_e8.z = fStack_1f0;
        CStack_88.z = fStack_1e4;
        core_actor_cpp_FUN_00408d70();
        CStack_13c.x = fStack_16c;
        afStack_144[(uint)bVar14 * -2 + 3] = afStack_1c4[(uint)bVar14 * -2 + 0x17];
        afStack_144[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x18];
        if (&CStack_e8 != (CVector3f *)(afStack_144 + 2)) {
          CStack_e8.x = CStack_13c.x;
          CStack_e8.y = CStack_13c.y;
          CStack_e8.z = CStack_13c.z;
        }
        core_actor_cpp_FUN_00408d70();
        CStack_10c.x = fStack_1a8;
        afStack_114[(uint)bVar14 * -2 + 3] = afStack_1c4[(uint)bVar14 * -2 + 8];
        afStack_114[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9];
        if (&CStack_88 != (CVector3f *)(afStack_114 + 2)) {
          CStack_88.x = CStack_10c.x;
          CStack_88.y = CStack_10c.y;
          CStack_88.z = CStack_10c.z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_234);
        fStack_230 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,25.0);
        uStack_200 = *(uint *)&(this_ptr->base).base.field_0x2698;
        pCStack_1fc = this_ptr;
        fStack_14 = fStack_230;
        core_enemy_cpp_CEnemy_testAttackLine_FUN_004881b0
                  (&this_ptr->base,&CStack_e8,&CStack_88,aSStack_234);
      }
    }
  }
  else {
    EVar4 = (this_ptr->base).base.walk_state;
    if (EVar4 < 2) {
      if (EVar4 == WALK_STATE_WALKING) {
LAB_00418b36:
        iVar7 = 1;
      }
      else {
LAB_00418dc3:
        iVar7 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&(this_ptr->base).base.model,iVar7,1);
    }
    else {
      if (EVar4 < WALK_STATE_NO_PATH) goto LAB_00418b36;
      if (EVar4 != WALK_STATE_NO_PATH) goto LAB_00418dc3;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)pCVar1,0,1);
      engine_console_cpp_FUN_00436710();
    }
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)&(this_ptr->base).base.model.field_0x2254 =
         *(uint *)&(this_ptr->base).base.model.field_0x2258;
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar10 = (CBoneGuy *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_190 = *(float *)&(this_ptr->base).base.field_0x2588 * delta_time;
    fStack_18c = *(float *)&(this_ptr->base).base.field_0x258c * delta_time;
    fStack_188 = *(float *)&(this_ptr->base).base.field_0x2590 * delta_time;
    fStack_19c = fStack_190;
    afStack_1c4[(uint)bVar14 * -2 + 0xb] = afStack_1c4[(uint)bVar14 * -2 + 0xe];
    afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xc] =
         afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xf];
    puVar2 = &(this_ptr->base).base.field_0x257c;
    fStack_100 = fStack_19c + *(float *)puVar2;
    fStack_fc = fStack_198 + *(float *)&(this_ptr->base).base.field_0x2580;
    fStack_f8 = fStack_194 + *(float *)&(this_ptr->base).base.field_0x2584;
    fStack_c4 = fStack_100;
    afStack_d8[(uint)bVar14 * -2 + 6] = afStack_114[(uint)bVar14 * -2 + 6];
    afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_114[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    puVar3 = &(this_ptr->base).base.model.field_0x2254;
    fStack_130 = fStack_c4 + *(float *)puVar3;
    fStack_12c = fStack_c0 + *(float *)&(this_ptr->base).base.model.field_0x2258;
    fStack_128 = fStack_bc + *(float *)&(this_ptr->base).base.model.field_0x225c;
    CStack_124.x = fStack_130;
    *(float *)((int)&CStack_124 + (uint)bVar14 * -8 + 4) = afStack_144[(uint)bVar14 * -2 + 6];
    *(float *)((int)&CStack_124 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_144[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    *(uint *)&(this_ptr->base).base.field_0x2584 = 0;
    *(uint *)&(this_ptr->base).base.field_0x2580 =
         *(uint *)&(this_ptr->base).base.field_0x2584;
    *(uint *)puVar2 = *(uint *)&(this_ptr->base).base.field_0x2580;
    *(uint *)&(this_ptr->base).base.model.field_0x225c = 0;
    *(uint *)&(this_ptr->base).base.model.field_0x2258 =
         *(uint *)&(this_ptr->base).base.model.field_0x225c;
    *(uint *)puVar3 = *(uint *)&(this_ptr->base).base.model.field_0x2258;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_124);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  if ((iStack_1c == 1) &&
     (iVar7 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&(this_ptr->base).base.base.field_0x20,
                         (double)*(float *)&(this_ptr->base).base.base.field_0x24), iVar7 != 0)) {
    iVar7 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
    if (iVar7 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    iVar7 = 2;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)fStack_14,iVar7);
    uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar11;
    uStack_260 = 0x418d8c;
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
LAB_0041898f:
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  return;
}
