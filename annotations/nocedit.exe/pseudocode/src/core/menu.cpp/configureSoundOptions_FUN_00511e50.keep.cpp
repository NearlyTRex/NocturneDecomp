// Name: core_menu.cpp_configureSoundOptions_FUN_00511e50
// Address: 00511e50
// MANUAL RECONSTRUCTION
// Address Range: [[00511e50, 00512d1b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_00511e50(void)

{
  double dVar1;
  int iVar2;
  char *pcVar3;
  int iVar3;
  char *pcVar4;
  float fVar4;
  char *pcVar5;
  float fVar5;
  uint uVar6;
  int iVar6;
  int iVar8;
  uint uVar9;
  char (*pacVar8) [256];
  int iVar10;
  char *pcVar12;
  char *pcVar15;
  int iVar17;
  float10 fVar16;
  float10 fVar18;
  double band_freq;
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
  int local_3c [2];
  int local_24;
  double dVar17;
  int bars_per_channel;
  int bar_count;
  byte bVar15;
  
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
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    strcpy(g_SoundMenuTextBuffers[0],pcVar3);
    iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
    if (iVar3 == 0) {
      pcVar4 = "On";
    }
    else {
      pcVar4 = "Muted";
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar4);
    strcat(g_SoundMenuTextBuffers[0],pcVar4);
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    if (iVar3 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      _sprintf(g_SoundMenuTextBuffers[1],pcVar4);
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      _sprintf(g_SoundMenuTextBuffers[1],pcVar4);
      fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      _sprintf(local_348,"%d",
                 (int)ROUND(ROUND((fVar4 * 100.0f) / 0.25f + (float)0.001
                                 )));
      strcat(g_SoundMenuTextBuffers[1],local_348);
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      strcat(g_SoundMenuTextBuffers[1],pcVar4);
    }
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    pcVar4 = g_SoundMenuTextBuffers[2];
    if (iVar3 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      _sprintf(g_SoundMenuTextBuffers[2],pcVar4);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      strcpy(pcVar4,pcVar5);
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      _sprintf(local_148,"%d",
                 (int)ROUND(ROUND((fVar5 * 100.0f) / 1.0f + (float)0.001
                                 )));
      strcat(pcVar4,local_148);
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      strcat(pcVar4,pcVar12);
    }
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    pcVar4 = g_SoundMenuTextBuffers[3];
    if (iVar3 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      _sprintf(g_SoundMenuTextBuffers[3],pcVar4);
    }
    else {
      pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      strcpy(pcVar4,pcVar15);
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      _sprintf(local_448,"%d",
                 (int)ROUND(ROUND((fVar5 * 100.0f) / 0.25f + (float)0.001
                                 )));
      strcat(pcVar4,local_448);
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      strcat(pcVar4,pcVar12);
    }
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar4 = g_SoundMenuTextBuffers[4];
    strcpy(pcVar4,pcVar15);
    iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    _sprintf(local_248,"%d",iVar3);
    strcat(pcVar4,local_248);
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    strcat(pcVar4,pcVar12);
    pcVar15 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar4 = g_SoundMenuTextBuffers[5];
    strcpy(pcVar4,pcVar15);
    iVar3 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    _sprintf(local_248,"%d",iVar3);
    strcat(pcVar4,local_248);
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    strcat(pcVar4,pcVar12);
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
    }
    _sprintf(g_SoundMenuTextBuffers[6],pcVar4);
    iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar3 < 0) ||
       (iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar6 <= iVar3)) {
      local_678.has_hardware_mixing = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&local_678);
    }
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    strcpy(g_SoundMenuTextBuffers[7],pcVar12);
    local_24 = 8;
    strcat(g_SoundMenuTextBuffers[7],local_678.device_name);
    if (local_678.has_hardware_mixing != 0) {
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar4 = g_SoundMenuTextBuffers[8];
      if (iVar3 == 0) {
        pcVar12 = "Hardware mixing: Off";
      }
      else {
        pcVar12 = "Hardware mixing: On";
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
      strcpy(pcVar4,pcVar12);
      local_24 = 9;
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar3 != 0) {
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      iVar6 = g_WindowWidth / 0x14;
      bars_per_channel = g_WindowWidth / iVar3;
      iVar8 = bars_per_channel - iVar6 * 2;
      bar_count = iVar8 / 4;
      fVar16 = pow((float10)50,(float10)1 / (float10)bar_count);
      iVar8 = 0;
      dVar17 = (double)fVar16;
      if (0 < iVar3) {
        do {
          band_freq = 200.0;
          if (0 < bar_count) {
            iVar10 = bars_per_channel * iVar8 + iVar6;
            iVar17 = bar_count * 4 + iVar10;
            do {
              fVar18 = (float10)band_freq * (float10)dVar17;
              dVar1 = (double)fVar18;
              fVar5 = sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                (iVar8,(float)band_freq,(float)fVar18);
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70
                        (iVar10,g_WindowHeight + -1,
                         ((g_WindowHeight + -1) -
                         (int)ROUND(ROUND((float)g_WindowHeight -
                                          fVar5 * (float)g_WindowHeight * 0.25f))) + 1);
              band_freq = dVar1;
              iVar10 = iVar10 + 4;
            } while (iVar10 < iVar17);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar3);
      }
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,local_24,local_3c,0xe1,pcVar4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(iVar3) {
    case 0:
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar3 == 0));
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar3 == 0) goto LAB_005126f5;
      break;
    case 1:
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      fVar5 = fVar5 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          local_a24 = 1.0;
        }
        else {
          local_a24 = fVar5 - 0.2;
          if (local_a24 < (float)0.01) {
LAB_00512841:
            local_a24 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0,1);
          local_a24 = 0.2;
        }
        else {
          local_a24 = fVar5 + 0.2;
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
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      fVar5 = fVar5 / 1.0f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2,1);
          local_a30 = 1.0;
        }
        else {
          local_a30 = fVar5 - 0.2;
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
          local_a30 = fVar5 + 0.2;
          if ((float)1.01 < local_a30) goto LAB_00512966;
          if ((float)0.98999999999999999 < local_a30) {
            local_a30 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,local_a30 * 1.0f);
      break;
    case 3:
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      fVar5 = fVar5 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          local_a28 = 1.0;
        }
        else {
          local_a28 = fVar5 + -0.2f;
          if (local_a28 < (float)0.01) {
LAB_00512a67:
            local_a28 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,0);
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          local_a28 = 0.2;
        }
        else {
          local_a28 = fVar5 + 0.2f;
          if ((float)1.01 < local_a28) goto LAB_00512a67;
          if (0.98999999999999999 < (double)local_a28) {
            local_a28 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,local_a28 * 0.25f);
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
      uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar9 != 0) {
        iVar3 = 0xac44;
      }
      iVar6 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (iVar3 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
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
      uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar9 != 0) {
        iVar3 = 0x10;
      }
      iVar6 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar3 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(iVar3);
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      iVar3 = (iVar3 == 1) + 1;
      uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar9 != 0) {
        iVar3 = 2;
      }
      iVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (iVar3 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(iVar3);
        goto LAB_005126f5;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_a20);
      for (iVar3 = 0; iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar3 < iVar6;
          iVar3 = iVar3 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&local_560);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_a20.base,local_560.device_name);
      }
      uVar9 = 0;
      iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_a20,"Select sound device",iVar3,uVar9);
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        uVar9 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
        if (uVar9 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_a20,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar3 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
