// Name: core_shadow.cpp_CShadow_process_FUN_0055de50
// Address: 0055de50
// Address Range: [[0055de50, 0055f3c2]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_process_FUN_0055de50(CShadow *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_process_FUN_0055de50(CShadow *this_ptr,float delta_time)

{
  EWalkState EVar1;
  CCharacter *pCVar2;
  CDemonActor_vtable *pCVar3;
  uint uVar4;
  SMotion *pSVar5;
  int iVar6;
  CShadow *pCVar7;
  EDeathState EVar8;
  CSkeleton *pCVar9;
  CPathMap *path_map;
  int iVar10;
  CDeformableModelInstance *pCVar11;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  ulonglong uVar17;
  float afStackY_121c [974];
  float *pfVar18;
  CVector3f *pCVar19;
  SDamageInfo *pSVar20;
  CBoundingBox3D *in_stack_fffffd30;
  CShadow *in_stack_fffffd3c;
  float fVar21;
  float fVar22;
  float in_stack_fffffd44;
  EDamageType EStack_2a0;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  CVector3f CStack_234;
  float fStack_228;
  float afStack_224 [2];
  CVector3f CStack_21c;
  float fStack_210;
  float afStack_20c [2];
  CVector3i CStack_204;
  uint uStack_1f8;
  float afStack_1f4 [4];
  float fStack_1e4;
  float fStack_1e0;
  float afStack_1dc [4];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint uStack_1bc;
  CVector3f CStack_1b0;
  float fStack_1a4;
  float afStack_1a0 [5];
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  uint uStack_174;
  uint uStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  CVector3f CStack_150;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  float fStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  float afStack_f0 [3];
  uint uStack_e4;
  CVector3f CStack_d8;
  float afStack_cc [3];
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [3];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar14 = 0;
  pCVar11 = &(this_ptr->base).base.model;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar11->base);
  fStack_28 = (this_ptr->base).base.model.base.current_frame_number;
  iVar10 = pSVar5->state_index;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar11->base);
  fStack_1c = (float)pSVar5->frame_count;
  core_charactr_cpp_FUN_00434790(this_ptr,delta_time);
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[6]);
    return;
  }
  if ((this_ptr->type == 2) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - delta_time;
  }
  afStack_40[3] = delta_time * (this_ptr->base).speed * this_ptr->difficulty_speed_scale;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (0.0 < afStack_40[3]) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&(this_ptr->base).base.model.base,afStack_40 + 3);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar6);
  }
  fVar21 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar21);
  if (this_ptr->type == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005f15e5;
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 != 0) {
    EVar1 = (this_ptr->base).base.walk_state;
    pCVar11 = &(this_ptr->base).base.model;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar6 = 5;
        iVar10 = 1;
      }
      else {
LAB_0055e58a:
        iVar10 = 1;
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar6,iVar10);
    }
    else if (EVar1 < WALK_STATE_NO_PATH) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar11->base,0xb,1);
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      if (iVar10 != 0) {
        iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar10 == 0) {
          iVar10 = this_ptr->bone_indices[5];
        }
        else {
          iVar10 = this_ptr->bone_indices[4];
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (&(this_ptr->base).base.model,iVar10,&CStack_15c);
        fVar21 = 0.1;
        CStack_21c.x = CStack_15c.x;
        *(uint *)((int)&CStack_21c + (uint)bVar14 * -8 + 4) =
             *(uint *)((int)&CStack_15c + (uint)bVar14 * -8 + 4);
        *(uint *)((int)&CStack_21c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
             *(uint *)((int)&CStack_15c + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&CStack_21c,fVar21);
      }
    }
    else {
      if (EVar1 != WALK_STATE_NO_PATH) goto LAB_0055e58a;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar11->base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto LAB_0055e060;
  }
  switch(iVar10) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_0055f381_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.2);
    if (iVar10 != 0) {
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      if (iVar10 == 0) {
        iVar10 = this_ptr->bone_indices[5];
      }
      else {
        iVar10 = this_ptr->bone_indices[4];
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (&(this_ptr->base).base.model,iVar10,&CStack_60);
      fVar21 = 0.1;
      CStack_150.x = CStack_60.x;
      *(uint *)((int)&CStack_150 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)&CStack_60 + (uint)bVar14 * -8 + 4);
      *(uint *)((int)&CStack_150 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           *(uint *)((int)&CStack_60 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                ((CDemonActor *)this_ptr,&CStack_150,fVar21);
    }
    if (this_ptr->walk_target != 0) {
      fVar21 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar21;
      if (0.0 < fVar21) {
        core_charactr_cpp_FUN_00431cc0(this_ptr,this_ptr->walk_target);
        uVar4 = this_ptr->walk_status;
        if (uVar4 == 0) {
LAB_0055f251:
          fVar21 = 1.4013e-45;
          iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,iVar10,(int)fVar21);
          this_ptr->walk_target = 0;
        }
        else {
          pCVar11 = &(this_ptr->base).base.model;
          if (uVar4 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar11->base,5,1);
          }
          else {
            if (uVar4 != 2) goto LAB_0055f251;
            fStack_14 = core_motion_cpp_FUN_00525020(&pCVar11->base);
            if ((float)_DAT_005f161d < fStack_14) {
              this_ptr->attack_loop_count = this_ptr->attack_loop_count + 1;
            }
            if (2 < this_ptr->attack_loop_count) {
              pCVar11 = &(this_ptr->base).base.model;
              fStack_14 = core_motion_cpp_FUN_00525020(&pCVar11->base);
              if ((float)_DAT_005f1625 < fStack_14) {
                fVar21 = 1.4013e-45;
                iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&pCVar11->base,iVar10 + 0xb,(int)fVar21);
                this_ptr->attack_loop_count = 0;
              }
            }
          }
          if (this_ptr->walk_target != 0) break;
        }
      }
      else {
        this_ptr->walk_target = 0;
        this_ptr->walk_timeout = 0.0;
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar2 = (this_ptr->base).victim;
    pCVar11 = &(this_ptr->base).base.model;
    if (pCVar2 == (CCharacter *)0x0) {
      fVar21 = 1.4013e-45;
      in_stack_fffffd3c = (CShadow *)core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&pCVar11->base,(int)in_stack_fffffd3c,(int)fVar21);
    }
    else {
      fStack_48 = (pCVar2->base).location.position.x -
                  (this_ptr->base).base.base.location.position.x;
      fStack_44 = (pCVar2->base).location.position.y -
                  (this_ptr->base).base.base.location.position.y;
      afStack_40[0] =
           (pCVar2->base).location.position.z - (this_ptr->base).base.base.location.position.z;
      afStack_104[2] = fStack_48;
      afStack_104[(uint)bVar14 * -2 + 3] = afStack_40[(uint)bVar14 * -2 + -1];
      afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
           afStack_40[(uint)bVar14 * -2 + (uint)bVar14 * -2];
      fStack_20 = SQRT(fStack_f4 * fStack_f4 +
                       afStack_104[2] * afStack_104[2] + afStack_104[3] * afStack_104[3]);
      if ((this_ptr->base).guard_distance < fStack_20) {
        fVar21 = 1.4013e-45;
        (this_ptr->base).victim = (CCharacter *)0x0;
        in_stack_fffffd3c = (CShadow *)core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&pCVar11->base,(int)in_stack_fffffd3c,(int)fVar21);
      }
      else if ((((fStack_20 <= _DAT_0060518c + _DAT_005f162d) || (_DAT_0060518c + 1.0 <= fStack_20))
               || (this_ptr->is_shadow_beast != 1)) ||
              (iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3), iVar10 == 1)) {
        fStack_16c = 0x40400000;
        fStack_30 = 0x40400000;
        pCVar2 = (this_ptr->base).victim;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        fVar21 = 0.17453292;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        in_stack_fffffd3c = (CShadow *)0x3f000000;
        uStack_174 = 0;
        uStack_170 = 0;
        path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                           ((CCharacter *)this_ptr,&(pCVar2->base).location.position,path_map,
                            (CVector3f *)in_stack_fffffd3c,fVar21,in_stack_fffffd44);
        pCVar7 = (CShadow *)&(this_ptr->base).base.model;
        if (iVar10 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          fVar21 = 1.4013e-45;
          iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCVar7,iVar10,(int)fVar21);
          in_stack_fffffd3c = pCVar7;
        }
        else if ((0 < iVar10) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          if (this_ptr->is_shadow_beast == 1) {
            fVar22 = 8.40779e-45;
            fVar21 = 1.4013e-45;
          }
          else {
            fVar21 = 1.4013e-45;
            iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            fVar22 = (float)(iVar10 + 6);
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCVar7,(int)fVar22,(int)fVar21);
          in_stack_fffffd3c = (CShadow *)0x55f02e;
          iVar10 = core_charactr_cpp_FUN_00435380();
          this_ptr->walk_target = iVar10;
          if (iVar10 != 0) {
            in_stack_fffffd3c = (CShadow *)0x55f050;
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(4.0,12.0);
            this_ptr->walk_timeout = fStack_14;
          }
          iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.8);
          if (iVar10 != 0) {
            core_shadow_cpp_FUN_0055f4a0();
          }
        }
        fVar21 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar21;
        if ((fVar21 < 0.0) && (iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.5), iVar10 != 0))
        {
          core_shadow_cpp_FUN_0055f450();
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar11->base,7,1);
        in_stack_fffffd3c = this_ptr;
        iVar10 = core_charactr_cpp_FUN_00435380();
        this_ptr->walk_target = iVar10;
        if (iVar10 != 0) {
          in_stack_fffffd3c = (CShadow *)0x40800000;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(4.0,12.0);
          this_ptr->walk_timeout = fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    if (this_ptr->is_shadow_beast == 1) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010((SDamageInfo *)&stack0xfffffd30);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      EStack_2a0 = DAMAGE_TYPE_SHADOW;
      pSVar20 = (SDamageInfo *)&stack0xfffffd30;
      fVar21 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices
                 [this_ptr->bone_indices[2]].m);
      pfVar18 = afStack_b0 + 0xb;
      afStack_84[0] = (float)uStack_1bc;
      afStack_b0[(uint)bVar14 * -2 + 0xc] = afStack_1dc[(uint)bVar14 * -2 + 9];
      afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
           afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar18);
      pCVar19 = &CStack_1b0;
      CStack_1b0.x = fStack_144;
      *(float *)((int)&CStack_1b0 + (uint)bVar14 * -8 + 4) = afStack_140[(uint)bVar14 * -2];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_1b0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar7->base,pCVar19,fVar21,pSVar20);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar20 = (SDamageInfo *)&stack0xfffffd30;
      fVar21 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices
                 [this_ptr->bone_indices[1]].m);
      pfVar18 = afStack_104 + 0xe;
      afStack_cc[0] = (float)uStack_1f8;
      afStack_104[(uint)bVar14 * -2 + 0xf] = afStack_1f4[(uint)bVar14 * -2];
      afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
           afStack_1f4[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar18);
      CStack_c0.x = fStack_1e0;
      *(float *)((int)&CStack_c0 + (uint)bVar14 * -8 + 4) = afStack_1dc[(uint)bVar14 * -2];
      *(float *)((int)&CStack_c0 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&this_ptr->base,&CStack_c0,fVar21,pSVar20)
      ;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar20 = (SDamageInfo *)&stack0xfffffd30;
      fVar21 = 1.0;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices
                 [this_ptr->bone_indices[3]].m);
      afStack_f0[0] = (float)uStack_e4;
      afStack_104[(uint)bVar14 * -2 + 6] = afStack_104[(uint)bVar14 * -2 + 9];
      afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
           afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
      core_actor_cpp_FUN_00408b40(this_ptr,afStack_104 + 5);
      pCVar19 = &CStack_234;
      CStack_234.x = fStack_1a4;
      *(float *)((int)&CStack_234 + (uint)bVar14 * -8 + 4) = afStack_1a0[(uint)bVar14 * -2];
      pCVar7 = this_ptr;
      *(float *)((int)&CStack_234 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
           afStack_1a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar7->base,pCVar19,fVar21,pSVar20);
      pCVar2 = (this_ptr->base).victim;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (EVar8 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
         EVar8 != DEATH_STATE_ALIVE)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,10,1);
      }
    }
    core_shadow_cpp_FUN_0055f4a0();
    break;
  case 10:
    core_shadow_cpp_FUN_0055f590(this_ptr);
    break;
  case 0xf:
  case 0x10:
    fVar15 = (((float10)fStack_1c - (float10)fStack_28) * (float10)_DAT_005f15ed) /
             (float10)fStack_1c;
    this_ptr->is_opaque = 0;
    uVar17 = round();
    iVar10 = (int)uVar17;
    *(int *)(iVar10 + 0xc304) = (int)ROUND(fVar15);
    fVar15 = (float10)*(float *)((int)((ulonglong)uVar17 >> 0x20) + 0x294) * (float10)_DAT_005f15f5
             + (float10)*(float *)(iVar10 + 0xc2c8);
    *(float *)(iVar10 + 0xc2c8) = (float)fVar15;
    fVar16 = (float10)fsin(fVar15);
    fVar15 = (float10)fcos(fVar15);
    fStack_2c = (float)fVar16;
    fStack_18 = (float)fVar15;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,in_stack_fffffd30);
    puVar12 = (uint *)&stack0xfffffd6c;
    puVar13 = &stack0xfffffdb4;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
    fVar21 = (fStack_238 - fStack_244) * fStack_18;
    fVar22 = (fStack_240 - fStack_24c) * fStack_2c * (float)_DAT_005f15fd;
    fStack_18c = fStack_24c + fStack_240;
    fStack_188 = fStack_248 + fStack_23c;
    fStack_184 = fStack_244 + fStack_238;
    fStack_90 = fStack_24c + fStack_240;
    afStack_b0[(uint)bVar14 * -2 + 9] = afStack_1a0[(uint)bVar14 * -2 + 6];
    afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
         afStack_1a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    CStack_114.x = fVar22;
    CStack_114.z = fVar21 * (float)_DAT_005f15fd;
    fStack_120 = fStack_90 * _DAT_005f1605;
    fStack_11c = fStack_8c * _DAT_005f1605;
    fStack_118 = fStack_88 * _DAT_005f1605;
    fStack_168 = fStack_90 * _DAT_005f1605;
    afStack_164[(uint)bVar14 * -2] = afStack_140[(uint)bVar14 * -2 + 9];
    afStack_164[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
    CStack_114.y = afStack_164[0];
    afStack_140[2] = fVar22 + (this_ptr->base).base.base.location.position.x;
    afStack_140[3] = afStack_164[0] + (this_ptr->base).base.base.location.position.y;
    fStack_130 = CStack_114.z + (this_ptr->base).base.base.location.position.z;
    CStack_d8.x = afStack_140[2];
    afStack_104[(uint)bVar14 * -2 + 0xc] = afStack_140[(uint)bVar14 * -2 + 3];
    afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
         afStack_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    if (&CStack_114 != (CVector3f *)(afStack_104 + 0xb)) {
      CStack_114.x = CStack_d8.x;
      CStack_114.y = CStack_d8.y;
      CStack_114.z = CStack_d8.z;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970((CDemonGlobe *)0x269cbb0,&CStack_114);
    _DAT_0269cbec = 60000;
    DAT_0269cbcc = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0((CDemonGlobe *)0x269cbb0,6.0);
    _DAT_0269cbd0 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(g_CDemonSetPtr,(CDemonGlobe *)0x269cbb0);
    pCVar11 = &(this_ptr->base).base.model;
    this_ptr->corona_added = 1;
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar11);
    fStack_14 = core_motion_cpp_FUN_00525020(&pCVar11->base);
    fVar15 = (float10)_DAT_005f160d;
    pow();
    fVar16 = (float10)_DAT_005f1615;
    pow();
    this_ptr->fade_scale = (float)((float10)1 + fVar15 / fVar16);
    iVar10 = 0;
    if (0 < pCVar9->bone_count) {
      do {
        iVar10 = iVar10 + 1;
        pCVar11->rest_bone_scales[0] = this_ptr->fade_scale;
        pCVar11 = (CDeformableModelInstance *)&(pCVar11->base).current_motion_index;
      } while (iVar10 < pCVar9->bone_count);
    }
    break;
  case 0x11:
    this_ptr->fade_alpha = 0;
    this_ptr->fade_scale = 1.0;
    (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
    return;
  default:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
switchD_0055f381_caseD_0:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
    iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
    pCVar11 = &(this_ptr->base).base.model;
    if (iVar10 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar11->base,5,1);
      break;
    }
    if (this_ptr->walk_target != 0) {
      fVar21 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar21;
      if (0.0 < fVar21) {
        core_charactr_cpp_FUN_00431cc0
                  (this_ptr,this_ptr->walk_target,0x3f800000,0x3f800000,&this_ptr->walk_status);
        uVar4 = this_ptr->walk_status;
        if (uVar4 == 0) {
LAB_0055ed64:
          this_ptr->walk_target = 0;
        }
        else {
          if (uVar4 < 2) {
            iVar6 = 1;
            iVar10 = 5;
          }
          else {
            if (uVar4 != 2) goto LAB_0055ed64;
            iVar6 = 1;
            iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            iVar10 = iVar10 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar11->base,iVar10,iVar6);
          if (this_ptr->walk_target != 0) break;
        }
      }
      else {
        this_ptr->walk_target = 0;
        this_ptr->walk_timeout = 0.0;
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar2 = (this_ptr->base).victim;
    if (pCVar2 != (CCharacter *)0x0) {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_108 = (pCVar2->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        afStack_104[0] =
             (pCVar2->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_104[1] =
             (pCVar2->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        fStack_b4 = fStack_108;
        afStack_b0[(uint)bVar14 * -2] = afStack_104[(uint)bVar14 * -2];
        afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_104[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
        fStack_24 = SQRT(afStack_b0[1] * afStack_b0[1] +
                         fStack_b4 * fStack_b4 + afStack_b0[0] * afStack_b0[0]);
        if (((this_ptr->base).guard_distance < fStack_24) || ((float)_DAT_005f1635 < fStack_24)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          break;
        }
      }
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        pCVar11 = &(this_ptr->base).base.model;
        fStack_14 = core_motion_cpp_FUN_00525020(&pCVar11->base);
        if ((float)_DAT_005f1625 < fStack_14) {
          fVar21 = 1.4013e-45;
          iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar11->base,iVar10,(int)fVar21);
        }
      }
      else {
        iVar10 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
        if (iVar10 != 0) {
          core_shadow_cpp_FUN_0055f450();
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,5,1);
      }
    }
    break;
  case 0x16:
    fVar15 = ((float10)fStack_28 * (float10)_DAT_005f15ed) / (float10)fStack_1c;
    this_ptr->is_opaque = 0;
    iVar10 = round(this_ptr);
    *(int *)(iVar10 + 0xc304) = (int)ROUND(fVar15);
    core_shadow_cpp_FUN_0055f5e0();
  }
LAB_0055e060:
  fVar21 = (this_ptr->base).attack_cooldown;
  (this_ptr->base).base.collision_cylinder_radius = 2.0;
  if (0.0 < fVar21) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  iVar10 = pSVar5->state_index;
  if (((((iVar10 != 0x11) && (iVar10 != 0)) && (iVar10 != 1)) &&
      (((iVar10 != 2 && (iVar10 != 3)) && (iVar10 != 4)))) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar7 = (CShadow *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar7 == this_ptr)) {
      in_stack_fffffd3c = (CShadow *)(this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffd3c);
    }
    core_charactr_cpp_FUN_0042d700();
    afStack_1dc[2] = (this_ptr->base).base.velocity.x * delta_time;
    afStack_1dc[3] = (this_ptr->base).base.velocity.y * delta_time;
    fStack_1cc = (this_ptr->base).base.velocity.z * delta_time;
    fStack_9c = afStack_1dc[2];
    afStack_b0[(uint)bVar14 * -2 + 6] = afStack_1dc[(uint)bVar14 * -2 + 3];
    afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    fStack_6c = fStack_9c + (this_ptr->base).base.model.accumulated_root_motion.x;
    fStack_68 = fStack_98 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_64 = fStack_94 + (this_ptr->base).base.model.accumulated_root_motion.z;
    fStack_228 = fStack_6c;
    afStack_224[(uint)bVar14 * -2] = afStack_b0[(uint)bVar14 * -2 + 0x12];
    afStack_224[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
    fStack_210 = fStack_228 + (this_ptr->base).base.position_delta.x;
    afStack_20c[0] = afStack_224[0] + (this_ptr->base).base.position_delta.y;
    afStack_20c[1] = afStack_224[1] + (this_ptr->base).base.position_delta.z;
    CStack_54.x = fStack_210;
    *(float *)((int)&CStack_54 + (uint)bVar14 * -8 + 4) = afStack_20c[(uint)bVar14 * -2];
    *(float *)((int)&CStack_54 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8) =
         afStack_20c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_54);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if ((0.0 <= this_ptr->periodic_timer) &&
     (fVar21 = this_ptr->periodic_timer - delta_time, this_ptr->periodic_timer = fVar21,
     fVar21 <= 0.0)) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,2.0);
    pCVar3 = (this_ptr->base).base.base.vtable._ub;
    this_ptr->periodic_timer = fStack_14;
    (*pCVar3->getBoundingBox)((CDemonActor *)this_ptr,(CBoundingBox3D *)in_stack_fffffd3c);
    puVar12 = (uint *)&stack0xfffffd84;
    puVar13 = &stack0xfffffd9c;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
    fStack_1c8 = fStack_264 + fStack_258;
    fStack_1c4 = fStack_260 + fStack_254;
    fStack_1c0 = fStack_25c + fStack_250;
    fStack_78 = fStack_264 + fStack_258;
    afStack_b0[(uint)bVar14 * -2 + 0xf] = afStack_1dc[(uint)bVar14 * -2 + 6];
    afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
         afStack_1dc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    afStack_b0[2] = fStack_78 * _DAT_005f1605;
    afStack_b0[3] = fStack_74 * _DAT_005f1605;
    fStack_a0 = fStack_70 * _DAT_005f1605;
    afStack_1a0[2] = fStack_78 * _DAT_005f1605;
    afStack_1a0[(uint)bVar14 * -2 + 3] = afStack_b0[(uint)bVar14 * -2 + 3];
    afStack_1a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
         afStack_b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    core_actor_cpp_FUN_00408b40();
    fStack_180 = fStack_12c;
    afStack_1a0[(uint)bVar14 * -2 + 9] = afStack_140[(uint)bVar14 * -2 + 6];
    afStack_1a0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
         afStack_140[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
    if (afStack_1f4 + 2 != afStack_1a0 + 8) {
      afStack_1f4[2] = fStack_180;
      afStack_1f4[3] = fStack_17c;
      fStack_1e4 = fStack_178;
    }
    CStack_204.x = (int)ROUND(afStack_1f4[2] * _DAT_00605170);
    CStack_204.y = (int)ROUND(afStack_1f4[3] * _DAT_00605170);
    CStack_204.z = (int)ROUND(fStack_1e4 * _DAT_00605170);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                                 (g_CDemonSetPtr,&CStack_204,(CVector3i *)0x0);
    if ((this_ptr->scared_by_light != 0) &&
       (_DAT_006051a0 * (float)_DAT_005f163d <= (float)(int)fStack_14)) {
      fVar21 = 1.4013e-45;
      iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar10,(int)fVar21);
      iVar10 = core_charactr_cpp_FUN_00435380();
      this_ptr->walk_target = iVar10;
      if (iVar10 != 0) {
        fVar21 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(3.0,6.0);
        this_ptr->walk_timeout = fVar21;
      }
      this_ptr->periodic_timer = this_ptr->periodic_timer + _DAT_005f1645;
      return;
    }
  }
  return;
}
