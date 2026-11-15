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
  CGame *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  CShadow *pCVar8;
  EDeathState EVar9;
  CSkeleton *pCVar10;
  CPathMap *path_map;
  int iVar11;
  CDeformableModelInstance *pCVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  float afStackY_121c [974];
  CVector3f *pCVar19;
  uint uVar20;
  SDamageInfo *pSVar21;
  CBoundingBox3D *out_box;
  CShadow *in_stack_fffffd3c;
  float fVar22;
  float fVar23;
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
  CVector3f CStack_1f8;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  CVector3f CStack_1e0;
  float fStack_1d4;
  float afStack_1d0 [4];
  float fStack_1c0;
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3f CStack_1a4;
  CVector3f CStack_198;
  float fStack_18c;
  float afStack_188 [4];
  float fStack_178;
  uint uStack_174;
  uint uStack_170;
  float fStack_16c;
  float fStack_168;
  float afStack_164 [2];
  CVector3f CStack_15c;
  CVector3f CStack_150;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [4];
  float fStack_f4;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  CVector3f CStack_cc;
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
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [4];
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
  
  bVar15 = 0;
  pCVar12 = &(this_ptr->base).base.model;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar12->base);
  fStack_28 = (this_ptr->base).base.model.base.current_frame_number;
  iVar11 = pSVar6->state_index;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar12->base);
  fStack_1c = (float)pSVar6->frame_count;
  core_charactr_cpp_CCharacter_processSmoking_FUN_00434790((CCharacter *)this_ptr,delta_time);
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
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
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&(this_ptr->base).base.model.base,afStack_40 + 3);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar7);
  }
  fVar22 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * fVar22);
  if (this_ptr->type == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005f15e5;
  }
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  pCVar5 = g_CGamePtr;
  if (iVar7 != 0) {
    EVar1 = (this_ptr->base).base.walk_state;
    pCVar12 = &(this_ptr->base).base.model;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar7 = 5;
        iVar11 = 1;
      }
      else {
LAB_0055e58a:
        iVar11 = 1;
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar7,iVar11);
    }
    else if (EVar1 < WALK_STATE_NO_PATH) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,0xb,1);
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      if (iVar11 != 0) {
        iVar11 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
        if (iVar11 == 0) {
          iVar11 = this_ptr->bone_indices[5];
        }
        else {
          iVar11 = this_ptr->bone_indices[4];
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (&(this_ptr->base).base.model,iVar11,&CStack_15c);
        fVar22 = 0.1;
        CStack_21c.x = CStack_15c.x;
        *(uint *)((int)&CStack_21c + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_15c + (uint)bVar15 * -8 + 4);
        *(uint *)((int)&CStack_21c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_15c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                  ((CDemonActor *)this_ptr,&CStack_21c,fVar22);
      }
    }
    else {
      if (EVar1 != WALK_STATE_NO_PATH) goto LAB_0055e58a;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,0,1);
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
  switch(iVar11) {
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
    iVar11 = core_actor_cpp_randomChance_FUN_0040cd00(0.2);
    if (iVar11 != 0) {
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
      if (iVar11 == 0) {
        iVar11 = this_ptr->bone_indices[5];
      }
      else {
        iVar11 = this_ptr->bone_indices[4];
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (&(this_ptr->base).base.model,iVar11,&CStack_60);
      fVar22 = 0.1;
      CStack_150.x = CStack_60.x;
      *(uint *)((int)&CStack_150 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_60 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_150 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_60 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                ((CDemonActor *)this_ptr,&CStack_150,fVar22);
    }
    if (this_ptr->walk_target != 0) {
      fVar22 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar22;
      if (0.0 < fVar22) {
        core_charactr_cpp_FUN_00431cc0(this_ptr,this_ptr->walk_target);
        uVar4 = this_ptr->walk_status;
        if (uVar4 == 0) {
LAB_0055f251:
          fVar22 = 1.4013e-45;
          iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&(this_ptr->base).base.model.base,iVar11,(int)fVar22);
          this_ptr->walk_target = 0;
        }
        else {
          pCVar12 = &(this_ptr->base).base.model;
          if (uVar4 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,5,1);
          }
          else {
            if (uVar4 != 2) goto LAB_0055f251;
            fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020
                                  (&pCVar12->base);
            if ((float)_DAT_005f161d < fStack_14) {
              this_ptr->attack_loop_count = this_ptr->attack_loop_count + 1;
            }
            if (2 < this_ptr->attack_loop_count) {
              pCVar12 = &(this_ptr->base).base.model;
              fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020
                                    (&pCVar12->base);
              if ((float)_DAT_005f1625 < fStack_14) {
                fVar22 = 1.4013e-45;
                iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&pCVar12->base,iVar11 + 0xb,(int)fVar22);
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
    pCVar12 = &(this_ptr->base).base.model;
    if (pCVar2 == (CCharacter *)0x0) {
      fVar22 = 1.4013e-45;
      in_stack_fffffd3c = (CShadow *)core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&pCVar12->base,(int)in_stack_fffffd3c,(int)fVar22);
    }
    else {
      fStack_48 = (pCVar2->base).location.position.x -
                  (this_ptr->base).base.base.location.position.x;
      fStack_44 = (pCVar2->base).location.position.y -
                  (this_ptr->base).base.base.location.position.y;
      afStack_40[0] =
           (pCVar2->base).location.position.z - (this_ptr->base).base.base.location.position.z;
      afStack_104[2] = fStack_48;
      afStack_104[(uint)bVar15 * -2 + 3] = afStack_40[(uint)bVar15 * -2 + -1];
      afStack_104[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_40[(uint)bVar15 * -2 + (uint)bVar15 * -2];
      fStack_20 = SQRT(fStack_f4 * fStack_f4 +
                       afStack_104[2] * afStack_104[2] + afStack_104[3] * afStack_104[3]);
      if ((this_ptr->base).guard_distance < fStack_20) {
        fVar22 = 1.4013e-45;
        (this_ptr->base).victim = (CCharacter *)0x0;
        in_stack_fffffd3c = (CShadow *)core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&pCVar12->base,(int)in_stack_fffffd3c,(int)fVar22);
      }
      else if ((((fStack_20 <= _DAT_0060518c + _DAT_005f162d) || (_DAT_0060518c + 1.0 <= fStack_20))
               || (this_ptr->is_shadow_beast != 1)) ||
              (iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3), iVar11 == 1)) {
        fStack_16c = 0x40400000;
        fStack_30 = 0x40400000;
        pCVar2 = (this_ptr->base).victim;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        fVar22 = 0.17453292;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        in_stack_fffffd3c = (CShadow *)0x3f000000;
        uStack_174 = 0;
        uStack_170 = 0;
        path_map = (*((pCVar2->base).vtable._ub)->getPathMap)(&pCVar2->base);
        iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                           ((CCharacter *)this_ptr,&(pCVar2->base).location.position,path_map,
                            (CVector3f *)in_stack_fffffd3c,fVar22,in_stack_fffffd44);
        pCVar8 = (CShadow *)&(this_ptr->base).base.model;
        if (iVar11 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          fVar22 = 1.4013e-45;
          iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCVar8,iVar11,(int)fVar22);
          in_stack_fffffd3c = pCVar8;
        }
        else if ((0 < iVar11) && ((this_ptr->base).attack_cooldown <= 0.0)) {
          if (this_ptr->is_shadow_beast == 1) {
            fVar23 = 8.40779e-45;
            fVar22 = 1.4013e-45;
          }
          else {
            fVar22 = 1.4013e-45;
            iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            fVar23 = (float)(iVar11 + 6);
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)pCVar8,(int)fVar23,(int)fVar22);
          in_stack_fffffd3c = (CShadow *)0x55f02e;
          iVar11 = core_charactr_cpp_FUN_00435380();
          this_ptr->walk_target = iVar11;
          if (iVar11 != 0) {
            in_stack_fffffd3c = (CShadow *)0x55f050;
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(4.0,12.0);
            this_ptr->walk_timeout = fStack_14;
          }
          iVar11 = core_actor_cpp_randomChance_FUN_0040cd00(0.8);
          if (iVar11 != 0) {
            core_shadow_cpp_FUN_0055f4a0();
          }
        }
        fVar22 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar22;
        if ((fVar22 < 0.0) && (iVar11 = core_actor_cpp_randomChance_FUN_0040cd00(0.5), iVar11 != 0))
        {
          core_shadow_cpp_FUN_0055f450();
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,7,1);
        in_stack_fffffd3c = this_ptr;
        iVar11 = core_charactr_cpp_FUN_00435380();
        this_ptr->walk_target = iVar11;
        if (iVar11 != 0) {
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
      pSVar21 = (SDamageInfo *)&stack0xfffffd30;
      fVar22 = 1.0;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                ((CVector3f *)&DAT_02c8af28,
                 (CMatrix3x4f *)
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices
                 [this_ptr->bone_indices[2]].m,&CStack_1bc);
      pCVar19 = &CStack_84;
      CStack_84.x = CStack_1bc.x;
      *(uint *)((int)&CStack_84 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_1bc + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_84 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_1bc + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar19,&CStack_144);
      pCVar19 = &CStack_1b0;
      CStack_1b0.x = CStack_144.x;
      *(uint *)((int)&CStack_1b0 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + 4);
      pCVar8 = this_ptr;
      *(uint *)((int)&CStack_1b0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar8->base,pCVar19,fVar22,pSVar21);
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar21 = (SDamageInfo *)&stack0xfffffd30;
      fVar22 = 1.0;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                ((CVector3f *)&DAT_02c8af28,
                 (CMatrix3x4f *)
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices
                 [this_ptr->bone_indices[1]].m,&CStack_1f8);
      pCVar19 = &CStack_cc;
      CStack_cc.x = CStack_1f8.x;
      *(uint *)((int)&CStack_cc + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_1f8 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_cc + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_1f8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,pCVar19,&CStack_1e0);
      CStack_c0.x = CStack_1e0.x;
      *(uint *)((int)&CStack_c0 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&this_ptr->base,&CStack_c0,fVar22,pSVar21)
      ;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      pSVar21 = (SDamageInfo *)&stack0xfffffd30;
      fVar22 = 1.0;
      core_xform_cpp_transformVector3x4_FUN_005b5080
                ((CVector3f *)&DAT_02c8af28,
                 (CMatrix3x4f *)
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices
                 [this_ptr->bone_indices[3]].m,&CStack_e4);
      CStack_f0.x = CStack_e4.x;
      *(uint *)((int)&CStack_f0 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_e4 + (uint)bVar15 * -8 + 4);
      *(uint *)((int)&CStack_f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_e4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                ((CDemonActor *)this_ptr,&CStack_f0,&CStack_1a4);
      pCVar19 = &CStack_234;
      CStack_234.x = CStack_1a4.x;
      *(uint *)((int)&CStack_234 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_1a4 + (uint)bVar15 * -8 + 4);
      pCVar8 = this_ptr;
      *(uint *)((int)&CStack_234 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_1a4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770(&pCVar8->base,pCVar19,fVar22,pSVar21);
      pCVar2 = (this_ptr->base).victim;
      if ((pCVar2 != (CCharacter *)0x0) &&
         (EVar9 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
         EVar9 != DEATH_STATE_ALIVE)) {
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
    fVar22 = (float)_DAT_005f15ed;
    this_ptr->is_opaque = 0;
    out_box = (CBoundingBox3D *)0x55e8bf;
    dVar18 = round((double)(((fStack_1c - fStack_28) * fVar22) / fStack_1c))
    ;
    this_ptr->fade_alpha = (int)ROUND(dVar18);
    fVar16 = (float10)pCVar5->delta_time_float * (float10)_DAT_005f15f5 +
             (float10)this_ptr->eye_glow_phase;
    this_ptr->eye_glow_phase = (float)fVar16;
    fVar17 = (float10)fsin(fVar16);
    fVar16 = (float10)fcos(fVar16);
    fStack_2c = (float)fVar17;
    fStack_18 = (float)fVar16;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    puVar13 = (uint *)&stack0xfffffd6c;
    puVar14 = &stack0xfffffdb4;
    for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    fVar22 = (fStack_238 - fStack_244) * fStack_18;
    fVar23 = (fStack_240 - fStack_24c) * fStack_2c * (float)_DAT_005f15fd;
    fStack_18c = fStack_24c + fStack_240;
    afStack_188[0] = fStack_248 + fStack_23c;
    afStack_188[1] = fStack_244 + fStack_238;
    fStack_90 = fStack_24c + fStack_240;
    afStack_b0[(uint)bVar15 * -2 + 9] = afStack_188[(uint)bVar15 * -2];
    afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         afStack_188[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    CStack_114.x = fVar23;
    CStack_114.z = fVar22 * (float)_DAT_005f15fd;
    fStack_120 = fStack_90 * _DAT_005f1605;
    afStack_11c[0] = fStack_8c * _DAT_005f1605;
    afStack_11c[1] = fStack_88 * _DAT_005f1605;
    fStack_168 = fStack_90 * _DAT_005f1605;
    afStack_164[(uint)bVar15 * -2] = afStack_11c[(uint)bVar15 * -2];
    afStack_164[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_11c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    CStack_114.y = afStack_164[0];
    fStack_138 = fVar23 + (this_ptr->base).base.base.location.position.x;
    afStack_134[0] = afStack_164[0] + (this_ptr->base).base.base.location.position.y;
    afStack_134[1] = CStack_114.z + (this_ptr->base).base.base.location.position.z;
    CStack_d8.x = fStack_138;
    *(float *)((int)&CStack_d8 + (uint)bVar15 * -8 + 4) = afStack_134[(uint)bVar15 * -2];
    *(float *)((int)&CStack_d8 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 1) * 4 + 4) =
         afStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    if (&CStack_114 != &CStack_d8) {
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
    pCVar12 = &(this_ptr->base).base.model;
    this_ptr->corona_added = 1;
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar12);
    fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020(&pCVar12->base)
    ;
    fVar16 = (float10)_DAT_005f160d;
    pow((float10)fStack_14 * (float10)_DAT_005f1609,fVar16);
    fVar17 = pow((float10)_DAT_005f1615,fVar16);
    this_ptr->fade_scale = (float)((float10)1 + fVar16 / fVar17);
    iVar11 = 0;
    if (0 < pCVar10->bone_count) {
      do {
        iVar11 = iVar11 + 1;
        pCVar12->rest_bone_scales[0] = this_ptr->fade_scale;
        pCVar12 = (CDeformableModelInstance *)&(pCVar12->base).current_motion_index;
      } while (iVar11 < pCVar10->bone_count);
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
    iVar11 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0(&this_ptr->base,delta_time);
    pCVar12 = &(this_ptr->base).base.model;
    if (iVar11 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,5,1);
      break;
    }
    if (this_ptr->walk_target != 0) {
      fVar22 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar22;
      if (0.0 < fVar22) {
        core_charactr_cpp_FUN_00431cc0
                  (this_ptr,this_ptr->walk_target,0x3f800000,0x3f800000,&this_ptr->walk_status);
        uVar4 = this_ptr->walk_status;
        if (uVar4 == 0) {
LAB_0055ed64:
          this_ptr->walk_target = 0;
        }
        else {
          if (uVar4 < 2) {
            iVar7 = 1;
            iVar11 = 5;
          }
          else {
            if (uVar4 != 2) goto LAB_0055ed64;
            iVar7 = 1;
            iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            iVar11 = iVar11 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar12->base,iVar11,iVar7);
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
        afStack_b0[(uint)bVar15 * -2] = afStack_104[(uint)bVar15 * -2];
        afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_104[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        fStack_24 = SQRT(afStack_b0[1] * afStack_b0[1] +
                         fStack_b4 * fStack_b4 + afStack_b0[0] * afStack_b0[0]);
        if (((this_ptr->base).guard_distance < fStack_24) || ((float)_DAT_005f1635 < fStack_24)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          break;
        }
      }
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        pCVar12 = &(this_ptr->base).base.model;
        fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00525020
                              (&pCVar12->base);
        if ((float)_DAT_005f1625 < fStack_14) {
          fVar22 = 1.4013e-45;
          iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (&pCVar12->base,iVar11,(int)fVar22);
        }
      }
      else {
        iVar11 = core_actor_cpp_randomChance_FUN_0040cd00(0.4);
        if (iVar11 != 0) {
          core_shadow_cpp_FUN_0055f450();
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  (&(this_ptr->base).base.model.base,5,1);
      }
    }
    break;
  case 0x16:
    fVar22 = (float)_DAT_005f15ed;
    this_ptr->is_opaque = 0;
    uVar20 = 0x55e86d;
    pCVar8 = this_ptr;
    dVar18 = round((double)((fStack_28 * fVar22) / fStack_1c));
    this_ptr->fade_alpha = (int)ROUND(dVar18);
    core_shadow_cpp_FUN_0055f5e0(uVar20,pCVar8);
  }
LAB_0055e060:
  fVar22 = (this_ptr->base).attack_cooldown;
  (this_ptr->base).base.collision_cylinder_radius = 2.0;
  if (0.0 < fVar22) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     (&(this_ptr->base).base.model.base);
  iVar11 = pSVar6->state_index;
  if (((((iVar11 != 0x11) && (iVar11 != 0)) && (iVar11 != 1)) &&
      (((iVar11 != 2 && (iVar11 != 3)) && (iVar11 != 4)))) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar2 = (this_ptr->base).victim;
    if ((pCVar2 != (CCharacter *)0x0) &&
       (pCVar8 = (CShadow *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
       pCVar8 == this_ptr)) {
      in_stack_fffffd3c = (CShadow *)(this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffd3c);
    }
    core_charactr_cpp_FUN_0042d700();
    fStack_1d4 = (this_ptr->base).base.velocity.x * delta_time;
    afStack_1d0[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_1d0[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_9c = fStack_1d4;
    afStack_b0[(uint)bVar15 * -2 + 6] = afStack_1d0[(uint)bVar15 * -2];
    afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
         afStack_1d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    afStack_74[2] = fStack_9c + (this_ptr->base).base.model.accumulated_root_motion.x;
    afStack_74[3] = fStack_98 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_64 = fStack_94 + (this_ptr->base).base.model.accumulated_root_motion.z;
    fStack_228 = afStack_74[2];
    afStack_224[(uint)bVar15 * -2] = afStack_74[(uint)bVar15 * -2 + 3];
    afStack_224[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_74[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    fStack_210 = fStack_228 + (this_ptr->base).base.position_delta.x;
    afStack_20c[0] = afStack_224[0] + (this_ptr->base).base.position_delta.y;
    afStack_20c[1] = afStack_224[1] + (this_ptr->base).base.position_delta.z;
    CStack_54.x = fStack_210;
    *(float *)((int)&CStack_54 + (uint)bVar15 * -8 + 4) = afStack_20c[(uint)bVar15 * -2];
    *(float *)((int)&CStack_54 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_20c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042d750((CCharacter *)this_ptr,&CStack_54);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if ((0.0 <= this_ptr->periodic_timer) &&
     (fVar22 = this_ptr->periodic_timer - delta_time, this_ptr->periodic_timer = fVar22,
     fVar22 <= 0.0)) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(1.0,2.0);
    pCVar3 = (this_ptr->base).base.base.vtable._ub;
    this_ptr->periodic_timer = fStack_14;
    (*pCVar3->getBoundingBox)((CDemonActor *)this_ptr,(CBoundingBox3D *)in_stack_fffffd3c);
    puVar13 = (uint *)&stack0xfffffd84;
    puVar14 = &stack0xfffffd9c;
    for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
      puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
    }
    afStack_1d0[2] = fStack_264 + fStack_258;
    afStack_1d0[3] = fStack_260 + fStack_254;
    fStack_1c0 = fStack_25c + fStack_250;
    fStack_78 = fStack_264 + fStack_258;
    afStack_74[(uint)bVar15 * -2] = afStack_1d0[(uint)bVar15 * -2 + 3];
    afStack_74[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_1d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    pCVar19 = &CStack_198;
    afStack_b0[2] = fStack_78 * _DAT_005f1605;
    afStack_b0[3] = afStack_74[0] * _DAT_005f1605;
    fStack_a0 = afStack_74[1] * _DAT_005f1605;
    CStack_198.x = fStack_78 * _DAT_005f1605;
    *(float *)((int)&CStack_198 + (uint)bVar15 * -8 + 4) = afStack_b0[(uint)bVar15 * -2 + 3];
    *(float *)((int)&CStack_198 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,pCVar19,&CStack_12c);
    afStack_188[2] = CStack_12c.x;
    afStack_188[(uint)bVar15 * -2 + 3] = *(float *)((int)&CStack_12c + (uint)bVar15 * -8 + 4);
    afStack_188[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         *(float *)((int)&CStack_12c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    if (&fStack_1ec != afStack_188 + 2) {
      fStack_1ec = afStack_188[2];
      fStack_1e8 = afStack_188[3];
      fStack_1e4 = fStack_178;
    }
    CStack_204.x = (int)ROUND(fStack_1ec * _DAT_00605170);
    CStack_204.y = (int)ROUND(fStack_1e8 * _DAT_00605170);
    CStack_204.z = (int)ROUND(fStack_1e4 * _DAT_00605170);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
                                 (g_CDemonSetPtr,&CStack_204,(CVector3i *)0x0);
    if ((this_ptr->scared_by_light != 0) &&
       (_DAT_006051a0 * (float)_DAT_005f163d <= (float)(int)fStack_14)) {
      fVar22 = 1.4013e-45;
      iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (&(this_ptr->base).base.model.base,iVar11,(int)fVar22);
      iVar11 = core_charactr_cpp_FUN_00435380();
      this_ptr->walk_target = iVar11;
      if (iVar11 != 0) {
        fVar22 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(3.0,6.0);
        this_ptr->walk_timeout = fVar22;
      }
      this_ptr->periodic_timer = this_ptr->periodic_timer + _DAT_005f1645;
      return;
    }
  }
  return;
}
