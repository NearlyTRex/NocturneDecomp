// Name: FUN_00535900
// Address: 00535900
// Address Range: [[00535900, 00537ccd]]
// Convention: unknown
// Signature: void FUN_00535900(int param_1,float param_2)

#include "nocturne.h"

void FUN_00535900(int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  ulonglong uVar11;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  byte auStack_2c4 [4];
  float fStack_2c0;
  int iStack_288;
  int iStack_284;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  byte local_250 [24];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  byte auStack_208 [12];
  byte auStack_1fc [12];
  byte auStack_1f0 [12];
  float fStack_1e4;
  uint uStack_1e0;
  float fStack_1dc;
  byte auStack_1d8 [12];
  byte auStack_1cc [12];
  byte auStack_1c0 [12];
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float afStack_19c [2];
  float fStack_194;
  byte auStack_190 [12];
  byte auStack_184 [12];
  float fStack_178;
  uint uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  byte auStack_160 [12];
  byte auStack_154 [12];
  uint uStack_148;
  float fStack_144;
  uint uStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  byte auStack_130 [12];
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [2];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  byte auStack_e8 [12];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  byte auStack_d0 [12];
  byte auStack_c4 [4];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint *puStack_a4;
  byte auStack_a0 [20];
  float fStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float *pfStack_4c;
  float fStack_48;
  int iStack_44;
  float fStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  uint *puStack_18;
  float fStack_14;
  
  local_24 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                       (0x01C03A10,"DebugActionPending");
  iVar5 = *(int *)(param_1 + 0x24f0);
  if ((iVar5 != 0) && (*(float *)(param_1 + 0x1fb18) < -999999.0f)) {
    puVar3 = (uint *)(**(code **)(*(int *)(iVar5 + 0x14c) + 0x14))(iVar5,local_250);
    if ((uint *)(param_1 + 0x1fb0c) != puVar3) {
      *(uint *)(param_1 + 0x1fb0c) = *puVar3;
      *(uint *)(param_1 + 0x1fb10) = puVar3[1];
      *(uint *)(param_1 + 0x1fb14) = puVar3[2];
    }
    if ((uint *)(param_1 + 0x1fb18) != puVar3 + 3) {
      *(uint *)(param_1 + 0x1fb18) = puVar3[3];
      *(uint *)(param_1 + 0x1fb1c) = puVar3[4];
      *(uint *)(param_1 + 0x1fb20) = puVar3[5];
    }
    fStack_220 = *(float *)(param_1 + 0x1fb0c) + *(float *)(param_1 + 0x1fb18);
    fStack_21c = *(float *)(param_1 + 0x1fb10) + *(float *)(param_1 + 0x1fb1c);
    fStack_1a8 = fStack_220 * 0.5f;
    fStack_218 = *(float *)(param_1 + 0x1fb14) + *(float *)(param_1 + 0x1fb20);
    fStack_1a4 = fStack_21c * 0.5f;
    fStack_1a0 = fStack_218 * 0.5f;
    uVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      (*(uint *)(param_1 + 0x24f0),auStack_1cc,&fStack_1a8);
    puVar3 = (uint *)
             core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,auStack_1fc,uVar4);
    if ((uint *)(param_1 + 0x1fb00) != puVar3) {
      *(uint *)(param_1 + 0x1fb00) = *puVar3;
      *(uint *)(param_1 + 0x1fb04) = puVar3[1];
      *(uint *)(param_1 + 0x1fb08) = puVar3[2];
    }
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(param_1,param_2);
  core_game_cpp_CGame_slamDT_FUN_004a5f00(0x01C775EC,param_2);
  fVar10 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0xbc8c) = fVar10;
  if (fVar10 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  fVar10 = *(float *)(param_1 + 0x1faa8) - param_2;
  *(float *)(param_1 + 0x1faa8) = fVar10;
  if (fVar10 < 0.0) {
    *(uint *)(param_1 + 0x1faa8) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  uVar4 = FUN_00538440(param_1,auStack_190);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,afStack_19c,uVar4);
  core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(param_1,param_2);
  iStack_28 = 1;
  iStack_30 = 1;
  iStack_2c = 1;
  bVar1 = true;
  uVar4 = 1;
  if (*(int *)(param_1 + 0x2590) != 0) {
    bVar1 = false;
    uVar4 = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"grabbedBy=%s\n",*(uint *)(param_1 + 0x2590));
    }
  }
  if (*(int *)(param_1 + 0x1fa0c) != 0) {
    bVar1 = false;
    uVar4 = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"pushedObject=%s\n",*(uint *)(param_1 + 0x1fa0c));
    }
  }
  if ((*(int *)(param_1 + 0x1fa14) != 0) || (*(int *)(param_1 + 0x1fa90) != 0)) {
    bVar1 = false;
    uVar4 = 0;
    iStack_30 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"ladder\n");
    }
  }
  if ((*(int *)(param_1 + 0x1fa08) != 0) || (*(int *)(param_1 + 0x1faa0) == 4)) {
    bVar1 = false;
    uVar4 = 0;
    iStack_28 = 0;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"pickup\n");
    }
  }
  iStack_5c = param_1 + 0x150;
  fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                               (iStack_5c,0x24);
  if ((((0.0 < fStack_14) ||
       (fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                     (iStack_5c,0x28), 0.0 < fStack_14)) ||
      (fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (iStack_5c,0x29), 0.0 < fStack_14)) ||
     (*(float *)(param_1 + 0x2434) <= 0.0)) {
    bVar1 = false;
    uVar4 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"hurt\n");
    }
  }
  iStack_1c = param_1 + 0x150;
  fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                               (iStack_1c,0x1c);
  if (((0.0 < fStack_14) ||
      (fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (iStack_1c,0x1d), 0.0 < fStack_14)) ||
     ((fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (iStack_1c,0x1e), 0.0 < fStack_14 ||
      ((*(int *)(param_1 + 0x1faa0) == 5 || (*(int *)(param_1 + 0x1fa04) != 0)))))) {
    bVar1 = false;
    uVar4 = 0;
    iStack_28 = 0;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"door\n");
    }
  }
  fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                               (param_1 + 0x150,0x2e);
  if (0.0 < fStack_14) {
    bVar1 = false;
    uVar4 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_28 = 0;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"sitting\n");
    }
  }
  if (*(int *)(param_1 + 0x1faa0) == 1) {
    uVar4 = 0;
    bVar1 = false;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"stashinventory\n");
    }
  }
  if (*(int *)(param_1 + 0x1faa0) == 2) {
    uVar4 = 0;
    bVar1 = false;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"placeobject\n");
    }
  }
  if (*(int *)(param_1 + 0x1faa0) == 6) {
    uVar4 = 0;
    bVar1 = false;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"putdownobject\n");
    }
  }
  if (*(int *)(param_1 + 0x1faa0) == 3) {
    uVar4 = 0;
    bVar1 = false;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"toss\n");
    }
  }
  if (*(int *)(param_1 + 0x1faa0) == 7) {
    uVar4 = 0;
    bVar1 = false;
    if (local_24 != 0) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"attackmelee\n");
    }
  }
  if (*(int *)(param_1 + 0x2590) == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      iStack_30 = 1;
    }
    if (*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x240c)) {
      iStack_30 = 1;
    }
  }
  fVar10 = (float)12.566370614;
  iStack_6c = param_1 + 0x150;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar10;
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
  if ((*(int *)(iVar5 + 0x24) == 4) ||
     (iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(),
     *(int *)(iVar5 + 0x24) == 5)) {
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a4) * (float)2;
  }
  if (*(int *)(param_1 + 0x1fa18) == 0) {
    fVar10 = *(float *)(param_1 + 0x1faac) - param_2 * (float)2;
    *(float *)(param_1 + 0x1faac) = fVar10;
    if (fVar10 < 0.0) {
      *(uint *)(param_1 + 0x1faac) = 0;
    }
  }
  else {
    fVar10 = param_2 * (float)2 + *(float *)(param_1 + 0x1faac);
    *(float *)(param_1 + 0x1faac) = fVar10;
    if (1.0 < fVar10) {
      *(uint *)(param_1 + 0x1faac) = 0x3f800000;
    }
  }
  iStack_68 = 1;
  if (*(int *)(param_1 + 0x1fa14) == 0) {
    if (*(int *)(param_1 + 0x1fa90) == 0) {
      iVar5 = *(int *)(param_1 + 0x1fa18);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x2590);
        if (iVar5 == 0) {
          if (*(int *)(param_1 + 0x1fa0c) == 0) {
            iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
            if (iVar5 == 0) {
              if (iStack_28 != 0) {
                iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
                switch(*(uint *)(iVar5 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)(param_1 + 0x2408) != 0) {
                    iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
                    iStack_60 = *(int *)(iVar5 + 0x24);
                    iStack_84 = 0;
                    if (*(int *)(param_1 + 0xbc94) == 0) {
                      if (*(int *)(param_1 + 0xbc98) == 0) {
                        if ((float)-0.01 <= *(float *)(param_1 + 0xbcb4)) {
                          if (0.01 < (double)*(float *)(param_1 + 0xbcb4)) {
                            iStack_84 = 5;
                          }
                        }
                        else {
                          iStack_84 = 4;
                        }
                      }
                      else {
                        iStack_84 = 2;
                      }
                    }
                    else if (*(int *)(param_1 + 0xbc9c) == 0) {
                      iStack_84 = 1;
                    }
                    else {
                      iStack_84 = 3;
                    }
                    puStack_18 = (uint *)(param_1 + 0x150);
                    fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                                 (puStack_18,1);
                    fStack_8c = fStack_14 * 2.5f;
                    fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                                 (puStack_18,3);
                    puVar3 = puStack_18;
                    puStack_18 = (uint *)(fStack_14 * 3.5f + fStack_8c);
                    fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                                 (puVar3,2);
                    fVar2 = fStack_14 * 1.5f;
                    fVar10 = *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
                    *(float *)(param_1 + 0x2410) = fVar10;
                    *(float *)(param_1 + 0x1fab8) = *(float *)(param_1 + 0x1fab8) - fVar10;
                    *(float *)(param_1 + 0x1fa54) = *(float *)(param_1 + 0x1fa54) - fVar10;
                    *(float *)(param_1 + 0x1fa74) =
                         *(float *)(param_1 + 0x1fa74) - *(float *)(param_1 + 0x2410);
                    *(float *)(param_1 + 0x1fa5c) =
                         *(float *)(param_1 + 0x1fa5c) - *(float *)(param_1 + 0x2410);
                    *(float *)(param_1 + 0x1fa7c) =
                         *(float *)(param_1 + 0x1fa7c) - *(float *)(param_1 + 0x2410);
                    *(float *)(param_1 + 0x2414) =
                         *(float *)(param_1 + 0xbcb4) * param_2 * (fVar2 + (float)puStack_18) +
                         *(float *)(param_1 + 0x2414);
                    if ((*(int *)(param_1 + 0xbcb0) != 0) && (*(int *)(param_1 + 0x2a84) != 0xe)) {
                      switch(iStack_60) {
                      case 0:
                      case 2:
                      case 4:
                      case 5:
                        *(uint *)(param_1 + 0x2408) = 0;
                        iStack_84 = 0xb;
                        break;
                      case 1:
                        *(uint *)(param_1 + 0x2408) = 0;
                        iStack_84 = 0xb;
                        break;
                      case 3:
                        *(uint *)(param_1 + 0x2408) = 0;
                        iStack_84 = 7;
                      }
                    }
                    if (iStack_84 != iStack_60) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                                (param_1 + 0x150,iStack_84,1);
                    }
                    if (*(int *)(param_1 + 0xbca4) != 0) {
                      FUN_004b5b00();
                      iStack_68 = 0;
                      break;
                    }
                  }
                  iStack_68 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  *(uint *)(param_1 + 0x2408) = 0;
                }
              }
            }
            else {
              uVar7 = *(uint *)(param_1 + 0x25a8);
              if (uVar7 < 2) {
                if (uVar7 == 1) {
                  uVar11 = 0x100000001;
                }
                else {
                  uVar11 = 0x100000000;
                }
LAB_0053713f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (param_1 + 0x150,uVar11);
              }
              else {
                if (uVar7 < 3) {
                  uVar11 = 0x100000003;
                  goto LAB_0053713f;
                }
                if (uVar7 != 3) {
                  uVar11 = 0x100000000;
                  goto LAB_0053713f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
                engine_console_cpp_CConsole_printf_FUN_0043ac60
                          (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
              }
              *(uint *)(param_1 + 0x23ac) = 0;
              *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
              *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
            }
          }
          else {
            iStack_80 = iVar5;
            if (*(int *)(param_1 + 0xbca0) != 0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa0c) + 0x14c) + 0x14))
                        (*(int *)(param_1 + 0x1fa0c),&fStack_268);
              fStack_214 = fStack_268 + fStack_25c;
              fStack_210 = fStack_264 + fStack_258;
              fStack_16c = fStack_214 * 0.5f;
              fStack_168 = fStack_210 * 0.5f;
              fStack_20c = fStack_260 + fStack_254;
              fStack_164 = fStack_20c * 0.5f;
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        (*(uint *)(param_1 + 0x1fa0c),auStack_130,&fStack_16c);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (param_1,auStack_c4,auStack_130);
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                        (auStack_1d8,auStack_c4);
              fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
              fStack_100 = fStack_25c - fStack_268;
              fStack_f8 = fStack_254 - fStack_260;
              fStack_178 = fStack_100 * 0.5f;
              fStack_170 = fStack_f8 * 0.5f;
              uStack_174 = 0;
              fStack_fc = fStack_258 - fStack_264;
              if ((((fStack_bc - SQRT(fStack_170 * fStack_170 + fStack_178 * fStack_178) <
                     (float)3) && (1.0 < fStack_c0)) &&
                  (fStack_c0 < (float)5)) && (ABS(fStack_14) < (float)0.78539816337500001)
                 ) {
                fStack_40 = param_2 * (float)3.1415926535000001;
                fStack_2c8 = fStack_14;
                if (fStack_14 < -fStack_40) {
                  fStack_2c8 = -fStack_40;
                }
                if (fStack_40 < fStack_2c8) {
                  fStack_2c8 = fStack_40;
                }
                *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_2c8;
                core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(param_1,param_1 + 0x30);
                goto switchD_005371ce_caseD_6;
              }
            }
            if (iStack_80 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
              core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0();
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x2594) == 0) {
            uVar9 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              (param_1,auStack_160,iVar5 + 0x20);
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(auStack_e8,uVar9);
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            fStack_2d8 = fStack_14;
            if (fStack_14 < (float)-1.57079632675) {
              fStack_2d8 = fStack_14 + 3.141593f;
            }
            if ((float)1.57079632675 < fStack_2d8) {
              fStack_2d8 = fStack_2d8 + -3.141593f;
            }
            fStack_54 = param_2 * (float)3.1415926535000001;
            fStack_74 = -fStack_54;
            if (fStack_2d8 < fStack_74) {
              fStack_2d8 = fStack_74;
            }
            if (fStack_54 < fStack_2d8) {
              fStack_2d8 = fStack_54;
            }
            *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_2d8;
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(param_1,param_1 + 0x30);
          }
          iStack_20 = *(int *)(param_1 + 0x2590);
          fStack_8c = *(float *)(iStack_20 + 0x14c);
          iStack_3c = param_1 + 0x150;
          uVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                            (iStack_3c,auStack_154,0);
          iVar5 = (**(code **)((int)fStack_8c + 0x108))(iStack_20,param_1,uVar9);
          if (iVar5 == 0) {
            *(uint *)(param_1 + 0x2590) = 0;
          }
          else if (*(int *)(param_1 + 0x2590) != 0) {
            fVar10 = *(float *)(param_1 + 0x1fb3c) + param_2;
            *(float *)(param_1 + 0x1fb3c) = fVar10;
            if ((1.5f <= fVar10) && (*(int *)(param_1 + 0x2594) != 1)) {
              puStack_18 = (uint *)
                           core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                     (iStack_3c,0x22);
              fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                           (iStack_3c,0x23);
              if (fStack_14 + (float)puStack_18 <= 0.0) {
                (**(code **)(*(int *)(param_1 + 0x14c) + 0xe8))();
              }
              else if (*(int *)(param_1 + 0xbca0) != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iStack_3c,0x23,1);
                *(uint *)(param_1 + 0xbca0) = 0;
              }
            }
            goto switchD_005371ce_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar5 + 0x14c) + 0x90))(iVar5,&iStack_288);
        if ((iStack_288 == 0) || (param_1 != iStack_284)) {
          core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920();
        }
        else {
          iVar5 = *(int *)(iStack_284 + 0x1fa18);
          fStack_b8 = *(float *)(iVar5 + 0x30);
          uStack_b4 = *(uint *)(iVar5 + 0x34);
          uStack_b0 = *(uint *)(iVar5 + 0x38);
          fStack_38 = *(float *)(param_1 + 0xbcb8) * (float)3.1415926535000001 * (float)0.5
                      * param_2;
          if (fStack_38 < fStack_274) {
            fStack_38 = fStack_274;
          }
          if (fStack_278 < fStack_38) {
            fStack_38 = fStack_278;
          }
          uStack_b4 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
          fStack_34 = *(float *)(param_1 + 0xbcbc) * (float)3.1415926535000001 * (float)0.5
                      * param_2;
          if (fStack_34 < fStack_26c) {
            fStack_34 = fStack_26c;
          }
          if (fStack_270 < fStack_34) {
            fStack_34 = fStack_270;
          }
          fStack_14 = (float)uStack_b4;
          fStack_b8 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
          fStack_14 = fStack_b8;
          iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa18) + 0x14c) + 0x98))
                            (*(int *)(param_1 + 0x1fa18),&fStack_b8,param_1 + 0xbc94);
          iStack_44 = param_1 + 0x150;
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iStack_44,0,1);
            core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920();
          }
          else {
            fVar10 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
            if ((float)-0.01 <= fVar10) {
              if ((double)fVar10 <= 0.01) {
                uVar11 = 0x100000000;
              }
              else {
                uVar11 = 0x100000004;
              }
            }
            else {
              uVar11 = 0x100000005;
            }
            fStack_14 = fVar10;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iStack_44,uVar11);
            uStack_148 = *(uint *)(param_1 + 0x30);
            uStack_140 = *(uint *)(param_1 + 0x38);
            fStack_144 = fVar10 * *(float *)(param_1 + 0x1faac) + *(float *)(param_1 + 0x34);
            core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(param_1,&uStack_148);
            uStack_ac = 0;
            puStack_a4 = (uint *)(fStack_280 + (float)-1);
            uStack_a8 = 0;
            puStack_18 = puStack_a4;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      (*(uint *)(param_1 + 0x1fa18),&fStack_13c,&uStack_ac);
            fStack_124 = fStack_13c - *(float *)(param_1 + 0x20);
            fStack_120 = fStack_138 - *(float *)(param_1 + 0x24);
            fStack_11c = fStack_134 - *(float *)(param_1 + 0x28);
            pfStack_4c = (float *)(param_1 + 0x1faac);
            pfVar6 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                        (param_1,auStack_1c0,&fStack_124);
            fStack_22c = *pfVar6 * *pfStack_4c;
            fStack_228 = pfVar6[1] * *pfStack_4c;
            fStack_224 = pfVar6[2] * *pfStack_4c;
            if ((float *)(param_1 + 0x23a4) != &fStack_22c) {
              *(float *)(param_1 + 0x23a4) = fStack_22c;
              *(float *)(param_1 + 0x23a8) = fStack_228;
              *(float *)(param_1 + 0x23ac) = fStack_224;
            }
            *(uint *)(param_1 + 0x23a8) = 0;
          }
        }
      }
    }
    else {
      fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                   (param_1 + 0x150,0x2b);
      if (0.0 < fStack_14) {
        if (*(float *)(param_1 + 0x24) < *(float *)(*(int *)(param_1 + 0x1fa90) + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x1fa90) = 0;
      }
      if (0.0 < *(float *)(param_1 + 0x1fccc)) {
        if (*(float *)(param_1 + 0x1fccc) <= param_2) {
          *(uint *)(param_1 + 0x1fccc) = 0;
          fStack_2d4 = 1.0;
        }
        else {
          fStack_2d4 = param_2 / *(float *)(param_1 + 0x1fccc);
          *(float *)(param_1 + 0x1fccc) = *(float *)(param_1 + 0x1fccc) - param_2;
        }
        pfVar6 = (float *)(param_1 + 0x1fcbc);
        fStack_f4 = *pfVar6 * fStack_2d4;
        fStack_f0 = *(float *)(param_1 + 0x1fcc0) * fStack_2d4;
        fStack_ec = *(float *)(param_1 + 0x1fcc4) * fStack_2d4;
        fStack_58 = 1.0 - fStack_2d4;
        *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_f4;
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_f0;
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_ec;
        *pfVar6 = *pfVar6 * fStack_58;
        *(float *)(param_1 + 0x1fcc0) = *(float *)(param_1 + 0x1fcc0) * fStack_58;
        *(float *)(param_1 + 0x1fcc4) = *(float *)(param_1 + 0x1fcc4) * fStack_58;
        fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
        *(float *)(param_1 + 0x2410) = fStack_14 * fStack_2d4;
      }
      fStack_14 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0x38))
                                   (param_1,*(uint *)(param_1 + 0x2dd4),0);
      *(float *)(param_1 + 0x240c) = fStack_14;
    }
  }
  else {
    fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                 (param_1 + 0x150,0x2a);
    if (0.0 < fStack_14) {
      iVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        (*(uint *)(param_1 + 0x1fa14),auStack_d0,
                         *(int *)(param_1 + 0x1fa14) + 0x2cc);
      if (*(float *)(iVar5 + 4) + (float)-4 < *(float *)(param_1 + 0x24)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      }
    }
    else {
      *(uint *)(param_1 + 0x1fa14) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x1fccc)) {
      if (*(float *)(param_1 + 0x1fccc) <= param_2) {
        *(uint *)(param_1 + 0x1fccc) = 0;
        fStack_2d0 = 1.0;
      }
      else {
        fStack_2d0 = param_2 / *(float *)(param_1 + 0x1fccc);
        *(float *)(param_1 + 0x1fccc) = *(float *)(param_1 + 0x1fccc) - param_2;
      }
      pfVar6 = (float *)(param_1 + 0x1fcbc);
      fStack_1b4 = *pfVar6 * fStack_2d0;
      fStack_1b0 = *(float *)(param_1 + 0x1fcc0) * fStack_2d0;
      fStack_1ac = *(float *)(param_1 + 0x1fcc4) * fStack_2d0;
      fStack_48 = 1.0 - fStack_2d0;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_1b4;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_1b0;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_1ac;
      *pfVar6 = *pfVar6 * fStack_48;
      *(float *)(param_1 + 0x1fcc0) = *(float *)(param_1 + 0x1fcc0) * fStack_48;
      *(float *)(param_1 + 0x1fcc4) = *(float *)(param_1 + 0x1fcc4) * fStack_48;
      fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
      *(float *)(param_1 + 0x2410) = fStack_14 * fStack_2d0;
    }
  }
