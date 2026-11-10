// Name: core_stranger.cpp_CStranger_processFrame_FUN_00563060
// Address: 00563060
// Address Range: [[00563060, 005656e9]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00563060(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00563060(CStranger *this_ptr,float delta_time)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  CGame *pCVar4;
  CAmmoBox *this_ptr_00;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_138c [51];
  uint *apuStackY_12c0 [3];
  float afStackY_12b4 [901];
  ulonglong uVar12;
  CVector3f *pCVar13;
  float fStack_470;
  float fStack_46c;
  uint *puStack_468;
  float fStack_464;
  SDamageInfo aSStack_460 [4];
  float fStack_45c;
  int iStack_424;
  CStranger *pCStack_420;
  float fStack_41c;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float afStack_404 [6];
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float local_3d4 [6];
  float local_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float afStack_3a0 [4];
  float fStack_390;
  uint uStack_38c;
  float fStack_380;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  uint uStack_368;
  uint uStack_35c;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  CVector3f CStack_344;
  float fStack_338;
  float afStack_334 [4];
  float fStack_324;
  float fStack_320;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  uint uStack_2fc;
  float fStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float *pfStack_2d8;
  uint *apuStack_2d4 [2];
  float fStack_2cc;
  float afStack_2c8 [2];
  CVector3f CStack_2c0;
  float fStack_2b4;
  float afStack_2b0 [4];
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  uint uStack_290;
  float fStack_284;
  uint uStack_280;
  uint uStack_27c;
  uint uStack_278;
  float fStack_26c;
  float fStack_268;
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
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  uint uStack_224;
  float afStack_218 [3];
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [5];
  uint uStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  uint uStack_1c4;
  float fStack_1b8;
  uint uStack_1b4;
  float fStack_1b0;
  uint uStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  uint uStack_188;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  uint uStack_158;
  float fStack_14c;
  uint uStack_140;
  float fStack_13c;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_110;
  uint uStack_104;
  uint uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte *puStack_78;
  uint *puStack_74;
  int iStack_70;
  CBoxActor *pCStack_6c;
  float fStack_68;
  uint *puStack_64;
  CMotionController *pCStack_60;
  float fStack_5c;
  float fStack_58;
  CMotionController *pCStack_54;
  uint *puStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  uint *puStack_18;
  
  bVar11 = 0;
  local_2c = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                       (0x01C38BC0,"?DebugActionPending" + 1);
  if ((*(int *)&this_ptr->field_0x2698 != 0) &&
     ((this_ptr->carry_object_bbox).max.x < _DAT_005eb5cd)) {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2698 + 0x2b0) + 0x24))();
    pfVar8 = local_3d4;
    pfVar10 = &local_3bc;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    if (&this_ptr->carry_object_bbox != (CBoundingBox3D *)&local_3bc) {
      (this_ptr->carry_object_bbox).min.x = local_3bc;
      (this_ptr->carry_object_bbox).min.y = fStack_3b8;
      (this_ptr->carry_object_bbox).min.z = fStack_3b4;
    }
    pCVar13 = &(this_ptr->carry_object_bbox).max;
    if (pCVar13 != (CVector3f *)&fStack_3b0) {
      pCVar13->x = fStack_3b0;
      (this_ptr->carry_object_bbox).max.y = fStack_3ac;
      (this_ptr->carry_object_bbox).max.z = fStack_3a8;
    }
    fStack_29c = (this_ptr->carry_object_bbox).min.x + (this_ptr->carry_object_bbox).max.x;
    fStack_298 = (this_ptr->carry_object_bbox).min.y + (this_ptr->carry_object_bbox).max.y;
    fStack_294 = (this_ptr->carry_object_bbox).min.z + (this_ptr->carry_object_bbox).max.z;
    fStack_230 = fStack_29c;
    afStack_2b0[(uint)bVar11 * -2 + 0x21] = afStack_2b0[(uint)bVar11 * -2 + 6];
    afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
         afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    fStack_134 = fStack_230 * _DAT_005eb5d1;
    fStack_130 = fStack_22c * _DAT_005eb5d1;
    fStack_12c = fStack_228 * _DAT_005eb5d1;
    fStack_194 = fStack_230 * _DAT_005eb5d1;
    afStack_1fc[(uint)bVar11 * -2 + 0x1b] = afStack_1fc[(uint)bVar11 * -2 + 0x33];
    afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
         afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34];
    core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x2698);
    uStack_38c = uStack_278;
    afStack_3a0[(uint)bVar11 * -2 + 6] = afStack_2b0[(uint)bVar11 * -2 + 0xf];
    afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    core_actor_cpp_FUN_00408de0(this_ptr);
    afStack_334[2] = fStack_23c;
    afStack_334[(uint)bVar11 * -2 + 3] = afStack_2b0[(uint)bVar11 * -2 + 0x1e];
    afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
    if (&this_ptr->carry_object_world_center != (CVector3f *)(afStack_334 + 2)) {
      (this_ptr->carry_object_world_center).x = afStack_334[2];
      (this_ptr->carry_object_world_center).y = afStack_334[3];
      (this_ptr->carry_object_world_center).z = fStack_324;
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,delta_time);
  fVar2 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  fVar2 = this_ptr->action_timer - delta_time;
  this_ptr->action_timer = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->action_timer = 0.0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_stranger_cpp_FUN_00565f30();
  uStack_1e8 = uStack_290;
  afStack_1fc[(uint)bVar11 * -2 + 6] = afStack_2b0[(uint)bVar11 * -2 + 9];
  afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  core_actor_cpp_FUN_00408d70(this_ptr);
  uVar12 = CONCAT44(delta_time,this_ptr);
  CStack_20c.x = fStack_320;
  *(float *)((int)&CStack_20c + (uint)bVar11 * -8 + 4) = afStack_334[(uint)bVar11 * -2 + 6];
  *(float *)((int)&CStack_20c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
       afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  core_stranger_cpp_FUN_005656f0(uVar12);
  iStack_34 = 1;
  iStack_40 = 1;
  iStack_3c = 1;
  iStack_28 = 1;
  iStack_24 = 1;
  if (*(int *)&this_ptr->field_0x276c != 0) {
    iStack_34 = 0;
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_40 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)&this_ptr->field_0x2560c != 0) {
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    iStack_3c = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)&this_ptr->field_0x25614 != 0) || (this_ptr->ladder_to_descend != (CLadder *)0x0)) {
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if ((*(int *)&this_ptr->field_0x25608 != 0) || (this_ptr->action_pending == 4)) {
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  puVar1 = &this_ptr->field_0x2b4;
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1);
  if ((((0.0 < (float)puStack_18) ||
       (puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18))
      || (puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18))
     || (*(float *)&this_ptr->field_0x25a8 <= 0.0)) {
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  puVar1 = &this_ptr->field_0x2b4;
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1);
  if (((0.0 < (float)puStack_18) ||
      (puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18)) ||
     ((puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18 ||
      ((this_ptr->action_pending == 5 || (*(int *)&this_ptr->field_0x25604 != 0)))))) {
    iStack_24 = 0;
    iStack_34 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
  if (0.0 < (float)puStack_18) {
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_40 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (this_ptr->action_pending == 1) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (this_ptr->action_pending == 2) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (this_ptr->action_pending == 6) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (this_ptr->action_pending == 3) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (this_ptr->action_pending == 7) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x276c == 0) {
    if (*(int *)&this_ptr->field_0xdc != 0) {
      iStack_40 = 1;
    }
    if (*(float *)&this_ptr->field_0x24 != *(float *)&this_ptr->field_0x2574) {
      iStack_40 = 1;
    }
  }
  *(uint *)&this_ptr->field_0x2594 = *(uint *)&this_ptr->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar6 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar6 + 0x24) == 4) ||
     (iVar6 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar6 + 0x24) == 5)) {
    *(float *)&this_ptr->field_0x2508 = *(float *)&this_ptr->field_0x2508 * (float)_DAT_005eb5d5;
  }
  if (*(int *)&this_ptr->field_0x25618 == 0) {
    fVar2 = this_ptr->interact_blend - delta_time * (float)_DAT_005eb5d5;
    this_ptr->interact_blend = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->interact_blend = 0.0;
    }
  }
  else {
    fVar2 = delta_time * (float)_DAT_005eb5d5 + this_ptr->interact_blend;
    this_ptr->interact_blend = fVar2;
    if (1.0 < fVar2) {
      this_ptr->interact_blend = 1.0;
    }
  }
  iVar6 = *(int *)&this_ptr->field_0x25614;
  iStack_70 = 1;
  if (iVar6 == 0) {
    if (this_ptr->ladder_to_descend == (CLadder *)0x0) {
      iVar9 = *(int *)&this_ptr->field_0x25618;
      if (iVar9 == 0) {
        if (*(int *)&this_ptr->field_0x276c == 0) {
          if (*(int *)&this_ptr->field_0x2560c == 0) {
            iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                              ((CCharacter *)this_ptr,delta_time);
            if (iVar6 == 0) {
              if (iStack_34 != 0) {
                iVar6 = core_motion_cpp_FUN_005035c0();
                switch(*(uint *)(iVar6 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)&this_ptr->field_0x2570 != 0) {
                    iVar9 = 0;
                    iVar6 = core_motion_cpp_FUN_005035c0();
                    iVar6 = *(int *)(iVar6 + 0x24);
                    if (*(int *)&this_ptr->field_0x10a68 == 0) {
                      if (*(int *)&this_ptr->field_0x10a6c == 0) {
                        if ((float)_DAT_005eb5dd <= *(float *)&this_ptr->field_0x10a8c) {
                          if (_DAT_005eb5e5 < (double)*(float *)&this_ptr->field_0x10a8c) {
                            iVar9 = 5;
                          }
                        }
                        else {
                          iVar9 = 4;
                        }
                      }
                      else {
                        iVar9 = 2;
                      }
                    }
                    else if (*(int *)&this_ptr->field_0x10a70 == 0) {
                      iVar9 = 1;
                    }
                    else {
                      iVar9 = 3;
                    }
                    puStack_78 = &this_ptr->field_0x2b4;
                    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puStack_78);
                    pfStack_1c = (float *)((float)puStack_18 * _DAT_005fc1f0);
                    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puStack_78);
                    pfStack_1c = (float *)((float)puStack_18 * _DAT_005fc1f4 + (float)pfStack_1c);
                    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puStack_78);
                    fVar3 = (float)puStack_18 * _DAT_005fc1f8;
                    fVar2 = *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598;
                    *(float *)&this_ptr->field_0x2578 = fVar2;
                    this_ptr->turn_angle = this_ptr->turn_angle - fVar2;
                    *(float *)&this_ptr->field_0x25658 = *(float *)&this_ptr->field_0x25658 - fVar2;
                    *(float *)&this_ptr->field_0x25678 =
                         *(float *)&this_ptr->field_0x25678 - *(float *)&this_ptr->field_0x2578;
                    *(float *)&this_ptr->field_0x25660 =
                         *(float *)&this_ptr->field_0x25660 - *(float *)&this_ptr->field_0x2578;
                    *(float *)&this_ptr->field_0x25680 =
                         *(float *)&this_ptr->field_0x25680 - *(float *)&this_ptr->field_0x2578;
                    *(float *)&this_ptr->field_0x257c =
                         *(float *)&this_ptr->field_0x10a8c * delta_time *
                         (fVar3 + (float)pfStack_1c) + *(float *)&this_ptr->field_0x257c;
                    if ((*(int *)&this_ptr->field_0x10a84 != 0) &&
                       (*(int *)&this_ptr->field_0x2d04 != 0xe)) {
                      switch(iVar6) {
                      case 0:
                      case 1:
                      case 2:
                      case 4:
                      case 5:
                        iVar9 = 0xb;
                        break;
                      case 3:
                        iVar9 = 7;
                        break;
                      default:
                        goto switchD_00564db7_default;
                      }
                      *(uint *)&this_ptr->field_0x2570 = 0;
                    }
switchD_00564db7_default:
                    if (iVar9 != iVar6) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)&this_ptr->field_0x2b4,iVar9,1);
                    }
                    if (*(int *)&this_ptr->field_0x10a78 != 0) {
                      core_hero_cpp_FUN_004cfc80();
                      iStack_70 = 0;
                      break;
                    }
                  }
                  iStack_70 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  *(uint *)&this_ptr->field_0x2570 = 0;
                }
              }
            }
            else {
              uVar5 = *(uint *)&this_ptr->field_0x27ac;
              if (uVar5 < 2) {
                if (uVar5 == 1) {
                  iVar6 = 1;
                }
                else {
                  iVar6 = 0;
                }
LAB_00564b9f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&this_ptr->field_0x2b4,iVar6,1);
              }
              else {
                if (uVar5 < 3) {
                  iVar6 = 3;
                  goto LAB_00564b9f;
                }
                if (uVar5 != 3) {
                  iVar6 = 0;
                  goto LAB_00564b9f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&this_ptr->field_0x2b4,0,1);
                engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)&this_ptr->field_0x2510 = 0;
              *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
              *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
            }
          }
          else {
            iStack_20 = iVar6;
            if (*(int *)&this_ptr->field_0x10a74 != 0) {
              (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2560c + 0x2b0) + 0x24))();
              pfVar8 = afStack_404;
              pfVar10 = &fStack_3ec;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pfVar10 = *pfVar8;
                pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
                pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
              }
              fStack_350 = fStack_3ec + fStack_3e0;
              fStack_34c = fStack_3e8 + fStack_3dc;
              fStack_348 = fStack_3e4 + fStack_3d8;
              fStack_254 = fStack_3ec + fStack_3e0;
              afStack_2b0[(uint)bVar11 * -2 + 0x18] = afStack_3a0[(uint)bVar11 * -2 + 0x15];
              afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
                   afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
              fStack_8c = fStack_254 * _DAT_005eb5d1;
              fStack_88 = fStack_250 * _DAT_005eb5d1;
              fStack_84 = fStack_24c * _DAT_005eb5d1;
              fStack_17c = fStack_254 * _DAT_005eb5d1;
              afStack_1fc[(uint)bVar11 * -2 + 0x21] = afStack_ac[(uint)bVar11 * -2 + 9];
              afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
                   afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
              core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x2560c);
              uStack_224 = uStack_11c;
              afStack_2b0[(uint)bVar11 * -2 + 0x24] = afStack_1fc[(uint)bVar11 * -2 + 0x39];
              afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
                   afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3a];
              core_actor_cpp_FUN_00408de0(this_ptr);
              uStack_c8 = uStack_110;
              afStack_1fc[(uint)bVar11 * -2 + 0x4e] = afStack_1fc[(uint)bVar11 * -2 + 0x3c];
              afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4f] =
                   afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3d];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
              uStack_1d0 = uStack_104;
              afStack_1fc[(uint)bVar11 * -2 + 0xc] = afStack_1fc[(uint)bVar11 * -2 + 0x3f];
              afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                   afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40];
              puStack_468 = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
              puStack_18 = puStack_468;
              fStack_1a0 = fStack_3e0 - fStack_3ec;
              fStack_19c = fStack_3dc - fStack_3e8;
              fStack_198 = fStack_3d8 - fStack_3e4;
              fStack_260 = fStack_3e0 - fStack_3ec;
              afStack_2b0[(uint)bVar11 * -2 + 0x15] = afStack_1fc[(uint)bVar11 * -2 + 0x18];
              afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
                   afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
              fStack_d4 = fStack_260 * _DAT_005eb5d1;
              fStack_d0 = fStack_25c * _DAT_005eb5d1;
              fStack_cc = fStack_258 * _DAT_005eb5d1;
              fStack_1b8 = fStack_260 * _DAT_005eb5d1;
              afStack_1fc[(uint)bVar11 * -2 + 0x12] = afStack_1fc[(uint)bVar11 * -2 + 0x4b];
              afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
                   afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4c];
              uStack_1b4 = 0;
              if ((((fStack_c0 - SQRT(fStack_1b0 * fStack_1b0 + fStack_1b8 * fStack_1b8) <
                     (float)_DAT_005eb5ed) && (1.0 < fStack_c4)) &&
                  (fStack_c4 < (float)_DAT_005eb5f5)) &&
                 (ABS((float)puStack_468) < (float)_DAT_005eb5fd)) {
                puStack_50 = (uint *)(delta_time * _DAT_005eb605);
                if ((float)puStack_468 < -(float)puStack_50) {
                  puStack_468 = (uint *)-(float)puStack_50;
                }
                if ((float)puStack_50 < (float)puStack_468) {
                  puStack_468 = puStack_50;
                }
                *(float *)&this_ptr->field_0x34 =
                     *(float *)&this_ptr->field_0x34 + (float)puStack_468;
                core_charactr_cpp_FUN_00429d60(this_ptr);
                goto switchD_00564c2e_caseD_6;
              }
            }
            if (iStack_20 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&this_ptr->field_0x2b4,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004cf830((CHero *)this_ptr);
            }
          }
        }
        else {
          if (*(int *)&this_ptr->field_0x2770 == 0) {
            core_actor_cpp_FUN_00408de0(this_ptr);
            uStack_98 = uStack_368;
            afStack_ac[(uint)bVar11 * -2 + 6] = afStack_3a0[(uint)bVar11 * -2 + 0xf];
            afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
            uStack_1c4 = uStack_188;
            afStack_1fc[(uint)bVar11 * -2 + 0xf] = afStack_1fc[(uint)bVar11 * -2 + 0x1e];
            afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
                 afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
            puStack_18 = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
            puStack_30 = puStack_18;
            if ((float)puStack_18 < _DAT_005eb609) {
              puStack_30 = (uint *)((float)puStack_18 + _DAT_005eb605);
            }
            if (_DAT_005eb60d < (float)puStack_30) {
              puStack_30 = (uint *)((float)puStack_30 + _DAT_005eb611);
            }
            puStack_64 = (uint *)(delta_time * _DAT_005eb605);
            puStack_74 = (uint *)-(float)puStack_64;
            if ((float)puStack_30 < (float)puStack_74) {
              puStack_30 = puStack_74;
            }
            if ((float)puStack_64 < (float)puStack_30) {
              puStack_30 = puStack_64;
            }
            *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + (float)puStack_30;
            core_charactr_cpp_FUN_00429d60(this_ptr);
          }
          iStack_44 = *(int *)&this_ptr->field_0x276c;
          pfStack_1c = *(float **)(iStack_44 + 0x2b0);
          pCStack_54 = (CMotionController *)&this_ptr->field_0x2b4;
          core_skeleton_cpp_FUN_00546a90(pCStack_54);
          pfVar8 = pfStack_1c;
          iVar6 = iStack_44;
          uVar12 = CONCAT44(afStack_2b0 + 0x26,this_ptr);
          afStack_218[0] = (float)uStack_35c;
          afStack_2b0[(uint)bVar11 * -2 + 0x27] = afStack_3a0[(uint)bVar11 * -2 + 0x12];
          afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
               afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
          iVar6 = (*(code *)pfVar8[0x46])(iVar6,uVar12);
          if (iVar6 == 0) {
            *(uint *)&this_ptr->field_0x276c = 0;
          }
          else if (*(int *)&this_ptr->field_0x276c != 0) {
            fVar2 = this_ptr->grab_timer + delta_time;
            this_ptr->grab_timer = fVar2;
            if ((_DAT_005fc1fc <= fVar2) && (*(int *)&this_ptr->field_0x2770 != 1)) {
              pfStack_1c = (float *)core_motion_cpp_FUN_005038a0(pCStack_54);
              puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(pCStack_54);
              if ((float)puStack_18 + (float)pfStack_1c <= 0.0) {
                (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xf8))();
              }
              else if (*(int *)&this_ptr->field_0x10a74 != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_54,0x23,1);
                *(uint *)&this_ptr->field_0x10a74 = 0;
              }
            }
            goto switchD_00564c2e_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar9 + 0x2b0) + 0xa0))(iVar9);
        if ((iStack_424 == 0) || (this_ptr != pCStack_420)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0((CHero *)this_ptr);
        }
        else {
          puVar7 = (uint *)(*(int *)&pCStack_420->field_0x25618 + 0x34 + (uint)bVar11 * -8);
          pfStack_2d8 = *(float **)(*(int *)&pCStack_420->field_0x25618 + 0x30);
          apuStack_2d4[(uint)bVar11 * -2] = (uint *)*puVar7;
          apuStack_2d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               (uint *)puVar7[(uint)bVar11 * -2 + 1];
          fStack_4c = *(float *)&pCStack_420->field_0x10a90 * _DAT_005eb605 * (float)_DAT_005eb615 *
                      delta_time;
          if (fStack_4c < fStack_410) {
            fStack_4c = fStack_410;
          }
          if (fStack_414 < fStack_4c) {
            fStack_4c = fStack_414;
          }
          apuStack_2d4[0] = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
          fStack_48 = *(float *)&this_ptr->field_0x10a94 * _DAT_005eb605 * (float)_DAT_005eb615 *
                      delta_time;
          if (fStack_48 < fStack_408) {
            fStack_48 = fStack_408;
          }
          if (fStack_40c < fStack_48) {
            fStack_48 = fStack_40c;
          }
          puStack_18 = apuStack_2d4[0];
          pfStack_2d8 = (float *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
          pfStack_1c = pfStack_2d8;
          iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25618 + 0x2b0) + 0xa8))
                            (*(int *)&this_ptr->field_0x25618,&pfStack_2d8);
          if (iVar6 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&this_ptr->field_0x2b4,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0((CHero *)this_ptr);
          }
          else {
            puVar7 = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
            if ((float)_DAT_005eb5dd <= (float)puVar7) {
              if ((double)(float)puVar7 <= _DAT_005eb5e5) {
                iVar6 = 0;
              }
              else {
                iVar6 = 4;
              }
            }
            else {
              iVar6 = 5;
            }
            puStack_18 = puVar7;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&this_ptr->field_0x2b4,iVar6,1);
            pfVar8 = (float *)((int)this_ptr + (uint)bVar11 * -8 + 0x34);
            uStack_140 = *(uint *)&this_ptr->field_0x30;
            afStack_1fc[(uint)bVar11 * -2 + 0x30] = *pfVar8;
            afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31] =
                 pfVar8[(uint)bVar11 * -2 + 1];
            fStack_13c = (float)puVar7 * this_ptr->interact_blend + fStack_13c;
            core_charactr_cpp_FUN_00429d60(this_ptr);
            fStack_b4 = fStack_41c + (float)_DAT_005eb61d;
            uStack_bc = 0;
            uStack_b8 = 0;
            pfStack_1c = (float *)fStack_b4;
            core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x25618);
            fStack_338 = fStack_380;
            afStack_334[(uint)bVar11 * -2] = afStack_3a0[(uint)bVar11 * -2 + 9];
            afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            pfStack_1c = &this_ptr->interact_blend;
            fStack_b0 = fStack_338 - *(float *)&this_ptr->field_0x20;
            afStack_ac[0] = afStack_334[0] - *(float *)&this_ptr->field_0x24;
            afStack_ac[1] = afStack_334[1] - *(float *)&this_ptr->field_0x28;
            fStack_2b4 = fStack_b0;
            afStack_2b0[(uint)bVar11 * -2] = afStack_ac[(uint)bVar11 * -2];
            afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            core_actor_cpp_FUN_00408d30(this_ptr);
            fStack_1dc = fStack_200;
            afStack_1fc[(uint)bVar11 * -2 + 9] = afStack_1fc[(uint)bVar11 * -2];
            afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                 afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            fStack_170 = fStack_1dc * *pfStack_1c;
            fStack_16c = fStack_1d8 * *pfStack_1c;
            fStack_168 = fStack_1d4 * *pfStack_1c;
            fStack_284 = fStack_1dc * *pfStack_1c;
            afStack_2b0[(uint)bVar11 * -2 + 0xc] = afStack_1fc[(uint)bVar11 * -2 + 0x24];
            afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                 afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
            if ((float *)&this_ptr->field_0x2508 != afStack_2b0 + 0xb) {
              *(float *)&this_ptr->field_0x2508 = fStack_284;
              *(uint *)&this_ptr->field_0x250c = uStack_280;
              *(uint *)&this_ptr->field_0x2510 = uStack_27c;
            }
            *(uint *)&this_ptr->field_0x250c = 0;
          }
        }
      }
    }
    else {
      puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
      if (0.0 < (float)puStack_18) {
        if (*(float *)&this_ptr->field_0x24 <
            *(float *)&(this_ptr->ladder_to_descend->base).field_0x24 + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0,1);
        }
      }
      else {
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      if (0.0 < this_ptr->ladder_blend_time) {
        if (this_ptr->ladder_blend_time <= delta_time) {
          this_ptr->ladder_blend_time = 0.0;
          fStack_46c = 1.0;
        }
        else {
          fStack_46c = delta_time / this_ptr->ladder_blend_time;
          this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
        }
        pCVar13 = &this_ptr->ladder_offset;
        fStack_248 = pCVar13->x * fStack_46c;
        fVar2 = 1.0 - fStack_46c;
        fStack_244 = (this_ptr->ladder_offset).y * fStack_46c;
        fStack_240 = (this_ptr->ladder_offset).z * fStack_46c;
        fStack_2cc = fStack_248;
        afStack_2c8[(uint)bVar11 * -2] = afStack_2b0[(uint)bVar11 * -2 + 0x1b];
        afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
        *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_2cc;
        *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + afStack_2c8[0];
        *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + afStack_2c8[1];
        pCVar13->x = pCVar13->x * fVar2;
        (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar2;
        (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar2;
        fStack_58 = fVar2;
        puStack_18 = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
        *(float *)&this_ptr->field_0x2578 = (float)puStack_18 * fStack_46c;
      }
      puStack_18 = (uint *)
                   (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x48))
                             (this_ptr,*(uint *)&this_ptr->field_0x3430);
      *(uint **)&this_ptr->field_0x2574 = puStack_18;
    }
  }
  else {
    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
    if (0.0 < (float)puStack_18) {
      core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x25614);
      uStack_2fc = afStack_1fc[2];
      afStack_334[(uint)bVar11 * -2 + 0xf] = afStack_1fc[(uint)bVar11 * -2 + 3];
      afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      if (fStack_2f8 + (float)_DAT_005eb625 < *(float *)&this_ptr->field_0x24) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0,1);
      }
    }
    else {
      *(uint *)&this_ptr->field_0x25614 = 0;
    }
    if (0.0 < this_ptr->ladder_blend_time) {
      if (this_ptr->ladder_blend_time <= delta_time) {
        this_ptr->ladder_blend_time = 0.0;
        fStack_470 = 1.0;
      }
      else {
        fStack_470 = delta_time / this_ptr->ladder_blend_time;
        this_ptr->ladder_blend_time = this_ptr->ladder_blend_time - delta_time;
      }
      pCVar13 = &this_ptr->ladder_offset;
      fStack_3a4 = pCVar13->x * fStack_470;
      fVar2 = 1.0 - fStack_470;
      afStack_3a0[0] = (this_ptr->ladder_offset).y * fStack_470;
      afStack_3a0[1] = (this_ptr->ladder_offset).z * fStack_470;
      fStack_2f0 = fStack_3a4;
      afStack_334[(uint)bVar11 * -2 + 0x12] = afStack_3a0[(uint)bVar11 * -2];
      afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
           afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_2f0;
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_2ec;
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_2e8;
      pCVar13->x = pCVar13->x * fVar2;
      (this_ptr->ladder_offset).y = (this_ptr->ladder_offset).y * fVar2;
      (this_ptr->ladder_offset).z = (this_ptr->ladder_offset).z * fVar2;
      fStack_5c = fVar2;
      puStack_18 = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0();
      *(float *)&this_ptr->field_0x2578 = (float)puStack_18 * fStack_470;
    }
  }
