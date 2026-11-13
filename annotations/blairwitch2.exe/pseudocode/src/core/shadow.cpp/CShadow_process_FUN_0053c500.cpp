// Name: core_shadow.cpp_CShadow_process_FUN_0053c500
// Address: 0053c500
// Address Range: [[0053c500, 0053df0f]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_process_FUN_0053c500(CShadow *this_ptr,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_process_FUN_0053c500(CShadow *this_ptr,float param_2)

{
  EWalkState EVar1;
  uint uVar2;
  CCharacter *pCVar3;
  CCharacter *pCVar4;
  float fVar5;
  int iVar6;
  CShadow *pCVar7;
  EDeathState EVar8;
  CSkeleton *pCVar9;
  CDemonActor *pCVar10;
  CPathMap *path_map;
  int iVar11;
  CCharacter *pCVar12;
  CLocation *target_pos;
  uint *puVar13;
  CDeformableModelInstance *pCVar14;
  uint *puVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  ulonglong uVar19;
  float afStackY_127c [974];
  CVector3f *pCVar20;
  int iVar21;
  SDamageInfo *pSVar22;
  CBoundingBox3D *out_box;
  ulonglong in_stack_fffffcd0;
  CShadow *in_stack_fffffcd8;
  float fVar23;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  uint uStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  uint uStack_264;
  uint uStack_260;
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
  uint uStack_228;
  float afStack_224 [5];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  CVector3f CStack_204;
  uint uStack_1f8;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint uStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  float afStack_1ac [2];
  CVector3i CStack_1a4;
  uint uStack_198;
  float afStack_194 [5];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  float afStack_12c [3];
  CVector3f CStack_120;
  uint uStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  float fStack_fc;
  float afStack_f8 [4];
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
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar16 = 0;
  pCVar14 = &(this_ptr->base).base.model;
  iVar6 = core_motion_cpp_FUN_005035c0(pCVar14);
  fStack_2c = (this_ptr->base).base.model.base.current_frame_number;
  iStack_1c = *(int *)(iVar6 + 0x24);
  iVar6 = core_motion_cpp_FUN_005035c0(pCVar14);
  fStack_20 = (float)*(int *)(iVar6 + 100);
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,param_2);
  iVar6 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)this_ptr,param_2)
  ;
  if (iVar6 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    return;
  }
  if ((this_ptr->type == 2) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - param_2;
  }
  fStack_24 = param_2 * (this_ptr->base).speed;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (out_box = (CBoundingBox3D *)in_stack_fffffcd0, 0.0 < fStack_24) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(this_ptr->base).base.model.base,&fStack_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar6);
  }
  fVar23 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,param_2 * fVar23);
  if (this_ptr->type == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005e6635;
  }
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0((CCharacter *)this_ptr,param_2);
  if (iVar6 != 0) {
    EVar1 = (this_ptr->base).base.walk_state;
    pCVar14 = &(this_ptr->base).base.model;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar21 = 5;
        iVar6 = 1;
      }
      else {
LAB_0053cbd1:
        fStack_14 = core_motion_cpp_FUN_00503e60(&(this_ptr->base).base.model.base);
        if (fStack_14 <= (float)_DAT_005e6675) goto LAB_0053c6de;
        iVar6 = 1;
        iVar21 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      }
