// Name: core_game.cpp_CGame_processCheatCodes_FUN_004a0550
// Address: 004a0550
// Address Range: [[004a0550, 004a3658]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_processCheatCodes_FUN_004a0550(int param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  char *pcVar14;
  byte auStack_498 [256];
  char acStack_398 [100];
  byte local_334 [4];
  float local_330;
  byte auStack_2f8 [4];
  uint uStack_2f4;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  double dStack_2b0;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int local_298;
  int local_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  char *pcStack_230;
  uint uStack_22c;
  int iStack_228;
  int iStack_224;
  char *pcStack_220;
  uint uStack_21c;
  int iStack_218;
  int iStack_214;
  char *pcStack_210;
  uint uStack_20c;
  int iStack_208;
  char *pcStack_204;
  uint uStack_200;
  int iStack_1fc;
  int iStack_1f8;
  char *pcStack_1f4;
  uint uStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  char *pcStack_1e4;
  uint uStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  char *pcStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  char *pcStack_1c4;
  uint uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  float fStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  float fStack_128;
  int iStack_124;
  int iStack_120;
  float fStack_11c;
  int iStack_118;
  int iStack_114;
  float fStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  
  bVar13 = 0;
  if (_DAT_01c78420 == 0) {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,"headOfHorror");
    if ((iVar5 != 0) && (*(int *)(0x01C775EC + 0x214) != 0x29a)) {
      *(uint *)(0x01C775EC + 0x214) = 0x29a;
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("The horror has been unleashed.",0x40a00000);
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
      core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
    }
    if ((*(int *)(param_1 + 0x1dc) == 0) &&
       (iVar5 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x44), iVar5 != 0)) {
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("Enter cheat code",acStack_398,100,0);
      iVar5 = shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00471630(0x01BCD074,uVar6);
      if (iVar5 != 0) {
        iVar5 = 0;
        while (acStack_398[0] != '\0') {
          wincore_winrun_cpp_enqueueInput_FUN_00558ba0(acStack_398[iVar5]);
          iVar10 = iVar5 + 1;
          iVar5 = iVar5 + 1;
          acStack_398[0] = acStack_398[iVar10];
        }
      }
    }
    local_188 = param_1 + 0x1ec;
    while (iVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_00558b70(), iVar5 != 0) {
      DAT_01c78af0 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(0x01CC30E4);
      iVar5 = 0x13;
      do {
        iVar10 = iVar5 + -1;
        (&DAT_01c78af0)[iVar5] = *(byte *)(iVar5 + 0x1c78aef);
        iVar5 = iVar10;
      } while (0 < iVar10);
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582bde);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      local_294 = 0;
      local_298 = iVar5;
      if (0 < iVar5) {
        local_c8 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            local_294 = local_294 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (local_c8 < iVar5);
      }
      if (local_294 == local_298) {
        DAT_01c78af0 = 0;
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("Quit cheating!!!",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_334);
        *(uint *)(param_1 + 0x1d0) = 0;
        *(uint *)(param_1 + 0x22c) = 1;
        local_330 = *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) +
                    (float)-1;
        if ((int)local_330 < 0x41200000) {
          local_330 = 10.0;
        }
        core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(0x02DDF9F0,0x3f000000,0);
        iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        (**(code **)(*(int *)(iVar5 + 0x14c) + 0x100))(iVar5,local_334);
      }
      if (((((DAT_01c78af8 == 'G') && (DAT_01c78af7 == 'O')) && (DAT_01c78af6 == 'L')) &&
          (((DAT_01c78af5 == 'D' && (DAT_01c78af4 == 'B')) &&
           ((DAT_01c78af3 == 'R' && ((DAT_01c78af2 == 'I' && (DAT_01c78af1 == 'C')))))))) &&
         (DAT_01c78af0 == 0x4b)) {
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("Buy Fly! today!",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        uVar9 = (uint)(*(int *)(param_1 + 0x210) == 0);
        *(uint *)(param_1 + 0x210) = uVar9;
        if (uVar9 != 0) {
          core_sound_cpp_CSound_playSound_FUN_0052ea40
                    (0x02DC9450,0,"buy-fly-today.wav @ 4.0");
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582c4d);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_28c = 0;
      iStack_290 = iVar5;
      if (0 < iVar5) {
        iStack_c4 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_28c = iStack_28c + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_c4 < iVar5);
      }
      if (iStack_28c == iStack_290) {
        DAT_01c78af0 = 0;
        if (*(int *)(param_1 + 0x208) == 0) {
          uVar6 = wincore_winrun_cpp_getTime_FUN_00558a30();
          *(uint *)(param_1 + 0x26c) = 0;
          *(uint *)(param_1 + 0x208) = 1;
          *(uint *)(param_1 + 0x268) = uVar6;
        }
        else {
          iVar5 = wincore_winrun_cpp_getTime_FUN_00558a30();
          uStack_18 = iVar5 - *(int *)(param_1 + 0x268);
          dVar4 = (double)(int)uStack_18 * 0.055555555555555601;
          *(uint *)(param_1 + 0x208) = 0;
          dStack_2b0 = (double)*(int *)(param_1 + 0x26c) / (dVar4 * 1.52587890625e-05);
          _sprintf(auStack_498,"FPS: %3.2lf",dStack_2b0);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,auStack_498,0x40a00000);
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582c8d);
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_284 = 0;
        iStack_288 = iVar5;
        if (0 < iVar5) {
          iStack_c0 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_284 = iStack_284 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_c0 < iVar5);
        }
        if (iStack_284 == iStack_288) {
          DAT_01c78af0 = 0;
          iVar5 = *(int *)(param_1 + 0x20c) + 1;
          *(int *)(param_1 + 0x20c) = iVar5;
          if (2 < iVar5) {
            *(uint *)(param_1 + 0x20c) = 0;
          }
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582cc2);
        iStack_27c = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_280 = iVar5;
        if (0 < iVar5) {
          iStack_bc = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_27c = iStack_27c + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_bc < iVar5);
        }
        if (iStack_27c == iStack_280) {
          DAT_01c78af0 = 0;
          uVar9 = (uint)(*(int *)(param_1 + 0x1d8) == 0);
          *(uint *)(param_1 + 0x1d8) = uVar9;
          if (uVar9 == 0) {
            pcVar14 = "Event debug off";
          }
          else {
            pcVar14 = "Event debug on";
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar14,0x40a00000);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
          core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582d20);
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_274 = 0;
        iStack_278 = iVar5;
        if (0 < iVar5) {
          iStack_b8 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_274 = iStack_274 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_b8 < iVar5);
        }
        if (iStack_274 == iStack_278) {
          DAT_01c78af0 = (byte)iStack_274 ^ (byte)iStack_278;
          uVar9 = (uint)(*(int *)(param_1 + 0x1dc) == 0);
          *(uint *)(param_1 + 0x1dc) = uVar9;
          if (uVar9 == 0) {
            uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("Script debug off",0x40a00000);
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
            iVar5 = 0x01E57284;
            uVar6 = DAT_005b7620;
            *(uint *)(param_1 + 0x278) = 0;
          }
          else {
            uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("Script debug on",0x40a00000);
            core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
            iVar5 = 0x01E57284;
            uVar6 = 0xf0;
            *(uint *)(param_1 + 0x278) = 1;
          }
          core_set_cpp_FUN_005090f0(iVar5,0,0,uVar6);
          core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582d81);
        iStack_26c = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_270 = iVar5;
        if (0 < iVar5) {
          iStack_b4 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_26c = iStack_26c + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_b4 < iVar5);
        }
        if (iStack_26c == iStack_270) {
          DAT_01c78af0 = (byte)((uint)iStack_26c >> 8) ^ (byte)((uint)iStack_270 >> 8);
          uVar9 = (uint)(*(int *)(param_1 + 0x1f8) == 0);
          *(uint *)(param_1 + 0x1f8) = uVar9;
          if (uVar9 == 0) {
            pcVar14 = "Memory debugging off";
          }
          else {
            pcVar14 = "Memory debugging on";
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar14,0x40a00000);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
          core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582dea);
      iStack_264 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_268 = iVar5;
      if (0 < iVar5) {
        iStack_b0 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_264 = iStack_264 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_b0 < iVar5);
      }
      if (iStack_264 == iStack_268) {
        DAT_01c78af0 = 0;
        *(uint *)(param_1 + 0xc4) = 2;
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("Manual aim enabled",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) =
             *(uint *)(param_1 + 0xc4);
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582e3d);
      iStack_25c = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_260 = iVar5;
      if (0 < iVar5) {
        iStack_ac = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_25c = iStack_25c + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_ac < iVar5);
      }
      if (iStack_25c == iStack_260) {
        DAT_01c78af0 = 0;
        *(uint *)(param_1 + 0xc4) = 0;
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("Auto aim enabled",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f59c) =
             *(uint *)(param_1 + 0xc4);
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582e8c);
        iStack_254 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_258 = iVar5;
        if (0 < iVar5) {
          iStack_a8 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_254 = iStack_254 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_a8 < iVar5);
        }
        if (iStack_254 == iStack_258) {
          DAT_01c78af0 = 0;
          _DAT_01c78acc = 0;
          _DAT_01c78ad4 = 0;
          iVar5 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                            (0x01BCD074,"Enter Movie FPS",&DAT_005b9360,1,0x3e800000,
                             0x43700000,1);
          if ((((iVar5 != 0) &&
               (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                  (0x01BCD074,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                                   &DAT_01c78ad0,1,0,99999,1), iVar5 != 0)) &&
              (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                 (0x01BCD074,"Enter image width",&DAT_005b9364,1,1,9999,1
                                 ), iVar5 != 0)) &&
             (iVar5 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                                (0x01BCD074,"Enter image height",&DAT_005b9368,1,1,9999,1
                                ), iVar5 != 0)) {
            FUN_0046fe60(0x01BCD074,"Press CTRL+V to begin recording.");
            _DAT_01c78ac8 = 1;
          }
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582ebf);
        iStack_24c = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_250 = iVar5;
        if (0 < iVar5) {
          iStack_a4 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_24c = iStack_24c + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_a4 < iVar5);
        }
        if (iStack_24c == iStack_250) {
          DAT_01c78af0 = 0;
          *(uint *)(param_1 + 0x21c) = (uint)(*(int *)(param_1 + 0x21c) == 0);
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582ef6);
      iStack_244 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_248 = iVar5;
      if (0 < iVar5) {
        iStack_a0 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_244 = iStack_244 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_a0 < iVar5);
      }
      if (iStack_244 == iStack_248) {
        DAT_01c78af0 = 0;
        iVar5 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710
                          (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,"Skeleton_key"
                          );
        if (iVar5 == 0) {
          pcVar7 = (char *)core_actor_cpp_createActorByName_FUN_0040d540("CKeyActor");
          pcVar12 = "Skeleton_key";
          (*(code *)**(uint **)(pcVar7 + 0x14c))(pcVar7);
          pcVar7[0x2cc] = -1;
          pcVar7[0x2cd] = -1;
          pcVar7[0x2ce] = -1;
          pcVar7[0x2cf] = -1;
          pcVar14 = pcVar7;
          do {
            cVar2 = *pcVar12;
            *pcVar14 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pcVar14[1] = cVar2;
            pcVar14 = pcVar14 + 2;
          } while (cVar2 != '\0');
          core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,pcVar7,1);
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("You have the skeleton key",0x40a00000);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582f76);
      iStack_23c = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_240 = iVar5;
      if (0 < iVar5) {
        iStack_9c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_23c = iStack_23c + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_9c < iVar5);
      }
      if (iStack_23c == iStack_240) {
        DAT_01c78af0 = 0;
        uVar9 = (uint)(*(int *)(param_1 + 0x1d0) == 0);
        *(uint *)(param_1 + 0x1d0) = uVar9;
        if (uVar9 == 0) {
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("God mode disabled",0x40a00000);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        }
        else {
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                            ("God mode enabled",0x40a00000);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
          *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00582fe6);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_234 = 0;
      iStack_238 = iVar5;
      if (0 < iVar5) {
        iStack_98 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_234 = iStack_234 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_98 < iVar5);
      }
      if (iStack_234 == iStack_238) {
        DAT_01c78af0 = (byte)iStack_234 ^ (byte)iStack_238;
        uVar9 = (uint)(*(int *)(param_1 + 0x1d4) == 0);
        *(uint *)(param_1 + 0x1d4) = uVar9;
        if (uVar9 == 0) {
          pcVar14 = "Enemies thawed";
        }
        else {
          pcVar14 = "Enemies frozen";
        }
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar14,0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the shotgun");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583066);
      pcStack_230 = "CShotgun";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_224 = 0;
      uStack_22c = uVar6;
      iStack_228 = iVar5;
      if (0 < iVar5) {
        iStack_94 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_224 = iStack_224 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_94 < iVar5);
      }
      if (iStack_224 == iStack_228) {
        DAT_01c78af0 = (byte)((uint)iStack_224 >> 8) ^ (byte)((uint)iStack_228 >> 8);
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_230);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_22c,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the crossbow");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005830c0);
      iStack_214 = 0;
      pcStack_220 = "CCrossbow";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_21c = uVar6;
      iStack_218 = iVar5;
      if (0 < iVar5) {
        iStack_90 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_214 = iStack_214 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_90 < iVar5);
      }
      if (iStack_214 == iStack_218) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_220);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_21c,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("DY-NO-MITE");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583111);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      pcStack_210 = "CDynamite";
      iVar10 = 0;
      uStack_20c = uVar6;
      iStack_208 = iVar5;
      if (0 < iVar5) {
        iStack_8c = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (uVar9 == uStack_18) {
            iVar10 = iVar10 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_8c < iVar5);
      }
      if (iVar10 == iStack_208) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_210);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_20c,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Fire! Fire! Fire!");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583167);
      pcStack_204 = "CFlameThrower";
      iStack_1f8 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_200 = uVar6;
      iStack_1fc = iVar5;
      if (0 < iVar5) {
        iStack_88 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1f8 = iStack_1f8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_88 < iVar5);
      }
      if (iStack_1f8 == iStack_1fc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_204);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_200,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("You have the tommy gun");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005831c0);
      pcStack_1f4 = "CTommyGun";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1e8 = 0;
      uStack_1f0 = uVar6;
      iStack_1ec = iVar5;
      if (0 < iVar5) {
        iStack_84 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1e8 = iStack_1e8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_84 < iVar5);
      }
      if (iStack_1e8 == iStack_1ec) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1f4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_1f0,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("You can now summon the baron");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_0058321f);
      iStack_1d8 = 0;
      pcStack_1e4 = "CBaronWeapon";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_1e0 = uVar6;
      iStack_1dc = iVar5;
      if (0 < iVar5) {
        iStack_80 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1d8 = iStack_1d8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_80 < iVar5);
      }
      if (iStack_1d8 == iStack_1dc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1e4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_1e0,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("You have the elephant gun");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583281);
      pcStack_1d4 = "CElephantGun";
      iStack_1c8 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      uStack_1d0 = uVar6;
      iStack_1cc = iVar5;
      if (0 < iVar5) {
        iStack_7c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1c8 = iStack_1c8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_7c < iVar5);
      }
      if (iStack_1c8 == iStack_1cc) {
        DAT_01c78af0 = 0;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1d4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_1d0,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("You have the charged radiance emitter");
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005832e7);
      pcStack_1c4 = "CLightGun";
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1b8 = 0;
      uStack_1c0 = uVar6;
      iStack_1bc = iVar5;
      if (0 < iVar5) {
        iStack_78 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1b8 = iStack_1b8 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_78 < iVar5);
      }
      if (iStack_1b8 == iStack_1bc) {
        DAT_01c78af0 = (byte)iStack_1b8 ^ (byte)iStack_1bc;
        core_game_cpp_giveHeroWeapon_FUN_004a02e0(pcStack_1c4);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,uStack_1c0,0x40a00000);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_0058331b);
      iStack_1b0 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_1b4 = iVar5;
      if (0 < iVar5) {
        iStack_74 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_1b0 = iStack_1b0 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_74 < iVar5);
      }
      if (iStack_1b0 == iStack_1b4) {
        DAT_01c78af0 = (byte)((uint)iStack_1b0 >> 8) ^ (byte)((uint)iStack_1b4 >> 8);
        iVar10 = FUN_0056497c(0x314);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar10);
        }
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
          *(uint *)(iVar5 + 0x310) = 3;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar5,"CGun");
          iVar10 = _DAT_01cae0e8;
          *(uint *)(iVar5 + 0x30c) = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(iVar10 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        }
        iVar10 = FUN_0056497c(0x314);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar10);
        }
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
          *(uint *)(iVar5 + 0x310) = 7;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar5,"CGun");
          iVar10 = _DAT_01cae0e8;
          *(uint *)(iVar5 + 0x30c) = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(iVar10 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        }
        iVar10 = FUN_0056497c(0x314);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar10);
        }
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
          *(uint *)(iVar5 + 0x310) = 8;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar5,"CGun");
          iVar10 = _DAT_01cae0e8;
          *(uint *)(iVar5 + 0x30c) = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(iVar10 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CShotgun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CCrossbow");
        iVar10 = FUN_0056497c(0x314);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar10);
        }
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
          *(uint *)(iVar5 + 0x310) = 1;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar5,"CCrossbow");
          iVar10 = _DAT_01cae0e8;
          *(uint *)(iVar5 + 0x30c) = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(iVar10 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        }
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CDynamite");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CFlameThrower");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CTommyGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CElephantGun");
        core_game_cpp_giveHeroWeapon_FUN_004a02e0("CLightGun");
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("You've got all the weapons",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        *(uint *)(param_1 + 0x1d0) = 1;
        uVar6 = 0x02DC9450;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        core_sound_cpp_CSound_playSound_FUN_0052ea40(uVar6,0,"cheat-1.wav");
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005833de);
      iVar5 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar10 = ~uVar9 - 1;
      iStack_1ac = iVar10;
      if (0 < iVar10) {
        iStack_70 = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar10 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (uVar9 == uStack_18) {
            iVar5 = iVar5 + 1;
          }
          iVar10 = iVar10 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_70 < iVar10);
      }
      if (iVar5 == iStack_1ac) {
        iVar5 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f8d0);
        DAT_01c78af0 = 0;
        if (iVar5 != 0) {
          piVar1 = (int *)(iVar5 + 0x560);
          *piVar1 = *piVar1 + 100;
        }
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("You just got 100 more bullets",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_0058343f);
        iStack_1a4 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_1a8 = iVar5;
        if (0 < iVar5) {
          iStack_6c = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_1a4 = iStack_1a4 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_6c < iVar5);
        }
        if (iStack_1a4 == iStack_1a8) {
          DAT_01c78af0 = 0;
        }
        else {
          iVar5 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
          if ((iVar5 == 0) ||
             (iVar5 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x13), iVar5 == 0))
          goto LAB_004a2165;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        while (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                                 (0x01BCD074,"Raise an event",&DAT_005b92f0,100,1),
              iVar5 != 0) {
          iVar5 = core_event_cpp_CEventList_validateCommands_FUN_0047dcd0
                            (0x01C03A10,&DAT_005b92f0);
          if (iVar5 == 0) {
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,&DAT_005b92f0);
            break;
          }
          FUN_0046fcd0(0x01BCD074,iVar5);
        }
      }
