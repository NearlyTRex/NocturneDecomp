// Name: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
// Address Range: [[00511e50, 00512d1b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char (*pacVar8) [256];
  SSoundDeviceInfo *pSVar9;
  char (*pacVar10) [256];
  char *pcVar11;
  int iVar12;
  char (*pacVar13) [256];
  char *pcVar14;
  byte bVar15;
  float10 fVar16;
  double dVar17;
  uint uStack_a44;
  uint local_a40;
  float local_a30;
  float local_a28;
  float local_a24;
  CPickList local_a20;
  SSoundDeviceInfo local_678;
  SSoundDeviceInfo local_560;
  char local_448 [256];
  char local_348 [256];
  char local_248 [256];
  char local_148 [252];
  ulonglong uStack_4c;
  int local_40;
  int local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar15 = 0;
  local_3c[0] = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pacVar8 = g_SoundMenuTextBuffers;
  iVar2 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar2) = pacVar8;
    iVar2 = iVar2 + 4;
    pacVar8 = pacVar8 + 1;
  } while (iVar2 != 0x28);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    local_2c = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    pacVar8 = g_SoundMenuTextBuffers;
    do {
      cVar1 = *pcVar3;
      (*pacVar8)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)pacVar8 + 1) = cVar1;
      pacVar8 = (char (*) [256])((int)pacVar8 + 2);
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
    if (iVar2 == 0) {
      pcVar3 = "On";
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
    iVar2 = local_2c;
    iVar7 = -1;
    pacVar8 = g_SoundMenuTextBuffers;
    do {
      pacVar10 = pacVar8;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pacVar10 = (char (*) [256])((int)pacVar8 + (uint)bVar15 * -2 + 1);
      pcVar11 = *pacVar8;
      pacVar8 = pacVar10;
    } while (*pcVar11 != '\0');
    pcVar11 = pacVar10[-1] + 0xff;
    do {
      cVar1 = *pcVar3;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar12 = local_2c + 1;
    iVar7 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_34 = iVar2 + 2;
    pacVar8 = g_SoundMenuTextBuffers + iVar12;
    local_2c = iVar12;
    if (iVar7 == 0) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      iVar2 = local_34;
      _sprintf(*pacVar8,pcVar3);
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      _sprintf(*pacVar8,pcVar3);
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      local_14 = (float)(int)ROUND(ROUND((fVar4 * 100.0f) / 0.25f +
                                         (float)0.001));
      _sprintf(local_348,"%d",local_14);
      pcVar3 = local_348;
      iVar2 = -1;
      pacVar10 = pacVar8;
      do {
        pacVar13 = pacVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pacVar13 = (char (*) [256])((int)pacVar10 + (uint)bVar15 * -2 + 1);
        pcVar11 = *pacVar10;
        pacVar10 = pacVar13;
      } while (*pcVar11 != '\0');
      pcVar11 = pacVar13[-1] + 0xff;
      do {
        cVar1 = *pcVar3;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pacVar10 = pacVar8;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pacVar10 = (char (*) [256])((int)pacVar8 + (uint)bVar15 * -2 + 1);
        pcVar11 = *pacVar8;
        pacVar8 = pacVar10;
      } while (*pcVar11 != '\0');
      pcVar11 = pacVar10[-1] + 0xff;
      do {
        cVar1 = *pcVar3;
        *pcVar11 = cVar1;
        iVar2 = local_34;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
    }
    iVar12 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    iVar7 = iVar2 + 1;
    pcVar3 = g_SoundMenuTextBuffers[iVar2];
    local_30 = iVar7;
    if (iVar12 == 0) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      _sprintf(pcVar3,pcVar11);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar11 = pcVar3;
      do {
        cVar1 = *pcVar5;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      local_14 = (float)(int)ROUND(ROUND((fVar4 * 100.0f) / 1.0f +
                                         (float)0.001));
      _sprintf(local_148,"%d",local_14);
      pcVar11 = local_148;
      iVar2 = -1;
      pcVar5 = pcVar3;
      do {
        pcVar14 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar14 = pcVar5 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar5 = cVar1;
        iVar7 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    iVar12 = iVar7 + 1;
    pcVar3 = g_SoundMenuTextBuffers[iVar7];
    local_40 = iVar12;
    if (iVar2 == 0) {
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      local_24 = iVar12;
      _sprintf(pcVar3,pcVar11);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar11 = pcVar3;
      do {
        cVar1 = *pcVar5;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      local_14 = (float)(int)ROUND(ROUND((fVar4 * 100.0f) / 0.25f +
                                         (float)0.001));
      _sprintf(local_448,"%d",local_14);
      pcVar11 = local_448;
      iVar2 = -1;
      pcVar5 = pcVar3;
      do {
        pcVar14 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar14 = pcVar5 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar5 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar5 = pcVar3 + (uint)bVar15 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar11;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      local_24 = local_40;
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar3 = g_SoundMenuTextBuffers[local_24];
    pcVar11 = pcVar3;
    do {
      cVar1 = *pcVar5;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    _sprintf(local_248,"%d",iVar2);
    pcVar11 = local_248;
    iVar2 = -1;
    pcVar5 = pcVar3;
    do {
      pcVar14 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar14 = pcVar5 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    iVar2 = local_24;
    iVar7 = -1;
    do {
      pcVar5 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar5 = pcVar3 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar7 = local_24 + 1;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar3 = g_SoundMenuTextBuffers[iVar7];
    pcVar11 = pcVar3;
    do {
      cVar1 = *pcVar5;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar7;
    iVar7 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    _sprintf(local_248,"%d",iVar7);
    pcVar11 = local_248;
    iVar7 = -1;
    pcVar5 = pcVar3;
    do {
      pcVar14 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar14 = pcVar5 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    iVar7 = -1;
    do {
      pcVar5 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar5 = pcVar3 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar7 = iVar2 + 2;
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    local_24 = iVar7;
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar2 = local_24 + 1;
      iVar7 = local_24;
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar2 = iVar2 + 3;
    }
    local_24 = iVar2;
    _sprintf(g_SoundMenuTextBuffers[iVar7],pcVar3);
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar2 < 0) ||
       (iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar7 <= iVar2)) {
      local_678.has_hardware_mixing = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&local_678);
    }
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    pcVar3 = g_SoundMenuTextBuffers[local_24];
    do {
      cVar1 = *pcVar11;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    pSVar9 = &local_678;
    iVar7 = local_24 + 1;
    iVar2 = -1;
    pcVar3 = g_SoundMenuTextBuffers[local_24];
    do {
      pcVar11 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar11 = pcVar3 + (uint)bVar15 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = pSVar9->device_name[0];
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pSVar9->device_name[1];
      pSVar9 = (SSoundDeviceInfo *)(pSVar9->device_name + 2);
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar7;
    if (local_678.has_hardware_mixing != 0) {
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar3 = g_SoundMenuTextBuffers[iVar7];
      if (iVar2 == 0) {
        pcVar11 = "Hardware mixing: Off";
      }
      else {
        pcVar11 = "Hardware mixing: On";
      }
      pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar11);
      do {
        cVar1 = *pcVar11;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_24 = local_24 + 1;
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar2 != 0) {
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      local_1c = g_WindowWidth / 0x14;
      local_18 = g_WindowWidth / iVar2;
      iVar7 = local_18 + local_1c * -2;
      iVar12 = iVar7 >> 0x1f;
      local_14 = (float)((int)((iVar7 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2);
      local_20 = iVar2;
      fVar16 = pow
                         ((float10)50,(float10)1 / (float10)(int)local_14);
      iVar7 = 0;
      dVar17 = (double)fVar16;
      if (0 < iVar2) {
        do {
          uStack_a44 = 0;
          local_a40 = 0x40690000;
          if (0 < (int)local_a30) {
            iVar2 = local_1c * iVar7 + local_20;
            iVar12 = (int)local_a30 * 4 + iVar2;
            do {
              fVar16 = (float10)(double)CONCAT44(local_a40,uStack_a44) * (float10)dVar17;
              uStack_4c = (double)fVar16;
              fVar4 = (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                       (iVar7,(float)(double)CONCAT44(local_a40,uStack_a44),
                                        (float)fVar16);
              local_18 = (int)ROUND(ROUND((float)g_WindowHeight -
                                          fVar4 * (float)g_WindowHeight * 0.25f));
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70
                        (iVar2,g_WindowHeight + -1,((g_WindowHeight + -1) - local_18) + 1);
              uStack_a44 = (uint)uStack_4c;
              local_a40 = uStack_4c._4_4_;
              iVar2 = iVar2 + 4;
            } while (iVar2 < iVar12);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_24);
      }
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    iVar2 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,local_24,local_3c,0xe1,(int)pcVar3);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_28 = 0.2;
    switch(iVar2) {
    case 0:
      iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar2 == 0));
      iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar2 == 0) goto LAB_005126f5;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      local_a24 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
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
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
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
      fVar4 = local_14 / 1.0f;
      if (g_MenuLeftRightPressed == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          local_a30 = 1.0;
        }
        else {
          local_a30 = fVar4 - local_28;
          if (local_a30 < (float)0.01) {
LAB_00512966:
            local_a30 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          local_a30 = 0.2;
        }
        else {
          local_a30 = fVar4 + local_28;
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
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
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
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          local_a28 = 0.2;
        }
        else {
          local_a28 = local_a28 + 0.2f;
          if ((float)1.01 < local_a28) goto LAB_00512a67;
          if (0.98999999999999999 < (double)local_a28) {
            local_a28 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,local_a28 * 0.25f);
      break;
    case 4:
      iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar2 == 0x5622) {
LAB_00512b46:
          iVar2 = 0x2b2a;
        }
        else if (iVar2 == 0xac44) {
          iVar2 = 0x5622;
        }
        else {
          iVar2 = 0xac44;
        }
      }
      else if (iVar2 < 0x5622) {
        iVar2 = 0x5622;
      }
      else {
        if (0xac43 < iVar2) goto LAB_00512b46;
        iVar2 = 0xac44;
      }
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar2 = 0xac44;
      }
      iVar7 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (iVar2 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(iVar2);
        goto LAB_005126f5;
      }
      break;
    case 5:
      iVar2 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar2 == 0x10) {
        iVar2 = 8;
      }
      else {
        iVar2 = 0x10;
      }
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar2 = 0x10;
      }
      iVar7 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar2 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(iVar2);
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      iVar2 = (iVar2 == 1) + 1;
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar2 = 2;
      }
      iVar7 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (iVar2 != iVar7) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(iVar2);
        goto LAB_005126f5;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_a20);
      for (iVar2 = 0; iVar7 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar2 < iVar7;
          iVar2 = iVar2 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&local_560);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_a20.base,local_560.device_name);
      }
      iVar7 = 0;
      iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_a20,"Select sound device",iVar2,iVar7);
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
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_a20,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar2 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
