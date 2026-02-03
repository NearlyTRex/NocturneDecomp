// Name: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
// Address Range: [[00511e50, 00512d1b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

{
  double dVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int y_top;
  int iVar10;
  char (*pacVar11) [256];
  int height_half;
  DWORD *pDVar12;
  SSoundDeviceInfo *pSVar13;
  char (*pacVar14) [256];
  char *pcVar15;
  int iVar16;
  char (*pacVar17) [256];
  char *pcVar18;
  byte bVar19;
  float10 fVar20;
  double dVar21;
  ulonglong in_stack_fffff5b4;
  ulonglong uVar22;
  uint uVar24;
  longlong lVar23;
  uint uStack_a44;
  uint local_a40;
  uint uStack_a3c;
  uint local_a38;
  float local_a30;
  float local_a28;
  float local_a24;
  CPickList local_a20;
  SSoundDeviceInfo local_678;
  SSoundDeviceInfo local_560;
  char acStack_34c [260];
  char local_248 [252];
  char acStack_14c [260];
  uint local_48;
  ulonglong uStack_44;
  int local_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  dVar1 = (double)(ulonglong)local_a38;
  bVar19 = 0;
  uVar22 = CONCAT44((int)((ulonglong)in_stack_fffff5b4 >> 0x20),g_CGamePtr);
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pacVar11 = g_SoundMenuTextBuffers;
  iVar4 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar4) = pacVar11;
    iVar4 = iVar4 + 4;
    pacVar11 = pacVar11 + 1;
  } while (iVar4 != 0x28);
  do {
    local_a38 = SUB84(dVar1,0);
    uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    local_2c = 0;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    pacVar11 = g_SoundMenuTextBuffers;
    do {
      cVar2 = *pcVar5;
      (*pacVar11)[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      *(char *)((int)pacVar11 + 1) = cVar2;
      pacVar11 = (char (*) [256])((int)pacVar11 + 2);
    } while (cVar2 != '\0');
    iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
    if (iVar4 == 0) {
      pcVar5 = "On";
    }
    else {
      pcVar5 = "Muted";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar5);
    iVar4 = local_2c;
    iVar10 = -1;
    pacVar11 = g_SoundMenuTextBuffers;
    do {
      pacVar14 = pacVar11;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pacVar14 = (char (*) [256])((int)pacVar11 + (uint)bVar19 * -2 + 1);
      pcVar15 = *pacVar11;
      pacVar11 = pacVar14;
    } while (*pcVar15 != '\0');
    pcVar15 = pacVar14[-1] + 0xff;
    do {
      cVar2 = *pcVar5;
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    iVar16 = local_2c + 1;
    iVar10 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_34 = iVar4 + 2;
    pacVar11 = g_SoundMenuTextBuffers + iVar16;
    local_2c = iVar16;
    if (iVar10 == 0) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      iVar4 = local_34;
      sprintf(*pacVar11,pcVar5);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      sprintf(*pacVar11,pcVar5);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      uVar22 = CONCAT44(uVar24,0x511fbd);
      dVar21 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar21);
      sprintf(acStack_34c,"%d",local_18,uVar22);
      uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      pcVar5 = acStack_34c;
      iVar4 = -1;
      pacVar14 = pacVar11;
      do {
        pacVar17 = pacVar14;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pacVar17 = (char (*) [256])((int)pacVar14 + (uint)bVar19 * -2 + 1);
        pcVar15 = *pacVar14;
        pacVar14 = pacVar17;
      } while (*pcVar15 != '\0');
      pcVar15 = pacVar17[-1] + 0xff;
      do {
        cVar2 = *pcVar5;
        *pcVar15 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar15[1] = cVar2;
        pcVar15 = pcVar15 + 2;
      } while (cVar2 != '\0');
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar4 = -1;
      do {
        pacVar14 = pacVar11;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pacVar14 = (char (*) [256])((int)pacVar11 + (uint)bVar19 * -2 + 1);
        pcVar15 = *pacVar11;
        pacVar11 = pacVar14;
      } while (*pcVar15 != '\0');
      pcVar15 = pacVar14[-1] + 0xff;
      do {
        cVar2 = *pcVar5;
        *pcVar15 = cVar2;
        iVar4 = iStack_38;
        if (cVar2 == '\0') break;
        cVar2 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar15[1] = cVar2;
        pcVar15 = pcVar15 + 2;
      } while (cVar2 != '\0');
    }
    iVar16 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    iVar10 = iVar4 + 1;
    pcVar5 = g_SoundMenuTextBuffers[iVar4];
    local_30 = iVar10;
    if (iVar16 == 0) {
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      sprintf(pcVar5,pcVar15);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar15 = pcVar5;
      do {
        cVar2 = *pcVar6;
        *pcVar15 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar15[1] = cVar2;
        pcVar15 = pcVar15 + 2;
      } while (cVar2 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      uVar22 = CONCAT44(uVar24,0x5120c3);
      dVar21 = round
                         ((double)((local_14 * 100.0f) / 1.0f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar21);
      sprintf(acStack_14c,"%d",local_18,uVar22);
      uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      pcVar15 = acStack_14c;
      iVar4 = -1;
      pcVar6 = pcVar5;
      do {
        pcVar18 = pcVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar18 = pcVar6 + (uint)bVar19 * -2 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar18;
      } while (cVar2 != '\0');
      pcVar18 = pcVar18 + -1;
      do {
        cVar2 = *pcVar15;
        *pcVar18 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar18[1] = cVar2;
        pcVar18 = pcVar18 + 2;
      } while (cVar2 != '\0');
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar4 = -1;
      do {
        pcVar6 = pcVar5;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar5 + (uint)bVar19 * -2 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar2 = *pcVar15;
        *pcVar6 = cVar2;
        iVar10 = local_34;
        if (cVar2 == '\0') break;
        cVar2 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar6[1] = cVar2;
        pcVar6 = pcVar6 + 2;
      } while (cVar2 != '\0');
    }
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    pcVar5 = g_SoundMenuTextBuffers[iVar10];
    uStack_44 = (double)CONCAT44(iVar10 + 1,(float)uStack_44);
    if (iVar4 == 0) {
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      local_24 = iVar10 + 1;
      sprintf(pcVar5,pcVar15);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar15 = pcVar5;
      do {
        cVar2 = *pcVar6;
        *pcVar15 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar15[1] = cVar2;
        pcVar15 = pcVar15 + 2;
      } while (cVar2 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      uVar22 = CONCAT44(uVar24,0x5121c7);
      dVar21 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar21);
      sprintf
                ((char *)&local_560.device_value2,"%d",local_18,uVar22);
      uVar24 = (uint)((ulonglong)uVar22 >> 0x20);
      pDVar12 = &local_560.device_value2;
      iVar4 = -1;
      pcVar15 = pcVar5;
      do {
        pcVar6 = pcVar15;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar15 + (uint)bVar19 * -2 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar6;
      } while (cVar2 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        DVar3 = *pDVar12;
        *pcVar6 = (char)DVar3;
        if ((char)DVar3 == '\0') break;
        cVar2 = *(char *)((int)pDVar12 + 1);
        pDVar12 = (DWORD *)((int)pDVar12 + 2);
        pcVar6[1] = cVar2;
        pcVar6 = pcVar6 + 2;
      } while (cVar2 != '\0');
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar4 = -1;
      do {
        pcVar6 = pcVar5;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar5 + (uint)bVar19 * -2 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar2 = *pcVar15;
        *pcVar6 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar6[1] = cVar2;
        pcVar6 = pcVar6 + 2;
      } while (cVar2 != '\0');
      local_28 = (float)uStack_44;
    }
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar5 = g_SoundMenuTextBuffers[local_24];
    pcVar15 = pcVar5;
    do {
      cVar2 = *pcVar6;
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    iVar4 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    sprintf(local_248,"%d",iVar4);
    pcVar15 = local_248;
    iVar4 = -1;
    pcVar6 = pcVar5;
    do {
      pcVar18 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar18 = pcVar6 + (uint)bVar19 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    pcVar18 = pcVar18 + -1;
    do {
      cVar2 = *pcVar15;
      *pcVar18 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar18[1] = cVar2;
      pcVar18 = pcVar18 + 2;
    } while (cVar2 != '\0');
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    iVar4 = local_24;
    iVar10 = -1;
    do {
      pcVar6 = pcVar5;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar6 = pcVar5 + (uint)bVar19 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar15;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    iVar10 = local_24 + 1;
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar5 = g_SoundMenuTextBuffers[iVar10];
    pcVar15 = pcVar5;
    do {
      cVar2 = *pcVar6;
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    local_24 = iVar10;
    iVar10 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    sprintf(local_248,"%d",iVar10);
    pcVar15 = local_248;
    iVar10 = -1;
    pcVar6 = pcVar5;
    do {
      pcVar18 = pcVar6;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar18 = pcVar6 + (uint)bVar19 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    pcVar18 = pcVar18 + -1;
    do {
      cVar2 = *pcVar15;
      *pcVar18 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar18[1] = cVar2;
      pcVar18 = pcVar18 + 2;
    } while (cVar2 != '\0');
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    iVar10 = -1;
    do {
      pcVar6 = pcVar5;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar6 = pcVar5 + (uint)bVar19 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar15;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    iVar10 = iVar4 + 2;
    uVar7 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    local_24 = iVar10;
    if (((uVar7 == 0) || (uVar7 < 2)) || (uVar7 != 2)) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar4 = local_24 + 1;
      iVar10 = local_24;
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar4 = iVar4 + 3;
    }
    local_24 = iVar4;
    sprintf(g_SoundMenuTextBuffers[iVar10],pcVar5);
    iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar4 < 0) ||
       (iVar10 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar10 <= iVar4)) {
      local_678.device_value1 = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar4,&local_678);
    }
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    pcVar5 = g_SoundMenuTextBuffers[local_24];
    do {
      cVar2 = *pcVar15;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pSVar13 = &local_678;
    iVar10 = local_24 + 1;
    iVar4 = -1;
    pcVar5 = g_SoundMenuTextBuffers[local_24];
    do {
      pcVar15 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar15 = pcVar5 + (uint)bVar19 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar15;
    } while (cVar2 != '\0');
    pcVar15 = pcVar15 + -1;
    do {
      cVar2 = pSVar13->device_name[0];
      *pcVar15 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pSVar13->device_name[1];
      pSVar13 = (SSoundDeviceInfo *)(pSVar13->device_name + 2);
      pcVar15[1] = cVar2;
      pcVar15 = pcVar15 + 2;
    } while (cVar2 != '\0');
    local_24 = iVar10;
    if (local_678.device_value1 != 0) {
      iVar4 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar5 = g_SoundMenuTextBuffers[iVar10];
      if (iVar4 == 0) {
        pcVar15 = "Hardware mixing: Off";
      }
      else {
        pcVar15 = "Hardware mixing: On";
      }
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar15);
      do {
        cVar2 = *pcVar15;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar15[1];
        pcVar15 = pcVar15 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      local_24 = local_24 + 1;
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar4 != 0) {
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      local_1c = g_WindowWidth / 0x14;
      local_18 = g_WindowWidth / iVar4;
      iVar10 = local_18 + local_1c * -2;
      iVar16 = iVar10 >> 0x1f;
      fVar8 = (float)((int)((iVar10 + iVar16 * -4) - (uint)(iVar16 << 1 < 0)) >> 2);
      local_20 = iVar4;
      local_14 = fVar8;
      fVar20 = pow
                         ((float10)50,(float10)1 / (float10)(int)fVar8);
      iVar10 = 0;
      dVar21 = (double)fVar20;
      uVar24 = (uint)((ulonglong)dVar21 >> 0x20);
      if (0 < iVar4) {
        do {
          local_a40 = 0;
          uStack_a3c = 0x40690000;
          if (0 < (int)fVar8) {
            iVar4 = local_18 * iVar10 + local_1c;
            iVar16 = (int)fVar8 * 4 + iVar4;
            do {
              fVar20 = (float10)(double)CONCAT44(local_a38,uStack_a3c) *
                       (float10)(double)CONCAT44(local_a40,uStack_a44);
              uStack_44 = (double)fVar20;
              fVar9 = (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                       (iVar10,(float)(double)CONCAT44(local_a38,uStack_a3c),
                                        (float)fVar20);
              y_top = g_WindowHeight + -1;
              uVar24 = 0x512634;
              dVar21 = round
                                 ((double)((float)g_WindowHeight -
                                          fVar9 * (float)g_WindowHeight * 0.25f));
              local_14 = (float)(int)ROUND(dVar21);
              height_half = (y_top - (int)local_14) + 1;
              dVar21 = (double)CONCAT44(uVar24,height_half);
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(iVar4,y_top,height_half);
              local_a40 = local_48;
              uStack_a3c = (float)uStack_44;
              iVar4 = iVar4 + 4;
            } while (iVar4 < iVar16);
          }
          uVar24 = (uint)((ulonglong)dVar21 >> 0x20);
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_20);
      }
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,local_24,&local_3c,0xe1,(int)pcVar5);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_28 = 0.2;
    switch(iVar4) {
    case 0:
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar4 == 0));
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar4 == 0) goto LAB_005126f5;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      local_a24 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          local_a24 = 1.0;
        }
        else {
          local_a24 = local_a24 - local_28;
          if (local_a24 < (float)0.01) {
LAB_00512841:
            local_a24 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          local_a24 = 0.2;
        }
        else {
          local_a24 = local_a24 + local_28;
          if ((float)1.01 < local_a24) goto LAB_00512841;
          if ((float)0.98999999999999999 < local_a24) {
            local_a24 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,local_a24 * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
      sound_sndmain_cpp_startSfx_FUN_005a8e90("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      break;
    case 2:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      local_a30 = local_14 / 1.0f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar4 == 0) {
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
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar4 == 0) {
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
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,local_a30 * 1.0f);
      break;
    case 3:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      local_a28 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          local_a28 = 1.0;
        }
        else {
          local_a28 = local_a28 + -0.2f;
          if (local_a28 < (float)0.01) {
LAB_00512a67:
            local_a28 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          local_a28 = 0.2;
        }
        else {
          local_a28 = local_a28 + 0.2f;
          dVar1 = (double)local_a28;
          if ((float)1.01 < local_a28) goto LAB_00512a67;
          if (0.98999999999999999 < dVar1) {
            local_a28 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,local_a28 * 0.25f);
      break;
    case 4:
      iVar4 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar4 == 0x5622) {
LAB_00512b46:
          iVar4 = 0x2b2a;
        }
        else if (iVar4 == 0xac44) {
          iVar4 = 0x5622;
        }
        else {
          iVar4 = 0xac44;
        }
      }
      else if (iVar4 < 0x5622) {
        iVar4 = 0x5622;
      }
      else {
        if (0xac43 < iVar4) goto LAB_00512b46;
        iVar4 = 0xac44;
      }
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        iVar4 = 0xac44;
      }
      iVar10 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (iVar4 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(iVar4);
        goto LAB_005126f5;
      }
      break;
    case 5:
      iVar4 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar4 == 0x10) {
        iVar4 = 8;
      }
      else {
        iVar4 = 0x10;
      }
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        iVar4 = 0x10;
      }
      iVar10 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar4 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(iVar4);
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      iVar4 = (iVar4 == 1) + 1;
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar7 != 0) {
        iVar4 = 2;
      }
      iVar10 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (iVar4 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(iVar4);
        goto LAB_005126f5;
      }
      break;
    case 7:
      uVar22 = CONCAT44(uVar24,&local_a20);
      iVar4 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_a20);
      while( true ) {
        uVar7 = (uint)((ulonglong)uVar22 >> 0x20);
        iVar10 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
        if (iVar10 <= iVar4) break;
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar4,&local_560);
        uVar22 = CONCAT44(uVar7,&local_560);
        iVar4 = iVar4 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_a20.base,local_560.device_name);
      }
      lVar23 = (ulonglong)uVar7 << 0x20;
      iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_a20,"Select sound device",iVar4,(int)lVar23);
      uVar24 = (uint)((ulonglong)lVar23 >> 0x20);
      if (-1 < iVar4) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar4);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
        if (uVar7 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_a20,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar4 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar4 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    uVar22 = CONCAT44(uVar24,1);
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