switchD_005371ce_caseD_6:
  iStack_70 = param_1 + 0x150;
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
  if ((*(int *)(iVar5 + 0x24) == 0x1b) &&
     (iStack_78 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(uint *)(param_1 + 0x1fa08),DAT_00764230), iStack_78 != 0)) {
    fStack_14 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60();
    core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(iStack_78,fStack_14);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0();
  core_stranger_cpp_CStranger_updateTurnBlending_FUN_005397b0(param_1,param_2);
  if (iStack_68 != 0) {
    *(uint *)(param_1 + 0x1fae8) = 0;
    *(uint *)(param_1 + 0x1fae4) = *(uint *)(param_1 + 0x1fae8);
    *(uint *)(param_1 + 0x1fae0) = *(uint *)(param_1 + 0x1fae4);
  }
  if ((*(int *)(param_1 + 0x1fa14) == 0) && (*(int *)(param_1 + 0x1fa90) == 0)) {
    if (iStack_30 == 0) goto LAB_00536144;
    iStack_64 = param_1 + 0x150;
    iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
    fStack_10c = *(float *)(param_1 + 0x23a4) + *(float *)(param_1 + 0x2414);
    iStack_88 = *(int *)(iVar5 + 0x24);
    fStack_108 = *(float *)(param_1 + 0x23a8) + *(float *)(param_1 + 0x2418);
    fStack_50 = 18.0f * param_2;
    fStack_104 = *(float *)(param_1 + 0x23ac) + *(float *)(param_1 + 0x241c);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    if (iStack_88 == 7) {
      fStack_10c = 0.0;
      fStack_108 = 0.0;
      *(float *)(param_1 + 0x1fafc) = 18.0f;
      *(uint *)(param_1 + 0x1faf8) = 0;
      fStack_104 = fStack_50;
    }
    else {
      if (iStack_88 == 8) {
        fVar10 = (float)32;
        *(float *)(param_1 + 0x1fafc) = 18.0f;
        fVar10 = *(float *)(param_1 + 0x2424) - param_2 * fVar10;
        *(uint *)(param_1 + 0x1faf8) = 0;
        fStack_104 = fStack_50;
        goto LAB_00537584;
      }
      if (iStack_88 == 9) {
        fVar2 = (float)32;
        fVar10 = 0.5f * 18.0f;
        fStack_10c = 0.0;
        fStack_108 = 0.0;
        fStack_104 = *(float *)(param_1 + 0x1fafc) * param_2;
        *(uint *)(param_1 + 0x1faf8) = 0;
        *(float *)(param_1 + 0x1fafc) = *(float *)(param_1 + 0x1fafc) - fVar10 * param_2;
        *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * fVar2;
        if (*(float *)(param_1 + 0x1fafc) < 0.0) {
          *(uint *)(param_1 + 0x1fafc) = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iStack_64,0xf,1);
        }
      }
      else if (iStack_88 == 10) {
        fStack_108 = 0.0;
        fStack_10c = 0.0;
        fStack_104 = fStack_50;
      }
      else if (iStack_88 == 0xb) {
        *(uint *)(param_1 + 0x1faf8) = 0;
        *(float *)(param_1 + 0x1fafc) = 10.0f;
      }
      else if (iStack_88 == 0xc) {
        fStack_104 = 10.0f * param_2;
        fVar10 = (float)32;
        *(float *)(param_1 + 0x1fafc) = 10.0f;
        fVar10 = *(float *)(param_1 + 0x2424) - param_2 * fVar10;
        *(uint *)(param_1 + 0x1faf8) = 0;
LAB_00537584:
        fStack_108 = 0.0;
        fStack_10c = 0.0;
LAB_00537586:
        *(float *)(param_1 + 0x2424) = fVar10;
      }
      else if (iStack_88 == 0xd) {
        fVar2 = (float)32;
        fStack_10c = 0.0;
        fStack_108 = 0.0;
        fVar10 = 0.5f * 10.0f;
        fStack_104 = *(float *)(param_1 + 0x1fafc) * param_2;
        *(uint *)(param_1 + 0x1faf8) = 0;
        *(float *)(param_1 + 0x1fafc) = *(float *)(param_1 + 0x1fafc) - fVar10 * param_2;
        *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * fVar2;
        if (*(float *)(param_1 + 0x1fafc) < 0.0) {
          *(uint *)(param_1 + 0x1fafc) = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iStack_64,0xf,1);
        }
      }
      else {
        if (iStack_88 != 0xe) {
          if (iStack_88 == 0xf) {
            fStack_104 = 0.0;
            fVar10 = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
            *(uint *)(param_1 + 0x1faf8) = 0x461c3f9a;
            goto LAB_00537584;
          }
          if (iStack_88 == 0x10) {
            fStack_104 = 0.0;
            fStack_108 = 0.0;
            fStack_10c = 0.0;
            fVar10 = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
          }
          else {
            fVar10 = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
          }
          goto LAB_00537586;
        }
        fStack_108 = 0.0;
      }
    }
    pfVar6 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                (param_1,auStack_a0,param_1 + 0x1fae0);
    fStack_238 = *(float *)(param_1 + 0x2420) * param_2;
    fStack_234 = *(float *)(param_1 + 0x2424) * param_2;
    fStack_230 = param_2 * *(float *)(param_1 + 0x2428);
    fStack_dc = fStack_238 + *pfVar6;
    fStack_d8 = fStack_234 + pfVar6[1];
    fStack_10c = fStack_10c + fStack_dc;
    fStack_d4 = fStack_230 + pfVar6[2];
    fStack_108 = fStack_108 + fStack_d8;
    fStack_104 = fStack_104 + fStack_d4;
    *(uint *)(param_1 + 0x1fcd4) = *(uint *)(param_1 + 0x2424);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&fStack_10c);
    if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x240c) + (float)0.10000000000000001) {
      *(uint *)(param_1 + 0x2408) = 1;
    }
    if (((iStack_88 == 0xf) || (iStack_88 == 9)) || (iStack_88 == 0xd)) {
      if (*(int *)(param_1 + 0x2408) != 0) {
        FUN_004940d0();
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"Splat at %3.2f fps\n",
                   (double)*(float *)(param_1 + 0x2424));
        fVar10 = -*(float *)(param_1 + 0x1fcd4);
        if (fVar10 < (float)20) {
          if (iStack_88 == 0xd) {
            uVar11 = 0x10000000e;
            goto LAB_00537712;
          }
          if (iStack_88 == 9) {
            uVar11 = 0x10000000a;
            goto LAB_00537712;
          }
          if (iStack_88 == 0xf) {
            uVar11 = 0x100000010;
            goto LAB_00537712;
          }
        }
        else {
          iStack_7c = 0;
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0();
          fStack_2c0 = (fVar10 + (float)-20) * (float)0.050000000000000003 *
                       (float)100;
          if (0x42c80000 < (int)fStack_2c0) {
            iStack_7c = 1;
            fStack_2c0 = 9999.0;
          }
          *(uint *)(param_1 + 0xbc8c) = 0;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,auStack_2c4);
          if ((*(float *)(param_1 + 0x2434) <= 0.0) || (iStack_7c != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x12,1);
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"fall-?.wav");
            iVar5 = *(int *)(param_1 + 0x2408);
            fStack_2cc = 0.5f;
            goto joined_r0x00537afc;
          }
          uVar11 = 0x100000011;
