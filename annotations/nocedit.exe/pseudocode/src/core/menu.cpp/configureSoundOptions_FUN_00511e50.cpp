// Name: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
// Address Range: [[00511e50, 00512d1b]]
// Convention: __cdecl
// Signature: void core_menu.cpp_configureSoundOptions_FUN_00511e50(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  char *pcVar5;
  uint uVar6;
  int y_top;
  float fVar7;
  int iVar8;
  char (*pacVar9) [256];
  int iVar10;
  int extraout_EDX;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  int *piVar11;
  char (*pacVar12) [256];
  char *pcVar13;
  int iVar14;
  char (*pacVar15) [256];
  char *pcVar16;
  int iVar17;
  byte bVar18;
  float10 fVar19;
  double dVar20;
  double dVar21;
  float in_stack_0000000c;
  CGame *in_stack_fffff5b8;
  uint uVar22;
  uint in_stack_fffff5f0;
  float in_stack_fffff5f4;
  double in_stack_fffff5f8;
  float in_stack_fffff600;
  char **ppcStack_9fc;
  byte auStack_9f8 [904];
  SSoundDeviceInfo SStack_670;
  SSoundDeviceInfo SStack_548;
  char local_348 [256];
  char local_248 [8];
  char acStack_240 [4];
  char acStack_23c [244];
  char local_148 [8];
  char acStack_140 [256];
  uint local_40;
  int local_3c;
  int local_34;
  int local_30;
  ulonglong local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar18 = 0;
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff5b8);
  pacVar9 = g_SoundMenuTextBuffers;
  iVar2 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar2) = pacVar9;
    iVar2 = iVar2 + 4;
    pacVar9 = pacVar9 + 1;
  } while (iVar2 != 0x28);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    local_20 = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    pacVar9 = g_SoundMenuTextBuffers;
    do {
      cVar1 = *pcVar3;
      (*pacVar9)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)pacVar9 + 1) = cVar1;
      pacVar9 = (char (*) [256])((int)pacVar9 + 2);
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
    if (iVar2 == 0) {
      pcVar3 = "On";
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
    iVar2 = local_14;
    iVar8 = -1;
    pacVar9 = g_SoundMenuTextBuffers;
    do {
      pacVar12 = pacVar9;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pacVar12 = (char (*) [256])((int)pacVar9 + (uint)bVar18 * -2 + 1);
      pcVar13 = *pacVar9;
      pacVar9 = pacVar12;
    } while (*pcVar13 != '\0');
    pcVar13 = pacVar12[-1] + 0xff;
    do {
      cVar1 = *pcVar3;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar14 = local_14 + 1;
    iVar8 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_18 = iVar2 + 2;
    pacVar9 = g_SoundMenuTextBuffers + iVar14;
    if (iVar8 == 0) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      iVar2 = local_14;
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar9,pcVar3);
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar9,pcVar3);
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      uVar22 = 0x511fbd;
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar4 * 100f) / 0.25f +
                                  (float)0.001));
      local_14 = (int)ROUND(dVar20);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_348,"%d",local_14,uVar22);
      pcVar3 = local_348;
      iVar2 = -1;
      pacVar12 = pacVar9;
      do {
        pacVar15 = pacVar12;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pacVar15 = (char (*) [256])((int)pacVar12 + (uint)bVar18 * -2 + 1);
        pcVar13 = *pacVar12;
        pacVar12 = pacVar15;
      } while (*pcVar13 != '\0');
      pcVar13 = pacVar15[-1] + 0xff;
      do {
        cVar1 = *pcVar3;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pacVar12 = pacVar9;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pacVar12 = (char (*) [256])((int)pacVar9 + (uint)bVar18 * -2 + 1);
        pcVar13 = *pacVar9;
        pacVar9 = pacVar12;
      } while (*pcVar13 != '\0');
      pcVar13 = pacVar12[-1] + 0xff;
      do {
        cVar1 = *pcVar3;
        *pcVar13 = cVar1;
        iVar2 = local_34;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar8 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    pcVar3 = g_SoundMenuTextBuffers[iVar2];
    local_2c = (double)CONCAT44 /* combine 2-byte values */(local_2c._4_4_,iVar2 + 1);
    if (iVar8 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar13);
      iVar2 = iVar2 + 1;
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar13 = pcVar3;
      do {
        cVar1 = *pcVar5;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      uVar22 = 0x5120c3;
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar4 * 100f) / 1f +
                                  (float)0.001));
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_140,"%d",(int)ROUND(dVar20),uVar22);
      pcVar13 = local_148;
      iVar2 = -1;
      pcVar5 = pcVar3;
      do {
        pcVar16 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar16 = pcVar5 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar16;
      } while (cVar1 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar5 = cVar1;
        iVar2 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    iVar8 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    iVar14 = iVar2 + 1;
    pcVar3 = g_SoundMenuTextBuffers[iVar2];
    local_3c = iVar14;
    if (iVar8 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      local_1c = iVar14;
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar13);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar13 = pcVar3;
      do {
        cVar1 = *pcVar5;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      uVar22 = 0x5121c7;
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar4 * 100f) / 0.25f +
                                  (float)0.001));
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)&SStack_548.device_value1,"%d",(int)ROUND(dVar20),uVar22);
      piVar11 = &SStack_548.api_type;
      iVar2 = -1;
      pcVar13 = pcVar3;
      do {
        pcVar5 = pcVar13;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar13 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        iVar2 = *piVar11;
        *pcVar5 = (char)iVar2;
        if ((char)iVar2 == '\0') break;
        cVar1 = *(char *)((int)piVar11 + 1);
        piVar11 = (int *)((int)piVar11 + 2);
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      local_24 = local_40;
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar3 = g_SoundMenuTextBuffers[local_20];
    pcVar13 = pcVar3;
    do {
      cVar1 = *pcVar5;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_240,"%d",iVar2);
    pcVar13 = local_248;
    iVar2 = -1;
    pcVar5 = pcVar3;
    do {
      pcVar16 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar16 = pcVar5 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar16;
    } while (cVar1 != '\0');
    pcVar16 = pcVar16 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    iVar2 = local_20;
    iVar8 = -1;
    do {
      pcVar5 = pcVar3;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar5 = pcVar3 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar8 = local_20 + 1;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar3 = g_SoundMenuTextBuffers[iVar8];
    pcVar13 = pcVar3;
    do {
      cVar1 = *pcVar5;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    local_1c = iVar8;
    iVar8 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_23c,"%d",iVar8);
    pcVar13 = local_248;
    iVar8 = -1;
    pcVar5 = pcVar3;
    do {
      pcVar16 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar16 = pcVar5 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar16;
    } while (cVar1 != '\0');
    pcVar16 = pcVar16 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    iVar8 = -1;
    do {
      pcVar5 = pcVar3;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar5 = pcVar3 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar8 = iVar2 + 2;
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    local_1c = iVar8;
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar2 = local_18 + 1;
      iVar8 = local_18;
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar2 = iVar2 + 3;
    }
    local_18 = iVar2;
    crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundMenuTextBuffers[iVar8],pcVar3);
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar2 < 0) ||
       (iVar8 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar8 <= iVar2)) {
      SStack_670.flags = 0;
      SStack_670.device_name[4] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&SStack_670);
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    pcVar3 = g_SoundMenuTextBuffers[local_14];
    do {
      cVar1 = *pcVar13;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    pcVar3 = SStack_670.device_name + 8;
    iVar8 = local_14 + 1;
    iVar2 = -1;
    pcVar13 = g_SoundMenuTextBuffers[local_14];
    do {
      pcVar5 = pcVar13;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar5 = pcVar13 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    local_14 = iVar8;
    if (SStack_670.device_guid != 0) {
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar3 = g_SoundMenuTextBuffers[iVar8];
      if (iVar2 == 0) {
        pcVar13 = "Hardware mixing: Off";
      }
      else {
        pcVar13 = "Hardware mixing: On";
      }
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar13);
      do {
        cVar1 = *pcVar13;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar2 != 0) {
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      iVar8 = g_WindowWidth / 0x14;
      iVar14 = g_WindowWidth / iVar2 + iVar8 * -2;
      iVar10 = iVar14 >> 0x1f;
      in_stack_0000000c = (float)((int)((iVar14 + iVar10 * -4) - (uint)(iVar10 << 1 < 0)) >> 2);
      in_stack_fffff5f4 = in_stack_0000000c;
      fVar19 = crt_math_c_pow_FUN_005ffd76
                         ((float10)50,(float10)1 / (float10)(int)in_stack_0000000c);
      iVar14 = 0;
      dVar20 = (double)fVar19;
      if (0 < iVar2) {
        do {
          if (0 < (int)in_stack_fffff5f0) {
            iVar10 = iVar8 * iVar14 + iVar2;
            iVar17 = in_stack_fffff5f0 * 4 + iVar10;
            local_2c._0_4_ = 0;
            local_2c._4_4_ = 0x40690000;
            do {
              fVar19 = (float10)(double)CONCAT44 /* combine 2-byte values */(local_2c._4_4_,(uint)local_2c) *
                       (float10)dVar20;
              dVar21 = (double)CONCAT44 /* combine 2-byte values */(local_2c._4_4_,(uint)local_2c);
              local_2c = (double)fVar19;
              in_stack_0000000c =
                   (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                    (iVar14,(float)dVar21,(float)fVar19);
              dVar20 = (double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar20 >> 0x20),0x512634);
              dVar21 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float)g_WindowHeight -
                                          in_stack_0000000c * (float)g_WindowHeight * 0.25f
                                          ));
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70
                        (iVar10,y_top,(extraout_EDX - (int)ROUND(dVar21)) + 1);
              iVar10 = iVar10 + 4;
            } while (iVar10 < iVar17);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)unaff_EBX);
      }
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    pcVar3 = (char *)0xe1;
    iVar2 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,(int)unaff_EBX,&local_1c,0xe1,(int)pcVar13);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(iVar2) {
    case 0:
      sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(0x5126e3);
      iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar2 == 0) goto LAB_005126f5;
      break;
    case 1:
      in_stack_0000000c = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      in_stack_fffff5f8 =
           (double)CONCAT44 /* combine 2-byte values */(in_stack_0000000c / 0.25f,SUB84 /* extract 2-byte value */(in_stack_fffff5f8,0));
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          ppcStack_9fc = (char **)0x3f800000;
        }
        else {
          in_stack_fffff600 = in_stack_fffff600 - unaff_EBX;
          if (in_stack_fffff600 < (float)0.01) {
LAB_00512841:
            in_stack_fffff600 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          ppcStack_9fc = (char **)0x3e4ccccd;
        }
        else {
          in_stack_fffff600 = in_stack_fffff600 + unaff_EBX;
          if ((float)1.01 < in_stack_fffff600) goto LAB_00512841;
          if ((float)0.98999999999999999 < in_stack_fffff600) {
            in_stack_fffff600 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,(float)ppcStack_9fc * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
      sound_sndmain_cpp_startSfx_FUN_005a8e90("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      break;
    case 2:
      in_stack_fffff600 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      in_stack_fffff600 = in_stack_fffff600 / 1f;
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          auStack_9f8._0_4_ = (CStrList_vtable *)0x3f800000;
        }
        else {
          ppcStack_9fc = (char **)((float)ppcStack_9fc - in_stack_0000000c);
          if ((float)ppcStack_9fc < (float)0.01) {
LAB_00512966:
            ppcStack_9fc = (char **)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          auStack_9f8._0_4_ = (CStrList_vtable *)0x3e4ccccd;
        }
        else {
          ppcStack_9fc = (char **)((float)ppcStack_9fc + in_stack_0000000c);
          if ((float)1.01 < (float)ppcStack_9fc) goto LAB_00512966;
          if ((float)0.98999999999999999 < (float)ppcStack_9fc) {
            ppcStack_9fc = (char **)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,(float)auStack_9f8._0_4_ * 1f);
      break;
    case 3:
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      ppcStack_9fc = (char **)(fVar4 / 0.25f);
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          auStack_9f8._8_4_ = (char **)0x3f800000;
        }
        else {
          auStack_9f8._0_4_ = (float)auStack_9f8._0_4_ + -0.2f;
          if ((float)auStack_9f8._0_4_ < (float)0.01) {
LAB_00512a67:
            auStack_9f8._0_4_ = (CStrList_vtable *)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          auStack_9f8._8_4_ = (char **)0x3e4ccccd;
        }
        else {
          auStack_9f8._0_4_ = (float)auStack_9f8._0_4_ + 0.2f;
          in_stack_fffff5f8 = (double)(float)auStack_9f8._0_4_;
          if ((float)1.01 < (float)auStack_9f8._0_4_) goto LAB_00512a67;
          if (0.98999999999999999 < in_stack_fffff5f8) {
            auStack_9f8._0_4_ = (CStrList_vtable *)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,(float)auStack_9f8._8_4_ * 0.25f);
      break;
    case 4:
      iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar2 == 0x5622) {
LAB_00512b46:
          fVar4 = 1.54843e-41;
        }
        else if (iVar2 == 0xac44) {
          fVar4 = 3.08986e-41;
        }
        else {
          fVar4 = 6.17973e-41;
        }
      }
      else if (iVar2 < 0x5622) {
        fVar4 = 3.08986e-41;
      }
      else {
        if (0xac43 < iVar2) goto LAB_00512b46;
        fVar4 = 6.17973e-41;
      }
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        fVar4 = 6.17973e-41;
      }
      fVar7 = (float)sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (fVar4 != fVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0((int)fVar4);
        in_stack_fffff5f4 = fVar4;
        goto LAB_005126f5;
      }
      break;
    case 5:
      iVar2 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar2 == 0x10) {
        fVar4 = 1.12104e-44;
      }
      else {
        fVar4 = 2.24208e-44;
      }
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        fVar4 = 2.24208e-44;
      }
      fVar7 = (float)sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (fVar4 != fVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280((int)fVar4);
        in_stack_fffff5f4 = fVar4;
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      fVar4 = (float)((iVar2 == 1) + 1);
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        fVar4 = 2.8026e-45;
      }
      fVar7 = (float)sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (fVar4 != fVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0((int)fVar4);
        in_stack_fffff5f4 = fVar4;
        goto LAB_005126f5;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_9f8);
      for (iVar2 = 0; iVar8 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar2 < iVar8;
          iVar2 = iVar2 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&SStack_548);
        pcVar3 = SStack_548.device_name + 4;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff5fc,pcVar3);
      }
      iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff5fc,"Select sound device",iVar2,
                         (int)pcVar3);
      if (-1 < iVar2) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
        if (uVar6 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_9f8 + 0x10),0,in_stack_fffff5f0,(uint)in_stack_fffff5f4,
                 SUB84 /* extract 2-byte value */(in_stack_fffff5f8,0),(uint)((ulonglong)in_stack_fffff5f8 >> 0x20),
                 (uint)in_stack_fffff600);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar2 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    in_stack_fffff5f0 = 1;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