switchD_00564c2e_caseD_6:
  iVar6 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar6 + 0x24) == 0x1b) &&
     (this_ptr_00 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)&this_ptr->field_0x25608),
     this_ptr_00 != (CAmmoBox *)0x0)) {
    puStack_18 = (uint *)
                 core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e600(this_ptr_00,(float)puStack_18);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_stranger_cpp_FUN_00567530(this_ptr,delta_time);
  if (iStack_70 != 0) {
    (this_ptr->pending_velocity).z = 0.0;
    (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
    (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  }
  if ((*(int *)&this_ptr->field_0x25614 == 0) && (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
    if (iStack_40 == 0) goto LAB_005639ef;
    pCStack_60 = (CMotionController *)&this_ptr->field_0x2b4;
    iVar6 = core_motion_cpp_FUN_005035c0();
    fVar2 = 0x41900000 * delta_time;
    iVar6 = *(int *)(iVar6 + 0x24);
    afStack_3a0[2] = *(float *)&this_ptr->field_0x2508 + *(float *)&this_ptr->field_0x257c;
    afStack_3a0[3] = *(float *)&this_ptr->field_0x250c + *(float *)&this_ptr->field_0x2580;
    fStack_390 = *(float *)&this_ptr->field_0x2510 + *(float *)&this_ptr->field_0x2584;
    CStack_2c0.x = afStack_3a0[2];
    *(float *)((int)&CStack_2c0 + (uint)bVar11 * -8 + 4) = afStack_3a0[(uint)bVar11 * -2 + 3];
    *(float *)((int)&CStack_2c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    *(uint *)&this_ptr->field_0x2510 = 0;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    *(uint *)&this_ptr->field_0x2584 = 0;
    *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
    *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2580;
    fStack_68 = fVar2;
    iStack_38 = iVar6;
    if (iVar6 == 7) {
      CStack_2c0.x = 0.0;
      CStack_2c0.y = 0.0;
      this_ptr->jump_speed = 0x41900000;
      this_ptr->airborne_timer = 0.0;
      CStack_2c0.z = fVar2;
    }
    else {
      if (iVar6 == 8) {
        fVar3 = (float)_DAT_005eb62d;
        this_ptr->jump_speed = 0x41900000;
        fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * fVar3;
        this_ptr->airborne_timer = 0.0;
        CStack_2c0.z = fVar2;
        goto LAB_00564f88;
      }
      if (iVar6 == 9) {
        fVar3 = (float)_DAT_005eb62d;
        CStack_2c0.x = 0.0;
        CStack_2c0.y = 0.0;
        fVar2 = 0x3F000000 * 0x41900000;
        CStack_2c0.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar2 * delta_time;
        *(float *)&this_ptr->field_0x258c = *(float *)&this_ptr->field_0x258c - delta_time * fVar3;
        if (this_ptr->jump_speed < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_60,0xf,1);
        }
      }
      else if (iVar6 == 10) {
        CStack_2c0.y = 0.0;
        CStack_2c0.x = 0.0;
        CStack_2c0.z = fVar2;
      }
      else if (iVar6 == 0xb) {
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = 0x41200000;
      }
      else if (iVar6 == 0xc) {
        CStack_2c0.z = 0x41200000 * delta_time;
        fVar2 = (float)_DAT_005eb62d;
        this_ptr->jump_speed = 0x41200000;
        fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * fVar2;
        this_ptr->airborne_timer = 0.0;
LAB_00564f88:
        CStack_2c0.y = 0.0;
        CStack_2c0.x = 0.0;
LAB_00564f8a:
        *(float *)&this_ptr->field_0x258c = fVar3;
      }
      else if (iVar6 == 0xd) {
        fVar3 = (float)_DAT_005eb62d;
        CStack_2c0.x = 0.0;
        CStack_2c0.y = 0.0;
        fVar2 = 0x3F000000 * 0x41200000;
        CStack_2c0.z = this_ptr->jump_speed * delta_time;
        this_ptr->airborne_timer = 0.0;
        this_ptr->jump_speed = this_ptr->jump_speed - fVar2 * delta_time;
        *(float *)&this_ptr->field_0x258c = *(float *)&this_ptr->field_0x258c - delta_time * fVar3;
        if (this_ptr->jump_speed < 0.0) {
          this_ptr->jump_speed = 0.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_60,0xf,1);
        }
      }
      else {
        if (iVar6 != 0xe) {
          if (iVar6 == 0xf) {
            CStack_2c0.z = 0.0;
            fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * (float)_DAT_005eb62d;
            this_ptr->airborne_timer = 9999.9;
            goto LAB_00564f88;
          }
          if (iVar6 == 0x10) {
            CStack_2c0.z = 0.0;
            CStack_2c0.y = 0.0;
            CStack_2c0.x = 0.0;
            fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * (float)_DAT_005eb62d;
          }
          else {
            fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * (float)_DAT_005eb62d;
          }
          goto LAB_00564f8a;
        }
        CStack_2c0.y = 0.0;
      }
    }
    core_actor_cpp_FUN_00408d30(this_ptr);
    afStack_2b0[2] = fStack_14c;
    afStack_2b0[(uint)bVar11 * -2 + 3] = afStack_1fc[(uint)bVar11 * -2 + 0x2d];
    afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e];
    fStack_314 = *(float *)&this_ptr->field_0x2588 * delta_time;
    pCVar13 = &CStack_2c0;
    fStack_310 = *(float *)&this_ptr->field_0x258c * delta_time;
    fStack_30c = *(float *)&this_ptr->field_0x2590 * delta_time;
    fStack_374 = fStack_314;
    afStack_3a0[(uint)bVar11 * -2 + 0xc] = afStack_334[(uint)bVar11 * -2 + 9];
    afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    fStack_128 = fStack_374 + afStack_2b0[2];
    fStack_124 = fStack_370 + afStack_2b0[3];
    fStack_120 = fStack_36c + fStack_2a0;
    fStack_ec = fStack_374 + afStack_2b0[2];
    afStack_1fc[(uint)bVar11 * -2 + 0x45] = afStack_1fc[(uint)bVar11 * -2 + 0x36];
    afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x46] =
         afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37];
    CStack_2c0.x = CStack_2c0.x + fStack_ec;
    CStack_2c0.y = CStack_2c0.y + fStack_e8;
    CStack_2c0.z = CStack_2c0.z + fStack_e4;
    this_ptr->fall_velocity_snapshot = *(float *)&this_ptr->field_0x258c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,pCVar13);
    if (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2574 + (float)_DAT_005eb635)
    {
      *(uint *)&this_ptr->field_0x2570 = 1;
    }
    if (((iStack_38 == 0xf) || (iStack_38 == 9)) || (iStack_38 == 0xd)) {
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)&this_ptr->field_0x258c);
        fVar2 = this_ptr->fall_velocity_snapshot;
        if (-fVar2 < (float)_DAT_005eb63d) {
          if (iStack_38 == 0xd) {
            iVar6 = 0xe;
            goto LAB_0056514e;
          }
          if (iStack_38 == 9) {
            iVar6 = 10;
            goto LAB_0056514e;
          }
          if (iStack_38 == 0xf) {
            iVar6 = 0x10;
            goto LAB_0056514e;
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_460);
          fVar2 = (-fVar2 + (float)_DAT_005eb645) * (float)_DAT_005eb64d * (float)_DAT_005eb655;
          fStack_45c = fVar2;
          if (0x42c80000 < (int)fVar2) {
            fStack_45c = 9999.0;
          }
          *(uint *)&this_ptr->field_0x10a60 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x110))(this_ptr);
          if ((*(float *)&this_ptr->field_0x25a8 <= 0.0) || (0x42c80000 < (int)fVar2)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&this_ptr->field_0x2b4,0x12,1);
            (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
            iVar6 = *(int *)&this_ptr->field_0x2570;
            fStack_464 = 0x3F000000;
            goto joined_r0x00565514;
          }
          iVar6 = 0x11;
