// Name: core_dog.cpp_CZombieDog_process_FUN_004628b0
// Address: 004628b0
// Address Range: [[004628b0, 00463459]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_process_FUN_004628b0(CZombieDog *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dog_cpp_CZombieDog_process_FUN_004628b0(CZombieDog *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  EWalkState EVar4;
  CCharacter *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  CZombieDog *pCVar8;
  uint uVar9;
  CPathMap *path_map;
  byte bVar10;
  float afStackY_11a8 [997];
  CVector3f *pCVar11;
  float fVar12;
  SDamageInfo *damage_info;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo SStack_1fc;
  uint uStack_1c0;
  float afStack_1bc [4];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  CVector3f CStack_190;
  uint uStack_184;
  float afStack_180 [5];
  CVector3f CStack_16c;
  float fStack_160;
  float afStack_15c [5];
  CVector3f CStack_148;
  CVector3f CStack_13c;
  float fStack_130;
  float afStack_12c [2];
  CVector3f CStack_124;
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [5];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  float fStack_ac;
  float afStack_a8 [4];
  float fStack_98;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar6 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar6 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,0);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_44 = delta_time * (this_ptr->base).speed;
  pCVar2 = &(this_ptr->base).base.model;
  while (0.0 < fStack_44) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCVar2->base,afStack_84 + 0x10);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar6);
  }
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCVar2->base);
  fVar12 = (this_ptr->base).speed;
  iVar6 = pSVar7->state_index;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iStack_28 = iVar6;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar12);
  if (iVar6 == 8) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005bbc44;
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iStack_28) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_19c = *(float *)(iVar6 + 0x20) - (this_ptr->base).base.base.location.position.x;
      fStack_198 = *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
      fStack_194 = *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
      afStack_108[2] = fStack_19c;
      afStack_108[(uint)bVar10 * -2 + 3] = afStack_1bc[(uint)bVar10 * -2 + 9];
      afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_1bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_108 + 2);
      fVar12 = fStack_f8 * fStack_f8 +
               afStack_108[2] * afStack_108[2] + afStack_108[3] * afStack_108[3];
      uStack_1c0 = afStack_180[2];
      afStack_1bc[(uint)bVar10 * -2] = afStack_180[(uint)bVar10 * -2 + 3];
      afStack_1bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_180[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      fStack_34 = (float)(((int)fVar12 >> 1) + _DAT_01d1a0a4);
      fStack_40 = fVar12;
      fStack_2c = fStack_34;
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                            (afStack_1bc[0] - (this_ptr->base).base.base.orient.vec.y);
      if (ABS(fStack_14) < (float)_DAT_005bbc54) {
        if ((0.0 < (this_ptr->base).attack_cooldown) &&
           (fStack_2c < _DAT_005de5b8 + (float)_DAT_005bbc5c)) break;
        if (((this_ptr->base).attack_cooldown <= 0.0) && (fStack_34 <= _DAT_005de5b8)) {
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
          if (iVar6 < 0x32) {
            iVar6 = 0xb;
          }
          else {
            iVar6 = 0xc;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,iVar6,1);
          (this_ptr->base).attack_cooldown = 2.5;
          break;
        }
      }
      iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
      pCStack_1c = &(this_ptr->base).base.model.base;
      if (iVar6 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar5 = (this_ptr->base).victim;
        if (pCVar5 != (CCharacter *)0x0) {
          fStack_70 = (pCVar5->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_6c = (pCVar5->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_68 = (pCVar5->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_1a8 = fStack_70;
          afStack_1bc[(uint)bVar10 * -2 + 6] = afStack_84[(uint)bVar10 * -2 + 6];
          afStack_1bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          fStack_3c = fStack_1a0 * fStack_1a0 + fStack_1a8 * fStack_1a8 + fStack_1a4 * fStack_1a4;
          fStack_24 = (float)(((int)fStack_3c >> 1) + _DAT_01d1a0a4);
          if (fStack_24 < _DAT_005de5c4) {
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
            if (iVar6 < 0x21) {
              iVar6 = 5;
            }
            else if (iVar6 < 0x42) {
              iVar6 = 6;
            }
            else {
              iVar6 = 7;
            }
          }
          else {
            iVar6 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,iVar6,1);
          iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                            (0x02CF5680,this_ptr->sfx_handle);
          if (iVar6 == 0) {
            uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"dog5.wav");
            this_ptr->sfx_handle = uVar9;
          }
        }
      }
      else {
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
        if (iVar6 < 0x21) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,5,1);
        }
        else if (iVar6 < 0x42) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,6,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,7,1);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar5 = (this_ptr->base).victim;
      if (pCVar5 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        pCVar2 = &(this_ptr->base).base.model;
        if (iVar6 == 0) {
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
          if (iVar6 < 0x14) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,0,1);
          }
          else if (iVar6 < 0x28) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,1,1);
          }
          else if (iVar6 < 0x3c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,2,1);
          }
          else if (iVar6 < 0x50) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,3,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,4,1);
          }
        }
        else {
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
          if (iVar6 < 0x21) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,5,1);
          }
          else if (iVar6 < 0x42) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,6,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCVar2->base,7,1);
          }
        }
      }
      else {
        afStack_a8[2] =
             (this_ptr->base).base.base.location.position.x - (pCVar5->base).location.position.x;
        afStack_a8[3] =
             (this_ptr->base).base.base.location.position.y - (pCVar5->base).location.position.y;
        fStack_98 = (this_ptr->base).base.base.location.position.z -
                    (pCVar5->base).location.position.z;
        fStack_64 = afStack_a8[2];
        afStack_84[(uint)bVar10 * -2 + 9] = afStack_a8[(uint)bVar10 * -2 + 3];
        afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        if ((_DAT_005de5c4 <
             SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60)) &&
           (((iStack_28 == 5 || (iStack_28 == 6)) || (iStack_28 == 7)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,8,1);
        }
        max_distance = 0.17453292;
        fVar12 = 1.5;
        CStack_190.z = _DAT_005de5b8 + (float)_DAT_005bbc4c;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_190.x = 0.0;
        pCVar11 = &CStack_190;
        CStack_190.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        fStack_30 = CStack_190.z;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar11,
                           fVar12,max_distance);
        pCStack_20 = &(this_ptr->base).base.model.base;
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
        }
        else {
          pCVar1 = &(this_ptr->base).base.base.location;
          if (iVar6 < 1) {
            iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_e8 = *(float *)(iVar6 + 0x20) - (pCVar1->position).x;
            afStack_e4[0] =
                 *(float *)(iVar6 + 0x24) - (this_ptr->base).base.base.location.position.y;
            afStack_e4[1] =
                 *(float *)(iVar6 + 0x28) - (this_ptr->base).base.base.location.position.z;
            afStack_1bc[2] = fStack_e8;
            afStack_1bc[(uint)bVar10 * -2 + 3] = afStack_e4[(uint)bVar10 * -2];
            afStack_1bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_1bc + 2);
            fVar12 = afStack_1bc[2] * afStack_1bc[2];
            uStack_184 = afStack_15c[2];
            afStack_180[(uint)bVar10 * -2] = afStack_15c[(uint)bVar10 * -2 + 3];
            afStack_180[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_15c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            fStack_38 = fStack_1ac * fStack_1ac + fVar12 + afStack_1bc[3] * afStack_1bc[3];
            fStack_18 = (float)(((int)fStack_38 >> 1) + _DAT_01d1a0a4);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_180[0] - (this_ptr->base).base.base.orient.vec.y);
            if (((ABS(fStack_14) < (float)_DAT_005bbc54) &&
                ((this_ptr->base).attack_cooldown <= 0.0)) && (fStack_18 <= _DAT_005de5b8)) {
              iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (iVar6 < 0x32) {
                iVar6 = 0xb;
              }
              else {
                iVar6 = 0xc;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar6,1);
              (this_ptr->base).attack_cooldown = 2.5;
            }
          }
          else {
            pCVar5 = (this_ptr->base).victim;
            fStack_88 = (pCVar5->base).location.position.x - (pCVar1->position).x;
            afStack_84[0] =
                 (pCVar5->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            afStack_84[1] =
                 (pCVar5->base).location.position.z - (this_ptr->base).base.base.location.position.z
            ;
            afStack_e4[2] = fStack_88;
            afStack_e4[(uint)bVar10 * -2 + 3] = afStack_84[(uint)bVar10 * -2];
            afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_e4 + 2);
            uStack_58 = afStack_84[2];
            afStack_84[(uint)bVar10 * -2 + 0xc] = afStack_84[(uint)bVar10 * -2 + 3];
            afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
                 afStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (fStack_54 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005bbc54) {
              iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (0.0 < (this_ptr->base).attack_cooldown) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
              }
              else {
                if (_DAT_005de5b8 < fStack_30) {
                  if (iVar6 < 0x32) {
                    iVar6 = 9;
                  }
                  else {
                    iVar6 = 10;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar6,1)
                  ;
                }
                (this_ptr->base).attack_cooldown = 2.5;
              }
            }
          }
        }
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_1fc);
      SStack_1fc.damage_amount = (this_ptr->base).attack_damage;
      SStack_1fc.attacker = (CDemonActor *)this_ptr;
      SStack_1fc.wielder = (CDemonActor *)this_ptr;
      damage_info = &SStack_1fc;
      fVar12 = 0.7;
      core_xform_cpp_transformVector3x4_FUN_00583260
                ((CVector3f *)&DAT_02cfd900,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 this_ptr->bone_indices[1],&CStack_94);
      pCVar11 = &CStack_c4;
      CStack_c4.x = CStack_94.x;
      *(uint *)((int)&CStack_c4 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_94 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,pCVar11,&CStack_f4);
      pCVar11 = &CStack_b8;
      CStack_b8.x = CStack_f4.x;
      *(uint *)((int)&CStack_b8 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_f4 + (uint)bVar10 * -8 + 4);
      pCVar8 = this_ptr;
      *(uint *)((int)&CStack_b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(&pCVar8->base,pCVar11,fVar12,damage_info);
      iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0(0x02CF5680,this_ptr->sfx_handle);
      if (iVar6 == 0) {
        uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"dog5.wav");
        this_ptr->sfx_handle = uVar9;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (&(this_ptr->base).base.model,0,&CStack_124);
        pCVar11 = &CStack_13c;
        CStack_13c.x = CStack_124.x;
        *(uint *)((int)&CStack_13c + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_124 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_13c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_124 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar11,&CStack_118);
        blood_type = BLOOD_TYPE_RED;
        CStack_148.x = CStack_118.x;
        *(uint *)((int)&CStack_148 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_118 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_148 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_118 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_148,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00463453_caseD_d;
  }
  EVar4 = (this_ptr->base).base.walk_state;
  if (EVar4 < 2) {
    if (EVar4 == WALK_STATE_WALKING) {
LAB_004629d9:
      iVar6 = 5;
    }
    else {
LAB_00462bcc:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar4 < WALK_STATE_NO_PATH) goto LAB_004629d9;
    if (EVar4 != WALK_STATE_NO_PATH) goto LAB_00462bcc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00463453_caseD_d:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar8 = (CZombieDog *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar8 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_10c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_108[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_108[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_ac = fStack_10c;
    afStack_a8[(uint)bVar10 * -2] = afStack_108[(uint)bVar10 * -2];
    afStack_a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pCVar11 = &(this_ptr->base).base.position_delta;
    fStack_160 = fStack_ac + pCVar11->x;
    afStack_15c[0] = afStack_a8[0] + (this_ptr->base).base.position_delta.y;
    afStack_15c[1] = afStack_a8[1] + (this_ptr->base).base.position_delta.z;
    fStack_130 = fStack_160;
    afStack_12c[(uint)bVar10 * -2] = afStack_15c[(uint)bVar10 * -2];
    afStack_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_15c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_d0 = fStack_130 + pCVar3->x;
    fStack_cc = afStack_12c[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_c8 = afStack_12c[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_16c.x = fStack_d0;
    *(float *)((int)&CStack_16c + (uint)bVar10 * -8 + 4) = afStack_e4[(uint)bVar10 * -2 + 6];
    *(float *)((int)&CStack_16c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar11->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar3->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_16c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