LAB_00537712:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar11);
        }
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))
                  (param_1,&DAT_02dd1184,fVar10 * 0.025f + 1.0);
      }
      iVar5 = *(int *)(param_1 + 0x2408);
      fStack_2cc = 0.5f;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x2408);
      fStack_2cc = 0.5f;
    }
joined_r0x00537afc:
    0.5f = fStack_2cc;
    if (iVar5 == 0) {
      *(float *)(param_1 + 0x1faf8) = *(float *)(param_1 + 0x1faf8) + param_2;
      if (iStack_88 == 3) {
        fStack_2cc = fStack_2cc * (float)2;
      }
      if ((fStack_2cc < *(float *)(param_1 + 0x1faf8)) ||
         (*(float *)(param_1 + 0x1fcd4) < (float)-20)) {
        if (iStack_88 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xf,1);
        }
        *(uint *)(param_1 + 0x2408) = 0;
      }
      goto LAB_00536144;
    }
  }
  else {
    puStack_18 = (uint *)(param_1 + 0x23a4);
    pfVar6 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (param_1,auStack_208,puStack_18);
    *(float *)(param_1 + 0x20) = *pfVar6 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = pfVar6[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar6[2] + *(float *)(param_1 + 0x28);
    puStack_18[2] = 0;
    puStack_18[1] = puStack_18[2];
    *puStack_18 = puStack_18[1];
  }
  *(uint *)(param_1 + 0x1faf8) = 0;
LAB_00536144:
  *(uint *)(param_1 + 0x1fae8) = 0;
  *(uint *)(param_1 + 0x1fae4) = *(uint *)(param_1 + 0x1fae8);
  *(uint *)(param_1 + 0x1fae0) = *(uint *)(param_1 + 0x1fae4);
  iVar5 = 0x01C775EC;
  if (iStack_28 != 0) {
    if (*(int *)(param_1 + 0xbcac) != 0) {
      if (*(int *)(param_1 + 0x1fa3c) == 0) {
        *(uint *)(param_1 + 0x1fa3c) = 1;
      }
      else {
        *(uint *)(param_1 + 0x1fa3c) = 0;
        if (*(int *)(iVar5 + 0x244) != 0) {
          *(uint *)(iVar5 + 0x244) = 0;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"flashlit.wav");
        }
      }
    }
    if (((*(int *)(param_1 + 0xbca8) != 0) && (*(int *)(param_1 + 0x1f8d0) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x2e8) != 0)) {
      uVar7 = (uint)(*(int *)(0x01C775EC + 0x244) == 0);
      *(uint *)(0x01C775EC + 0x244) = uVar7;
      if (uVar7 != 0) {
        *(uint *)(param_1 + 0x1fa3c) = 1;
      }
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"flashlit.wav");
    }
  }
  if (*(int *)(param_1 + 0x1f8d0) == 0) {
    *(uint *)(0x01C775EC + 0x244) = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 0x1f8d0) + 0x2e8) == 0) {
    *(uint *)(0x01C775EC + 0x244) = 0;
  }
  if (iStack_2c != 0) {
    FUN_0053f310(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x1fa3c) == 0) {
    fVar10 = *(float *)(param_1 + 0x1fa40) - param_2 / 1.2f;
    *(float *)(param_1 + 0x1fa40) = fVar10;
    if (fVar10 < 0.0) {
      *(uint *)(param_1 + 0x1fa40) = 0;
    }
  }
  else {
    fVar10 = param_2 / 1.1f + *(float *)(param_1 + 0x1fa40);
    *(float *)(param_1 + 0x1fa40) = fVar10;
    if (1.0 < fVar10) {
      *(uint *)(param_1 + 0x1fa40) = 0x3f800000;
    }
  }
  fVar10 = *(float *)(param_1 + 0x1fa60) - param_2 / 0.2f;
  *(uint *)(param_1 + 0x1fa44) = 0;
  *(float *)(param_1 + 0x1fa60) = fVar10;
  if (fVar10 <= 0.0) {
    *(uint *)(param_1 + 0x1fa60) = 0;
  }
  fVar10 = *(float *)(param_1 + 0x1fa80) - param_2 / 0.2f;
  *(float *)(param_1 + 0x1fa80) = fVar10;
  if (fVar10 <= 0.0) {
    *(uint *)(param_1 + 0x1fa80) = 0;
  }
  if (bVar1) {
    FUN_0053fc60();
  }
  FUN_005384d0();
  if (((*(int *)(param_1 + 0x1f59c) == 2) && (*(int *)(param_1 + 0x1fa94) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x1fa94) + 0x2d8) == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0();
    core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(param_1,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0053e320();
    FUN_005384d0();
  }
  core_stranger_cpp_CStranger_updateArmRecoilBlend_FUN_0053ecc0(param_1,param_2,uVar4);
  FUN_005402f0();
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  fStack_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                               (param_1 + 0x150,6);
  if (fStack_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0();
  }
  else {
    fStack_14 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60();
    if ((1.0 < fStack_14) &&
       (iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(param_1 + 0x1fa0c),DAT_00764838), iVar5 != 0)) {
      FUN_00538440(param_1,auStack_184);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,afStack_118,auStack_184);
      uStack_1e0 = 0;
      fStack_1e4 = afStack_118[0] - afStack_19c[0];
      fStack_1dc = fStack_110 - fStack_194;
      iVar8 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                        (param_1,auStack_1f0,&fStack_1e4);
      if (0.0 < *(float *)(iVar8 + 8)) {
        FUN_0041ef90(iVar5,afStack_19c,&fStack_1e4);
      }
    }
  }
  core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(param_1,0);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(param_1,0,param_2);
  core_stranger_cpp_CStranger_autoAimAtThreat_FUN_0053d910(param_1,1,param_2);
  FUN_0053ffe0(param_1,param_2);
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850();
  core_stranger_cpp_CStranger_processWeaponTick_FUN_00540660(param_1,param_2);
  if ((*(int *)(param_1 + 0x1fa94) != 0) && (*(int *)(*(int *)(param_1 + 0x1fa94) + 0xfc) != 0)) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
  if (iVar5 == 0) {
    if (*(int *)(0x01C775EC + 0x240) != 0) {
      sound_sndmain_cpp_killSfx_FUN_00527230();
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270();
      uVar4 = sound_sndmain_cpp_startSfx_FUN_005265a0();
      *(uint *)(param_1 + 0x1fab4) = uVar4;
      sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0();
      uVar4 = sound_sndmain_cpp_startSfx_FUN_005265a0();
      *(uint *)(param_1 + 0x1fab0) = uVar4;
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      sound_sndmain_cpp_setSfxFade_FUN_00527260
                (*(uint *)(param_1 + 0x1fab0),0x3f800000,0x3f800000,0);
      return;
    }
  }
  else if (*(int *)(0x01C775EC + 0x240) == 0) {
    sound_sndmain_cpp_killSfx_FUN_00527230();
    sound_sndmain_cpp_killSfx_FUN_00527230();
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270();
    sound_sndmain_cpp_startSfx_FUN_005265a0();
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return;
  }
  return;
}