LAB_0056514e:
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,iVar6,1);
        }
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x2c))(this_ptr,&DAT_0265370c);
      }
      iVar6 = *(int *)&this_ptr->field_0x2570;
      fStack_464 = 0x3F000000;
    }
    else {
      iVar6 = *(int *)&this_ptr->field_0x2570;
      fStack_464 = 0x3F000000;
    }
joined_r0x00565514:
    0x3F000000 = fStack_464;
    if (iVar6 == 0) {
      this_ptr->airborne_timer = this_ptr->airborne_timer + delta_time;
      if (iStack_38 == 3) {
        fStack_464 = fStack_464 * (float)_DAT_005eb5d5;
      }
      if ((fStack_464 < this_ptr->airborne_timer) ||
         (this_ptr->fall_velocity_snapshot < (float)_DAT_005eb645)) {
        if (iStack_38 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0xf,1);
        }
        *(uint *)&this_ptr->field_0x2570 = 0;
      }
      goto LAB_005639ef;
    }
  }
  else {
    puStack_18 = (uint *)&this_ptr->field_0x2508;
    core_actor_cpp_FUN_00408cf0(this_ptr);
    fStack_26c = fStack_2e4;
    afStack_2b0[(uint)bVar11 * -2 + 0x12] = afStack_334[(uint)bVar11 * -2 + 0x15];
    afStack_2b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_26c;
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_268;
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_264;
    puStack_18[2] = 0;
    puStack_18[1] = puStack_18[2];
    *puStack_18 = puStack_18[1];
  }
  this_ptr->airborne_timer = 0.0;