LAB_004a2165:
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_0058348d);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_19c = 0;
      iStack_1a0 = iVar5;
      if (0 < iVar5) {
        iStack_68 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_19c = iStack_19c + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_68 < iVar5);
      }
      if (iStack_19c == iStack_1a0) {
        DAT_01c78af0 = 0;
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        iStack_1c = 0;
        iVar5 = 0;
        while (iStack_1c < *(int *)(0x01E57284 + 0x150bf4)) {
          iVar10 = *(int *)(iVar5 + 0x150bf8 + 0x01E57284);
          iVar8 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          fStack_2bc = *(float *)(iVar8 + 0x20) - *(float *)(iVar10 + 0x20);
          fStack_2b8 = *(float *)(iVar8 + 0x24) - *(float *)(iVar10 + 0x24);
          fStack_2b4 = *(float *)(iVar8 + 0x28) - *(float *)(iVar10 + 0x28);
          if (SQRT(fStack_2b4 * fStack_2b4 + fStack_2bc * fStack_2bc + fStack_2b8 * fStack_2b8) <=
              (float)50) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_2f8);
            uStack_2f4 = 0x42c80000;
            (**(code **)(*(int *)(iVar10 + 0x14c) + 0x100))(iVar10,auStack_2f8);
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005834cc);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_194 = 0;
      iStack_198 = iVar5;
      if (0 < iVar5) {
        iStack_64 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_194 = iStack_194 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_64 < iVar5);
      }
      if (iStack_194 == iStack_198) {
        DAT_01c78af0 = 0;
        uVar9 = (uint)(*(int *)(param_1 + 0x1e0) == 0);
        *(uint *)(param_1 + 0x1e0) = uVar9;
        if (uVar9 == 0) {
          pcVar14 = "Gratuitous dismemberment disabled";
        }
        else {
          pcVar14 = "Gratuitous dismemberment enabled";
        }
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar14,0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583552);
        iStack_18c = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_190 = iVar5;
        if (0 < iVar5) {
          iStack_2a8 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_18c = iStack_18c + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_2a8 < iVar5);
        }
        if (iStack_18c == iStack_190) {
          DAT_01c78af0 = 0;
          core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                    (0x01BCD074,"Enter time factor",local_188,1,0x3c23d70a,0x40800000,1);
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005835a2);
      iStack_180 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_184 = iVar5;
      if (0 < iVar5) {
        iStack_60 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_180 = iStack_180 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_60 < iVar5);
      }
      if (iStack_180 == iStack_184) {
        DAT_01c78af0 = 0;
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        *(uint *)(param_1 + 0x1f0) = (uint)(*(int *)(param_1 + 0x1f0) == 0);
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005835e1);
      iStack_178 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_17c = iVar5;
      if (0 < iVar5) {
        iStack_2a4 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_178 = iStack_178 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_2a4 < iVar5);
      }
      if (iStack_178 == iStack_17c) {
        DAT_01c78af0 = (byte)iStack_178 ^ (byte)iStack_17c;
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        *(uint *)(param_1 + 500) = (uint)(*(int *)(param_1 + 500) == 0);
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583620);
      iVar5 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar10 = ~uVar9 - 1;
      iStack_174 = iVar10;
      if (0 < iVar10) {
        iStack_2a0 = 0;
        do {
          uStack_18 = (uint)*(byte *)(iVar10 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (uVar9 == uStack_18) {
            iVar5 = iVar5 + 1;
          }
          iVar10 = iVar10 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_2a0 < iVar10);
      }
      if (iVar5 == iStack_174) {
        DAT_01c78af0 = 0;
        iVar5 = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f8d0);
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x564) == 5) {
            *(uint *)(iVar5 + 0x564) = 0;
            uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                              ("Flaming ammo disabled",0x40a00000);
          }
          else {
            iVar10 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar5,"CCrossbow");
            if (iVar10 == 0) {
              uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                ("You can only use flaming ammo on the crossbow.",0x40a00000);
            }
            else {
              *(uint *)(iVar5 + 0x564) = 5;
              uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                                ("Flaming ammo enabled.",0x40a00000);
            }
          }
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005836c7);
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_16c = 0;
        iStack_170 = iVar5;
        if (0 < iVar5) {
          iStack_29c = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_16c = iStack_16c + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_29c < iVar5);
        }
        if (iStack_16c == iStack_170) {
          DAT_01c78af0 = 0;
          core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00447b30
                    (0x1fb8508,0xff00ff);
          core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583706);
        iStack_164 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_168 = iVar5;
        if (0 < iVar5) {
          iStack_5c = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_164 = iStack_164 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_5c < iVar5);
        }
        if (iStack_164 == iStack_168) {
          DAT_01c78af0 = 0;
          *(uint *)(0x01E57284 + 0x14cd68) = 0;
          core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740(0x1fb8508,0);
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583738);
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_15c = 0;
        iStack_160 = iVar5;
        if (0 < iVar5) {
          iStack_58 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_15c = iStack_15c + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_58 < iVar5);
        }
        if (iStack_15c == iStack_160) {
          DAT_01c78af0 = 0;
          uVar9 = (uint)(*(int *)(param_1 + 0x200) == 0);
          *(uint *)(param_1 + 0x200) = uVar9;
          if (uVar9 == 0) {
            pcVar14 = "Single step disabled";
          }
          else {
            pcVar14 = "Single step enabled";
          }
          uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar14,0x40a00000);
          core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583793);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_154 = 0;
      iStack_158 = iVar5;
      if (0 < iVar5) {
        iStack_54 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_154 = iStack_154 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_54 < iVar5);
      }
      if (iStack_154 == iStack_158) {
        DAT_01c78af0 = 0;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0) = 0x42c80000;
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("Flashlight battery restored",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005837f2);
      iStack_14c = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_150 = iVar5;
      if (0 < iVar5) {
        iStack_50 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_14c = iStack_14c + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_50 < iVar5);
      }
      if (iStack_14c == iStack_150) {
        DAT_01c78af0 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,1);
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583828);
      iStack_144 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_148 = iVar5;
      if (0 < iVar5) {
        iStack_4c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_144 = iStack_144 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_4c < iVar5);
      }
      if (iStack_144 == iStack_148) {
        DAT_01c78af0 = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_00555750(0x02DDF9F0,2);
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_0058385e);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_13c = 0;
      iStack_140 = iVar5;
      if (0 < iVar5) {
        iStack_48 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_13c = iStack_13c + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_48 < iVar5);
      }
      if (iStack_13c == iStack_140) {
        DAT_01c78af0 = (byte)iStack_13c ^ (byte)iStack_140;
        uVar9 = (uint)(*(int *)(param_1 + 0x204) == 0);
        fStack_138 = 0.25;
        *(uint *)(param_1 + 0x204) = uVar9;
        if (uVar9 == 0) {
          pcVar14 = "burp1.wav";
        }
        else {
          pcVar14 = "burp2.wav";
          fStack_138 = 4.0;
        }
        core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,pcVar14);
        iStack_44 = 0;
        for (iStack_20 = 0; iStack_20 < *(int *)(0x01E57284 + 0x14ecb0); iStack_20 = iStack_20 + 1
            ) {
          iVar5 = *(int *)(0x01E57284 + iStack_44 + 0x14ecb4);
          iStack_134 = iVar5 + 0x150;
          if (*(char *)(iVar5 + 0x23b0) != '\0') {
            iVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                              (iStack_134);
            iStack_130 = iVar5;
            iVar10 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                               (iVar5,"Bip01 head",0);
            if (iVar10 != -1) {
              iVar8 = iVar10 * 4 + iStack_134;
              iStack_12c = iStack_134;
              fStack_128 = fStack_138;
              *(float *)(iVar8 + 0x514) = *(float *)(iVar8 + 0x514) * fStack_138;
              iVar11 = 0;
              iVar8 = iVar5;
              iStack_124 = iVar10;
              if (0 < *(int *)(iVar5 + 0x28558)) {
                do {
                  if (iStack_124 == *(int *)(iVar8 + 0x2857c)) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (iStack_12c,iVar5,fStack_128,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  iVar8 = iVar8 + 0x24;
                } while (iVar11 < *(int *)(iVar5 + 0x28558));
              }
            }
            iVar10 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                               (iStack_130,"bipltit02",0);
            iVar5 = iStack_130;
            if (iVar10 != -1) {
              iVar8 = iVar10 * 4 + iStack_134;
              iStack_120 = iStack_134;
              fStack_11c = fStack_138;
              *(float *)(iVar8 + 0x514) = *(float *)(iVar8 + 0x514) * fStack_138;
              iVar11 = 0;
              iVar8 = iStack_130;
              iStack_118 = iVar10;
              if (0 < *(int *)(iStack_130 + 0x28558)) {
                do {
                  if (iStack_118 == *(int *)(iVar8 + 0x2857c)) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (iStack_120,iVar5,fStack_11c,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  iVar8 = iVar8 + 0x24;
                } while (iVar11 < *(int *)(iVar5 + 0x28558));
              }
            }
            iVar10 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                               (iStack_130,"biprtit02",0);
            iVar5 = iStack_130;
            if (iVar10 != -1) {
              iVar8 = iVar10 * 4 + iStack_134;
              iStack_114 = iStack_134;
              fStack_110 = fStack_138;
              *(float *)(iVar8 + 0x514) = *(float *)(iVar8 + 0x514) * fStack_138;
              iVar11 = 0;
              iVar8 = iStack_130;
              iStack_10c = iVar10;
              if (0 < *(int *)(iStack_130 + 0x28558)) {
                do {
                  if (iStack_10c == *(int *)(iVar8 + 0x2857c)) {
                    core_game_cpp_scaleBoneRecursive_FUN_004a04e0
                              (iStack_114,iVar5,fStack_110,iVar11);
                  }
                  iVar11 = iVar11 + 1;
                  iVar8 = iVar8 + 0x24;
                } while (iVar11 < *(int *)(iVar5 + 0x28558));
              }
            }
          }
          iStack_44 = iStack_44 + 4;
        }
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),_DAT_02dc9fe4);
        if (iVar5 != 0) {
          if (*(int *)(param_1 + 0x204) == 0) {
            pcVar14 = "stranger-hat.kfm";
          }
          else {
            pcVar14 = "big-hat.kfm";
          }
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(iVar5 + 0x1fb40,pcVar14)
          ;
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(iVar5 + 0x1fb40);
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005838e3);
        iStack_104 = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_108 = iVar5;
        if (0 < iVar5) {
          iStack_40 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_104 = iStack_104 + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_40 < iVar5);
        }
        if (iStack_104 == iStack_108) {
          DAT_01c78af0 = 0;
          *(uint *)(param_1 + 0x218) = (uint)(*(int *)(param_1 + 0x218) == 0);
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583917);
      iStack_fc = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_100 = iVar5;
      if (0 < iVar5) {
        iStack_3c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_fc = iStack_fc + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_3c < iVar5);
      }
      if (iStack_fc == iStack_100) {
        DAT_01c78af0 = 0;
        iVar10 = FUN_0056497c(0x2d0);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = FUN_004a8a10(iVar10);
        }
        core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
        (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
        core_inv_cpp_CInventory_addItem_FUN_004bf360
                  (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("You've got a gasmask!",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583964);
      iStack_f4 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_f8 = iVar5;
      if (0 < iVar5) {
        iStack_38 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_f4 = iStack_f4 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_38 < iVar5);
      }
      if (iStack_f4 == iStack_f8) {
        DAT_01c78af0 = 0;
        *(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) = 0x42c80000;
        uVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                          ("Health restored.",0x40a00000);
        core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar6);
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005839aa);
      iStack_ec = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_f0 = iVar5;
      if (0 < iVar5) {
        iStack_34 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_ec = iStack_ec + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_34 < iVar5);
      }
      if (iStack_ec == iStack_f0) {
        DAT_01c78af0 = 0;
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),_DAT_02dc9fe4);
        if (iVar5 != 0) {
          core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
                    (iVar5 + 0x1fb40,"oldhat.kfm");
          core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(iVar5 + 0x1fb40);
          core_sound_cpp_CSound_playSound_FUN_0052ea40(0x02DC9450,0,"cheat-1.wav");
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_005839f5);
      iStack_e4 = 0;
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_e8 = iVar5;
      if (0 < iVar5) {
        iStack_30 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_e4 = iStack_e4 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_30 < iVar5);
      }
      if (iStack_e4 == iStack_e8) {
        DAT_01c78af0 = 0;
        iVar10 = FUN_0056497c(0x314);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar10);
        }
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
          *(uint *)(iVar5 + 0x310) = 3;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar5,"CGun");
          iVar10 = _DAT_01cae0e8;
          *(uint *)(iVar5 + 0x30c) = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(iVar10 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583a2e);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_dc = 0;
      iStack_e0 = iVar5;
      if (0 < iVar5) {
        iStack_2c = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_dc = iStack_dc + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_2c < iVar5);
      }
      if (iStack_dc == iStack_e0) {
        DAT_01c78af0 = 0;
        iVar10 = FUN_0056497c(0x314);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar10);
        }
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
          *(uint *)(iVar5 + 0x310) = 7;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar5,"CGun");
          iVar10 = _DAT_01cae0e8;
          *(uint *)(iVar5 + 0x30c) = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(iVar10 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        }
      }
      pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583a65);
      uVar9 = 0xffffffff;
      pcVar14 = pcVar7;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
      } while (cVar2 != '\0');
      iVar5 = ~uVar9 - 1;
      iStack_d4 = 0;
      iStack_d8 = iVar5;
      if (0 < iVar5) {
        iStack_28 = 0;
        do {
          bVar3 = *(byte *)(iVar5 + 0x1c78aef);
          uVar9 = toupper(*pcVar7);
          if (bVar3 == uVar9) {
            iStack_d4 = iStack_d4 + 1;
          }
          iVar5 = iVar5 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iStack_28 < iVar5);
      }
      if (iStack_d4 == iStack_d8) {
        DAT_01c78af0 = 0;
        iVar10 = FUN_0056497c(0x314);
        iVar5 = 0;
        if (iVar10 != 0) {
          iVar5 = core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(iVar10);
        }
        if (iVar5 != 0) {
          core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar5);
          (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
          *(uint *)(iVar5 + 0x310) = 8;
          core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040ed80(iVar5,"CGun");
          iVar10 = _DAT_01cae0e8;
          *(uint *)(iVar5 + 0x30c) = 500;
          core_inv_cpp_CInventory_addItem_FUN_004bf360
                    (*(int *)(iVar10 * 4 + 0x1cae0d8) + 0x1f5a0,iVar5,1);
        }
      }
      if (*(int *)(param_1 + 0x210) != 0) {
        pcVar7 = (char *)support_newmsg_cpp_decryptMessage_FUN_004ee3f0(BYTE_ARRAY_00583a9f);
        iStack_cc = 0;
        uVar9 = 0xffffffff;
        pcVar14 = pcVar7;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar13 * -2 + 1;
        } while (cVar2 != '\0');
        iVar5 = ~uVar9 - 1;
        iStack_d0 = iVar5;
        if (0 < iVar5) {
          iStack_24 = 0;
          do {
            bVar3 = *(byte *)(iVar5 + 0x1c78aef);
            uVar9 = toupper(*pcVar7);
            if (bVar3 == uVar9) {
              iStack_cc = iStack_cc + 1;
            }
            iVar5 = iVar5 + -1;
            pcVar7 = pcVar7 + 1;
          } while (iStack_24 < iVar5);
        }
        if (iStack_cc == iStack_d0) {
          DAT_01c78af0 = 0;
          _DAT_01c78ad8 = (uint)(_DAT_01c78ad8 == 0);
        }
      }
    }
  }
  return;
}