LAB_0053c6d5:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar21,iVar6);
    }
    else if (EVar1 < WALK_STATE_NO_PATH) {
      fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
      if ((float)_DAT_005e6675 < fStack_14) {
        iVar6 = 1;
        iVar21 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
        iVar21 = iVar21 + 0xb;
        goto LAB_0053c6d5;
      }
    }
    else {
      if (EVar1 != WALK_STATE_NO_PATH) goto LAB_0053cbd1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar14->base,0,1);
      engine_console_cpp_CConsole_printf_FUN_00436710
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
LAB_0053c6de:
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto LAB_0053c710;
  }
  switch(iStack_1c) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_0053dec8_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (this_ptr->walk_target != 0) {
      fVar23 = this_ptr->walk_timeout - param_2;
      this_ptr->walk_timeout = fVar23;
      if (0.0 < fVar23) {
        core_charactr_cpp_FUN_00428260
                  (this_ptr,this_ptr->walk_target,0x3f800000,0x3f800000,&this_ptr->walk_status);
        uVar2 = this_ptr->walk_status;
        if (uVar2 == 0) {
LAB_0053d90f:
          iVar21 = 1;
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar6,iVar21);
          this_ptr->walk_target = 0;
        }
        else {
          pCVar14 = &(this_ptr->base).base.model;
          if (uVar2 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar14->base,5,1);
          }
          else {
            if (uVar2 != 2) goto LAB_0053d90f;
            fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
            if ((float)_DAT_005e666d < fStack_14) {
              this_ptr->attack_loop_count = this_ptr->attack_loop_count + 1;
            }
            if (2 < this_ptr->attack_loop_count) {
              pCVar14 = &(this_ptr->base).base.model;
              fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
              if ((float)_DAT_005e6675 < fStack_14) {
                iVar21 = 1;
                iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar14->base,iVar6 + 0xb,iVar21);
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
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
    pCVar12 = (this_ptr->base).victim;
    pCVar14 = &(this_ptr->base).base.model;
    if (pCVar12 == (CCharacter *)0x0) {
      fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
      if ((float)_DAT_005e6675 < fStack_14) {
        fVar23 = 1.4013e-45;
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&pCVar14->base,iVar6,(int)fVar23);
      }
    }
    else {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_9c = (pCVar12->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        fStack_98 = (pCVar12->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y;
        fStack_94 = (pCVar12->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z;
        fStack_210 = fStack_9c;
        afStack_224[(uint)bVar16 * -2 + 6] = afStack_f8[(uint)bVar16 * -2 + 0x18];
        afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
             afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
        if ((this_ptr->base).guard_distance <
            SQRT(fStack_208 * fStack_208 + fStack_210 * fStack_210 + fStack_20c * fStack_20c)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            fVar23 = 1.4013e-45;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar14->base,iVar6,(int)fVar23);
          }
          break;
        }
      }
      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if (pCVar10 == (CDemonActor *)0x0) {
        pCVar12 = (this_ptr->base).victim;
        if (this_ptr->type == 2) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            _DAT_01d046a0 = "..\\core\\shadow.cpp";
            _DAT_01d046a4 = 0x20a;
            core_main_c_FUN_004e4500();
          }
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            core_actor_cpp_FUN_00408de0();
            uStack_228 = uStack_1f8;
            afStack_224[(uint)bVar16 * -2] = afStack_224[(uint)bVar16 * -2 + 0xc];
            afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
            if (0.0 <= afStack_224[1]) {
              core_actor_cpp_FUN_00408de0();
              uStack_1d4 = uStack_288;
              afStack_224[(uint)bVar16 * -2 + 0x15] =
                   *(float *)((int)&stack0xfffffd70 + ((uint)bVar16 * -2 + 3) * 4);
              afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
                   *(float *)((int)&stack0xfffffd70 +
                             ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 4) * 4);
              if (0.0 <= fStack_1cc) {
                pCVar3 = (this_ptr->base).victim;
                pCVar4 = (CCharacter *)this_ptr->alpha1;
                fStack_d8 = (pCVar3->base).location.position.x - (pCVar4->base).location.position.x;
                fStack_d4 = (pCVar3->base).location.position.y - (pCVar4->base).location.position.y;
                fStack_d0 = (pCVar3->base).location.position.z - (pCVar4->base).location.position.z;
                fStack_cc = fStack_d8;
                afStack_f8[(uint)bVar16 * -2 + 0xc] = afStack_f8[(uint)bVar16 * -2 + 9];
                afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
                     afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
                fVar23 = fStack_cc * fStack_cc;
                pCVar12 = (CCharacter *)this_ptr->alpha2;
                fStack_258 = (pCVar3->base).location.position.x -
                             (pCVar12->base).location.position.x;
                fStack_254 = (pCVar3->base).location.position.y -
                             (pCVar12->base).location.position.y;
                fStack_250 = (pCVar3->base).location.position.z -
                             (pCVar12->base).location.position.z;
                fStack_240 = fStack_258;
                *(uint *)((int)&stack0xfffffdac + ((uint)bVar16 * -2 + 6) * 4) =
                     *(uint *)((int)&stack0xfffffdac + (uint)bVar16 * -8);
                *(uint *)
                 ((int)&stack0xfffffdac + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 7) * 4) =
                     *(uint *)
                      ((int)&stack0xfffffdac + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 1) * 4);
                if (SQRT(fStack_238 * fStack_238 + fStack_240 * fStack_240 + fStack_23c * fStack_23c
                        ) < SQRT(fStack_c4 * fStack_c4 + fVar23 + fStack_c8 * fStack_c8)) {
                  pCVar12 = pCVar4;
                }
              }
              else {
                pCVar12 = (CCharacter *)this_ptr->alpha2;
              }
            }
            else {
              pCVar12 = (CCharacter *)this_ptr->alpha1;
            }
          }
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            fStack_78 = (pCVar12->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_74 = (pCVar12->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_70 = (pCVar12->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_168 = fStack_78;
            afStack_194[(uint)bVar16 * -2 + 0xc] = afStack_f8[(uint)bVar16 * -2 + 0x21];
            afStack_194[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
                 afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x22];
            if (SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168 + fStack_164 * fStack_164) <
                (float)_DAT_005e667d) {
              iVar6 = this_ptr->phase + 1;
              this_ptr->phase = iVar6;
              if (3 < iVar6) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 0x41200000;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) &&
                  (iVar6 = this_ptr->phase + 1, this_ptr->phase = iVar6, 3 < iVar6)) {
            this_ptr->phase = 0;
          }
        }
        fStack_25c = 0x40400000;
        fStack_18 = 0x40400000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        fVar23 = 0.17453292;
        pCVar20 = (CVector3f *)0x3f000000;
        uStack_264 = 0;
        uStack_260 = 0;
        path_map = (*((pCVar12->base).vtable._ub)->getPathMap)(&pCVar12->base);
        target_pos = &(pCVar12->base).location;
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,pCVar20,fVar23,
                           (float)in_stack_fffffcd8);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          pCVar14 = &(this_ptr->base).base.model;
          in_stack_fffffcd8 = (CShadow *)pCVar14;
          fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            in_stack_fffffcd8 = (CShadow *)0x1;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar14->base,iVar6,(int)in_stack_fffffcd8);
          }
        }
        else if (iVar6 < 1) {
          in_stack_fffffcd8 = (CShadow *)g_CTrapClassInfo.name_hash;
          pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar10 == (CDemonActor *)0x0) {
            fStack_c0 = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            fStack_bc = (pCVar12->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_b8 = (pCVar12->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_180 = fStack_c0;
            afStack_194[(uint)bVar16 * -2 + 6] = afStack_f8[(uint)bVar16 * -2 + 0xf];
            afStack_194[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
                 afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
            if (afStack_224 + 0x1a != afStack_194 + 5) {
              fStack_1bc = fStack_180;
              fStack_1b8 = fStack_17c;
              fStack_1b4 = fStack_178;
            }
            fStack_34 = SQRT(fStack_1b4 * fStack_1b4 +
                             fStack_1bc * fStack_1bc + fStack_1b8 * fStack_1b8);
            fStack_28 = 20.0;
            if (this_ptr->type == 1) {
              fStack_28 = 10.0;
            }
            if (this_ptr->type == 2) {
              fStack_28 = 10.0;
            }
            pCVar14 = &(this_ptr->base).base.model;
            if (fStack_28 < fStack_34) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              uStack_198 = afStack_194[2];
              afStack_194[(uint)bVar16 * -2] = afStack_194[(uint)bVar16 * -2 + 3];
              afStack_194[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                   afStack_194[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
              in_stack_fffffcd8 =
                   (CShadow *)(afStack_194[0] - (this_ptr->base).base.base.orient.vec.y);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)in_stack_fffffcd8);
              if (ABS(fStack_14) < (float)_DAT_005e6685) {
                fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
                if ((float)_DAT_005e6675 < fStack_14) {
                  fVar23 = 1.4013e-45;
                  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&pCVar14->base,iVar6 + 0xb,(int)fVar23);
                }
                in_stack_fffffcd8 = (CShadow *)0x3e19999a;
                iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.15);
                if (iVar6 != 0) {
                  in_stack_fffffcd8 = this_ptr;
                  core_shadow_cpp_FUN_0053df80();
                }
                iVar6 = 0;
                iVar21 = 0;
                while (iVar21 < g_CDemonSetPtr->enemy_count) {
                  in_stack_fffffcd8 = (CShadow *)g_CShadowClassInfo.name_hash;
                  pCVar7 = (CShadow *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar6),
                                      g_CShadowClassInfo.name_hash);
                  if ((pCVar7 == (CShadow *)0x0) || (pCVar7 == this_ptr)) {
                    iVar21 = iVar21 + 1;
                    iVar6 = iVar6 + 4;
                  }
                  else {
                    in_stack_fffffcd8 = (CShadow *)&(pCVar7->base).base.model;
                    iVar11 = core_motion_cpp_FUN_005035c0();
                    if ((*(int *)(iVar11 + 0x24) == 0xb) ||
                       (iVar11 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar11 + 0x24) == 0xc)) {
                      in_stack_fffffcd8 = (CShadow *)0x2;
                      iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
                      if (iVar6 == 1) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + _DAT_005e6695;
                      }
                      if (iVar6 == 2) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + _DAT_005e6699;
                      }
                      break;
                    }
                    iVar21 = iVar21 + 1;
                    iVar6 = iVar6 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005e6659) {
              if ((iStack_1c == 5) &&
                 (in_stack_fffffcd8 = (CShadow *)pCVar14,
                 fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base),
                 (float)_DAT_005e6675 < fStack_14)) {
                in_stack_fffffcd8 = (CShadow *)0x1;
                iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar14->base,iVar6,(int)in_stack_fffffcd8);
              }
              if ((iStack_1c == 0xb) || (iStack_1c == 0xc)) {
                in_stack_fffffcd8 = (CShadow *)0x1;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,5,1);
              }
            }
          }
        }
        else {
          if ((this_ptr->type == 2) && ((this_ptr->phase == 1 || (this_ptr->phase == 3)))) break;
          if ((this_ptr->base).attack_cooldown <= 0.0) {
            fVar23 = 1.4013e-45;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,iVar6 + 6,(int)fVar23);
            iVar6 = core_charactr_cpp_FUN_0042b300();
            this_ptr->walk_target = iVar6;
            if (iVar6 != 0) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(4.0,12.0);
              this_ptr->walk_timeout = fStack_14;
            }
            in_stack_fffffcd8 = (CShadow *)0x3f4ccccd;
            iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.8);
            if (iVar6 != 0) {
              in_stack_fffffcd8 = this_ptr;
              core_shadow_cpp_FUN_0053df80();
            }
          }
        }
        fVar23 = this_ptr->howl_cooldown - param_2;
        this_ptr->howl_cooldown = fVar23;
        if (fVar23 < 0.0) {
          in_stack_fffffcd8 = this_ptr;
          core_shadow_cpp_FUN_0053df80();
        }
      }
      else {
        fVar23 = 1.4013e-45;
        iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,iVar6,(int)fVar23);
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffcd0);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar22 = (SDamageInfo *)&stack0xfffffcd0;
    fVar23 = 0.4;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[2]].m);
    afStack_12c[0] = (float)uStack_15c;
    afStack_140[(uint)bVar16 * -2 + 6] = afStack_194[(uint)bVar16 * -2 + 0xf];
    afStack_140[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
         afStack_194[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
    core_actor_cpp_FUN_00408d70(this_ptr,afStack_140 + 5);
    CStack_120.x = fStack_b4;
    *(float *)((int)&CStack_120 + (uint)bVar16 * -8 + 4) = afStack_f8[(uint)bVar16 * -2 + 0x12];
    *(float *)((int)&CStack_120 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&this_ptr->base,&CStack_120,fVar23,pSVar22);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar22 = (SDamageInfo *)&stack0xfffffcd0;
    fVar23 = 0.4;
    core_xform_cpp_FUN_00591530
              (&DAT_0265370c,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[1]].m);
    puVar13 = &uStack_114;
    uStack_114 = uStack_1b0;
    afStack_110[(uint)bVar16 * -2] = afStack_1ac[(uint)bVar16 * -2];
    afStack_110[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_1ac[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
    core_actor_cpp_FUN_00408d70(this_ptr,puVar13);
    pCVar20 = &CStack_108;
    CStack_108.x = fStack_270;
    *(uint *)((int)&CStack_108 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&stack0xfffffd70 + ((uint)bVar16 * -2 + 9) * 4);
    pCVar7 = this_ptr;
    *(uint *)((int)&CStack_108 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         *(uint *)((int)&stack0xfffffd70 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 10) * 4);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar7->base,pCVar20,fVar23,pSVar22);
    pCVar12 = (this_ptr->base).victim;
    if ((pCVar12 != (CCharacter *)0x0) &&
       (EVar8 = (*(((pCVar12->base).vtable._uc)->_uc).getDeathState)(pCVar12),
       EVar8 != DEATH_STATE_ALIVE)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,10,1);
    }
    core_shadow_cpp_FUN_0053dfc0();
    break;
  default:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
switchD_0053dec8_caseD_0:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
    iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,param_2);
    pCVar14 = &(this_ptr->base).base.model;
    if (iVar6 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar14->base,5,1);
      break;
    }
    if (this_ptr->walk_target != 0) {
      fVar23 = this_ptr->walk_timeout - param_2;
      this_ptr->walk_timeout = fVar23;
      if (0.0 < fVar23) {
        core_charactr_cpp_FUN_00428260
                  (this_ptr,this_ptr->walk_target,0x3f800000,0x3f800000,&this_ptr->walk_status);
        uVar2 = this_ptr->walk_status;
        if (uVar2 == 0) {
LAB_0053d2f5:
          this_ptr->walk_target = 0;
        }
        else {
          if (uVar2 < 2) {
            iVar21 = 1;
            iVar6 = 5;
          }
          else {
            if (uVar2 != 2) goto LAB_0053d2f5;
            iVar21 = 1;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
            iVar6 = iVar6 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&pCVar14->base,iVar6,iVar21);
          if (this_ptr->walk_target != 0) break;
        }
      }
      else {
        this_ptr->walk_target = 0;
        this_ptr->walk_timeout = 0.0;
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
    pCVar12 = (this_ptr->base).victim;
    if (pCVar12 != (CCharacter *)0x0) {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        afStack_140[2] =
             (pCVar12->base).location.position.x - (this_ptr->base).base.base.location.position.x;
        afStack_140[3] =
             (pCVar12->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        fStack_130 = (pCVar12->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        fStack_24c = afStack_140[2];
        *(float *)((int)&stack0xfffffdac + ((uint)bVar16 * -2 + 3) * 4) =
             afStack_140[(uint)bVar16 * -2 + 3];
        *(float *)((int)&stack0xfffffdac + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 4) * 4) =
             afStack_140[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        fStack_30 = SQRT(fStack_244 * fStack_244 + fStack_24c * fStack_24c + fStack_248 * fStack_248
                        );
        if (((this_ptr->base).guard_distance < fStack_30) || ((float)_DAT_005e668d < fStack_30)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          break;
        }
      }
      pCVar14 = &(this_ptr->base).base.model;
      pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if (pCVar10 == (CDemonActor *)0x0) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            fVar23 = 1.4013e-45;
            iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar14->base,iVar6,(int)fVar23);
          }
        }
        else {
          iVar6 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
          if (iVar6 != 0) {
            core_shadow_cpp_FUN_0053df80();
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,5,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar14->base,0,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar17 = (((float10)fStack_20 - (float10)fStack_2c) * (float10)_DAT_005e663d) /
             (float10)fStack_20;
    this_ptr->is_opaque = 0;
    uVar19 = round();
    iVar6 = (int)uVar19;
    *(int *)(iVar6 + 0x10b78) = (int)ROUND(fVar17);
    fVar17 = (float10)*(float *)((int)((ulonglong)uVar19 >> 0x20) + 0x284) * (float10)_DAT_005e6645
             + (float10)*(float *)(iVar6 + 0x10b3c);
    *(float *)(iVar6 + 0x10b3c) = (float)fVar17;
    fVar18 = (float10)fsin(fVar17);
    fVar17 = (float10)fcos(fVar17);
    fStack_38 = (float)fVar18;
    fStack_40 = (float)fVar17;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    puVar13 = (uint *)&stack0xfffffd54;
    puVar15 = &stack0xfffffd3c;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
    }
    fVar23 = (fStack_2b0 - fStack_2bc) * fStack_40;
    fVar5 = (fStack_2b8 - fStack_2c4) * fStack_38 * (float)_DAT_005e664d;
    fStack_90 = fStack_2c4 + fStack_2b8;
    fStack_8c = fStack_2c0 + fStack_2b4;
    fStack_88 = fStack_2bc + fStack_2b0;
    afStack_f8[2] = fStack_2c4 + fStack_2b8;
    afStack_f8[(uint)bVar16 * -2 + 3] = afStack_f8[(uint)bVar16 * -2 + 0x1b];
    afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c];
    CStack_234.x = fVar5;
    CStack_234.z = fVar23 * (float)_DAT_005e664d;
    fStack_1ec = afStack_f8[2] * _DAT_005e6655;
    fStack_1e8 = afStack_f8[3] * _DAT_005e6655;
    fStack_1e4 = fStack_e8 * _DAT_005e6655;
    afStack_224[2] = afStack_f8[2] * _DAT_005e6655;
    afStack_224[(uint)bVar16 * -2 + 3] = afStack_224[(uint)bVar16 * -2 + 0xf];
    afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
         afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
    CStack_234.y = afStack_224[3];
    fStack_174 = fVar5 + (this_ptr->base).base.base.location.position.x;
    fStack_170 = afStack_224[3] + (this_ptr->base).base.base.location.position.y;
    fStack_16c = CStack_234.z + (this_ptr->base).base.base.location.position.z;
    CStack_204.x = fStack_174;
    afStack_224[(uint)bVar16 * -2 + 9] = afStack_194[(uint)bVar16 * -2 + 9];
    afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
         afStack_194[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
    if (&CStack_234 != (CVector3f *)(afStack_224 + 8)) {
      CStack_234.x = CStack_204.x;
      CStack_234.y = CStack_204.y;
      CStack_234.z = CStack_204.z;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810((CDemonGlobe *)0x20b1924,&CStack_234);
    _DAT_020b1960 = 60000;
    DAT_020b1940 = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860((CDemonGlobe *)0x20b1924,6.0);
    _DAT_020b1944 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(g_CDemonSetPtr,(CDemonGlobe *)0x20b1924);
    pCVar14 = &(this_ptr->base).base.model;
    this_ptr->corona_added = 1;
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar14);
    fStack_14 = core_motion_cpp_FUN_00503e60(&pCVar14->base);
    fVar17 = (float10)_DAT_005e665d;
    pow();
    fVar18 = (float10)_DAT_005e6665;
    pow();
    this_ptr->fade_scale = (float)((float10)1 + fVar17 / fVar18);
    iVar6 = 0;
    if (0 < pCVar9->bone_count) {
      do {
        iVar6 = iVar6 + 1;
        pCVar14->rest_bone_scales[0] = this_ptr->fade_scale;
        pCVar14 = (CDeformableModelInstance *)&(pCVar14->base).current_motion_index;
      } while (iVar6 < pCVar9->bone_count);
    }
    break;
  case 0xf:
    this_ptr->fade_alpha = 0;
    this_ptr->fade_scale = 1.0;
    (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
    return;
  case 0x14:
    fVar17 = ((float10)fStack_2c * (float10)_DAT_005e663d) / (float10)fStack_20;
    this_ptr->is_opaque = 0;
    iVar6 = round();
    *(int *)(iVar6 + 0x10b78) = (int)ROUND(fVar17);
  }
LAB_0053c710:
  fVar23 = (this_ptr->base).attack_cooldown;
  (this_ptr->base).base.collision_cylinder_radius = 2.0;
  if (0.0 < fVar23) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - param_2;
  }
  iVar6 = core_motion_cpp_FUN_005035c0();
  iVar6 = *(int *)(iVar6 + 0x24);
  if ((((((iVar6 != 0xf) && (iVar6 != 0)) && (iVar6 != 1)) && ((iVar6 != 2 && (iVar6 != 3)))) &&
      (iVar6 != 4)) || ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar12 = (this_ptr->base).victim;
    if ((pCVar12 != (CCharacter *)0x0) &&
       (pCVar7 = (CShadow *)(*(((pCVar12->base).vtable._uc)->_uc).getGrabber)(pCVar12),
       pCVar7 == this_ptr)) {
      in_stack_fffffcd8 = (CShadow *)(this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffcd8);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_27c = (this_ptr->base).base.velocity.x * param_2;
    fStack_278 = (this_ptr->base).base.velocity.y * param_2;
    fStack_274 = (this_ptr->base).base.velocity.z * param_2;
    fStack_1c8 = fStack_27c;
    afStack_224[(uint)bVar16 * -2 + 0x18] =
         *(float *)((int)&stack0xfffffd70 + ((uint)bVar16 * -2 + 6) * 4);
    afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19] =
         *(float *)((int)&stack0xfffffd70 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 7) * 4);
    fStack_1e0 = fStack_1c8 + (this_ptr->base).base.model.accumulated_root_motion.x;
    fStack_1dc = fStack_1c4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1d8 = fStack_1c0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    fStack_144 = fStack_1e0;
    afStack_140[(uint)bVar16 * -2] = afStack_224[(uint)bVar16 * -2 + 0x12];
    afStack_140[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_224[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
    fStack_e4 = fStack_144 + (this_ptr->base).base.position_delta.x;
    fStack_e0 = afStack_140[0] + (this_ptr->base).base.position_delta.y;
    fStack_dc = afStack_140[1] + (this_ptr->base).base.position_delta.z;
    CStack_60.x = fStack_e4;
    *(float *)((int)&CStack_60 + (uint)bVar16 * -8 + 4) = afStack_f8[(uint)bVar16 * -2 + 6];
    *(float *)((int)&CStack_60 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
         afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_60);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,param_2);
  core_shadow_cpp_FUN_0053ece0();
  if ((0.0 <= this_ptr->periodic_timer) &&
     (fVar23 = this_ptr->periodic_timer - param_2, this_ptr->periodic_timer = fVar23, fVar23 <= 0.0)
     ) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
    this_ptr->periodic_timer = fStack_14;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)in_stack_fffffcd8);
    puVar13 = (uint *)&stack0xfffffd0c;
    puVar15 = &stack0xfffffd24;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
      puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
    }
    fStack_6c = fStack_2dc + fStack_2d0;
    fStack_68 = fStack_2d8 + fStack_2cc;
    fStack_64 = fStack_2d4 + fStack_2c8;
    fStack_84 = fStack_2dc + fStack_2d0;
    afStack_f8[(uint)bVar16 * -2 + 0x1e] = afStack_f8[(uint)bVar16 * -2 + 0x24];
    afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f] =
         afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x25];
    fStack_294 = fStack_84 * _DAT_005e6655;
    fStack_290 = fStack_80 * _DAT_005e6655;
    fStack_28c = fStack_7c * _DAT_005e6655;
    fStack_54 = fStack_84 * _DAT_005e6655;
    afStack_50[(uint)bVar16 * -2] = *(float *)((int)&stack0xfffffd70 + (uint)bVar16 * -8);
    afStack_50[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         *(float *)((int)&stack0xfffffd70 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + 1) * 4);
    core_actor_cpp_FUN_00408d70();
    fStack_fc = fStack_a8;
    afStack_f8[(uint)bVar16 * -2] = afStack_f8[(uint)bVar16 * -2 + 0x15];
    afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_f8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
    if (afStack_194 + 0x11 != &fStack_fc) {
      fStack_150 = fStack_fc;
      fStack_14c = afStack_f8[0];
      fStack_148 = afStack_f8[1];
    }
    CStack_1a4.x = (int)ROUND(fStack_150 * _DAT_005fb3e0);
    CStack_1a4.y = (int)ROUND(fStack_14c * _DAT_005fb3e0);
    CStack_1a4.z = (int)ROUND(fStack_148 * _DAT_005fb3e0);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                                 (g_CDemonSetPtr,&CStack_1a4,(CVector3i *)0x0);
    if (_DAT_005fb40c * (float)_DAT_005e669d <= (float)(int)fStack_14) {
      fVar23 = 1.4013e-45;
      iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar6,(int)fVar23);
      iVar6 = core_charactr_cpp_FUN_0042b300();
      this_ptr->walk_target = iVar6;
      if (iVar6 != 0) {
        fVar23 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,6.0);
        this_ptr->walk_timeout = fVar23;
      }
      this_ptr->periodic_timer = this_ptr->periodic_timer + _DAT_005e66a5;
      return;
    }
  }
  return;
}
