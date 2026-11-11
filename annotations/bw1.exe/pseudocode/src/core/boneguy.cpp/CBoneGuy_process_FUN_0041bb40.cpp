// Name: core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40
// Address: 0041bb40
// Address Range: [[0041bb40, 0041c71b]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bb40(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bb40(CBoneGuy *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor *pCVar4;
  EWalkState EVar5;
  CCharacter *pCVar6;
  float fVar7;
  int iVar8;
  SBoneGuyBox *pSVar9;
  SMotion *pSVar10;
  int iVar11;
  CBoneGuy *pCVar12;
  uint uVar13;
  CPathMap *path_map;
  float *pfVar14;
  float *pfVar15;
  byte bVar16;
  float afStackY_19a4 [1480];
  CVector3f *pCVar17;
  SDamageInfo *damage_info;
  CBoundingBox3D *out_box;
  ulonglong in_stack_fffffd90;
  ulonglong uVar18;
  float in_stack_fffffd98;
  float fVar19;
  float fStack_260;
  SDamageInfo SStack_234;
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
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
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
  CBodyPart *pCStack_44;
  float afStack_40 [2];
  float fStack_38;
  SBoneGuyBox *pSStack_34;
  float *pfStack_30;
  CQuaternion4f *pCStack_2c;
  CQuaternion4f *pCStack_28;
  int iStack_24;
  CVector3f *pCStack_20;
  int iStack_1c;
  float fStack_14;
  
  bVar16 = 0;
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->death_event);
  if (iVar8 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_0041d540(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              (&(this_ptr->base).base.model.base,5,0.0);
  }
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) goto LAB_0041be0f;
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar19 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar19;
    if (fVar19 <= this_ptr->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041d760(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar19 = delta_time / _DAT_005fcc38 + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar19;
    if (fVar19 < 1.0) {
      iStack_24 = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      pSStack_34 = this_ptr->boxes;
      pfStack_30 = &this_ptr->recombine_interpolation;
      pCStack_28 = &this_ptr->boxes[0].dest_orient;
      pCStack_2c = &this_ptr->boxes[0].start_orient;
      pCStack_20 = &this_ptr->boxes[0].source_pos;
      do {
        pCVar17 = pCStack_20;
        pSVar9 = pSStack_34 + iStack_24;
        pCStack_44 = pSVar9->body_part;
        fStack_184 = (pSVar9->pos).x - pCStack_20->x;
        fStack_180 = (pSVar9->pos).y - pCStack_20->y;
        fStack_17c = (pSVar9->pos).z - pCStack_20->z;
        fStack_a0 = fStack_184;
        afStack_d8[(uint)bVar16 * -2 + 0xf] = afStack_1c4[(uint)bVar16 * -2 + 0x11];
        afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10] =
             afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x12];
        fStack_70 = fStack_a0 * *pfStack_30;
        fStack_6c = fStack_9c * *pfStack_30;
        fStack_68 = fStack_98 * *pfStack_30;
        fStack_64 = fStack_a0 * *pfStack_30;
        *(uint *)((int)&CStack_7c + ((uint)bVar16 * -2 + 6) * 4 + 4) =
             *(uint *)((int)&CStack_7c + ((uint)bVar16 * -2 + 3) * 4 + 4);
        *(uint *)((int)&CStack_7c + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 7) * 4 + 4) =
             *(uint *)((int)&CStack_7c + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 4) * 4 + 4);
        fStack_58 = pCVar17->x + fStack_64;
        fStack_54 = pCVar17->y + fStack_60;
        fStack_50 = pCVar17->z + fStack_5c;
        afStack_d8[2] = fStack_58;
        afStack_d8[(uint)bVar16 * -2 + 3] =
             *(float *)((int)&CStack_7c + ((uint)bVar16 * -2 + 9) * 4 + 4);
        afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             *(float *)((int)&CStack_7c + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 10) * 4 + 4);
        core_xform_cpp_slerpQuaternion_FUN_005b7940();
        uStack_1c8 = afStack_1c4[3];
        afStack_1c4[(uint)bVar16 * -2] = afStack_1c4[(uint)bVar16 * -2 + 4];
        afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5];
        (afStack_1c4 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
             (afStack_1c4 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1];
        core_xform_cpp_FUN_005b7c00();
        fStack_ac = fStack_b8;
        afStack_d8[(uint)bVar16 * -2 + 0xc] = afStack_d8[(uint)bVar16 * -2 + 9];
        afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
             afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
        fStack_ac = this_ptr->recombine_interpolation * (float)_DAT_005d4761 + fStack_ac;
        (pCStack_44->base).location.position.x = afStack_d8[2];
        (pCStack_44->base).location.position.y = afStack_d8[3];
        pUVar1 = &(pCStack_44->base).orient;
        (pCStack_44->base).location.position.z = fStack_c8;
        if (pUVar1 != (UOrientationVector *)(afStack_d8 + 0xb)) {
          (pUVar1->vec).x = fStack_ac;
          (pCStack_44->base).orient.vec.y = fStack_a8;
          (pCStack_44->base).orient.vec.z = fStack_a4;
        }
        if (&pCStack_44->physics_box != (CBox *)(afStack_d8 + 2)) {
          (pCStack_44->physics_box).position.x = afStack_d8[2];
          (pCStack_44->physics_box).position.y = afStack_d8[3];
          (pCStack_44->physics_box).position.z = fStack_c8;
        }
        pCVar17 = &(pCStack_44->physics_box).orientation;
        if (pCVar17 != (CVector3f *)(afStack_d8 + 0xb)) {
          pCVar17->x = fStack_ac;
          (pCStack_44->physics_box).orientation.y = fStack_a8;
          (pCStack_44->physics_box).orientation.z = fStack_a4;
        }
        iStack_24 = iStack_24 + 1;
        pCStack_28 = (CQuaternion4f *)((int)(pCStack_28 + 4) + 8);
        pCStack_2c = (CQuaternion4f *)((int)(pCStack_2c + 4) + 8);
        pCStack_20 = pCStack_20 + 6;
      } while (iStack_24 < this_ptr->box_count);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_FUN_00569ae0();
    pCVar12 = this_ptr;
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_FUN_0051b740();
        pCVar12->boxes[0].body_part = (CBodyPart *)0x0;
        iVar8 = iVar8 + 1;
        pCVar12 = (CBoneGuy *)((pCVar12->base).base.base.orient_matrix.m + 1);
      } while (iVar8 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    fVar19 = this_ptr->recombine_time * (float)_DAT_005d4749;
    (this_ptr->base).base.hit_points = 100.0;
    this_ptr->recombine_time = fVar19;
    if (fVar19 <= (float)_DAT_005d4751) {
      this_ptr->recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_40[0] = delta_time * (this_ptr->base).speed;
  pCVar2 = &(this_ptr->base).base.model;
  while (out_box = (CBoundingBox3D *)in_stack_fffffd90, 0.0 < afStack_40[0]) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_00524270(&pCVar2->base,afStack_40);
    if (iVar8 == 100) {
      pCVar4 = this_ptr->pickup_target;
      if (pCVar4 != (CDemonActor *)0x0) {
        this_ptr->pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_FUN_004325b0(this_ptr,1,pCVar4,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar8);
    }
  }
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr);
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar2->base);
  iVar8 = pSVar10->state_index;
  iStack_1c = iVar8;
  iVar11 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) {
    switch(iVar8) {
    case 0:
      iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
      if (iVar8 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
        }
      }
      else {
        iVar8 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_0041c9a0(this_ptr,delta_time);
        if (iVar8 == 0) {
          fStack_38 = 0x40000000;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            fStack_38 = 0x40400000;
          }
          uVar18._0_4_ = 0x3f000000;
          uVar18._4_4_ = 0.17453292;
          uStack_154 = 0;
          fStack_14c = fStack_38;
          uStack_150 = 0;
          pCVar6 = (this_ptr->base).victim;
          path_map = (*((pCVar6->base).vtable._ub)->getPathMap)(&pCVar6->base);
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             &(((this_ptr->base).victim)->base).location.position,path_map,
                             (CVector3f *)uVar18,SUB84(uVar18,4),in_stack_fffffd98);
          pCVar2 = &(this_ptr->base).base.model;
          if (iVar8 < 0) {
            engine_console_cpp_FUN_00445430();
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
          }
          else {
            pCVar6 = (this_ptr->base).victim;
            fVar19 = (this_ptr->base).base.base.location.position.x -
                     (pCVar6->base).location.position.x;
            fVar7 = (this_ptr->base).base.base.location.position.z -
                    (pCVar6->base).location.position.z;
            if ((SQRT(fVar7 * fVar7 + fVar19 * fVar19) <= fStack_38 + (float)_DAT_005d4749) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                fVar19 = 2.8026e-45;
              }
              else {
                fVar19 = 8.40779e-45;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&pCVar2->base,(int)fVar19,1);
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
      fVar19 = 0.4;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28);
      uStack_dc = uStack_148;
      afStack_d8[(uint)bVar16 * -2] = afStack_144[(uint)bVar16 * -2];
      afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_144[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr);
      pCVar17 = &CStack_f4;
      CStack_f4.x = fStack_118;
      *(float *)((int)&CStack_f4 + (uint)bVar16 * -8 + 4) = afStack_114[(uint)bVar16 * -2];
      pCVar12 = this_ptr;
      *(float *)((int)&CStack_f4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_114[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar12->base,pCVar17,fVar19,damage_info)
      ;
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 6:
      pCVar4 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (pCVar4 != (CDemonActor *)0x0) {
        (*((pCVar4->vtable)._ub)->getBoundingBox)(pCVar4,out_box);
        pfVar14 = afStack_1e0;
        pfVar15 = &fStack_1f8;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar15 = *pfVar14;
          pfVar14 = pfVar14 + (uint)bVar16 * -2 + 1;
          pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
        }
        fStack_178 = fStack_1f8 + fStack_1ec;
        fStack_174 = fStack_1f4 + fStack_1e8;
        fStack_170 = fStack_1f0 + fStack_1e4;
        fStack_160 = fStack_1f8 + fStack_1ec;
        afStack_1c4[(uint)bVar16 * -2 + 0x1a] = afStack_1c4[(uint)bVar16 * -2 + 0x14];
        afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1b] =
             afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x15];
        fStack_94 = fStack_160 * _DAT_005d4759;
        fStack_90 = fStack_15c * _DAT_005d4759;
        fStack_8c = fStack_158 * _DAT_005d4759;
        CStack_7c.x = fStack_160 * _DAT_005d4759;
        *(float *)((int)&CStack_7c + (uint)bVar16 * -8 + 4) = afStack_d8[(uint)bVar16 * -2 + 0x12];
        *(float *)((int)&CStack_7c + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 1) * 4 + 4) =
             afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
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
        afStack_144[(uint)bVar16 * -2 + 3] = afStack_1c4[(uint)bVar16 * -2 + 0x17];
        afStack_144[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x18];
        if (&CStack_e8 != (CVector3f *)(afStack_144 + 2)) {
          CStack_e8.x = CStack_13c.x;
          CStack_e8.y = CStack_13c.y;
          CStack_e8.z = CStack_13c.z;
        }
        core_actor_cpp_FUN_00408b40();
        CStack_10c.x = fStack_1a8;
        afStack_114[(uint)bVar16 * -2 + 3] = afStack_1c4[(uint)bVar16 * -2 + 8];
        afStack_114[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 9];
        if (&CStack_88 != (CVector3f *)(afStack_114 + 2)) {
          CStack_88.x = CStack_10c.x;
          CStack_88.y = CStack_10c.y;
          CStack_88.z = CStack_10c.z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_234);
        SStack_234.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(15.0,25.0);
        SStack_234.attacker = (this_ptr->base).base.carry_hands[1].carry_actor;
        SStack_234.wielder = (CDemonActor *)this_ptr;
        fStack_14 = SStack_234.damage_amount;
        core_enemy_cpp_CEnemy_testAttackLine_FUN_004a0810
                  (&this_ptr->base,&CStack_e8,&CStack_88,&SStack_234);
      }
    }
  }
  else {
    EVar5 = (this_ptr->base).base.walk_state;
    if (EVar5 < 2) {
      if (EVar5 == WALK_STATE_WALKING) {
LAB_0041bfb6:
        iVar8 = 1;
      }
      else {
LAB_0041c243:
        iVar8 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar8,1);
    }
    else {
      if (EVar5 < WALK_STATE_NO_PATH) goto LAB_0041bfb6;
      if (EVar5 != WALK_STATE_NO_PATH) goto LAB_0041c243;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar2->base,0,1);
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
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if (iVar8 != 0) {
    pCVar6 = (this_ptr->base).victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar12 = (CBoneGuy *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar12 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    core_charactr_cpp_FUN_0042d700();
    fStack_190 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_18c = (this_ptr->base).base.velocity.y * delta_time;
    fStack_188 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_19c = fStack_190;
    afStack_1c4[(uint)bVar16 * -2 + 0xb] = afStack_1c4[(uint)bVar16 * -2 + 0xe];
    afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xc] =
         afStack_1c4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xf];
    pCVar17 = &(this_ptr->base).base.position_delta;
    fStack_100 = fStack_19c + pCVar17->x;
    fStack_fc = fStack_198 + (this_ptr->base).base.position_delta.y;
    fStack_f8 = fStack_194 + (this_ptr->base).base.position_delta.z;
    fStack_c4 = fStack_100;
    afStack_d8[(uint)bVar16 * -2 + 6] = afStack_114[(uint)bVar16 * -2 + 6];
    afStack_d8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
         afStack_114[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_130 = fStack_c4 + pCVar3->x;
    fStack_12c = fStack_c0 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_128 = fStack_bc + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_124.x = fStack_130;
    *(float *)((int)&CStack_124 + (uint)bVar16 * -8 + 4) = afStack_144[(uint)bVar16 * -2 + 6];
    *(float *)((int)&CStack_124 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_144[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar17->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar3->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_124);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if ((iStack_1c == 1) &&
     (iVar8 = sound_sndmain_cpp_FUN_00574010
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y), iVar8 != 0)) {
    iVar8 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
    if (iVar8 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    fVar19 = 2.8026e-45;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
    sound_sndmain_cpp_FUN_00572a50((double)fStack_14,(int)fVar19);
    uVar13 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar13;
    fStack_260 = 6.038918e-39;
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return;
  }
LAB_0041be0f:
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  return;
}
