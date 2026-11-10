// Name: core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40
// Address: 0041bb40
// Address Range: [[0041bb40, 0041c71b]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bb40(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bb40(CBoneGuy *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  float fVar5;
  int iVar6;
  SBoneGuyBox *pSVar7;
  SMotion *pSVar8;
  int iVar9;
  CBoneGuy *pCVar10;
  uint uVar11;
  CPathMap *path_map;
  float *pfVar12;
  float *pfVar13;
  byte bVar14;
  float afStackY_19a4 [1480];
  CVector3f *pCVar15;
  float fVar16;
  SDamageInfo *damage_info;
  ulonglong uVar17;
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
  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->death_event);
  if (iVar6 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_0041d540(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              (&(this_ptr->base).base.model.base,5,0.0);
  }
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) goto LAB_0041be0f;
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar16 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar16;
    if (fVar16 <= this_ptr->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041d760(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar16 = delta_time / _DAT_005fcc38 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar16;
    if (fVar16 < 1.0) {
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
        pSVar7 = pSStack_34 + iStack_24;
        iStack_44 = *(int *)&pSVar7->field_0x44;
        fStack_184 = *(float *)pSVar7 - *pfStack_20;
        fStack_180 = *(float *)&pSVar7->field_0x4 - pfStack_20[1];
        fStack_17c = *(float *)&pSVar7->field_0x8 - pfStack_20[2];
        fStack_a0 = *(float *)pSVar7 - *pfStack_20;
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
        core_xform_cpp_slerpQuaternion_FUN_005b7940();
        uStack_1c8 = afStack_1c4[3];
        afStack_1c4[(uint)bVar14 * -2] = afStack_1c4[(uint)bVar14 * -2 + 4];
        afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
        (afStack_1c4 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             (afStack_1c4 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
        core_xform_cpp_FUN_005b7c00();
        fStack_ac = fStack_b8;
        afStack_d8[(uint)bVar14 * -2 + 0xc] = afStack_d8[(uint)bVar14 * -2 + 9];
        afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
             afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        fStack_ac = this_ptr->recombine_interpolation * (float)_DAT_005d4761 + fStack_ac;
        *(float *)(iStack_44 + 0x20) = afStack_d8[2];
        *(float *)(iStack_44 + 0x24) = afStack_d8[3];
        *(uint *)(iStack_44 + 0x28) = uStack_c8;
        if ((float *)(iStack_44 + 0x30) != afStack_d8 + 0xb) {
          *(float *)(iStack_44 + 0x30) = fStack_ac;
          *(uint *)(iStack_44 + 0x34) = uStack_a8;
          *(uint *)(iStack_44 + 0x38) = uStack_a4;
        }
        if ((float *)(iStack_44 + 0xcd0) != afStack_d8 + 2) {
          *(float *)(iStack_44 + 0xcd0) = afStack_d8[2];
          *(float *)(iStack_44 + 0xcd4) = afStack_d8[3];
          *(uint *)(iStack_44 + 0xcd8) = uStack_c8;
        }
        if ((float *)(iStack_44 + 0xcdc) != afStack_d8 + 0xb) {
          *(float *)(iStack_44 + 0xcdc) = fStack_ac;
          *(uint *)(iStack_44 + 0xce0) = uStack_a8;
          *(uint *)(iStack_44 + 0xce4) = uStack_a4;
        }
        iStack_24 = iStack_24 + 1;
        puStack_28 = puStack_28 + 0x48;
        puStack_2c = puStack_2c + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < this_ptr->box_count);
      return;
    }
    iVar6 = 0;
    core_skeleton_cpp_FUN_00569ae0();
    pCVar10 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_FUN_0051b740();
        *(uint *)&pCVar10->boxes[0].field_0x44 = 0;
        iVar6 = iVar6 + 1;
        pCVar10 = (CBoneGuy *)((pCVar10->base).base.base.orient_matrix.m + 1);
      } while (iVar6 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    fVar16 = this_ptr->recombine_time * (float)_DAT_005d4749;
    (this_ptr->base).base.hit_points = 100.0;
    this_ptr->recombine_time = fVar16;
    if (fVar16 <= (float)_DAT_005d4751) {
      this_ptr->recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_40[0] = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < afStack_40[0]) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar1->base,afStack_40);
    if (iVar6 == 100) {
      iVar6 = *(int *)&this_ptr->field_0xc274;
      if (iVar6 != 0) {
        *(uint *)&this_ptr->field_0xc274 = 0;
        core_charactr_cpp_FUN_004325b0(this_ptr,1,iVar6,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar6);
    }
  }
  *(float *)&(this_ptr->base).base.field_0x2524 =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr);
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar1->base);
  iVar6 = *(int *)(pSVar8 + 0x24);
  iStack_1c = iVar6;
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 == 0) {
    switch(iVar6) {
    case 0:
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
        }
      }
      else {
        iVar6 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_0041c9a0(this_ptr,delta_time);
        if (iVar6 == 0) {
          fStack_38 = 0x40000000;
          if (*(int *)&(this_ptr->base).base.field_0x2628 != 0) {
            fStack_38 = 0x40400000;
          }
          uVar17 = 0x3e32b8c23f000000;
          uStack_154 = 0;
          fStack_14c = fStack_38;
          uStack_150 = 0;
          pCVar4 = (this_ptr->base).victim;
          path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
          iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,
                             (CVector3f *)uVar17,(float)((ulonglong)uVar17 >> 0x20),
                             in_stack_fffffd98);
          pCVar1 = &(this_ptr->base).base.model;
          if (iVar6 < 0) {
            engine_console_cpp_FUN_00445430();
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
          }
          else {
            pCVar4 = (this_ptr->base).victim;
            fVar16 = (this_ptr->base).base.base.location.position.x -
                     (pCVar4->base).location.position.x;
            fVar5 = (this_ptr->base).base.base.location.position.z -
                    (pCVar4->base).location.position.z;
            if ((SQRT(fVar5 * fVar5 + fVar16 * fVar16) <= fStack_38 + (float)_DAT_005d4749) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              if (*(int *)&(this_ptr->base).base.field_0x2628 == 0) {
                iVar6 = 2;
              }
              else {
                iVar6 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,iVar6,1);
              sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffd90);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      damage_info = (SDamageInfo *)&stack0xfffffd90;
      fVar16 = 0.4;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28);
      uStack_dc = uStack_148;
      afStack_d8[(uint)bVar14 * -2] = afStack_144[(uint)bVar14 * -2];
      afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_144[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr);
      pCVar15 = &CStack_f4;
      CStack_f4.x = fStack_118;
      *(float *)((int)&CStack_f4 + (uint)bVar14 * -8 + 4) = afStack_114[(uint)bVar14 * -2];
      pCVar10 = this_ptr;
      *(float *)((int)&CStack_f4 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_114[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar10->base,pCVar15,fVar16,damage_info)
      ;
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 6:
      iVar6 = *(int *)&(this_ptr->base).base.field_0x2628;
      if (iVar6 != 0) {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0x1c))();
        pfVar12 = afStack_1e0;
        pfVar13 = &fStack_1f8;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
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
        fStack_94 = fStack_160 * _DAT_005d4759;
        fStack_90 = fStack_15c * _DAT_005d4759;
        fStack_8c = fStack_158 * _DAT_005d4759;
        CStack_7c.x = fStack_160 * _DAT_005d4759;
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
        core_actor_cpp_FUN_00408b40();
        CStack_13c.x = fStack_16c;
        afStack_144[(uint)bVar14 * -2 + 3] = afStack_1c4[(uint)bVar14 * -2 + 0x17];
        afStack_144[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x18];
        if (&CStack_e8 != (CVector3f *)(afStack_144 + 2)) {
          CStack_e8.x = CStack_13c.x;
          CStack_e8.y = CStack_13c.y;
          CStack_e8.z = CStack_13c.z;
        }
        core_actor_cpp_FUN_00408b40();
        CStack_10c.x = fStack_1a8;
        afStack_114[(uint)bVar14 * -2 + 3] = afStack_1c4[(uint)bVar14 * -2 + 8];
        afStack_114[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
             afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9];
        if (&CStack_88 != (CVector3f *)(afStack_114 + 2)) {
          CStack_88.x = CStack_10c.x;
          CStack_88.y = CStack_10c.y;
          CStack_88.z = CStack_10c.z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_234);
        fStack_230 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,25.0);
        uStack_200 = *(uint *)&(this_ptr->base).base.field_0x2628;
        pCStack_1fc = this_ptr;
        fStack_14 = fStack_230;
        core_enemy_cpp_CEnemy_testAttackLine_FUN_004a0810
                  (&this_ptr->base,&CStack_e8,&CStack_88,aSStack_234);
      }
    }
  }
  else {
    EVar3 = (this_ptr->base).base.walk_state;
    if (EVar3 < 2) {
      if (EVar3 == WALK_STATE_WALKING) {
LAB_0041bfb6:
        iVar6 = 1;
      }
      else {
LAB_0041c243:
        iVar6 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar6,1);
    }
    else {
      if (EVar3 < WALK_STATE_NO_PATH) goto LAB_0041bfb6;
      if (EVar3 != WALK_STATE_NO_PATH) goto LAB_0041c243;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar1->base,0,1);
      engine_console_cpp_FUN_00445430();
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar10 = (CBoneGuy *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700();
    fStack_190 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_18c = (this_ptr->base).base.velocity.y * delta_time;
    fStack_188 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_19c = fStack_190;
    afStack_1c4[(uint)bVar14 * -2 + 0xb] = afStack_1c4[(uint)bVar14 * -2 + 0xe];
    afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xc] =
         afStack_1c4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xf];
    pCVar15 = &(this_ptr->base).base.position_delta;
    fStack_100 = fStack_19c + pCVar15->x;
    fStack_fc = fStack_198 + (this_ptr->base).base.position_delta.y;
    fStack_f8 = fStack_194 + (this_ptr->base).base.position_delta.z;
    fStack_c4 = fStack_100;
    afStack_d8[(uint)bVar14 * -2 + 6] = afStack_114[(uint)bVar14 * -2 + 6];
    afStack_d8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_114[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_130 = fStack_c4 + pCVar2->x;
    fStack_12c = fStack_c0 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_128 = fStack_bc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_124.x = fStack_130;
    *(float *)((int)&CStack_124 + (uint)bVar14 * -8 + 4) = afStack_144[(uint)bVar14 * -2 + 6];
    *(float *)((int)&CStack_124 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_144[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_124);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if ((iStack_1c == 1) &&
     (iVar6 = sound_sndmain_cpp_FUN_00574010
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y), iVar6 != 0)) {
    iVar6 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
    if (iVar6 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    iVar6 = 2;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
    sound_sndmain_cpp_FUN_00572a50((double)fStack_14,iVar6);
    uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar11;
    uStack_260 = 0x41c20c;
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return;
  }
LAB_0041be0f:
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  return;
}
