// Name: core_shadow.cpp_CShadow_process_FUN_0053c500
// Address: 0053c500
// Address Range: [[0053c500, 0053df0f]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_process_FUN_0053c500(CShadow *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_shadow_cpp_CShadow_process_FUN_0053c500(CShadow *this_ptr,float delta_time)

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
  CWayPoint *pCVar10;
  EDeathState EVar11;
  CSkeleton *pCVar12;
  CDemonActor *pCVar13;
  CPathMap *path_map;
  CCharacter *pCVar14;
  CLocation *target_pos;
  uint *puVar15;
  CDeformableModelInstance *pCVar16;
  uint *puVar17;
  byte bVar18;
  float10 fVar19;
  float10 fVar20;
  double dVar21;
  float afStackY_127c [974];
  CVector3f *pCVar22;
  int iVar23;
  SDamageInfo *pSVar24;
  CBoundingBox3D *out_box;
  CShadow *in_stack_fffffcd8;
  float fVar25;
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
  CVector3f CStack_1bc;
  CVector3f CStack_1b0;
  CVector3i CStack_1a4;
  float fStack_198;
  float afStack_194 [2];
  CVector3f CStack_18c;
  CVector3f CStack_180;
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
  
  bVar18 = 0;
  pCVar16 = &(this_ptr->base).base.model;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar16->base);
  fStack_2c = (this_ptr->base).base.model.base.current_frame_number;
  iStack_1c = pSVar7->state_index;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCVar16->base);
  fStack_20 = (float)pSVar7->frame_count;
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  iVar8 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[1]);
    return;
  }
  if ((this_ptr->type == 2) && (0.0 <= this_ptr->phase_timer)) {
    this_ptr->phase_timer = this_ptr->phase_timer - delta_time;
  }
  fStack_24 = delta_time * (this_ptr->base).speed;
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
  fVar25 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0
            ((CCharacter *)this_ptr,delta_time * fVar25);
  if (this_ptr->type == 2) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)4;
  }
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  pCVar6 = g_CGamePtr;
  if (iVar8 != 0) {
    EVar1 = (this_ptr->base).base.walk_state;
    pCVar16 = &(this_ptr->base).base.model;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar23 = 5;
        iVar8 = 1;
      }
      else {
LAB_0053cbd1:
        fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                              (&(this_ptr->base).base.model.base);
        if (fStack_14 <= (float)0.90000000000000002) goto LAB_0053c6de;
        iVar8 = 1;
        iVar23 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      }
