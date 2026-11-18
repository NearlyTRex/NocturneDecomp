// Name: core_menu.cpp_configureSoundOptions_FUN_004d12e0
// Address: 004d12e0
// Address Range: [[004d12e0, 004d21a9]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void)

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
  ulonglong in_stack_fffff7ec;
  ulonglong uVar22;
  uint uVar23;
  uint uStack_80c;
  uint local_808;
  uint uStack_804;
  uint local_800;
  float local_7f8;
  float local_7f0;
  float local_7ec;
  CPickList local_7e8;
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
  
  dVar1 = (double)(ulonglong)local_800;
  bVar19 = 0;
  uVar22 = CONCAT44((int)((ulonglong)in_stack_fffff7ec >> 0x20),g_CGamePtr);
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(g_CGamePtr);
  pacVar11 = g_SoundMenuTextBuffers;
  iVar4 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar4) = pacVar11;
    iVar4 = iVar4 + 4;
    pacVar11 = pacVar11 + 1;
  } while (iVar4 != 0x28);
  do {
    local_800 = SUB84(__BITCAST_UINT64(dVar1),0);
    uVar23 = (uint)((ulonglong)uVar22 >> 0x20);
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_004deae0(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50(&g_CMoonInstance);
    local_2c = 0;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound : ");
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
    iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_00526ca0();
    if (iVar4 == 0) {
      pcVar5 = "On";
    }
    else {
      pcVar5 = "Muted";
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
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
    iVar10 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
    local_34 = iVar4 + 2;
    pacVar11 = g_SoundMenuTextBuffers + iVar16;
    local_2c = iVar16;
    if (iVar10 == 0) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound effects : Off");
      iVar4 = local_34;
      _sprintf(*pacVar11,pcVar5);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound effects : ");
      _sprintf(*pacVar11,pcVar5);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
      uVar22 = CONCAT44(uVar23,0x4d144d);
      dVar21 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar21);
      _sprintf(acStack_34c,"%d",local_18,uVar22);
      uVar23 = (uint)((ulonglong)uVar22 >> 0x20);
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
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("%.");
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
    iVar16 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(2);
    iVar10 = iVar4 + 1;
    pcVar5 = g_SoundMenuTextBuffers[iVar4];
    local_30 = iVar10;
    if (iVar16 == 0) {
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Dialog : Off");
      _sprintf(pcVar5,pcVar15);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Dialog : ");
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
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(2);
      uVar22 = CONCAT44(uVar23,0x4d1553);
      dVar21 = round
                         ((double)((local_14 * 100.0f) / 1.0f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar21);
      _sprintf(acStack_14c,"%d",local_18,uVar22);
      uVar23 = (uint)((ulonglong)uVar22 >> 0x20);
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
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("%.");
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
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
    pcVar5 = g_SoundMenuTextBuffers[iVar10];
    uStack_44 = __BITCAST_DOUBLE(CONCAT44(iVar10 + 1,(float)uStack_44));
    if (iVar4 == 0) {
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Music Vol : Off");
      local_24 = iVar10 + 1;
      _sprintf(pcVar5,pcVar15);
    }
    else {
      pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Music Vol : ");
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
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(1);
      uVar22 = CONCAT44(uVar23,0x4d1657);
      dVar21 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar21);
      _sprintf((char *)&local_560.is_emulated,"%d",local_18,uVar22);
      uVar23 = (uint)((ulonglong)uVar22 >> 0x20);
      pDVar12 = &local_560.is_emulated;
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
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("%.");
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
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output rate : ");
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
    iVar4 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
    _sprintf(local_248,"%d",iVar4);
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
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("hz");
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
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output quality : ");
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
    iVar10 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
    _sprintf(local_248,"%d",iVar10);
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
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("bit");
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
    uVar7 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
    local_24 = iVar10;
    if (((uVar7 == 0) || (uVar7 < 2)) || (uVar7 != 2)) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output type : MONO");
      iVar4 = local_24 + 1;
      iVar10 = local_24;
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output type : STEREO");
      iVar4 = iVar4 + 3;
    }
    local_24 = iVar4;
    _sprintf(g_SoundMenuTextBuffers[iVar10],pcVar5);
    iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610();
    if ((iVar4 < 0) ||
       (iVar10 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(), iVar10 <= iVar4)) {
      local_678.has_hardware_mixing = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar4,&local_678);
    }
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Device : ");
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
    if (local_678.has_hardware_mixing != 0) {
      iVar4 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
      pcVar5 = g_SoundMenuTextBuffers[iVar10];
      if (iVar4 == 0) {
        pcVar15 = "Hardware mixing: Off";
      }
      else {
        pcVar15 = "Hardware mixing: On";
      }
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar15);
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
    iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
    if (iVar4 != 0) {
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
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
      uVar23 = (uint)((ulonglong)dVar21 >> 0x20);
      if (0 < iVar4) {
        do {
          local_808 = 0;
          uStack_804 = 0x40690000;
          if (0 < (int)fVar8) {
            iVar4 = local_18 * iVar10 + local_1c;
            iVar16 = (int)fVar8 * 4 + iVar4;
            do {
              fVar20 = (float10)__BITCAST_DOUBLE(CONCAT44(local_800,uStack_804)) *
                       (float10)__BITCAST_DOUBLE(CONCAT44(local_808,uStack_80c));
              uStack_44 = (double)fVar20;
              fVar9 = sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60
                                (iVar10,(float)__BITCAST_DOUBLE(CONCAT44(local_800,uStack_804)),(float)fVar20)
              ;
              y_top = g_WindowHeight + -1;
              uVar23 = 0x4d1ac4;
              dVar21 = round
                                 ((double)((float)g_WindowHeight -
                                          fVar9 * (float)g_WindowHeight * 0.25f));
              local_14 = (float)(int)ROUND(dVar21);
              height_half = (y_top - (int)local_14) + 1;
              dVar21 = __BITCAST_DOUBLE(CONCAT44(uVar23,height_half));
              core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(iVar4,y_top,height_half);
              local_808 = local_48;
              uStack_804 = (float)uStack_44;
              iVar4 = iVar4 + 4;
            } while (iVar4 < iVar16);
          }
          uVar23 = (uint)((ulonglong)dVar21 >> 0x20);
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_20);
      }
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      (g_SoundOptionsMenuPointers,local_24,&local_3c,0xe1,pcVar5);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    local_28 = 0.2;
    switch(iVar4) {
    case 0:
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_00526ca0();
      sound_sndmain_cpp_setSoundMuted_FUN_00526cb0((uint)(iVar4 == 0));
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_00526ca0();
      if (iVar4 == 0) goto LAB_004d1b85;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
      local_7ec = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(0,1);
          local_7ec = 1.0;
        }
        else {
          local_7ec = local_7ec - local_28;
          if (local_7ec < (float)0.01) {
LAB_004d1cd1:
            local_7ec = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00527410(0,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(0,1);
          local_7ec = 0.2;
        }
        else {
          local_7ec = local_7ec + local_28;
          if ((float)1.01 < local_7ec) goto LAB_004d1cd1;
          if ((float)0.98999999999999999 < local_7ec) {
            local_7ec = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(0,local_7ec * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
      sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(1);
      sound_sndmain_cpp_startSfx_FUN_005265a0("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
      break;
    case 2:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(2);
      local_7f8 = local_14 / 1.0f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(2);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(2,1);
          local_7f8 = 1.0;
        }
        else {
          local_7f8 = local_7f8 - local_28;
          if (local_7f8 < (float)0.01) {
LAB_004d1df6:
            local_7f8 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00527410(2,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(2);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(2,1);
          local_7f8 = 0.2;
        }
        else {
          local_7f8 = local_7f8 + local_28;
          if ((float)1.01 < local_7f8) goto LAB_004d1df6;
          if ((float)0.98999999999999999 < local_7f8) {
            local_7f8 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(2,local_7f8 * 1.0f);
      break;
    case 3:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(1);
      local_7f0 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(1,1);
          core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
          local_7f0 = 1.0;
        }
        else {
          local_7f0 = local_7f0 + 1.5774054650233886e-314._0_4_;
          if (local_7f0 < (float)0.01) {
LAB_004d1ef7:
            local_7f0 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00527410(1,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(1,1);
          core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
          local_7f0 = 0.2;
        }
        else {
          local_7f0 = local_7f0 + 0.2f;
          dVar1 = (double)local_7f0;
          if ((float)1.01 < local_7f0) goto LAB_004d1ef7;
          if (0.98999999999999999 < dVar1) {
            local_7f0 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(1,local_7f0 * 0.25f);
      break;
    case 4:
      iVar4 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar4 == 0x5622) {
LAB_004d1fd6:
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
        if (0xac43 < iVar4) goto LAB_004d1fd6;
        iVar4 = 0xac44;
      }
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar7 != 0) {
        iVar4 = 0xac44;
      }
      iVar10 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
      if (iVar4 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioSampleRate_FUN_00528210(iVar4);
        goto LAB_004d1b85;
      }
      break;
    case 5:
      iVar4 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
      if (iVar4 == 0x10) {
        iVar4 = 8;
      }
      else {
        iVar4 = 0x10;
      }
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar7 != 0) {
        iVar4 = 0x10;
      }
      iVar10 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
      if (iVar4 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(iVar4);
        goto LAB_004d1b85;
      }
      break;
    case 6:
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      iVar4 = (iVar4 == 1) + 1;
      uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar7 != 0) {
        iVar4 = 2;
      }
      iVar10 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      if (iVar4 != iVar10) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(iVar4);
        goto LAB_004d1b85;
      }
      break;
    case 7:
      uVar22 = CONCAT44(uVar23,&local_7e8);
      iVar4 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&local_7e8);
      while( true ) {
        uVar23 = (uint)((ulonglong)uVar22 >> 0x20);
        iVar10 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
        if (iVar10 <= iVar4) break;
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar4,&local_560);
        uVar22 = CONCAT44(uVar23,&local_560);
        iVar4 = iVar4 + 1;
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_7e8.base,local_560.device_name);
      }
      iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610();
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                        (&local_7e8,"Select sound device",iVar4);
      if (-1 < iVar4) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005285b0();
        sound_sndmain_cpp_selectSoundDevice_FUN_00528410(iVar4);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00528500();
        uVar7 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
        if (uVar7 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_7e8,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005285b0();
      iVar4 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0((uint)(iVar4 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_00528500();
LAB_004d1b85:
      core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
    }
    uVar22 = CONCAT44(uVar23,1);
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
