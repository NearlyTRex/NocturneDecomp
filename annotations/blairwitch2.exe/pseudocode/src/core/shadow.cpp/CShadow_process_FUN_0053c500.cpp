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
  CGame *pCVar6;
  SMotion *pSVar7;
  int iVar8;
  CShadow *pCVar9;
  EDeathState EVar10;
  CSkeleton *pCVar11;
  CDemonActor *pCVar12;
  CPathMap *path_map;
  CCharacter *pCVar13;
  CLocation *target_pos;
  uint *puVar14;
  CDeformableModelInstance *pCVar15;
  uint *puVar16;
  byte bVar17;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  float afStackY_127c [974];
  CVector3f *pCVar21;
  int iVar22;
  SDamageInfo *pSVar23;
  CBoundingBox3D *out_box;
  CShadow *in_stack_fffffcd8;
  float fVar24;
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
  CVector3f CStack_288;
  float fStack_27c;
  float afStack_278 [2];
  CVector3f CStack_270;
  uint uStack_264;
  uint uStack_260;
  float fStack_25c;
  float fStack_258;
  float afStack_254 [4];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  CVector3f CStack_234;
  float fStack_228;
  float afStack_224 [5];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  float fStack_1ec;
  float afStack_1e8 [4];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  CVector3f CStack_1b0;
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
  CVector3f CStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
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
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
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
  CVector3f CStack_54;
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
  
  bVar17 = 0;
  pCVar15 = &(this_ptr->base).base.model;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar15->base);
  fStack_2c = (this_ptr->base).base.model.base.current_frame_number;
  iStack_1c = pSVar7->state_index;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar15->base);
  fStack_20 = (float)pSVar7->frame_count;
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,param_2);
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)this_ptr,param_2)
  ;
  if (iVar8 == 0) {
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
  while (0.0 < fStack_24) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(this_ptr->base).base.model.base,&fStack_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar8);
  }
  fVar24 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,param_2 * fVar24);
  if (this_ptr->type == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)_DAT_005e6635;
  }
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0((CCharacter *)this_ptr,param_2);
  pCVar6 = g_CGamePtr;
  if (iVar8 != 0) {
    EVar1 = (this_ptr->base).base.walk_state;
    pCVar15 = &(this_ptr->base).base.model;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar22 = 5;
        iVar8 = 1;
      }
      else {
LAB_0053cbd1:
        fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                              (&(this_ptr->base).base.model.base);
        if (fStack_14 <= (float)_DAT_005e6675) goto LAB_0053c6de;
        iVar8 = 1;
        iVar22 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      }
