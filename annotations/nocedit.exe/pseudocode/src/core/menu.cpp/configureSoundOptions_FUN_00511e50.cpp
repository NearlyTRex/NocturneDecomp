// Name: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
// Address Range: [[00511e50, 00512d1b]]
// Convention: __cdecl
// Signature: void core_menu.cpp_configureSoundOptions_FUN_00511e50(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  char *pcVar4;
  float fVar5;
  char *pcVar6;
  uint uVar7;
  int y_top;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char (*pacVar11) [256];
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  DWORD *pDVar12;
  char (*pacVar13) [256];
  char *pcVar14;
  int iVar15;
  char (*pacVar16) [256];
  char *pcVar17;
  byte bVar18;
  float10 fVar19;
  double dVar20;
  double dVar21;
  CGame *in_stack_fffff5b8;
  CSound *this_ptr;
  ulonglong uVar22;
  uint in_stack_fffff5c0;
  uint in_stack_fffff5c4;
  double in_stack_fffff5c8;
  float local_a30;
  int local_a2c;
  byte local_a28 [16];
  byte auStack_a18 [929];
  char local_677 [263];
  int local_570;
  char local_560 [4];
  SSoundDeviceInfo SStack_55c;
  char local_348 [256];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  int local_40;
  int local_3c [2];
  int local_34;
  int local_30;
  uint local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  int local_14;
  
  bVar18 = 0;
  local_3c[0] = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff5b8);
  pacVar11 = g_SoundMenuTextBuffers;
  iVar3 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar3) = pacVar11;
    iVar3 = iVar3 + 4;
    pacVar11 = pacVar11 + 1;
  } while (iVar3 != 0x28);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    local_2c = 0;
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    pacVar11 = g_SoundMenuTextBuffers;
    do {
      cVar1 = *pcVar4;
      (*pacVar11)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      *(char *)((int)pacVar11 + 1) = cVar1;
      pacVar11 = (char (*) [256])((int)pacVar11 + 2);
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
    if (iVar3 == 0) {
      pcVar4 = "On";
    }
    else {
      pcVar4 = "Muted";
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar4);
    iVar3 = local_24;
    iVar10 = -1;
    pacVar11 = g_SoundMenuTextBuffers;
    do {
      pacVar13 = pacVar11;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pacVar13 = (char (*) [256])((int)pacVar11 + (uint)bVar18 * -2 + 1);
      pcVar14 = *pacVar11;
      pacVar11 = pacVar13;
    } while (*pcVar14 != '\0');
    pcVar14 = pacVar13[-1] + 0xff;
    do {
      cVar1 = *pcVar4;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    iVar15 = local_24 + 1;
    uVar8 = 0;
    iVar10 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_34 = iVar3 + 2;
    pacVar11 = g_SoundMenuTextBuffers + iVar15;
    local_20 = iVar15;
    if (iVar10 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      iVar3 = local_34;
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar11,pcVar4);
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar11,pcVar4);
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      uVar22 = CONCAT44 /* combine 2-byte values */(uVar8,0x511fbd);
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar5 * 100f) / 0.25f +
                                  (float)0.001));
      local_14 = (int)ROUND(dVar20);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_348,"%d",local_14,uVar22);
      uVar8 = (uint)((ulonglong)uVar22 >> 0x20);
      pcVar4 = local_348;
      iVar3 = -1;
      pacVar13 = pacVar11;
      do {
        pacVar16 = pacVar13;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pacVar16 = (char (*) [256])((int)pacVar13 + (uint)bVar18 * -2 + 1);
        pcVar14 = *pacVar13;
        pacVar13 = pacVar16;
      } while (*pcVar14 != '\0');
      pcVar14 = pacVar16[-1] + 0xff;
      do {
        cVar1 = *pcVar4;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar3 = -1;
      do {
        pacVar13 = pacVar11;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pacVar13 = (char (*) [256])((int)pacVar11 + (uint)bVar18 * -2 + 1);
        pcVar14 = *pacVar11;
        pacVar11 = pacVar13;
      } while (*pcVar14 != '\0');
      pcVar14 = pacVar13[-1] + 0xff;
      do {
        cVar1 = *pcVar4;
        *pcVar14 = cVar1;
        iVar3 = local_34;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar15 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    iVar10 = iVar3 + 1;
    pcVar4 = g_SoundMenuTextBuffers[iVar3];
    local_30 = iVar10;
    if (iVar15 == 0) {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,pcVar14);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar14 = pcVar4;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      uVar22 = CONCAT44 /* combine 2-byte values */(uVar8,0x5120c3);
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar5 * 100f) / 1f +
                                  (float)0.001));
      local_14 = (int)ROUND(dVar20);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_148,"%d",local_14,uVar22);
      uVar8 = (uint)((ulonglong)uVar22 >> 0x20);
      pcVar14 = local_148;
      iVar3 = -1;
      pcVar6 = pcVar4;
      do {
        pcVar17 = pcVar6;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar17 = pcVar6 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar1 != '\0');
      pcVar17 = pcVar17 + -1;
      do {
        cVar1 = *pcVar14;
        *pcVar17 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar17[1] = cVar1;
        pcVar17 = pcVar17 + 2;
      } while (cVar1 != '\0');
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar3 = -1;
      do {
        pcVar6 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar4 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar14;
        *pcVar6 = cVar1;
        iVar10 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    iVar15 = iVar10 + 1;
    pcVar4 = g_SoundMenuTextBuffers[iVar10];
    local_40 = iVar15;
    if (iVar3 == 0) {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      local_24 = iVar15;
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,pcVar14);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar14 = pcVar4;
      do {
        cVar1 = *pcVar6;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      uVar22 = CONCAT44 /* combine 2-byte values */(uVar8,0x5121c7);
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((fVar5 * 100f) / 0.25f +
                                  (float)0.001));
      local_14 = (int)ROUND(dVar20);
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)&SStack_55c.device_value2,"%d",local_14,uVar22);
      uVar8 = (uint)((ulonglong)uVar22 >> 0x20);
      pDVar12 = &SStack_55c.device_value2;
      iVar3 = -1;
      pcVar14 = pcVar4;
      do {
        pcVar6 = pcVar14;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar14 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        DVar2 = *pDVar12;
        *pcVar6 = (char)DVar2;
        if ((char)DVar2 == '\0') break;
        cVar1 = *(char *)((int)pDVar12 + 1);
        pDVar12 = (DWORD *)((int)pDVar12 + 2);
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar3 = -1;
      do {
        pcVar6 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar4 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar14;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      local_24 = local_40;
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar4 = g_SoundMenuTextBuffers[local_24];
    pcVar14 = pcVar4;
    do {
      cVar1 = *pcVar6;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    crt_stdio_c_sprintf_FUN_005fdbd0(local_248 + 4,"%d",iVar3);
    pcVar14 = local_248;
    iVar3 = -1;
    pcVar6 = pcVar4;
    do {
      pcVar17 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar17 = pcVar6 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar1 != '\0');
    pcVar17 = pcVar17 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar17 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar17[1] = cVar1;
      pcVar17 = pcVar17 + 2;
    } while (cVar1 != '\0');
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    iVar3 = local_24;
    iVar10 = -1;
    do {
      pcVar6 = pcVar4;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar6 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar10 = local_24 + 1;
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar4 = g_SoundMenuTextBuffers[iVar10];
    pcVar14 = pcVar4;
    do {
      cVar1 = *pcVar6;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    local_20 = iVar10;
    iVar10 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    crt_stdio_c_sprintf_FUN_005fdbd0(local_248 + 4,"%d",iVar10);
    pcVar14 = local_248;
    iVar10 = -1;
    pcVar6 = pcVar4;
    do {
      pcVar17 = pcVar6;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar17 = pcVar6 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar1 != '\0');
    pcVar17 = pcVar17 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar17 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar17[1] = cVar1;
      pcVar17 = pcVar17 + 2;
    } while (cVar1 != '\0');
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    iVar10 = -1;
    do {
      pcVar6 = pcVar4;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar6 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar10 = iVar3 + 2;
    uVar7 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    local_20 = iVar10;
    if (((uVar7 == 0) || (uVar7 < 2)) || (uVar7 != 2)) {
      dVar20 = (double)((ulonglong)uVar8 << 0x20);
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar3 = local_24 + 1;
      iVar10 = local_24;
    }
    else {
      dVar20 = (double)((ulonglong)uVar8 << 0x20);
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar3 = iVar3 + 3;
    }
    local_24 = iVar3;
    crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundMenuTextBuffers[iVar10],pcVar4);
    iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar3 < 0) ||
       (iVar10 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar10 <= iVar3)) {
      local_570 = 0;
      auStack_a18[0x3a0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370
                (iVar3,(SSoundDeviceInfo *)(auStack_a18 + 0x3a0));
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    pcVar4 = g_SoundMenuTextBuffers[local_24];
    do {
      cVar1 = *pcVar14;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    pcVar4 = auStack_a18 + 0x3a0;
    iVar10 = local_24 + 1;
    iVar3 = -1;
    pcVar14 = g_SoundMenuTextBuffers[local_24];
    do {
      pcVar6 = pcVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar14 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar10;
    if (local_570 != 0) {
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar4 = g_SoundMenuTextBuffers[iVar10];
      if (iVar3 == 0) {
        pcVar14 = "Hardware mixing: Off";
      }
      else {
        pcVar14 = "Hardware mixing: On";
      }
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar14);
      do {
        cVar1 = *pcVar14;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      local_28 = (float)((int)local_28 + 1);
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar3 != 0) {
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      local_18 = (float)(g_WindowWidth / 0x14);
      local_14 = g_WindowWidth / iVar3;
      iVar10 = local_14 + (int)local_18 * -2;
      iVar15 = iVar10 >> 0x1f;
      local_a28._0_4_ = (int)((iVar10 + iVar15 * -4) - (uint)(iVar15 << 1 < 0)) >> 2;
      local_1c = iVar3;
      fVar19 = crt_math_c_pow_FUN_005ffd76
                         ((float10)50,(float10)1 / (float10)(int)local_a28._0_4_);
      iVar10 = 0;
      dVar20 = (double)fVar19;
      if (0 < iVar3) {
        do {
          in_stack_fffff5c0 = 0;
          in_stack_fffff5c4 = 0x40690000;
          if (0 < local_a2c) {
            iVar3 = (int)local_18 * iVar10 + local_1c;
            iVar15 = local_a2c * 4 + iVar3;
            local_48._0_4_ = 0;
            local_48._4_4_ = 0x40690000;
            do {
              fVar19 = (float10)(double)CONCAT44 /* combine 2-byte values */(local_48._4_4_,(uint)local_48) * (float10)dVar20;
              dVar21 = (double)CONCAT44 /* combine 2-byte values */(local_48._4_4_,(uint)local_48);
              local_48 = (double)fVar19;
              fVar5 = (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                       (iVar10,(float)dVar21,(float)fVar19);
              dVar21 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float)g_WindowHeight -
                                          fVar5 * (float)g_WindowHeight * 0.25f));
              local_18 = (float)(int)ROUND(dVar21);
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70
                        (iVar3,y_top,(extraout_EDX - (int)local_18) + 1);
              iVar3 = iVar3 + 4;
              in_stack_fffff5c0 = (uint)local_48;
              in_stack_fffff5c4 = local_48._4_4_;
            } while (iVar3 < iVar15);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_20);
      }
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,local_24,local_3c,0xe1,(int)pcVar4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_30 = 0x3e4ccccd;
    switch(iVar3) {
    case 0:
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar3 == 0));
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      this_ptr = g_CSoundPtr;
      if (iVar3 == 0) goto LAB_005126f5;
      break;
    case 1:
      local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      local_a28._4_4_ = local_18 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          local_a28._4_4_ = 1.0;
        }
        else {
          local_a28._4_4_ = (float)local_a28._4_4_ - local_28;
          if ((float)local_a28._4_4_ < (float)0.01) {
LAB_00512841:
            local_a28._4_4_ = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          local_a28._4_4_ = 0.2;
        }
        else {
          local_a28._4_4_ = (float)local_a28._4_4_ + local_28;
          if ((float)1.01 < (float)local_a28._4_4_) goto LAB_00512841;
          if ((float)0.98999999999999999 < (float)local_a28._4_4_) {
            local_a28._4_4_ = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,(float)local_a28._4_4_ * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
      sound_sndmain_cpp_startSfx_FUN_005a8e90("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      break;
    case 2:
      local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      local_a30 = local_18 / 1f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          local_a30 = 1.0;
        }
        else {
          local_a30 = local_a30 - local_28;
          if (local_a30 < (float)0.01) {
LAB_00512966:
            local_a30 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          local_a30 = 0.2;
        }
        else {
          local_a30 = local_a30 + local_28;
          if ((float)1.01 < local_a30) goto LAB_00512966;
          if ((float)0.98999999999999999 < local_a30) {
            local_a30 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,local_a30 * 1f);
      break;
    case 3:
      local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      local_a28._0_4_ = local_18 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          local_a28._0_4_ = 1.0;
        }
        else {
          local_a28._0_4_ = (float)local_a28._0_4_ + -0.2f;
          if ((float)local_a28._0_4_ < (float)0.01) {
LAB_00512a67:
            local_a28._0_4_ = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          local_a28._0_4_ = 0.2;
        }
        else {
          local_a28._0_4_ = (float)local_a28._0_4_ + 0.2f;
          in_stack_fffff5c8 = (double)(float)local_a28._0_4_;
          if ((float)1.01 < (float)local_a28._0_4_) goto LAB_00512a67;
          if (0.98999999999999999 < in_stack_fffff5c8) {
            local_a28._0_4_ = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,(float)local_a28._0_4_ * 0.25f);
      break;
    case 4:
      iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar3 == 0x5622) {
LAB_00512b46:
          iVar3 = 0x2b2a;
        }
        else if (iVar3 == 0xac44) {
          iVar3 = 0x5622;
        }
        else {
          iVar3 = 0xac44;
        }
      }
      else if (iVar3 < 0x5622) {
        iVar3 = 0x5622;
      }
      else {
        if (0xac43 < iVar3) goto LAB_00512b46;
        iVar3 = 0xac44;
      }
      uVar8 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar8 != 0) {
        iVar3 = 0xac44;
      }
      iVar10 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (iVar3 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        this_ptr = (CSound *)0x512b71;
        sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(iVar3);
        goto LAB_005126f5;
      }
      break;
    case 5:
      iVar3 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar3 == 0x10) {
        iVar3 = 8;
      }
      else {
        iVar3 = 0x10;
      }
      uVar8 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar8 != 0) {
        iVar3 = 0x10;
      }
      iVar10 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar3 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        this_ptr = (CSound *)0x512be6;
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(iVar3);
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      iVar3 = (iVar3 == 1) + 1;
      uVar8 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar8 != 0) {
        iVar3 = 2;
      }
      iVar10 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (iVar3 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        this_ptr = (CSound *)0x512c35;
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(iVar3);
        goto LAB_005126f5;
      }
      break;
    case 7:
      iVar3 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_a28);
      while( true ) {
        uVar8 = (uint)((ulonglong)dVar20 >> 0x20);
        iVar10 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
        if (iVar10 <= iVar3) break;
        dVar20 = (double)CONCAT44 /* combine 2-byte values */(uVar8,&SStack_55c);
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&SStack_55c);
        iVar3 = iVar3 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_a28 + 8),local_560);
      }
      uVar7 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      uVar9 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)auStack_a18,"Select sound device",uVar7,uVar8);
      if (-1 < (int)uVar9) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        uVar7 = uVar9;
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(uVar9);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
        if (uVar9 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(local_a28 + 8),0,uVar7,uVar8,in_stack_fffff5c0,in_stack_fffff5c4,
                 SUB84 /* extract 2-byte value */(in_stack_fffff5c8,0));
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar3 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
      this_ptr = g_CSoundPtr;
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(this_ptr);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
