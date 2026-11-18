// Name: core_menu.cpp_configureSoundOptions_FUN_0050ba70
// Address: 0050ba70
// Address Range: [[0050ba70, 0050c96f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_0050ba70(void)

#include "nocturne.h"

void __cdecl core_menu_cpp_configureSoundOptions_FUN_0050ba70(void)

{
  double dVar1;
  char cVar2;
  DWORD DVar3;
  CDemonSet *this_ptr;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int y_top;
  int iVar9;
  byte *puVar10;
  DWORD *pDVar11;
  SSoundDeviceInfo *pSVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  byte bVar17;
  float10 fVar18;
  double dVar19;
  uint uStack_a5c;
  uint local_a58;
  uint uStack_a54;
  uint local_a50;
  float local_a48;
  float local_a44;
  float local_a40;
  CPickList local_a38;
  SSoundDeviceInfo local_678;
  SSoundDeviceInfo local_560;
  char local_348 [252];
  char acStack_24c [256];
  char acStack_14c [260];
  uint local_48;
  ulonglong uStack_44;
  int local_3c;
  float fStack_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  dVar1 = (double)(ulonglong)local_a50;
  bVar17 = 0;
  uStack_44 = (double)(ulonglong)(uint)uStack_44;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  puVar10 = &DAT_01d20008;
  iVar4 = 0;
  do {
    *(byte **)((int)&g_CHAR_PTR_01d20a08 + iVar4) = puVar10;
    iVar4 = iVar4 + 4;
    puVar10 = puVar10 + 0x100;
  } while (iVar4 != 0x28);
  do {
    local_a50 = SUB84(__BITCAST_UINT64(dVar1),0);
    core_game_cpp_CGame_updateDT_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_00521e40(&g_CMoonInstance);
    local_2c = 0;
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound : ");
    pcVar13 = &DAT_01d20008;
    do {
      cVar2 = *pcVar5;
      *pcVar13 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar13[1] = cVar2;
      pcVar13 = pcVar13 + 2;
    } while (cVar2 != '\0');
    iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
    if (iVar4 == 0) {
      pcVar5 = "On";
    }
    else {
      pcVar5 = "Muted";
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar5);
    iVar4 = local_2c;
    iVar9 = -1;
    pcVar5 = &DAT_01d20008;
    do {
      pcVar14 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar14 = pcVar5 + (uint)bVar17 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar2 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar2 = *pcVar13;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    iVar15 = local_2c + 1;
    iVar9 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
    local_3c = iVar4 + 2;
    pcVar5 = &DAT_01d20008 + iVar15 * 0x100;
    local_2c = iVar15;
    if (iVar9 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound effects : Off");
      iVar4 = local_3c;
      _sprintf(pcVar5,pcVar13);
    }
    else {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound effects : ");
      _sprintf(pcVar5,pcVar13);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
      dVar19 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar19);
      _sprintf(acStack_24c,"%d");
      pcVar13 = acStack_24c;
      iVar4 = -1;
      pcVar14 = pcVar5;
      do {
        pcVar16 = pcVar14;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar16 = pcVar14 + (uint)bVar17 * -2 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar16;
      } while (cVar2 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar2 = *pcVar13;
        *pcVar16 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar16[1] = cVar2;
        pcVar16 = pcVar16 + 2;
      } while (cVar2 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("%.");
      iVar4 = -1;
      do {
        pcVar14 = pcVar5;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar5 + (uint)bVar17 * -2 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar2 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar2 = *pcVar13;
        *pcVar14 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
      iVar4 = uStack_44._4_4_;
    }
    iVar15 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(2);
    iVar9 = iVar4 + 1;
    pcVar5 = &DAT_01d20008 + iVar4 * 0x100;
    local_30 = iVar9;
    if (iVar15 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Dialog : Off");
      _sprintf(pcVar5,pcVar13);
    }
    else {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Dialog : ");
      pcVar13 = pcVar5;
      do {
        cVar2 = *pcVar14;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(2);
      dVar19 = round
                         ((double)((local_14 * 100.0f) / 1.0f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar19);
      _sprintf(acStack_14c,"%d");
      pcVar13 = acStack_14c;
      iVar4 = -1;
      pcVar14 = pcVar5;
      do {
        pcVar16 = pcVar14;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar16 = pcVar14 + (uint)bVar17 * -2 + 1;
        cVar2 = *pcVar14;
        pcVar14 = pcVar16;
      } while (cVar2 != '\0');
      pcVar16 = pcVar16 + -1;
      do {
        cVar2 = *pcVar13;
        *pcVar16 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar16[1] = cVar2;
        pcVar16 = pcVar16 + 2;
      } while (cVar2 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("%.");
      iVar4 = -1;
      do {
        pcVar14 = pcVar5;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar5 + (uint)bVar17 * -2 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar2 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar2 = *pcVar13;
        *pcVar14 = cVar2;
        iVar9 = local_34;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
    }
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
    iVar15 = iVar9 + 1;
    pcVar5 = &DAT_01d20008 + iVar9 * 0x100;
    local_34 = iVar15;
    if (iVar4 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Music Vol : Off");
      local_24 = iVar15;
      _sprintf(pcVar5,pcVar13);
    }
    else {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Music Vol : ");
      pcVar13 = pcVar5;
      do {
        cVar2 = *pcVar14;
        *pcVar13 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar13[1] = cVar2;
        pcVar13 = pcVar13 + 2;
      } while (cVar2 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(1);
      dVar19 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar19);
      _sprintf((char *)&local_560.is_emulated,"%d");
      pDVar11 = &local_560.is_emulated;
      iVar4 = -1;
      pcVar13 = pcVar5;
      do {
        pcVar14 = pcVar13;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar13 + (uint)bVar17 * -2 + 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar2 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        DVar3 = *pDVar11;
        *pcVar14 = (char)DVar3;
        if ((char)DVar3 == '\0') break;
        cVar2 = *(char *)((int)pDVar11 + 1);
        pDVar11 = (DWORD *)((int)pDVar11 + 2);
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("%.");
      iVar4 = -1;
      do {
        pcVar14 = pcVar5;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar5 + (uint)bVar17 * -2 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar2 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar2 = *pcVar13;
        *pcVar14 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
      local_28 = fStack_38;
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output rate : ");
    pcVar5 = &DAT_01d20008 + local_24 * 0x100;
    pcVar13 = pcVar5;
    do {
      cVar2 = *pcVar14;
      *pcVar13 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar2;
      pcVar13 = pcVar13 + 2;
    } while (cVar2 != '\0');
    sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
    _sprintf(local_348,"%d");
    pcVar13 = local_348;
    iVar4 = -1;
    pcVar14 = pcVar5;
    do {
      pcVar16 = pcVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar16 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar16;
    } while (cVar2 != '\0');
    pcVar16 = pcVar16 + -1;
    do {
      cVar2 = *pcVar13;
      *pcVar16 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar16[1] = cVar2;
      pcVar16 = pcVar16 + 2;
    } while (cVar2 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("hz");
    iVar4 = local_24;
    iVar9 = -1;
    do {
      pcVar14 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar14 = pcVar5 + (uint)bVar17 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar2 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar2 = *pcVar13;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    iVar9 = local_24 + 1;
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output quality : ");
    pcVar5 = &DAT_01d20008 + iVar9 * 0x100;
    pcVar13 = pcVar5;
    do {
      cVar2 = *pcVar14;
      *pcVar13 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar2;
      pcVar13 = pcVar13 + 2;
    } while (cVar2 != '\0');
    local_24 = iVar9;
    sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
    _sprintf(local_348,"%d");
    pcVar13 = local_348;
    iVar9 = -1;
    pcVar14 = pcVar5;
    do {
      pcVar16 = pcVar14;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar16 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar16;
    } while (cVar2 != '\0');
    pcVar16 = pcVar16 + -1;
    do {
      cVar2 = *pcVar13;
      *pcVar16 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar16[1] = cVar2;
      pcVar16 = pcVar16 + 2;
    } while (cVar2 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("bit");
    iVar9 = -1;
    do {
      pcVar14 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar14 = pcVar5 + (uint)bVar17 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar2 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar2 = *pcVar13;
      *pcVar14 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar2;
      pcVar14 = pcVar14 + 2;
    } while (cVar2 != '\0');
    iVar9 = iVar4 + 2;
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
    local_24 = iVar9;
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output type : MONO");
      iVar4 = local_24 + 1;
      iVar9 = local_24;
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output type : STEREO");
      iVar4 = iVar4 + 3;
    }
    local_24 = iVar4;
    _sprintf(&DAT_01d20008 + iVar9 * 0x100,pcVar5);
    iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005756d0();
    if ((iVar4 < 0) ||
       (iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), iVar9 <= iVar4)) {
      local_678.has_hardware_mixing = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_00575350(iVar4,&local_678);
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Device : ");
    iVar4 = local_24 * 0x100;
    pcVar5 = &DAT_01d20008 + iVar4;
    do {
      cVar2 = *pcVar13;
      *pcVar5 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar5[1] = cVar2;
      pcVar5 = pcVar5 + 2;
    } while (cVar2 != '\0');
    pSVar12 = &local_678;
    local_24 = local_24 + 1;
    iVar9 = -1;
    pcVar5 = &DAT_01d20008 + iVar4;
    do {
      pcVar13 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar13 = pcVar5 + (uint)bVar17 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar2 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar2 = pSVar12->device_name[0];
      *pcVar13 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pSVar12->device_name[1];
      pSVar12 = (SSoundDeviceInfo *)(pSVar12->device_name + 2);
      pcVar13[1] = cVar2;
      pcVar13 = pcVar13 + 2;
    } while (cVar2 != '\0');
    if (0 < (int)local_678.has_hardware_mixing) {
      iVar9 = local_24 * 0x100;
      iVar4 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
      pcVar5 = &DAT_01d20008 + iVar9;
      if (iVar4 < 1) {
        pcVar13 = "Hardware mixing: Off";
      }
      else {
        pcVar13 = "Hardware mixing: Enabled";
      }
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar13);
      do {
        cVar2 = *pcVar13;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      local_24 = local_24 + 1;
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
    if (iVar4 != 0) {
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
      local_18 = g_INT_0061b498 / 0x14;
      local_1c = g_INT_0061b498 / iVar4;
      iVar9 = local_1c + local_18 * -2;
      iVar15 = iVar9 >> 0x1f;
      fVar7 = (float)((int)((iVar9 + iVar15 * -4) - (uint)(iVar15 << 1 < 0)) >> 2);
      local_20 = iVar4;
      local_14 = fVar7;
      pow((float10)50,(float10)1 / (float10)(int)fVar7);
      iVar9 = 0;
      if (0 < iVar4) {
        do {
          local_a58 = 0;
          uStack_a54 = 0x40690000;
          if (0 < (int)fVar7) {
            iVar4 = local_1c * iVar9 + local_18;
            iVar15 = (int)fVar7 * 4 + iVar4;
            do {
              fVar18 = (float10)__BITCAST_DOUBLE(CONCAT44(local_a50,uStack_a54)) *
                       (float10)__BITCAST_DOUBLE(CONCAT44(local_a58,uStack_a5c));
              uStack_44 = (double)fVar18;
              fVar8 = sound_sndmain_cpp_analyzeFrequencyBand_FUN_00576590
                                (iVar9,(float)__BITCAST_DOUBLE(CONCAT44(local_a50,uStack_a54)),(float)fVar18);
              y_top = g_INT_0061b49c + -1;
              dVar19 = round
                                 ((double)((float)g_INT_0061b49c -
                                          fVar8 * (float)g_INT_0061b49c * 0.25f));
              local_14 = (float)(int)ROUND(dVar19);
              core_menu_cpp_renderAudioSpectrumBar_FUN_00509c90
                        (iVar4,y_top,(y_top - (int)local_14) + 1);
              local_a58 = local_48;
              uStack_a54 = (uint)uStack_44;
              iVar4 = iVar4 + 4;
            } while (iVar4 < iVar15);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_20);
      }
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      (&g_CHAR_PTR_01d20a08,local_24,(int *)((int)&uStack_44 + 4),0x19,pcVar5);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    local_28 = 0.2;
    switch(iVar4) {
    case 0:
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      sound_sndmain_cpp_setSoundMuted_FUN_00573600((uint)(iVar4 == 0));
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      if (iVar4 == 0) goto LAB_0050c339;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
      local_a48 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,1);
          local_a48 = 1.0;
        }
        else {
          local_a48 = local_a48 - local_28;
          if (local_a48 < (float)0.01) {
LAB_0050c485:
            local_a48 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,1);
          local_a48 = 0.2;
        }
        else {
          local_a48 = local_a48 + local_28;
          if ((float)1.01 < local_a48) goto LAB_0050c485;
          if ((float)0.98999999999999999 < local_a48) {
            local_a48 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(0,local_a48 * 0.25f);
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_setNextSfxFlags_FUN_005729f0(1);
      sound_sndmain_cpp_startSfx_FUN_00572d20("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      break;
    case 2:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(2);
      local_a40 = local_14 / 1.0f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(2);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,1);
          local_a40 = 1.0;
        }
        else {
          local_a40 = local_a40 - local_28;
          if (local_a40 < (float)0.01) {
LAB_0050c5aa:
            local_a40 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(2);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,1);
          local_a40 = 0.2;
        }
        else {
          local_a40 = local_a40 + local_28;
          if ((float)1.01 < local_a40) goto LAB_0050c5aa;
          if ((float)0.98999999999999999 < local_a40) {
            local_a40 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(2,local_a40 * 1.0f);
      break;
    case 3:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(1);
      local_a44 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,1);
          core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
          local_a44 = 1.0;
        }
        else {
          local_a44 = local_a44 - local_28;
          if (local_a44 < (float)0.01) {
LAB_0050c6ac:
            local_a44 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,0);
          }
        }
      }
      else {
        iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
        if (iVar4 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,1);
          core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
          local_a44 = 0.2;
        }
        else {
          local_a44 = local_a44 + 0.2f;
          dVar1 = (double)local_a44;
          if ((float)1.01 < local_a44) goto LAB_0050c6ac;
          if (0.98999999999999999 < dVar1) {
            local_a44 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(1,local_a44 * 0.25f);
      break;
    case 4:
      iVar4 = sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
      if (g_MenuLeftRightPressed == 1) {
        if (iVar4 == 0x5622) {
LAB_0050c78b:
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
        if (0xac43 < iVar4) goto LAB_0050c78b;
        iVar4 = 0xac44;
      }
      iVar9 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
      if (0 < iVar9) {
        iVar4 = 0xac44;
      }
      iVar9 = sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
      if (iVar4 != iVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005752a0(iVar4);
        goto LAB_0050c339;
      }
      break;
    case 5:
      iVar4 = sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
      if (iVar4 == 0x10) {
        iVar4 = 8;
      }
      else {
        iVar4 = 0x10;
      }
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
      if (0 < (int)uVar6) {
        iVar4 = 0x10;
      }
      iVar9 = sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
      if (iVar4 != iVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioBitDepth_FUN_00575260(iVar4);
        goto LAB_0050c339;
      }
      break;
    case 6:
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
      iVar4 = (iVar4 == 1) + 1;
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
      if (0 < (int)uVar6) {
        iVar4 = 2;
      }
      iVar9 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
      if (iVar4 != iVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioChannelCount_FUN_00575280(iVar4);
        goto LAB_0050c339;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_a38);
      for (iVar4 = 0; iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), iVar4 < iVar9;
          iVar4 = iVar4 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_00575350(iVar4,&local_560);
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_a38.base,local_560.device_name);
      }
      uVar6 = 0;
      iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005756d0();
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                        (&local_a38,"Select sound device",iVar4,uVar6);
      if (-1 < iVar4) {
        sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
        sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(iVar4);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
        uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
        if (0 < (int)uVar6) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_a38,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
      iVar4 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
      if (iVar4 < 1) {
        sound_sndmain_cpp_enableHwSoundMixing_FUN_00575580(2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
      }
      else {
        sound_sndmain_cpp_enableHwSoundMixing_FUN_00575580(0);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
      }
LAB_0050c339:
      core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
    }
    iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_ESCAPE);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
