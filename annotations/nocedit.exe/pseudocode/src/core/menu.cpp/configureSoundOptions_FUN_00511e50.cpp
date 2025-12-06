// Name: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
// Address Range: [[00511e50, 00512d1b]]
// Convention: __cdecl
// Signature: void core_menu.cpp_configureSoundOptions_FUN_00511e50(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

{
  char cVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char (*pacVar10) [256];
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  int iVar11;
  int height_half;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char (*pacVar12) [256];
  char *pcVar13;
  char (*pacVar14) [256];
  char *pcVar15;
  byte bVar16;
  float10 fVar17;
  double dVar18;
  int in_stack_00000004;
  float in_stack_00000020;
  int in_stack_0000002c;
  int in_stack_00000044;
  int in_stack_00000058;
  int in_stack_00000060;
  int in_stack_0000006c;
  float in_stack_00000070;
  int in_stack_00000074;
  int in_stack_00000078;
  float in_stack_00000080;
  int in_stack_00000084;
  float in_stack_0000008c;
  float in_stack_00000090;
  CGame *in_stack_fffff5b8;
  double dVar19;
  uint in_stack_fffff664;
  uint in_stack_fffff668;
  double in_stack_fffff66c;
  float in_stack_fffff674;
  char **ppcStack_988;
  byte auStack_984 [896];
  SSoundDeviceInfo SStack_604;
  SSoundDeviceInfo SStack_4d4;
  char acStack_328 [4];
  char acStack_324 [292];
  char acStack_200 [4];
  char acStack_1fc [12];
  char acStack_1f0 [4];
  char acStack_1ec [208];
  char acStack_11c [4];
  char acStack_118 [220];
  uint local_3c;
  uint local_1c;
  int local_14;
  
  bVar16 = 0;
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff5b8);
  pacVar10 = g_SoundMenuTextBuffers;
  iVar3 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar3) = pacVar10;
    iVar3 = iVar3 + 4;
    pacVar10 = pacVar10 + 1;
  } while (iVar3 != 0x28);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    local_1c = 0;
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    pacVar10 = g_SoundMenuTextBuffers;
    do {
      cVar1 = *pcVar4;
      (*pacVar10)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      *(char *)((int)pacVar10 + 1) = cVar1;
      pacVar10 = (char (*) [256])((int)pacVar10 + 2);
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
    if (iVar3 == 0) {
      pcVar4 = "On";
    }
    else {
      pcVar4 = "Muted";
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar4);
    iVar3 = -1;
    pacVar10 = g_SoundMenuTextBuffers;
    do {
      pacVar12 = pacVar10;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pacVar12 = (char (*) [256])((int)pacVar10 + (uint)bVar16 * -2 + 1);
      pcVar13 = *pacVar10;
      pacVar10 = pacVar12;
    } while (*pcVar13 != '\0');
    pcVar13 = pacVar12[-1] + 0xff;
    do {
      cVar1 = *pcVar4;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar3 = unaff_EBP + 1;
    iVar5 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_14 = unaff_EBP + 2;
    pacVar10 = g_SoundMenuTextBuffers + iVar3;
    if (iVar5 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar10,pcVar4);
      iVar3 = unaff_EBP;
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar10,pcVar4);
      fVar6 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      fVar17 = ((float10)fVar6 * (float10)100f) / (float10)0.25f +
               (float10)0.001;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,fVar6));
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_328,"%d",(int)ROUND(fVar17));
      pcVar4 = acStack_324;
      iVar5 = -1;
      pacVar12 = pacVar10;
      do {
        pacVar14 = pacVar12;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pacVar14 = (char (*) [256])((int)pacVar12 + (uint)bVar16 * -2 + 1);
        pcVar13 = *pacVar12;
        pacVar12 = pacVar14;
      } while (*pcVar13 != '\0');
      pcVar13 = pacVar14[-1] + 0xff;
      do {
        cVar1 = *pcVar4;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar5 = -1;
      do {
        pacVar12 = pacVar10;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pacVar12 = (char (*) [256])((int)pacVar10 + (uint)bVar16 * -2 + 1);
        pcVar13 = *pacVar10;
        pacVar10 = pacVar12;
      } while (*pcVar13 != '\0');
      pcVar13 = pacVar12[-1] + 0xff;
      do {
        cVar1 = *pcVar4;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar5 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    pcVar4 = g_SoundMenuTextBuffers[iVar3];
    if (iVar5 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,pcVar13);
      iVar3 = iVar3 + 1;
    }
    else {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar13 = pcVar4;
      do {
        cVar1 = *pcVar7;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      fVar6 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      fVar17 = ((float10)fVar6 * (float10)100f) / (float10)1f +
               (float10)0.001;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,fVar6));
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_11c,"%d",(int)ROUND(fVar17));
      pcVar13 = acStack_118;
      iVar3 = -1;
      pcVar7 = pcVar4;
      do {
        pcVar15 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar15 = pcVar7 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      pcVar15 = pcVar15 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar3 = -1;
      do {
        pcVar7 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar4 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar7 = cVar1;
        iVar3 = in_stack_00000004;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    iVar5 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    pcVar4 = g_SoundMenuTextBuffers[iVar3];
    if (iVar5 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,pcVar13);
    }
    else {
      pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar13 = pcVar4;
      do {
        cVar1 = *pcVar7;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      in_stack_00000020 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      fVar17 = ((float10)in_stack_00000020 * (float10)100f) / (float10)0.25f +
               (float10)0.001;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_01,in_stack_00000020));
      crt_stdio_c_sprintf_FUN_005fdbd0
                (SStack_4d4.device_name + 0xc4,"%d",(int)ROUND(fVar17));
      pcVar13 = SStack_4d4.device_name + 200;
      iVar3 = -1;
      pcVar7 = pcVar4;
      do {
        pcVar15 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar15 = pcVar7 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      pcVar15 = pcVar15 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar3 = -1;
      do {
        pcVar7 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar4 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar13;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar4 = g_SoundMenuTextBuffers[(int)in_stack_00000020];
    pcVar13 = pcVar4;
    do {
      cVar1 = *pcVar7;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_200,"%d",iVar3);
    pcVar13 = acStack_1fc;
    iVar3 = -1;
    pcVar7 = pcVar4;
    do {
      pcVar15 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar15 = pcVar7 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    iVar3 = -1;
    do {
      pcVar7 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar4 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar4 = g_SoundMenuTextBuffers[in_stack_0000002c + 1];
    pcVar13 = pcVar4;
    do {
      cVar1 = *pcVar7;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1f0,"%d",iVar3);
    pcVar13 = acStack_1ec;
    iVar3 = -1;
    pcVar7 = pcVar4;
    do {
      pcVar15 = pcVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar15 = pcVar7 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar15;
    } while (cVar1 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    iVar3 = -1;
    do {
      pcVar7 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar4 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iVar3 = in_stack_0000002c + 2;
    uVar8 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    if (((uVar8 == 0) || (uVar8 < 2)) || (uVar8 != 2)) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar5 = in_stack_00000044 + 1;
      iVar3 = in_stack_00000044;
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar5 = in_stack_0000002c + 3;
    }
    in_stack_00000044 = iVar5;
    crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundMenuTextBuffers[iVar3],pcVar4);
    iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar3 < 0) ||
       (iVar5 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar5 <= iVar3)) {
      SStack_604.flags = 0;
      SStack_604.device_name[4] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&SStack_604);
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    pcVar4 = g_SoundMenuTextBuffers[in_stack_00000058];
    do {
      cVar1 = *pcVar13;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    pcVar4 = SStack_604.device_name + 8;
    iVar5 = in_stack_00000058 + 1;
    iVar3 = -1;
    pcVar13 = g_SoundMenuTextBuffers[in_stack_00000058];
    do {
      pcVar7 = pcVar13;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar13 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    in_stack_00000058 = iVar5;
    if (SStack_604.device_guid != 0) {
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar4 = g_SoundMenuTextBuffers[iVar5];
      if (iVar3 == 0) {
        pcVar13 = "Hardware mixing: Off";
      }
      else {
        pcVar13 = "Hardware mixing: On";
      }
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar13);
      do {
        cVar1 = *pcVar13;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      in_stack_00000060 = in_stack_00000060 + 1;
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar3 != 0) {
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      in_stack_00000070 = (float)(g_WindowWidth / 0x14);
      in_stack_00000074 = g_WindowWidth / iVar3;
      iVar5 = in_stack_00000074 + (int)in_stack_00000070 * -2;
      iVar11 = iVar5 >> 0x1f;
      in_stack_00000078 = (int)((iVar5 + iVar11 * -4) - (uint)(iVar11 << 1 < 0)) >> 2;
      in_stack_0000006c = iVar3;
      fVar17 = crt_math_c_pow_FUN_005ffd76
                         ((float10)50,(float10)1 / (float10)in_stack_00000078);
      iVar5 = 0;
      dVar19 = (double)fVar17;
      if (0 < iVar3) {
        do {
          if (0 < (int)in_stack_fffff664) {
            iVar3 = in_stack_00000078 * iVar5 + in_stack_00000074;
            iVar11 = in_stack_fffff664 * 4 + iVar3;
            fVar6 = 200.0;
            do {
              fVar2 = (float)dVar19;
              in_stack_00000080 =
                   (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                    (iVar5,fVar6,fVar6 * fVar2);
              fVar17 = (float10)g_WindowHeight -
                       (float10)in_stack_00000080 * (float10)g_WindowHeight *
                       (float10)0.25f;
              dVar18 = crt_math_c_round_FUN_005fe6b0
                                 ((double)CONCAT44 /* combine 2-byte values */(g_WindowHeight + -1,g_WindowHeight + -1));
              in_stack_00000084 = (int)ROUND(fVar17);
              height_half = ((int)((ulonglong)dVar18 >> 0x20) - in_stack_00000084) + 1;
              dVar19 = (double)CONCAT44 /* combine 2-byte values */(height_half,SUB84 /* extract 2-byte value */(dVar18,0));
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(iVar3,SUB84 /* extract 2-byte value */(dVar18,0),height_half);
              iVar3 = iVar3 + 4;
              fVar6 = fVar6 * fVar2;
            } while (iVar3 < iVar11);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)in_stack_00000070);
      }
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    pcVar4 = (char *)0xe1;
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,(int)in_stack_00000070,&stack0x00000058,0xe1,
                       (int)pcVar13);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    in_stack_00000074 = 0x3e4ccccd;
    switch(iVar3) {
    case 0:
      sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(0x5126e3);
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar3 == 0) goto LAB_005126f5;
      break;
    case 1:
      in_stack_00000080 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      in_stack_fffff66c =
           (double)CONCAT44 /* combine 2-byte values */(in_stack_00000080 / 0.25f,SUB84 /* extract 2-byte value */(in_stack_fffff66c,0));
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          ppcStack_988 = (char **)0x3f800000;
        }
        else {
          in_stack_fffff674 = in_stack_fffff674 - in_stack_00000070;
          if (in_stack_fffff674 < (float)0.01) {
LAB_00512841:
            in_stack_fffff674 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          ppcStack_988 = (char **)0x3e4ccccd;
        }
        else {
          in_stack_fffff674 = in_stack_fffff674 + in_stack_00000070;
          if ((float)1.01 < in_stack_fffff674) goto LAB_00512841;
          if ((float)0.98999999999999999 < in_stack_fffff674) {
            in_stack_fffff674 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,(float)ppcStack_988 * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
      sound_sndmain_cpp_startSfx_FUN_005a8e90("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      break;
    case 2:
      in_stack_00000090 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      in_stack_fffff674 = in_stack_00000090 / 1f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          auStack_984._0_4_ = (CStrList_vtable *)0x3f800000;
        }
        else {
          ppcStack_988 = (char **)((float)ppcStack_988 - in_stack_00000080);
          if ((float)ppcStack_988 < (float)0.01) {
LAB_00512966:
            ppcStack_988 = (char **)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          auStack_984._0_4_ = (CStrList_vtable *)0x3e4ccccd;
        }
        else {
          ppcStack_988 = (char **)((float)ppcStack_988 + in_stack_00000080);
          if ((float)1.01 < (float)ppcStack_988) goto LAB_00512966;
          if ((float)0.98999999999999999 < (float)ppcStack_988) {
            ppcStack_988 = (char **)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,(float)auStack_984._0_4_ * 1f);
      break;
    case 3:
      in_stack_0000008c = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      ppcStack_988 = (char **)(in_stack_0000008c / 0.25f);
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          auStack_984._8_4_ = (char **)0x3f800000;
        }
        else {
          auStack_984._0_4_ = (float)auStack_984._0_4_ + -0.2f;
          if ((float)auStack_984._0_4_ < (float)0.01) {
LAB_00512a67:
            auStack_984._0_4_ = (CStrList_vtable *)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          auStack_984._8_4_ = (char **)0x3e4ccccd;
        }
        else {
          auStack_984._0_4_ = (float)auStack_984._0_4_ + 0.2f;
          in_stack_fffff66c = (double)(float)auStack_984._0_4_;
          if ((float)1.01 < (float)auStack_984._0_4_) goto LAB_00512a67;
          if (0.98999999999999999 < in_stack_fffff66c) {
            auStack_984._0_4_ = (CStrList_vtable *)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,(float)auStack_984._8_4_ * 0.25f);
      break;
    case 4:
      iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar3 == 0x5622) {
LAB_00512b46:
          uVar8 = 0x2b2a;
        }
        else if (iVar3 == 0xac44) {
          uVar8 = 0x5622;
        }
        else {
          uVar8 = 0xac44;
        }
      }
      else if (iVar3 < 0x5622) {
        uVar8 = 0x5622;
      }
      else {
        if (0xac43 < iVar3) goto LAB_00512b46;
        uVar8 = 0xac44;
      }
      uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar9 != 0) {
        uVar8 = 0xac44;
      }
      uVar9 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (uVar8 != uVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(uVar8);
        in_stack_fffff668 = uVar8;
        goto LAB_005126f5;
      }
      break;
    case 5:
      iVar3 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar3 == 0x10) {
        uVar8 = 8;
      }
      else {
        uVar8 = 0x10;
      }
      uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar9 != 0) {
        uVar8 = 0x10;
      }
      uVar9 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (uVar8 != uVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(uVar8);
        in_stack_fffff668 = uVar8;
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      uVar8 = (iVar3 == 1) + 1;
      uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar9 != 0) {
        uVar8 = 2;
      }
      uVar9 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (uVar8 != uVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(uVar8);
        in_stack_fffff668 = uVar8;
        goto LAB_005126f5;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_984);
      for (iVar3 = 0; iVar5 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar3 < iVar5;
          iVar3 = iVar3 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&SStack_4d4);
        pcVar4 = SStack_4d4.device_name + 4;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff670,pcVar4);
      }
      iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff670,"Select sound device",iVar3,
                         (int)pcVar4);
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        uVar8 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
        if (uVar8 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_984 + 0x10),0,in_stack_fffff664,in_stack_fffff668,
                 SUB84 /* extract 2-byte value */(in_stack_fffff66c,0),(uint)((ulonglong)in_stack_fffff66c >> 0x20),
                 (uint)in_stack_fffff674);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar3 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    in_stack_fffff664 = 1;
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