LAB_005639ef:
  (this_ptr->pending_velocity).z = 0.0;
  (this_ptr->pending_velocity).y = (this_ptr->pending_velocity).z;
  (this_ptr->pending_velocity).x = (this_ptr->pending_velocity).y;
  pCVar4 = g_CGamePtr;
  if (iStack_34 != 0) {
    if (*(int *)&this_ptr->field_0x10a80 != 0) {
      if (this_ptr->guns_drawn == 0) {
        this_ptr->guns_drawn = 1;
      }
      else {
        this_ptr->guns_drawn = 0;
        if (*(int *)&pCVar4->field_0x264 != 0) {
          *(uint *)&pCVar4->field_0x264 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
        }
      }
    }
    if (((*(int *)&this_ptr->field_0x10a7c != 0) &&
        (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) != 0)) &&
       (*(int *)(*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) + 0x44c)
        != 0)) {
      uVar5 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
      *(uint *)&g_CGamePtr->field_0x264 = uVar5;
      if (uVar5 != 0) {
        this_ptr->guns_drawn = 1;
      }
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
    }
  }
  if (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  else if (*(int *)(*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) +
                   0x44c) == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  if (iStack_3c != 0) {
    core_stranger_cpp_CStranger_updateWeaponLayerActions_FUN_0056db50(this_ptr,delta_time);
  }
  if (this_ptr->guns_drawn == 0) {
    fVar2 = this_ptr->guns_drawn_blend - delta_time / _DAT_005fc1c0;
    this_ptr->guns_drawn_blend = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->guns_drawn_blend = 0.0;
    }
  }
  else {
    fVar2 = delta_time / _DAT_005fc1bc + this_ptr->guns_drawn_blend;
    this_ptr->guns_drawn_blend = fVar2;
    if (1.0 < fVar2) {
      this_ptr->guns_drawn_blend = 1.0;
    }
  }
  fVar2 = *(float *)&this_ptr->field_0x25664 - delta_time / _DAT_005fc1c4;
  this_ptr->frame_cleared = 0.0;
  *(float *)&this_ptr->field_0x25664 = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)&this_ptr->field_0x25664 = 0;
  }
  fVar2 = *(float *)&this_ptr->field_0x25684 - delta_time / _DAT_005fc1c4;
  *(float *)&this_ptr->field_0x25684 = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)&this_ptr->field_0x25684 = 0;
  }
  if (iStack_28 != 0) {
    core_stranger_cpp_CStranger_handleActionButton_FUN_0056e4d0(this_ptr);
  }
  core_stranger_cpp_FUN_00565ff0(this_ptr);
  if (((*(int *)&this_ptr->field_0x24378 == 2) && (this_ptr->weapon != (CWeapon *)0x0)) &&
     (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
              ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0056ca10(this_ptr);
    core_stranger_cpp_FUN_00565ff0(this_ptr);
  }
  core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0056d3d0(this_ptr,delta_time,iStack_24);
  core_stranger_cpp_CStranger_updateClothSimulation_FUN_0056eb60(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
  if ((float)puStack_18 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004cf830((CHero *)this_ptr);
  }
  else {
    puStack_18 = (uint *)
                 core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
    if ((1.0 < (float)puStack_18) &&
       (pCStack_6c = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (*(uint *)&this_ptr->field_0x2560c),
       pCStack_6c != (CBoxActor *)0x0)) {
      core_stranger_cpp_FUN_00565f30();
      uStack_1ac = uStack_164;
      afStack_1fc[(uint)bVar11 * -2 + 0x15] = afStack_1fc[(uint)bVar11 * -2 + 0x27];
      afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
           afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
      core_actor_cpp_FUN_00408d70(this_ptr);
      afStack_ac[2] = fStack_e0;
      afStack_ac[(uint)bVar11 * -2 + 3] = afStack_1fc[(uint)bVar11 * -2 + 0x48];
      afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x49];
      fStack_308 = afStack_ac[2] - CStack_20c.x;
      fStack_304 = afStack_ac[3] - CStack_20c.y;
      fStack_300 = fStack_9c - CStack_20c.z;
      CStack_344.x = afStack_ac[2] - CStack_20c.x;
      *(float *)((int)&CStack_344 + (uint)bVar11 * -8 + 4) = afStack_334[(uint)bVar11 * -2 + 0xc];
      *(float *)((int)&CStack_344 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           afStack_334[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      CStack_344.y = 0.0;
      core_actor_cpp_FUN_00408d30(this_ptr);
      uStack_f8 = uStack_158;
      afStack_1fc[(uint)bVar11 * -2 + 0x42] = afStack_1fc[(uint)bVar11 * -2 + 0x2a];
      afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43] =
           afStack_1fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
      if (0.0 < fStack_f0) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041cb40(pCStack_6c,&CStack_20c,&CStack_344);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005683d0(this_ptr,0);
  core_stranger_cpp_FUN_0056bf00(this_ptr,0);
  core_stranger_cpp_FUN_0056bf00(this_ptr,1);
  core_stranger_cpp_CStranger_handleFireButton_FUN_0056e850(this_ptr,delta_time);
  core_inv_cpp_CInventory_updateInventory_FUN_004dccd0((CInventory *)&this_ptr->field_0x2437c);
  core_stranger_cpp_CStranger_processWeaponTick_FUN_0056eed0(this_ptr,delta_time);
  if ((this_ptr->weapon != (CWeapon *)0x0) && (*(int *)&(this_ptr->weapon->base).field_0xfc != 0)) {
    *(uint *)&this_ptr->field_0xfc = 1;
  }
  iVar6 = sound_sndmain_cpp_FUN_00550b70(this_ptr->goggle_sfx_handles[0]);
  if (iVar6 == 0) {
    if (*(int *)&g_CGamePtr->field_0x25c != 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->goggle_sfx_handles[1]);
      sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
      uVar5 = sound_sndmain_cpp_FUN_005506b0();
      this_ptr->goggle_sfx_handles[1] = uVar5;
      sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(0.0);
      uVar5 = sound_sndmain_cpp_FUN_005506b0();
      this_ptr->goggle_sfx_handles[0] = uVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
      sound_sndmain_cpp_setSfxFade_FUN_00551080(this_ptr->goggle_sfx_handles[0],1.0,1.0,0);
      return;
    }
  }
  else if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->goggle_sfx_handles[1]);
    sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->goggle_sfx_handles[0]);
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(1);
    sound_sndmain_cpp_FUN_005506b0();
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
  return;
}