LAB_0053c6d5:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar22,iVar8);
    }
    else if (EVar1 < WALK_STATE_NO_PATH) {
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                            (&pCVar15->base);
      if ((float)_DAT_005e6675 < fStack_14) {
        iVar8 = 1;
        iVar22 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
        iVar22 = iVar22 + 0xb;
        goto LAB_0053c6d5;
      }
    }
    else {
      if (EVar1 != WALK_STATE_NO_PATH) goto LAB_0053cbd1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,0,1);
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
      fVar24 = this_ptr->walk_timeout - param_2;
      this_ptr->walk_timeout = fVar24;
      if (0.0 < fVar24) {
        core_charactr_cpp_FUN_00428260
                  (this_ptr,this_ptr->walk_target,0x3f800000,0x3f800000,&this_ptr->walk_status);
        uVar2 = this_ptr->walk_status;
        if (uVar2 == 0) {
LAB_0053d90f:
          iVar22 = 1;
          iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar8,iVar22);
          this_ptr->walk_target = 0;
        }
        else {
          pCVar15 = &(this_ptr->base).base.model;
          if (uVar2 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,5,1);
          }
          else {
            if (uVar2 != 2) goto LAB_0053d90f;
            fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                  (&pCVar15->base);
            if ((float)_DAT_005e666d < fStack_14) {
              this_ptr->attack_loop_count = this_ptr->attack_loop_count + 1;
            }
            if (2 < this_ptr->attack_loop_count) {
              pCVar15 = &(this_ptr->base).base.model;
              fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                    (&pCVar15->base);
              if ((float)_DAT_005e6675 < fStack_14) {
                iVar22 = 1;
                iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar15->base,iVar8 + 0xb,iVar22);
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
    pCVar13 = (this_ptr->base).victim;
    pCVar15 = &(this_ptr->base).base.model;
    if (pCVar13 == (CCharacter *)0x0) {
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                            (&pCVar15->base);
      if ((float)_DAT_005e6675 < fStack_14) {
        fVar24 = 1.4013e-45;
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&pCVar15->base,iVar8,(int)fVar24);
      }
    }
    else {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_9c = (pCVar13->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        afStack_98[0] =
             (pCVar13->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_98[1] =
             (pCVar13->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        fStack_210 = fStack_9c;
        afStack_224[(uint)bVar17 * -2 + 6] = afStack_98[(uint)bVar17 * -2];
        afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
             afStack_98[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
        if ((this_ptr->base).guard_distance <
            SQRT(fStack_208 * fStack_208 + fStack_210 * fStack_210 + fStack_20c * fStack_20c)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar15->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            fVar24 = 1.4013e-45;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar15->base,iVar8,(int)fVar24);
          }
          break;
        }
      }
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if (pCVar12 == (CDemonActor *)0x0) {
        pCVar13 = (this_ptr->base).victim;
        if (this_ptr->type == 2) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            _DAT_01d046a0 = "..\\core\\shadow.cpp";
            _DAT_01d046a4 = 0x20a;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      (&((this_ptr->base).victim)->base,&(this_ptr->alpha1->location).position,
                       &CStack_1f8);
            fStack_228 = CStack_1f8.x;
            afStack_224[(uint)bVar17 * -2] = *(float *)((int)&CStack_1f8 + (uint)bVar17 * -8 + 4);
            afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                 *(float *)((int)&CStack_1f8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            if (0.0 <= afStack_224[1]) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        (&((this_ptr->base).victim)->base,&(this_ptr->alpha2->location).position,
                         &CStack_288);
              fStack_1d4 = CStack_288.x;
              afStack_1e8[(uint)bVar17 * -2 + 6] =
                   *(float *)((int)&CStack_288 + (uint)bVar17 * -8 + 4);
              afStack_1e8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
                   *(float *)((int)&CStack_288 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
              if (0.0 <= fStack_1cc) {
                pCVar3 = (this_ptr->base).victim;
                pCVar4 = (CCharacter *)this_ptr->alpha1;
                fStack_d8 = (pCVar3->base).location.position.x - (pCVar4->base).location.position.x;
                fStack_d4 = (pCVar3->base).location.position.y - (pCVar4->base).location.position.y;
                fStack_d0 = (pCVar3->base).location.position.z - (pCVar4->base).location.position.z;
                fStack_cc = fStack_d8;
                afStack_f8[(uint)bVar17 * -2 + 0xc] = afStack_f8[(uint)bVar17 * -2 + 9];
                afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
                     afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
                fVar24 = fStack_cc * fStack_cc;
                pCVar13 = (CCharacter *)this_ptr->alpha2;
                fStack_258 = (pCVar3->base).location.position.x -
                             (pCVar13->base).location.position.x;
                afStack_254[0] =
                     (pCVar3->base).location.position.y - (pCVar13->base).location.position.y;
                afStack_254[1] =
                     (pCVar3->base).location.position.z - (pCVar13->base).location.position.z;
                fStack_240 = fStack_258;
                afStack_254[(uint)bVar17 * -2 + 6] = afStack_254[(uint)bVar17 * -2];
                afStack_254[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
                     afStack_254[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
                if (SQRT(fStack_238 * fStack_238 + fStack_240 * fStack_240 + fStack_23c * fStack_23c
                        ) < SQRT(fStack_c4 * fStack_c4 + fVar24 + fStack_c8 * fStack_c8)) {
                  pCVar13 = pCVar4;
                }
              }
              else {
                pCVar13 = (CCharacter *)this_ptr->alpha2;
              }
            }
            else {
              pCVar13 = (CCharacter *)this_ptr->alpha1;
            }
          }
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            fStack_78 = (pCVar13->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_74 = (pCVar13->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_70 = (pCVar13->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_168 = fStack_78;
            afStack_194[(uint)bVar17 * -2 + 0xc] = afStack_98[(uint)bVar17 * -2 + 9];
            afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd] =
                 afStack_98[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
            if (SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168 + fStack_164 * fStack_164) <
                (float)_DAT_005e667d) {
              iVar8 = this_ptr->phase + 1;
              this_ptr->phase = iVar8;
              if (3 < iVar8) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 0x41200000;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) &&
                  (iVar8 = this_ptr->phase + 1, this_ptr->phase = iVar8, 3 < iVar8)) {
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
        fVar24 = 0.17453292;
        pCVar21 = (CVector3f *)0x3f000000;
        uStack_264 = 0;
        uStack_260 = 0;
        path_map = (*((pCVar13->base).vtable._ub)->getPathMap)(&pCVar13->base);
        target_pos = &(pCVar13->base).location;
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,pCVar21,fVar24,
                           (float)in_stack_fffffcd8);
        if (iVar8 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          pCVar15 = &(this_ptr->base).base.model;
          in_stack_fffffcd8 = (CShadow *)pCVar15;
          fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar15->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            in_stack_fffffcd8 = (CShadow *)0x1;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar15->base,iVar8,(int)in_stack_fffffcd8);
          }
        }
        else if (iVar8 < 1) {
          in_stack_fffffcd8 = (CShadow *)g_CTrapClassInfo.name_hash;
          pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar12 == (CDemonActor *)0x0) {
            fStack_c0 = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            fStack_bc = (pCVar13->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_b8 = (pCVar13->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_180 = fStack_c0;
            afStack_194[(uint)bVar17 * -2 + 6] = afStack_f8[(uint)bVar17 * -2 + 0xf];
            afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
                 afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0x10];
            if (afStack_1e8 + 0xb != afStack_194 + 5) {
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
            pCVar15 = &(this_ptr->base).base.model;
            if (fStack_28 < fStack_34) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              uStack_198 = afStack_194[2];
              afStack_194[(uint)bVar17 * -2] = afStack_194[(uint)bVar17 * -2 + 3];
              afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
                   afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
              in_stack_fffffcd8 =
                   (CShadow *)(afStack_194[0] - (this_ptr->base).base.base.orient.vec.y);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)in_stack_fffffcd8);
              if (ABS(fStack_14) < (float)_DAT_005e6685) {
                fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                      (&pCVar15->base);
                if ((float)_DAT_005e6675 < fStack_14) {
                  fVar24 = 1.4013e-45;
                  iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&pCVar15->base,iVar8 + 0xb,(int)fVar24);
                }
                in_stack_fffffcd8 = (CShadow *)0x3e19999a;
                iVar8 = core_actor_cpp_randomChance_FUN_0040d060(0.15);
                if (iVar8 != 0) {
                  in_stack_fffffcd8 = this_ptr;
                  core_shadow_cpp_FUN_0053df80();
                }
                iVar8 = 0;
                iVar22 = 0;
                while (iVar22 < g_CDemonSetPtr->enemy_count) {
                  in_stack_fffffcd8 = (CShadow *)g_CShadowClassInfo.name_hash;
                  pCVar9 = (CShadow *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar8),
                                      g_CShadowClassInfo.name_hash);
                  if ((pCVar9 == (CShadow *)0x0) || (pCVar9 == this_ptr)) {
                    iVar22 = iVar22 + 1;
                    iVar8 = iVar8 + 4;
                  }
                  else {
                    in_stack_fffffcd8 = (CShadow *)&(pCVar9->base).base.model;
                    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                       ((CMotionController *)in_stack_fffffcd8);
                    if ((pSVar7->state_index == 0xb) ||
                       (pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                                           ((CMotionController *)in_stack_fffffcd8),
                       pSVar7->state_index == 0xc)) {
                      in_stack_fffffcd8 = (CShadow *)0x2;
                      iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,2);
                      if (iVar8 == 1) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + _DAT_005e6695;
                      }
                      if (iVar8 == 2) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + _DAT_005e6699;
                      }
                      break;
                    }
                    iVar22 = iVar22 + 1;
                    iVar8 = iVar8 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005e6659) {
              if ((iStack_1c == 5) &&
                 (in_stack_fffffcd8 = (CShadow *)pCVar15,
                 fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                       (&pCVar15->base), (float)_DAT_005e6675 < fStack_14)) {
                in_stack_fffffcd8 = (CShadow *)0x1;
                iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar15->base,iVar8,(int)in_stack_fffffcd8);
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
            fVar24 = 1.4013e-45;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,iVar8 + 6,(int)fVar24);
            iVar8 = core_charactr_cpp_FUN_0042b300();
            this_ptr->walk_target = iVar8;
            if (iVar8 != 0) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(4.0,12.0);
              this_ptr->walk_timeout = fStack_14;
            }
            in_stack_fffffcd8 = (CShadow *)0x3f4ccccd;
            iVar8 = core_actor_cpp_randomChance_FUN_0040d060(0.8);
            if (iVar8 != 0) {
              in_stack_fffffcd8 = this_ptr;
              core_shadow_cpp_FUN_0053df80();
            }
          }
        }
        fVar24 = this_ptr->howl_cooldown - param_2;
        this_ptr->howl_cooldown = fVar24;
        if (fVar24 < 0.0) {
          in_stack_fffffcd8 = this_ptr;
          core_shadow_cpp_FUN_0053df80();
        }
      }
      else {
        fVar24 = 1.4013e-45;
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,iVar8,(int)fVar24);
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffcd0);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar23 = (SDamageInfo *)&stack0xfffffcd0;
    fVar24 = 0.4;
    core_xform_cpp_transformVector3x4_FUN_00591530
              ((CVector3f *)&DAT_0265370c,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[2]].m,&CStack_15c);
    CStack_12c.x = CStack_15c.x;
    *(uint *)((int)&CStack_12c + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&CStack_15c + (uint)bVar17 * -8 + 4);
    *(uint *)((int)&CStack_12c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&CStack_15c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,&CStack_12c,&CStack_b4);
    CStack_120.x = CStack_b4.x;
    *(uint *)((int)&CStack_120 + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&CStack_b4 + (uint)bVar17 * -8 + 4);
    *(uint *)((int)&CStack_120 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&CStack_b4 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&this_ptr->base,&CStack_120,fVar24,pSVar23);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar23 = (SDamageInfo *)&stack0xfffffcd0;
    fVar24 = 0.4;
    core_xform_cpp_transformVector3x4_FUN_00591530
              ((CVector3f *)&DAT_0265370c,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[1]].m,&CStack_1b0);
    pCVar21 = &CStack_114;
    CStack_114.x = CStack_1b0.x;
    *(uint *)((int)&CStack_114 + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&CStack_1b0 + (uint)bVar17 * -8 + 4);
    *(uint *)((int)&CStack_114 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&CStack_1b0 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar21,&CStack_270);
    pCVar21 = &CStack_108;
    CStack_108.x = CStack_270.x;
    *(uint *)((int)&CStack_108 + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&CStack_270 + (uint)bVar17 * -8 + 4);
    pCVar9 = this_ptr;
    *(uint *)((int)&CStack_108 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&CStack_270 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar21,fVar24,pSVar23);
    pCVar13 = (this_ptr->base).victim;
    if ((pCVar13 != (CCharacter *)0x0) &&
       (EVar10 = (*(((pCVar13->base).vtable._uc)->_uc).getDeathState)(pCVar13),
       EVar10 != DEATH_STATE_ALIVE)) {
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
    iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,param_2);
    pCVar15 = &(this_ptr->base).base.model;
    if (iVar8 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,5,1);
      break;
    }
    if (this_ptr->walk_target != 0) {
      fVar24 = this_ptr->walk_timeout - param_2;
      this_ptr->walk_timeout = fVar24;
      if (0.0 < fVar24) {
        core_charactr_cpp_FUN_00428260
                  (this_ptr,this_ptr->walk_target,0x3f800000,0x3f800000,&this_ptr->walk_status);
        uVar2 = this_ptr->walk_status;
        if (uVar2 == 0) {
LAB_0053d2f5:
          this_ptr->walk_target = 0;
        }
        else {
          if (uVar2 < 2) {
            iVar22 = 1;
            iVar8 = 5;
          }
          else {
            if (uVar2 != 2) goto LAB_0053d2f5;
            iVar22 = 1;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
            iVar8 = iVar8 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&pCVar15->base,iVar8,iVar22);
          if (this_ptr->walk_target != 0) break;
        }
      }
      else {
        this_ptr->walk_target = 0;
        this_ptr->walk_timeout = 0.0;
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,param_2);
    pCVar13 = (this_ptr->base).victim;
    if (pCVar13 != (CCharacter *)0x0) {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        afStack_140[2] =
             (pCVar13->base).location.position.x - (this_ptr->base).base.base.location.position.x;
        afStack_140[3] =
             (pCVar13->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        fStack_130 = (pCVar13->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        afStack_254[2] = afStack_140[2];
        afStack_254[(uint)bVar17 * -2 + 3] = afStack_140[(uint)bVar17 * -2 + 3];
        afStack_254[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
             afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
        fStack_30 = SQRT(fStack_244 * fStack_244 +
                         afStack_254[2] * afStack_254[2] + afStack_254[3] * afStack_254[3]);
        if (((this_ptr->base).guard_distance < fStack_30) || ((float)_DAT_005e668d < fStack_30)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          break;
        }
      }
      pCVar15 = &(this_ptr->base).base.model;
      pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if (pCVar12 == (CDemonActor *)0x0) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar15->base);
          if ((float)_DAT_005e6675 < fStack_14) {
            fVar24 = 1.4013e-45;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar15->base,iVar8,(int)fVar24);
          }
        }
        else {
          iVar8 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
          if (iVar8 != 0) {
            core_shadow_cpp_FUN_0053df80();
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,5,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar15->base,0,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar24 = (float)_DAT_005e663d;
    this_ptr->is_opaque = 0;
    out_box = (CBoundingBox3D *)0x53ce2d;
    dVar20 = round((double)(((fStack_20 - fStack_2c) * fVar24) / fStack_20))
    ;
    this_ptr->fade_alpha = (int)ROUND(dVar20);
    fVar18 = (float10)pCVar6->delta_time_float * (float10)_DAT_005e6645 +
             (float10)this_ptr->eye_glow_phase;
    this_ptr->eye_glow_phase = (float)fVar18;
    fVar19 = (float10)fsin(fVar18);
    fVar18 = (float10)fcos(fVar18);
    fStack_38 = (float)fVar19;
    fStack_40 = (float)fVar18;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    puVar14 = (uint *)&stack0xfffffd54;
    puVar16 = &stack0xfffffd3c;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
    }
    fVar24 = (fStack_2b0 - fStack_2bc) * fStack_40;
    fVar5 = (fStack_2b8 - fStack_2c4) * fStack_38 * (float)_DAT_005e664d;
    afStack_98[2] = fStack_2c4 + fStack_2b8;
    afStack_98[3] = fStack_2c0 + fStack_2b4;
    fStack_88 = fStack_2bc + fStack_2b0;
    afStack_f8[2] = fStack_2c4 + fStack_2b8;
    afStack_f8[(uint)bVar17 * -2 + 3] = afStack_98[(uint)bVar17 * -2 + 3];
    afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_98[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    CStack_234.x = fVar5;
    CStack_234.z = fVar24 * (float)_DAT_005e664d;
    fStack_1ec = afStack_f8[2] * _DAT_005e6655;
    afStack_1e8[0] = afStack_f8[3] * _DAT_005e6655;
    afStack_1e8[1] = fStack_e8 * _DAT_005e6655;
    afStack_224[2] = afStack_f8[2] * _DAT_005e6655;
    afStack_224[(uint)bVar17 * -2 + 3] = afStack_1e8[(uint)bVar17 * -2];
    afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4] =
         afStack_1e8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    CStack_234.y = afStack_224[3];
    fStack_174 = fVar5 + (this_ptr->base).base.base.location.position.x;
    fStack_170 = afStack_224[3] + (this_ptr->base).base.base.location.position.y;
    fStack_16c = CStack_234.z + (this_ptr->base).base.base.location.position.z;
    CStack_204.x = fStack_174;
    afStack_224[(uint)bVar17 * -2 + 9] = afStack_194[(uint)bVar17 * -2 + 9];
    afStack_224[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
         afStack_194[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10];
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
    pCVar15 = &(this_ptr->base).base.model;
    this_ptr->corona_added = 1;
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar15);
    fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar15->base)
    ;
    fVar18 = (float10)_DAT_005e665d;
    pow((float10)fStack_14 * (float10)_DAT_005e6659,fVar18);
    fVar19 = pow((float10)_DAT_005e6665,fVar18);
    this_ptr->fade_scale = (float)((float10)1 + fVar18 / fVar19);
    iVar8 = 0;
    if (0 < pCVar11->bone_count) {
      do {
        iVar8 = iVar8 + 1;
        pCVar15->rest_bone_scales[0] = this_ptr->fade_scale;
        pCVar15 = (CDeformableModelInstance *)&(pCVar15->base).current_motion_index;
      } while (iVar8 < pCVar11->bone_count);
    }
    break;
  case 0xf:
    this_ptr->fade_alpha = 0;
    this_ptr->fade_scale = 1.0;
    (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
    return;
  case 0x14:
    fVar24 = (float)_DAT_005e663d;
    this_ptr->is_opaque = 0;
    dVar20 = round((double)((fStack_2c * fVar24) / fStack_20));
    this_ptr->fade_alpha = (int)ROUND(dVar20);
  }
LAB_0053c710:
  fVar24 = (this_ptr->base).attack_cooldown;
  (this_ptr->base).base.collision_cylinder_radius = 2.0;
  if (0.0 < fVar24) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - param_2;
  }
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  iVar8 = pSVar7->state_index;
  if ((((((iVar8 != 0xf) && (iVar8 != 0)) && (iVar8 != 1)) && ((iVar8 != 2 && (iVar8 != 3)))) &&
      (iVar8 != 4)) || ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar13 = (this_ptr->base).victim;
    if ((pCVar13 != (CCharacter *)0x0) &&
       (pCVar9 = (CShadow *)(*(((pCVar13->base).vtable._uc)->_uc).getGrabber)(pCVar13),
       pCVar9 == this_ptr)) {
      in_stack_fffffcd8 = (CShadow *)(this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffcd8);
    }
    core_charactr_cpp_FUN_00423a10();
    fStack_27c = (this_ptr->base).base.velocity.x * param_2;
    afStack_278[0] = (this_ptr->base).base.velocity.y * param_2;
    afStack_278[1] = (this_ptr->base).base.velocity.z * param_2;
    fStack_1c8 = fStack_27c;
    afStack_1e8[(uint)bVar17 * -2 + 9] = afStack_278[(uint)bVar17 * -2];
    afStack_1e8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 10] =
         afStack_278[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
    afStack_1e8[2] = fStack_1c8 + (this_ptr->base).base.model.accumulated_root_motion.x;
    afStack_1e8[3] = fStack_1c4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1d8 = fStack_1c0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    fStack_144 = afStack_1e8[2];
    afStack_140[(uint)bVar17 * -2] = afStack_1e8[(uint)bVar17 * -2 + 3];
    afStack_140[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         afStack_1e8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 4];
    fStack_e4 = fStack_144 + (this_ptr->base).base.position_delta.x;
    fStack_e0 = afStack_140[0] + (this_ptr->base).base.position_delta.y;
    fStack_dc = afStack_140[1] + (this_ptr->base).base.position_delta.z;
    CStack_60.x = fStack_e4;
    *(float *)((int)&CStack_60 + (uint)bVar17 * -8 + 4) = afStack_f8[(uint)bVar17 * -2 + 6];
    *(float *)((int)&CStack_60 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7];
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.position_delta.x = (this_ptr->base).base.position_delta.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_60);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,param_2);
  core_shadow_cpp_FUN_0053ece0();
  if ((0.0 <= this_ptr->periodic_timer) &&
     (fVar24 = this_ptr->periodic_timer - param_2, this_ptr->periodic_timer = fVar24, fVar24 <= 0.0)
     ) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
    this_ptr->periodic_timer = fStack_14;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)in_stack_fffffcd8);
    puVar14 = (uint *)&stack0xfffffd0c;
    puVar16 = &stack0xfffffd24;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar16 = *puVar14;
      puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
      puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
    }
    fStack_6c = fStack_2dc + fStack_2d0;
    fStack_68 = fStack_2d8 + fStack_2cc;
    fStack_64 = fStack_2d4 + fStack_2c8;
    fStack_84 = fStack_2dc + fStack_2d0;
    afStack_98[(uint)bVar17 * -2 + 6] = afStack_98[(uint)bVar17 * -2 + 0xc];
    afStack_98[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 7] =
         afStack_98[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 0xd];
    pCVar21 = &CStack_54;
    fStack_294 = fStack_84 * _DAT_005e6655;
    fStack_290 = fStack_80 * _DAT_005e6655;
    fStack_28c = fStack_7c * _DAT_005e6655;
    CStack_54.x = fStack_84 * _DAT_005e6655;
    *(uint *)((int)&CStack_54 + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&stack0xfffffd70 + (uint)bVar17 * -8);
    *(uint *)((int)&CStack_54 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8) =
         *(uint *)((int)&stack0xfffffd70 + ((uint)bVar17 * -2 + (uint)bVar17 * -2 + 1) * 4);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar21,&CStack_a8);
    fStack_fc = CStack_a8.x;
    afStack_f8[(uint)bVar17 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar17 * -8 + 4);
    afStack_f8[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         *(float *)((int)&CStack_a8 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    if (&fStack_150 != &fStack_fc) {
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
      fVar24 = 1.4013e-45;
      iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar8,(int)fVar24);
      iVar8 = core_charactr_cpp_FUN_0042b300();
      this_ptr->walk_target = iVar8;
      if (iVar8 != 0) {
        fVar24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,6.0);
        this_ptr->walk_timeout = fVar24;
      }
      this_ptr->periodic_timer = this_ptr->periodic_timer + _DAT_005e66a5;
      return;
    }
  }
  return;
}
