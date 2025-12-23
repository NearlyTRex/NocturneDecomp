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
  int iVar4;
  float fVar5;
  char *pcVar6;
  uint uVar7;
  int y_top;
  float fVar8;
  int iVar9;
  char (*pacVar10) [256];
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  char (*pacVar11) [256];
  char *pcVar12;
  char (*pacVar13) [256];
  char *pcVar14;
  byte bVar15;
  float10 fVar16;
  double dVar17;
  double dVar18;
  int unaff_retaddr;
  int in_stack_0000001c;
  int in_stack_00000028;
  double in_stack_0000003c;
  int in_stack_00000054;
  int in_stack_0000005c;
  float in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000080;
  float in_stack_00000084;
  CGame *in_stack_fffff5b8;
  uint uVar19;
  uint in_stack_fffff658;
  float in_stack_fffff65c;
  double in_stack_fffff660;
  float in_stack_fffff668;
  char **ppcStack_994;
  byte auStack_990 [904];
  SSoundDeviceInfo SStack_608;
  SSoundDeviceInfo SStack_4e0;
  char acStack_32c [4];
  char acStack_328 [292];
  char acStack_204 [4];
  char acStack_200 [12];
  char acStack_1f4 [4];
  char acStack_1f0 [208];
  char acStack_120 [4];
  char acStack_11c [224];
  uint local_3c;
  uint local_20;
  int local_18;
  int local_14;
  
  bVar15 = 0;
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff5b8);
  pacVar10 = g_SoundMenuTextBuffers;
  iVar2 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar2) = pacVar10;
    iVar2 = iVar2 + 4;
    pacVar10 = pacVar10 + 1;
  } while (iVar2 != 0x28);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    local_20 = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    pacVar10 = g_SoundMenuTextBuffers;
    do {
      cVar1 = *pcVar3;
      (*pacVar10)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)pacVar10 + 1) = cVar1;
      pacVar10 = (char (*) [256])((int)pacVar10 + 2);
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
    iVar9 = -1;
    pacVar10 = g_SoundMenuTextBuffers;
    do {
      pacVar11 = pacVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pacVar11 = (char (*) [256])((int)pacVar10 + (uint)bVar15 * -2 + 1);
      pcVar12 = *pacVar10;
      pacVar10 = pacVar11;
    } while (*pcVar12 != '\0');
    pcVar12 = pacVar11[-1] + 0xff;
    do {
      cVar1 = *pcVar3;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar9 = local_14 + 1;
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_18 = iVar2 + 2;
    pacVar10 = g_SoundMenuTextBuffers + iVar9;
    if (iVar4 == 0) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      iVar9 = local_14;
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar10,pcVar3);
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar10,pcVar3);
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      uVar19 = 0x511fbd;
      dVar17 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar5 * 100f) / 0.25f +
                                  (float)0.001));
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_32c,"%d",(int)ROUND(dVar17),uVar19);
      pcVar3 = acStack_328;
      iVar2 = -1;
      pacVar11 = pacVar10;
      do {
        pacVar13 = pacVar11;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pacVar13 = (char (*) [256])((int)pacVar11 + (uint)bVar15 * -2 + 1);
        pcVar12 = *pacVar11;
        pacVar11 = pacVar13;
      } while (*pcVar12 != '\0');
      pcVar12 = pacVar13[-1] + 0xff;
      do {
        cVar1 = *pcVar3;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pacVar11 = pacVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pacVar11 = (char (*) [256])((int)pacVar10 + (uint)bVar15 * -2 + 1);
        pcVar12 = *pacVar10;
        pacVar10 = pacVar11;
      } while (*pcVar12 != '\0');
      pcVar12 = pacVar11[-1] + 0xff;
      do {
        cVar1 = *pcVar3;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    pcVar3 = g_SoundMenuTextBuffers[iVar9];
    if (iVar2 == 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar12);
      iVar2 = iVar9 + 1;
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar12 = pcVar3;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      uVar19 = 0x5120c3;
      dVar17 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar5 * 100f) / 1f +
                                  (float)0.001));
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_120,"%d",(int)ROUND(dVar17),uVar19);
      pcVar12 = acStack_11c;
      iVar2 = -1;
      pcVar6 = pcVar3;
      do {
        pcVar14 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar14 = pcVar6 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar6 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar3 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        iVar2 = unaff_retaddr;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    iVar9 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    pcVar3 = g_SoundMenuTextBuffers[iVar2];
    if (iVar9 == 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar12);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar12 = pcVar3;
      do {
        cVar1 = *pcVar6;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      uVar19 = 0x5121c7;
      dVar17 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar5 * 100f) / 0.25f +
                                  (float)0.001));
      crt_stdio_c_sprintf_FUN_005fdbd0
                (SStack_4e0.device_name + 0xcc,"%d",(int)ROUND(dVar17),uVar19);
      pcVar12 = SStack_4e0.device_name + 0xd0;
      iVar2 = -1;
      pcVar6 = pcVar3;
      do {
        pcVar14 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar14 = pcVar6 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar6 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar3 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar3 = g_SoundMenuTextBuffers[in_stack_0000001c];
    pcVar12 = pcVar3;
    do {
      cVar1 = *pcVar6;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_204,"%d",iVar2);
    pcVar12 = acStack_200;
    iVar2 = -1;
    pcVar6 = pcVar3;
    do {
      pcVar14 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar14 = pcVar6 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    iVar2 = -1;
    do {
      pcVar6 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar3 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar3 = g_SoundMenuTextBuffers[in_stack_00000028 + 1];
    pcVar12 = pcVar3;
    do {
      cVar1 = *pcVar6;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1f4,"%d",iVar2);
    pcVar12 = acStack_1f0;
    iVar2 = -1;
    pcVar6 = pcVar3;
    do {
      pcVar14 = pcVar6;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar14 = pcVar6 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    iVar2 = -1;
    do {
      pcVar6 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar3 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    uVar7 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    if (((uVar7 == 0) || (uVar7 < 2)) || (uVar7 != 2)) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar2 = in_stack_0000003c._4_4_ + 1;
      iVar9 = in_stack_0000003c._4_4_;
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar2 = in_stack_00000028 + 3;
      iVar9 = in_stack_00000028 + 2;
    }
    in_stack_0000003c = (double)CONCAT44 /* combine 2-byte values */(iVar2,in_stack_00000028 + 2);
    crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundMenuTextBuffers[iVar9],pcVar3);
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar2 < 0) ||
       (iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar9 <= iVar2)) {
      SStack_608.flags = 0;
      SStack_608.device_name[4] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&SStack_608);
    }
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    pcVar3 = g_SoundMenuTextBuffers[in_stack_00000054];
    do {
      cVar1 = *pcVar12;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    pcVar3 = SStack_608.device_name + 8;
    iVar9 = in_stack_00000054 + 1;
    iVar2 = -1;
    pcVar12 = g_SoundMenuTextBuffers[in_stack_00000054];
    do {
      pcVar6 = pcVar12;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar12 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    in_stack_00000054 = iVar9;
    if (SStack_608.device_guid != 0) {
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar3 = g_SoundMenuTextBuffers[iVar9];
      if (iVar2 == 0) {
        pcVar12 = "Hardware mixing: Off";
      }
      else {
        pcVar12 = "Hardware mixing: On";
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
      do {
        cVar1 = *pcVar12;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      in_stack_0000005c = in_stack_0000005c + 1;
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar2 != 0) {
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      in_stack_0000006c = g_WindowWidth / 0x14;
      in_stack_00000070 = g_WindowWidth / iVar2;
      iVar9 = in_stack_00000070 + in_stack_0000006c * -2;
      iVar4 = iVar9 >> 0x1f;
      in_stack_00000074 = (float)((int)((iVar9 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
      in_stack_00000068 = iVar2;
      in_stack_fffff65c = in_stack_00000074;
      fVar16 = crt_math_c_pow_FUN_005ffd76
                         ((float10)50,(float10)1 / (float10)(int)in_stack_00000074);
      iVar9 = 0;
      dVar17 = (double)fVar16;
      if (0 < iVar2) {
        do {
          if (0 < (int)in_stack_fffff658) {
            iVar2 = in_stack_0000006c * iVar9 + in_stack_00000068;
            iVar4 = in_stack_fffff658 * 4 + iVar2;
            dVar18 = 200.0;
            do {
              in_stack_0000003c = (double)((float10)dVar18 * (float10)dVar17);
              in_stack_00000074 =
                   (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                    (iVar9,(float)dVar18,(float)((float10)dVar18 * (float10)dVar17))
              ;
              dVar17 = (double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar17 >> 0x20),0x512634);
              dVar18 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float)g_WindowHeight -
                                          in_stack_00000074 * (float)g_WindowHeight * 0.25f
                                          ));
              in_stack_00000070 = (int)ROUND(dVar18);
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70
                        (iVar2,y_top,(extraout_EDX - in_stack_00000070) + 1);
              iVar2 = iVar2 + 4;
              dVar18 = in_stack_0000003c;
            } while (iVar2 < iVar4);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)in_stack_00000064);
      }
    }
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    pcVar3 = (char *)0xe1;
    iVar2 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,(int)in_stack_00000064,(int *)&stack0x0000004c,
                       0xe1,(int)pcVar12);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    in_stack_00000068 = 0x3e4ccccd;
    switch(iVar2) {
    case 0:
      sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(0x5126e3);
      iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar2 == 0) goto LAB_005126f5;
      break;
    case 1:
      in_stack_00000074 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      in_stack_fffff660 =
           (double)CONCAT44 /* combine 2-byte values */(in_stack_00000074 / 0.25f,SUB84 /* extract 2-byte value */(in_stack_fffff660,0));
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          ppcStack_994 = (char **)0x3f800000;
        }
        else {
          in_stack_fffff668 = in_stack_fffff668 - in_stack_00000064;
          if (in_stack_fffff668 < (float)0.01) {
LAB_00512841:
            in_stack_fffff668 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          ppcStack_994 = (char **)0x3e4ccccd;
        }
        else {
          in_stack_fffff668 = in_stack_fffff668 + in_stack_00000064;
          if ((float)1.01 < in_stack_fffff668) goto LAB_00512841;
          if ((float)0.98999999999999999 < in_stack_fffff668) {
            in_stack_fffff668 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,(float)ppcStack_994 * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
      sound_sndmain_cpp_startSfx_FUN_005a8e90("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      break;
    case 2:
      in_stack_00000084 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      in_stack_fffff668 = in_stack_00000084 / 1f;
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          auStack_990._0_4_ = (CStrList_vtable *)0x3f800000;
        }
        else {
          ppcStack_994 = (char **)((float)ppcStack_994 - in_stack_00000074);
          if ((float)ppcStack_994 < (float)0.01) {
LAB_00512966:
            ppcStack_994 = (char **)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          auStack_990._0_4_ = (CStrList_vtable *)0x3e4ccccd;
        }
        else {
          ppcStack_994 = (char **)((float)ppcStack_994 + in_stack_00000074);
          if ((float)1.01 < (float)ppcStack_994) goto LAB_00512966;
          if ((float)0.98999999999999999 < (float)ppcStack_994) {
            ppcStack_994 = (char **)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,(float)auStack_990._0_4_ * 1f);
      break;
    case 3:
      in_stack_00000080 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      ppcStack_994 = (char **)(in_stack_00000080 / 0.25f);
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          auStack_990._8_4_ = (char **)0x3f800000;
        }
        else {
          auStack_990._0_4_ = (float)auStack_990._0_4_ + -0.2f;
          if ((float)auStack_990._0_4_ < (float)0.01) {
LAB_00512a67:
            auStack_990._0_4_ = (CStrList_vtable *)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          auStack_990._8_4_ = (char **)0x3e4ccccd;
        }
        else {
          auStack_990._0_4_ = (float)auStack_990._0_4_ + 0.2f;
          in_stack_fffff660 = (double)(float)auStack_990._0_4_;
          if ((float)1.01 < (float)auStack_990._0_4_) goto LAB_00512a67;
          if (0.98999999999999999 < in_stack_fffff660) {
            auStack_990._0_4_ = (CStrList_vtable *)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,(float)auStack_990._8_4_ * 0.25f);
      break;
    case 4:
      iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar2 == 0x5622) {
LAB_00512b46:
          fVar5 = 1.54843e-41;
        }
        else if (iVar2 == 0xac44) {
          fVar5 = 3.08986e-41;
        }
        else {
          fVar5 = 6.17973e-41;
        }
      }
      else if (iVar2 < 0x5622) {
        fVar5 = 3.08986e-41;
      }
      else {
        if (0xac43 < iVar2) goto LAB_00512b46;
        fVar5 = 6.17973e-41;
      }
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        fVar5 = 6.17973e-41;
      }
      fVar8 = (float)sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (fVar5 != fVar8) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0((int)fVar5);
        in_stack_fffff65c = fVar5;
        goto LAB_005126f5;
      }
      break;
    case 5:
      iVar2 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar2 == 0x10) {
        fVar5 = 1.12104e-44;
      }
      else {
        fVar5 = 2.24208e-44;
      }
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        fVar5 = 2.24208e-44;
      }
      fVar8 = (float)sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (fVar5 != fVar8) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280((int)fVar5);
        in_stack_fffff65c = fVar5;
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      fVar5 = (float)((iVar2 == 1) + 1);
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        fVar5 = 2.8026e-45;
      }
      fVar8 = (float)sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (fVar5 != fVar8) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0((int)fVar5);
        in_stack_fffff65c = fVar5;
        goto LAB_005126f5;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_990);
      for (iVar2 = 0; iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar2 < iVar9;
          iVar2 = iVar2 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&SStack_4e0);
        pcVar3 = SStack_4e0.device_name + 4;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff664,pcVar3);
      }
      iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff664,"Select sound device",iVar2,
                         (int)pcVar3);
      if (-1 < iVar2) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
        if (uVar7 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_990 + 0x10),0,in_stack_fffff658,(uint)in_stack_fffff65c,
                 SUB84 /* extract 2-byte value */(in_stack_fffff660,0),(uint)((ulonglong)in_stack_fffff660 >> 0x20),
                 (uint)in_stack_fffff668);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar2 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    in_stack_fffff658 = 1;
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