LAB_0053c6d5:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar23,iVar8);
    }
    else if (EVar1 < WALK_STATE_NO_PATH) {
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                            (&pCVar16->base);
      if ((float)0.90000000000000002 < fStack_14) {
        iVar8 = 1;
        iVar23 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
        iVar23 = iVar23 + 0xb;
        goto LAB_0053c6d5;
      }
    }
    else {
      if (EVar1 != WALK_STATE_NO_PATH) goto LAB_0053cbd1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar16->base,0,1);
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
      fVar25 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar25;
      if (0.0 < fVar25) {
        core_charactr_cpp_CCharacter_followActor_FUN_00428260
                  ((CCharacter *)this_ptr,(CDemonActor *)this_ptr->walk_target,1.0,1.0,
                   &this_ptr->walk_status);
        uVar2 = this_ptr->walk_status;
        if (uVar2 == 0) {
LAB_0053d90f:
          iVar23 = 1;
          iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar8,iVar23);
          this_ptr->walk_target = 0;
        }
        else {
          pCVar16 = &(this_ptr->base).base.model;
          if (uVar2 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar16->base,5,1);
          }
          else {
            if (uVar2 != 2) goto LAB_0053d90f;
            fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                  (&pCVar16->base);
            if ((float)0.84999999999999998 < fStack_14) {
              this_ptr->attack_loop_count = this_ptr->attack_loop_count + 1;
            }
            if (2 < this_ptr->attack_loop_count) {
              pCVar16 = &(this_ptr->base).base.model;
              fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                    (&pCVar16->base);
              if ((float)0.90000000000000002 < fStack_14) {
                iVar23 = 1;
                iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar16->base,iVar8 + 0xb,iVar23);
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
    pCVar14 = (this_ptr->base).victim;
    pCVar16 = &(this_ptr->base).base.model;
    if (pCVar14 == (CCharacter *)0x0) {
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                            (&pCVar16->base);
      if ((float)0.90000000000000002 < fStack_14) {
        fVar25 = 1.4013e-45;
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&pCVar16->base,iVar8,(int)fVar25);
      }
    }
    else {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        fStack_9c = (pCVar14->base).location.position.x -
                    (this_ptr->base).base.base.location.position.x;
        afStack_98[0] =
             (pCVar14->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        afStack_98[1] =
             (pCVar14->base).location.position.z - (this_ptr->base).base.base.location.position.z;
        fStack_210 = fStack_9c;
        afStack_224[(uint)bVar18 * -2 + 6] = afStack_98[(uint)bVar18 * -2];
        afStack_224[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
             afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
        if ((this_ptr->base).guard_distance <
            SQRT(fStack_208 * fStack_208 + fStack_210 * fStack_210 + fStack_20c * fStack_20c)) {
          (this_ptr->base).victim = (CCharacter *)0x0;
          fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar16->base);
          if ((float)0.90000000000000002 < fStack_14) {
            fVar25 = 1.4013e-45;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar16->base,iVar8,(int)fVar25);
          }
          break;
        }
      }
      pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if (pCVar13 == (CDemonActor *)0x0) {
        pCVar14 = (this_ptr->base).victim;
        if (this_ptr->type == 2) {
          if ((this_ptr->alpha1 == (CDemonActor *)0x0) || (this_ptr->alpha2 == (CDemonActor *)0x0))
          {
            g_CHAR_PTR_01d046a0 = "..\\core\\shadow.cpp";
            g_INT_01d046a4 = 0x20a;
            core_main_c_displayErrorAndQuit_FUN_004e4500("Alpha werewolf requires 2 waypoints");
          }
          engine_console_cpp_CConsole_printf_FUN_00436710(g_CConsolePtr,"Phase: %d, Timer: %f\n");
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      (&((this_ptr->base).victim)->base,&(this_ptr->alpha1->location).position,
                       &CStack_1f8);
            fStack_228 = CStack_1f8.x;
            afStack_224[(uint)bVar18 * -2] = *(float *)((int)&CStack_1f8 + (uint)bVar18 * -8 + 4);
            afStack_224[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 *(float *)((int)&CStack_1f8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
            if (0.0 <= afStack_224[1]) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        (&((this_ptr->base).victim)->base,&(this_ptr->alpha2->location).position,
                         &CStack_288);
              fStack_1d4 = CStack_288.x;
              afStack_1e8[(uint)bVar18 * -2 + 6] =
                   *(float *)((int)&CStack_288 + (uint)bVar18 * -8 + 4);
              afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
                   *(float *)((int)&CStack_288 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
              if (0.0 <= fStack_1cc) {
                pCVar3 = (this_ptr->base).victim;
                pCVar4 = (CCharacter *)this_ptr->alpha1;
                fStack_d8 = (pCVar3->base).location.position.x - (pCVar4->base).location.position.x;
                fStack_d4 = (pCVar3->base).location.position.y - (pCVar4->base).location.position.y;
                fStack_d0 = (pCVar3->base).location.position.z - (pCVar4->base).location.position.z;
                fStack_cc = fStack_d8;
                afStack_f8[(uint)bVar18 * -2 + 0xc] = afStack_f8[(uint)bVar18 * -2 + 9];
                afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
                     afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
                fVar25 = fStack_cc * fStack_cc;
                pCVar14 = (CCharacter *)this_ptr->alpha2;
                fStack_258 = (pCVar3->base).location.position.x -
                             (pCVar14->base).location.position.x;
                afStack_254[0] =
                     (pCVar3->base).location.position.y - (pCVar14->base).location.position.y;
                afStack_254[1] =
                     (pCVar3->base).location.position.z - (pCVar14->base).location.position.z;
                fStack_240 = fStack_258;
                afStack_254[(uint)bVar18 * -2 + 6] = afStack_254[(uint)bVar18 * -2];
                afStack_254[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
                     afStack_254[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
                if (SQRT(fStack_238 * fStack_238 + fStack_240 * fStack_240 + fStack_23c * fStack_23c
                        ) < SQRT(fStack_c4 * fStack_c4 + fVar25 + fStack_c8 * fStack_c8)) {
                  pCVar14 = pCVar4;
                }
              }
              else {
                pCVar14 = (CCharacter *)this_ptr->alpha2;
              }
            }
            else {
              pCVar14 = (CCharacter *)this_ptr->alpha1;
            }
          }
          if ((this_ptr->phase == 1) || (this_ptr->phase == 3)) {
            fStack_78 = (pCVar14->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_74 = (pCVar14->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_70 = (pCVar14->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            fStack_168 = fStack_78;
            *(float *)((int)&CStack_180 + ((uint)bVar18 * -2 + 6) * 4 + 4) =
                 afStack_98[(uint)bVar18 * -2 + 9];
            *(float *)((int)&CStack_180 + ((uint)bVar18 * -2 + (uint)bVar18 * -2 + 7) * 4 + 4) =
                 afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10];
            if (SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168 + fStack_164 * fStack_164) <
                (float)5) {
              iVar8 = this_ptr->phase + 1;
              this_ptr->phase = iVar8;
              if (3 < iVar8) {
                this_ptr->phase = 0;
              }
              this_ptr->phase_timer = 10.0f;
            }
          }
          else if ((this_ptr->phase_timer <= 0.0) &&
                  (iVar8 = this_ptr->phase + 1, this_ptr->phase = iVar8, 3 < iVar8)) {
            this_ptr->phase = 0;
          }
        }
        fStack_25c = 3.0f;
        fStack_18 = 3.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        fVar25 = 0.17453292;
        pCVar22 = (CVector3f *)0x3f000000;
        uStack_264 = 0;
        uStack_260 = 0;
        path_map = (*((pCVar14->base).vtable._ub)->getPathMap)(&pCVar14->base);
        target_pos = &(pCVar14->base).location;
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,&target_pos->position,path_map,pCVar22,fVar25,
                           (float)in_stack_fffffcd8);
        if (iVar8 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00436710
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
          pCVar16 = &(this_ptr->base).base.model;
          in_stack_fffffcd8 = (CShadow *)pCVar16;
          fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar16->base);
          if ((float)0.90000000000000002 < fStack_14) {
            in_stack_fffffcd8 = (CShadow *)0x1;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar16->base,iVar8,(int)in_stack_fffffcd8);
          }
        }
        else if (iVar8 < 1) {
          in_stack_fffffcd8 = (CShadow *)g_CTrapClassInfo.name_hash;
          pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
          if (pCVar13 == (CDemonActor *)0x0) {
            fStack_c0 = (target_pos->position).x - (this_ptr->base).base.base.location.position.x;
            fStack_bc = (pCVar14->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_b8 = (pCVar14->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            CStack_180.x = fStack_c0;
            *(float *)((int)&CStack_180 + (uint)bVar18 * -8 + 4) =
                 afStack_f8[(uint)bVar18 * -2 + 0xf];
            *(float *)((int)&CStack_180 + ((uint)bVar18 * -2 + (uint)bVar18 * -2 + 1) * 4 + 4) =
                 afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
            if (&CStack_1bc != &CStack_180) {
              CStack_1bc.x = CStack_180.x;
              CStack_1bc.y = CStack_180.y;
              CStack_1bc.z = CStack_180.z;
            }
            fStack_34 = SQRT(CStack_1bc.z * CStack_1bc.z +
                             CStack_1bc.x * CStack_1bc.x + CStack_1bc.y * CStack_1bc.y);
            fStack_28 = 20.0;
            if (this_ptr->type == 1) {
              fStack_28 = 10.0;
            }
            if (this_ptr->type == 2) {
              fStack_28 = 10.0;
            }
            pCVar16 = &(this_ptr->base).base.model;
            if (fStack_28 < fStack_34) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                        (&CStack_1bc,&CStack_18c);
              fStack_198 = CStack_18c.x;
              afStack_194[(uint)bVar18 * -2] = *(float *)((int)&CStack_18c + (uint)bVar18 * -8 + 4);
              afStack_194[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                   *(float *)((int)&CStack_18c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
              in_stack_fffffcd8 =
                   (CShadow *)(afStack_194[0] - (this_ptr->base).base.base.orient.vec.y);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)in_stack_fffffcd8);
              if (ABS(fStack_14) < (float)0.39269908168750001) {
                fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                      (&pCVar16->base);
                if ((float)0.90000000000000002 < fStack_14) {
                  fVar25 = 1.4013e-45;
                  iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                            (&pCVar16->base,iVar8 + 0xb,(int)fVar25);
                }
                in_stack_fffffcd8 = (CShadow *)0x3e19999a;
                iVar8 = core_actor_cpp_randomChance_FUN_0040d060(0.15);
                if (iVar8 != 0) {
                  in_stack_fffffcd8 = this_ptr;
                  core_shadow_cpp_CShadow_playAlertSound_FUN_0053df80(this_ptr);
                }
                iVar8 = 0;
                iVar23 = 0;
                while (iVar23 < g_CDemonSetPtr->enemy_count) {
                  in_stack_fffffcd8 = (CShadow *)g_CShadowClassInfo.name_hash;
                  pCVar9 = (CShadow *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar8),
                                      g_CShadowClassInfo.name_hash);
                  if ((pCVar9 == (CShadow *)0x0) || (pCVar9 == this_ptr)) {
                    iVar23 = iVar23 + 1;
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
                             (this_ptr->base).base.base.orient.vec.y + 0.2617994f;
                      }
                      if (iVar8 == 2) {
                        (this_ptr->base).base.base.orient.vec.y =
                             (this_ptr->base).base.base.orient.vec.y + -0.2617994f;
                      }
                      break;
                    }
                    iVar23 = iVar23 + 1;
                    iVar8 = iVar8 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 3.0f * 2.0f) {
              if ((iStack_1c == 5) &&
                 (in_stack_fffffcd8 = (CShadow *)pCVar16,
                 fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                       (&pCVar16->base), (float)0.90000000000000002 < fStack_14)) {
                in_stack_fffffcd8 = (CShadow *)0x1;
                iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&pCVar16->base,iVar8,(int)in_stack_fffffcd8);
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
            fVar25 = 1.4013e-45;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,iVar8 + 6,(int)fVar25);
            pCVar10 = core_charactr_cpp_CCharacter_pickRandomNamedWaypoint_FUN_0042b300
                                ((CCharacter *)this_ptr,"*");
            this_ptr->walk_target = (int)pCVar10;
            if (pCVar10 != (CWayPoint *)0x0) {
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(4.0,12.0);
              this_ptr->walk_timeout = fStack_14;
            }
            in_stack_fffffcd8 = (CShadow *)0x3f4ccccd;
            iVar8 = core_actor_cpp_randomChance_FUN_0040d060(0.8);
            if (iVar8 != 0) {
              in_stack_fffffcd8 = this_ptr;
              core_shadow_cpp_CShadow_playAlertSound_FUN_0053df80(this_ptr);
            }
          }
        }
        fVar25 = this_ptr->howl_cooldown - delta_time;
        this_ptr->howl_cooldown = fVar25;
        if (fVar25 < 0.0) {
          in_stack_fffffcd8 = this_ptr;
          core_shadow_cpp_CShadow_playAlertSound_FUN_0053df80(this_ptr);
        }
      }
      else {
        fVar25 = 1.4013e-45;
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  (&(this_ptr->base).base.model.base,iVar8,(int)fVar25);
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0((SDamageInfo *)&stack0xfffffcd0);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar24 = (SDamageInfo *)&stack0xfffffcd0;
    fVar25 = 0.4;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_ZeroVector,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[2]].m,&CStack_15c);
    CStack_12c.x = CStack_15c.x;
    *(uint *)((int)&CStack_12c + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&CStack_15c + (uint)bVar18 * -8 + 4);
    *(uint *)((int)&CStack_12c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         *(uint *)((int)&CStack_15c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,&CStack_12c,&CStack_b4);
    CStack_120.x = CStack_b4.x;
    *(uint *)((int)&CStack_120 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&CStack_b4 + (uint)bVar18 * -8 + 4);
    *(uint *)((int)&CStack_120 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         *(uint *)((int)&CStack_b4 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&this_ptr->base,&CStack_120,fVar25,pSVar24);
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
    pSVar24 = (SDamageInfo *)&stack0xfffffcd0;
    fVar25 = 0.4;
    core_xform_cpp_transformVector3x4_FUN_00591530
              (&g_ZeroVector,
               (CMatrix3x4f *)
               (this_ptr->base).base.model.bone_transform.bone_model_matrices
               [this_ptr->bone_indices[1]].m,&CStack_1b0);
    pCVar22 = &CStack_114;
    CStack_114.x = CStack_1b0.x;
    *(uint *)((int)&CStack_114 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&CStack_1b0 + (uint)bVar18 * -8 + 4);
    *(uint *)((int)&CStack_114 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         *(uint *)((int)&CStack_1b0 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar22,&CStack_270);
    pCVar22 = &CStack_108;
    CStack_108.x = CStack_270.x;
    *(uint *)((int)&CStack_108 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&CStack_270 + (uint)bVar18 * -8 + 4);
    pCVar9 = this_ptr;
    *(uint *)((int)&CStack_108 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         *(uint *)((int)&CStack_270 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(&pCVar9->base,pCVar22,fVar25,pSVar24);
    pCVar14 = (this_ptr->base).victim;
    if ((pCVar14 != (CCharacter *)0x0) &&
       (EVar11 = (*(((pCVar14->base).vtable._uc)->_uc).getDeathState)(pCVar14),
       EVar11 != DEATH_STATE_ALIVE)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,10,1);
    }
    core_shadow_cpp_CShadow_playAttackSound_FUN_0053dfc0(this_ptr);
    break;
  default:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
switchD_0053dec8_caseD_0:
    this_ptr->is_opaque = 1;
    this_ptr->fade_alpha = 65000;
    iVar8 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
    pCVar16 = &(this_ptr->base).base.model;
    if (iVar8 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar16->base,5,1);
      break;
    }
    if (this_ptr->walk_target != 0) {
      fVar25 = this_ptr->walk_timeout - delta_time;
      this_ptr->walk_timeout = fVar25;
      if (0.0 < fVar25) {
        core_charactr_cpp_CCharacter_followActor_FUN_00428260
                  ((CCharacter *)this_ptr,(CDemonActor *)this_ptr->walk_target,1.0,1.0,
                   &this_ptr->walk_status);
        uVar2 = this_ptr->walk_status;
        if (uVar2 == 0) {
LAB_0053d2f5:
          this_ptr->walk_target = 0;
        }
        else {
          if (uVar2 < 2) {
            iVar23 = 1;
            iVar8 = 5;
          }
          else {
            if (uVar2 != 2) goto LAB_0053d2f5;
            iVar23 = 1;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,1);
            iVar8 = iVar8 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&pCVar16->base,iVar8,iVar23);
          if (this_ptr->walk_target != 0) break;
        }
      }
      else {
        this_ptr->walk_target = 0;
        this_ptr->walk_timeout = 0.0;
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar14 = (this_ptr->base).victim;
    if (pCVar14 != (CCharacter *)0x0) {
      if (this_ptr->chain_anchor != (CDemonActor *)0x0) {
        afStack_140[2] =
             (pCVar14->base).location.position.x - (this_ptr->base).base.base.location.position.x;
        afStack_140[3] =
             (pCVar14->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        fStack_130 = (pCVar14->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        afStack_254[2] = afStack_140[2];
        afStack_254[(uint)bVar18 * -2 + 3] = afStack_140[(uint)bVar18 * -2 + 3];
        afStack_254[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
             afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
        fStack_30 = SQRT(fStack_244 * fStack_244 +
                         afStack_254[2] * afStack_254[2] + afStack_254[3] * afStack_254[3]);
        if (((this_ptr->base).guard_distance < fStack_30) || ((float)32 < fStack_30))
        {
          (this_ptr->base).victim = (CCharacter *)0x0;
          break;
        }
      }
      pCVar16 = &(this_ptr->base).base.model;
      pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (this_ptr->chain_anchor,g_CTrapClassInfo.name_hash);
      if (pCVar13 == (CDemonActor *)0x0) {
        if ((this_ptr->base).victim == (CCharacter *)0x0) {
          fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                                (&pCVar16->base);
          if ((float)0.90000000000000002 < fStack_14) {
            fVar25 = 1.4013e-45;
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&pCVar16->base,iVar8,(int)fVar25);
          }
        }
        else {
          iVar8 = core_actor_cpp_randomChance_FUN_0040d060(0.4);
          if (iVar8 != 0) {
            core_shadow_cpp_CShadow_playAlertSound_FUN_0053df80(this_ptr);
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,5,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCVar16->base,0,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar25 = (float)65000;
    this_ptr->is_opaque = 0;
    out_box = (CBoundingBox3D *)0x53ce2d;
    dVar21 = round((double)(((fStack_20 - fStack_2c) * fVar25) / fStack_20))
    ;
    this_ptr->fade_alpha = (int)ROUND(dVar21);
    fVar19 = (float10)pCVar6->delta_time_float * (float10)6.283185f +
             (float10)this_ptr->eye_glow_phase;
    this_ptr->eye_glow_phase = (float)fVar19;
    fVar20 = (float10)fsin(fVar19);
    fVar19 = (float10)fcos(fVar19);
    fStack_38 = (float)fVar20;
    fStack_40 = (float)fVar19;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,out_box);
    puVar15 = (uint *)&stack0xfffffd54;
    puVar17 = &stack0xfffffd3c;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar17 = *puVar15;
      puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
      puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
    }
    fVar25 = (fStack_2b0 - fStack_2bc) * fStack_40;
    fVar5 = (fStack_2b8 - fStack_2c4) * fStack_38 * (float)0.59999999999999998;
    afStack_98[2] = fStack_2c4 + fStack_2b8;
    afStack_98[3] = fStack_2c0 + fStack_2b4;
    fStack_88 = fStack_2bc + fStack_2b0;
    afStack_f8[2] = fStack_2c4 + fStack_2b8;
    afStack_f8[(uint)bVar18 * -2 + 3] = afStack_98[(uint)bVar18 * -2 + 3];
    afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
         afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    CStack_234.x = fVar5;
    CStack_234.z = fVar25 * (float)0.59999999999999998;
    fStack_1ec = afStack_f8[2] * 0.5f;
    afStack_1e8[0] = afStack_f8[3] * 0.5f;
    afStack_1e8[1] = fStack_e8 * 0.5f;
    afStack_224[2] = afStack_f8[2] * 0.5f;
    afStack_224[(uint)bVar18 * -2 + 3] = afStack_1e8[(uint)bVar18 * -2];
    afStack_224[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
         afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    CStack_234.y = afStack_224[3];
    fStack_174 = fVar5 + (this_ptr->base).base.base.location.position.x;
    fStack_170 = afStack_224[3] + (this_ptr->base).base.base.location.position.y;
    fStack_16c = CStack_234.z + (this_ptr->base).base.base.location.position.z;
    CStack_204.x = fStack_174;
    afStack_224[(uint)bVar18 * -2 + 9] =
         *(float *)((int)&CStack_180 + ((uint)bVar18 * -2 + 3) * 4 + 4);
    afStack_224[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
         *(float *)((int)&CStack_180 + ((uint)bVar18 * -2 + (uint)bVar18 * -2 + 4) * 4 + 4);
    if (&CStack_234 != (CVector3f *)(afStack_224 + 8)) {
      CStack_234.x = CStack_204.x;
      CStack_234.y = CStack_204.y;
      CStack_234.z = CStack_204.z;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(&g_CDemonGlobe_020b1924,&CStack_234);
    g_CDemonGlobe_020b1924.intensity_multiplier = 60000;
    g_CDemonGlobe_020b1924.intensity.bytes[0] = ':';
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(&g_CDemonGlobe_020b1924,6.0);
    g_CDemonGlobe_020b1924.corona_mode = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(g_CDemonSetPtr,&g_CDemonGlobe_020b1924);
    pCVar16 = &(this_ptr->base).base.model;
    this_ptr->corona_added = 1;
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar16);
    fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60(&pCVar16->base)
    ;
    fVar19 = (float10)3;
    pow((float10)fStack_14 * (float10)2.0f,fVar19);
    fVar20 = pow((float10)2,fVar19);
    this_ptr->fade_scale = (float)((float10)1 + fVar19 / fVar20);
    iVar8 = 0;
    if (0 < pCVar12->bone_count) {
      do {
        iVar8 = iVar8 + 1;
        pCVar16->rest_bone_scales[0] = this_ptr->fade_scale;
        pCVar16 = (CDeformableModelInstance *)&(pCVar16->base).current_motion_index;
      } while (iVar8 < pCVar12->bone_count);
    }
    break;
  case 0xf:
    this_ptr->fade_alpha = 0;
    this_ptr->fade_scale = 1.0;
    (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
    return;
  case 0x14:
    fVar25 = (float)65000;
    this_ptr->is_opaque = 0;
    dVar21 = round((double)((fStack_2c * fVar25) / fStack_20));
    this_ptr->fade_alpha = (int)ROUND(dVar21);
  }
LAB_0053c710:
  fVar25 = (this_ptr->base).attack_cooldown;
  (this_ptr->base).base.collision_cylinder_radius = 2.0;
  if (0.0 < fVar25) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     (&(this_ptr->base).base.model.base);
  iVar8 = pSVar7->state_index;
  if ((((((iVar8 != 0xf) && (iVar8 != 0)) && (iVar8 != 1)) && ((iVar8 != 2 && (iVar8 != 3)))) &&
      (iVar8 != 4)) || ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    pCVar14 = (this_ptr->base).victim;
    if ((pCVar14 != (CCharacter *)0x0) &&
       (pCVar9 = (CShadow *)(*(((pCVar14->base).vtable._uc)->_uc).getGrabber)(pCVar14),
       pCVar9 == this_ptr)) {
      in_stack_fffffcd8 = (CShadow *)(this_ptr->base).victim;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,(CDemonActor *)in_stack_fffffcd8);
    }
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    fStack_27c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_278[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_278[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_1c8 = fStack_27c;
    afStack_1e8[(uint)bVar18 * -2 + 9] = afStack_278[(uint)bVar18 * -2];
    afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
         afStack_278[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    afStack_1e8[2] = fStack_1c8 + (this_ptr->base).base.model.accumulated_root_motion.x;
    afStack_1e8[3] = fStack_1c4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_1d8 = fStack_1c0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    fStack_144 = afStack_1e8[2];
    afStack_140[(uint)bVar18 * -2] = afStack_1e8[(uint)bVar18 * -2 + 3];
    afStack_140[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         afStack_1e8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4];
    fStack_e4 = fStack_144 + (this_ptr->base).base.position_delta.x;
    fStack_e0 = afStack_140[0] + (this_ptr->base).base.position_delta.y;
    fStack_dc = afStack_140[1] + (this_ptr->base).base.position_delta.z;
    CStack_60.x = fStack_e4;
    *(float *)((int)&CStack_60 + (uint)bVar18 * -8 + 4) = afStack_f8[(uint)bVar18 * -2 + 6];
    *(float *)((int)&CStack_60 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7];
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
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  core_shadow_cpp_CShadow_processChainConstraint_FUN_0053ece0(this_ptr);
  if ((0.0 <= this_ptr->periodic_timer) &&
     (fVar25 = this_ptr->periodic_timer - delta_time, this_ptr->periodic_timer = fVar25,
     fVar25 <= 0.0)) {
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
    this_ptr->periodic_timer = fStack_14;
    (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
              ((CDemonActor *)this_ptr,(CBoundingBox3D *)in_stack_fffffcd8);
    puVar15 = (uint *)&stack0xfffffd0c;
    puVar17 = &stack0xfffffd24;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar17 = *puVar15;
      puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
      puVar17 = puVar17 + (uint)bVar18 * -2 + 1;
    }
    fStack_6c = fStack_2dc + fStack_2d0;
    fStack_68 = fStack_2d8 + fStack_2cc;
    fStack_64 = fStack_2d4 + fStack_2c8;
    fStack_84 = fStack_2dc + fStack_2d0;
    afStack_98[(uint)bVar18 * -2 + 6] = afStack_98[(uint)bVar18 * -2 + 0xc];
    afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         afStack_98[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
    pCVar22 = &CStack_54;
    fStack_294 = fStack_84 * 0.5f;
    fStack_290 = fStack_80 * 0.5f;
    fStack_28c = fStack_7c * 0.5f;
    CStack_54.x = fStack_84 * 0.5f;
    *(uint *)((int)&CStack_54 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&stack0xfffffd70 + (uint)bVar18 * -8);
    *(uint *)((int)&CStack_54 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8) =
         *(uint *)((int)&stack0xfffffd70 + ((uint)bVar18 * -2 + (uint)bVar18 * -2 + 1) * 4);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              ((CDemonActor *)this_ptr,pCVar22,&CStack_a8);
    fStack_fc = CStack_a8.x;
    afStack_f8[(uint)bVar18 * -2] = *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + 4);
    afStack_f8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
         *(float *)((int)&CStack_a8 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    if (&fStack_150 != &fStack_fc) {
      fStack_150 = fStack_fc;
      fStack_14c = afStack_f8[0];
      fStack_148 = afStack_f8[1];
    }
    CStack_1a4.x = (int)ROUND(fStack_150 * 256.0f);
    CStack_1a4.y = (int)ROUND(fStack_14c * 256.0f);
    CStack_1a4.z = (int)ROUND(fStack_148 * 256.0f);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
                                 (g_CDemonSetPtr,&CStack_1a4,(CVector3i *)0x0);
    if (0.2f * (float)65536 <= (float)(int)fStack_14) {
      fVar25 = 1.4013e-45;
      iVar8 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                (&(this_ptr->base).base.model.base,iVar8,(int)fVar25);
      pCVar10 = core_charactr_cpp_CCharacter_pickRandomNamedWaypoint_FUN_0042b300
                          ((CCharacter *)this_ptr,"*");
      this_ptr->walk_target = (int)pCVar10;
      if (pCVar10 != (CWayPoint *)0x0) {
        fVar25 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.0,6.0);
        this_ptr->walk_timeout = fVar25;
      }
      this_ptr->periodic_timer = this_ptr->periodic_timer + 3.0f;
      return;
    }
  }
  return;
}
