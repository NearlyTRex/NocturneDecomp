// Name: core_menu.cpp_FUN_0050ba70
// Address: 0050ba70
// Address Range: [[0050ba70, 0050c96f]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_0050ba70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_0050ba70(void)

{
  char cVar1;
  CDemonSet *this_ptr;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  byte *puVar7;
  SSoundDeviceInfo *pSVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  float10 fVar14;
  float10 fVar15;
  ulonglong uVar16;
  uint local_a58;
  uint uStack_a54;
  float local_a48;
  float local_a44;
  float local_a40;
  CPickList local_a38;
  SSoundDeviceInfo local_678;
  SSoundDeviceInfo local_560;
  char local_448 [256];
  char local_348 [256];
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  int local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar13 = 0;
  local_40 = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  puVar7 = &DAT_01d20008;
  iVar2 = 0;
  do {
    *(byte **)(iVar2 + 0x1d20a08) = puVar7;
    iVar2 = iVar2 + 4;
    puVar7 = puVar7 + 0x100;
  } while (iVar2 != 0x28);
  do {
    core_game_cpp_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_render_FUN_00521e40(&g_CMoonInstance);
    local_2c = 0;
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090(">Sound : " + 1);
    pcVar9 = &DAT_01d20008;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
    if (iVar2 == 0) {
      pcVar3 = &DAT_005e8031;
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar3);
    iVar2 = local_2c;
    iVar6 = -1;
    pcVar3 = &DAT_01d20008;
    do {
      pcVar10 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar11 = local_2c + 1;
    iVar6 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
    local_3c = iVar2 + 2;
    pcVar3 = &DAT_01d20008 + iVar11 * 0x100;
    local_2c = iVar11;
    if (iVar6 == 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound effects : Off");
      iVar2 = local_3c;
      _sprintf(pcVar3,pcVar9);
    }
    else {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound effects : ");
      _sprintf(pcVar3,pcVar9);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
      fVar14 = ((float10)local_14 * (float10)_DAT_005e815e) / (float10)_DAT_00603974 +
               (float10)_DAT_005e816a;
      round();
      local_14 = (float)(int)ROUND(fVar14);
      _sprintf(local_248,&DAT_005e8045);
      pcVar9 = local_248;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e8048);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        iVar2 = local_3c;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar11 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(2);
    iVar6 = iVar2 + 1;
    pcVar3 = &DAT_01d20008 + iVar2 * 0x100;
    local_30 = iVar6;
    if (iVar11 == 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Dialog : Off");
      _sprintf(pcVar3,pcVar9);
    }
    else {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Dialog : ");
      pcVar9 = pcVar3;
      do {
        cVar1 = *pcVar10;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(2);
      fVar14 = ((float10)local_14 * (float10)_DAT_005e815e) / (float10)_DAT_00603978 +
               (float10)_DAT_005e816a;
      round();
      local_14 = (float)(int)ROUND(fVar14);
      _sprintf(local_148,&DAT_005e8069);
      pcVar9 = local_148;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e806c);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        iVar6 = local_30;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
    iVar11 = iVar6 + 1;
    pcVar3 = &DAT_01d20008 + iVar6 * 0x100;
    local_34 = iVar11;
    if (iVar2 == 0) {
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Music Vol : Off");
      local_24 = iVar11;
      _sprintf(pcVar3,pcVar9);
    }
    else {
      pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Music Vol : ");
      pcVar9 = pcVar3;
      do {
        cVar1 = *pcVar10;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(1);
      fVar14 = ((float10)local_14 * (float10)_DAT_005e815e) / (float10)_DAT_00603970 +
               (float10)_DAT_005e816a;
      round();
      local_14 = (float)(int)ROUND(fVar14);
      _sprintf(local_448,&DAT_005e8089);
      pcVar9 = local_448;
      iVar2 = -1;
      pcVar10 = pcVar3;
      do {
        pcVar12 = pcVar10;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar1 != '\0');
      pcVar12 = pcVar12 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e808c);
      iVar2 = -1;
      do {
        pcVar10 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      pcVar10 = pcVar10 + -1;
      do {
        cVar1 = *pcVar9;
        *pcVar10 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar10[1] = cVar1;
        pcVar10 = pcVar10 + 2;
      } while (cVar1 != '\0');
      local_24 = local_34;
    }
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output rate : ");
    pcVar3 = &DAT_01d20008 + local_24 * 0x100;
    pcVar9 = pcVar3;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
    _sprintf(local_348,&DAT_005e80ae);
    pcVar9 = local_348;
    iVar2 = -1;
    pcVar10 = pcVar3;
    do {
      pcVar12 = pcVar10;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e80b1);
    iVar2 = local_24;
    iVar6 = -1;
    do {
      pcVar10 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar6 = local_24 + 1;
    pcVar10 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output quality : ");
    pcVar3 = &DAT_01d20008 + iVar6 * 0x100;
    pcVar9 = pcVar3;
    do {
      cVar1 = *pcVar10;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar6;
    sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
    _sprintf(local_348,&DAT_005e80c6);
    pcVar9 = local_348;
    iVar6 = -1;
    pcVar10 = pcVar3;
    do {
      pcVar12 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar12 = pcVar10 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e80c9);
    iVar6 = -1;
    do {
      pcVar10 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar10 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar9;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    iVar6 = iVar2 + 2;
    uVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
    local_24 = iVar6;
    if (((uVar4 == 0) || (uVar4 < 2)) || (uVar4 != 2)) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output type : MONO");
      iVar2 = local_24 + 1;
      iVar6 = local_24;
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Output type : STEREO");
      iVar2 = iVar2 + 3;
    }
    local_24 = iVar2;
    _sprintf(&DAT_01d20008 + iVar6 * 0x100,pcVar3);
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005756d0();
    if ((iVar2 < 0) ||
       (iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), iVar6 <= iVar2)) {
      local_678.has_hardware_mixing = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_00575350(iVar2,&local_678);
    }
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Device : ");
    iVar2 = local_24 * 0x100;
    pcVar3 = &DAT_01d20008 + iVar2;
    do {
      cVar1 = *pcVar9;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    pSVar8 = &local_678;
    local_24 = local_24 + 1;
    iVar6 = -1;
    pcVar3 = &DAT_01d20008 + iVar2;
    do {
      pcVar9 = pcVar3;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar3 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = pSVar8->device_name[0];
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pSVar8->device_name[1];
      pSVar8 = (SSoundDeviceInfo *)(pSVar8->device_name + 2);
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    if (0 < (int)local_678.has_hardware_mixing) {
      iVar6 = local_24 * 0x100;
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
      pcVar3 = &DAT_01d20008 + iVar6;
      if (iVar2 < 1) {
        pcVar9 = "Hardware mixing: Off";
      }
      else {
        pcVar9 = "Hardware mixing: Enabled";
      }
      pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_00531090(pcVar9);
      do {
        cVar1 = *pcVar9;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      local_24 = local_24 + 1;
    }
    _DAT_01d1ee98 = _DAT_01d1ee98 + _DAT_01c43530 * 0x18;
    if (0x7ffff < _DAT_01d1ee98) {
      _DAT_01d1ee98 = _DAT_01d1ee98 + -0x80000;
    }
    iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_00575550();
    if (iVar2 != 0) {
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
      local_18 = DAT_0061b498 / 0x14;
      local_1c = DAT_0061b498 / iVar2;
      iVar6 = local_1c + local_18 * -2;
      iVar11 = iVar6 >> 0x1f;
      fVar5 = (float)((int)((iVar6 + iVar11 * -4) - (uint)(iVar11 << 1 < 0)) >> 2);
      fVar14 = (float10)_DAT_005e8172;
      local_20 = iVar2;
      local_14 = fVar5;
      pow();
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          local_a58 = 0;
          uStack_a54 = 0x40690000;
          if (0 < (int)fVar5) {
            iVar2 = local_1c * iVar6 + local_18;
            iVar11 = (int)fVar5 * 4 + iVar2;
            do {
              fVar15 = (float10)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)) * (float10)(double)fVar14;
              local_48 = (double)fVar15;
              local_14 = sound_sndmain_cpp_analyzeFrequencyBand_FUN_00576590
                                   (iVar6,(float)__BITCAST_DOUBLE(CONCAT44(uStack_a54,local_a58)),
                                    (float)fVar15);
              fVar15 = (float10)DAT_0061b49c -
                       (float10)local_14 * (float10)DAT_0061b49c * (float10)_DAT_005e8162;
              uVar16 = round();
              local_14 = (float)(int)ROUND(fVar15);
              core_menu_cpp_renderAudioSpectrumBar_FUN_00509c90
                        (iVar2,(int)uVar16,((int)((ulonglong)uVar16 >> 0x20) - (int)local_14) + 1);
              local_a58 = (uint)local_48;
              uStack_a54 = local_48._4_4_;
              iVar2 = iVar2 + 4;
            } while (iVar2 < iVar11);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_20);
      }
    }
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Sound Options");
    iVar2 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      ((char **)0x1d20a08,local_24,&local_40,0x19,pcVar3);
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    local_28 = 0.2;
    switch(iVar2) {
    case 0:
      iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      sound_sndmain_cpp_setSoundMuted_FUN_00573600((uint)(iVar2 == 0));
      iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      if (iVar2 == 0) goto LAB_0050c339;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(0);
      local_a48 = local_14 / _DAT_00603974;
      if (_DAT_01d1ee8c == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,1);
          local_a48 = 1.0;
        }
        else {
          local_a48 = local_a48 - local_28;
          if (local_a48 < (float)_DAT_005e8192) {
LAB_0050c485:
            local_a48 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(0,1);
          local_a48 = 0.2;
        }
        else {
          local_a48 = local_a48 + local_28;
          if ((float)_DAT_005e8182 < local_a48) goto LAB_0050c485;
          if ((float)_DAT_005e818a < local_a48) {
            local_a48 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(0,local_a48 * _DAT_00603974);
      sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
      sound_sndmain_cpp_setNextSfxFlags_FUN_005729f0(1);
      sound_sndmain_cpp_startSfx_FUN_00572d20("colt45-0.wav");
      sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
      break;
    case 2:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(2);
      local_a40 = local_14 / _DAT_00603978;
      if (_DAT_01d1ee8c == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,1);
          local_a40 = 1.0;
        }
        else {
          local_a40 = local_a40 - local_28;
          if (local_a40 < (float)_DAT_005e8192) {
LAB_0050c5aa:
            local_a40 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(2,1);
          local_a40 = 0.2;
        }
        else {
          local_a40 = local_a40 + local_28;
          if ((float)_DAT_005e8182 < local_a40) goto LAB_0050c5aa;
          if ((float)_DAT_005e818a < local_a40) {
            local_a40 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(2,local_a40 * _DAT_00603978);
      break;
    case 3:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(1);
      local_a44 = local_14 / _DAT_00603970;
      if (_DAT_01d1ee8c == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,1);
          core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
          local_a44 = 1.0;
        }
        else {
          local_a44 = local_a44 - local_28;
          if (local_a44 < (float)_DAT_005e8192) {
LAB_0050c6ac:
            local_a44 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(1,1);
          core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
          local_a44 = 0.2;
        }
        else {
          local_a44 = local_a44 + _DAT_005e817a;
          if ((float)_DAT_005e8182 < local_a44) goto LAB_0050c6ac;
          if (_DAT_005e818a < (double)local_a44) {
            local_a44 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(1,local_a44 * _DAT_00603970);
      break;
    case 4:
      iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
      if (_DAT_01d1ee8c == 1) {
        if (iVar2 == 0x5622) {
LAB_0050c78b:
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
        if (0xac43 < iVar2) goto LAB_0050c78b;
        iVar2 = 0xac44;
      }
      iVar6 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
      if (0 < iVar6) {
        iVar2 = 0xac44;
      }
      iVar6 = sound_sndmain_cpp_getAudioSampleRate_FUN_00575220();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioSampleRate_FUN_005752a0(iVar2);
        goto LAB_0050c339;
      }
      break;
    case 5:
      iVar2 = sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
      if (iVar2 == 0x10) {
        iVar2 = 8;
      }
      else {
        iVar2 = 0x10;
      }
      uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
      if (0 < (int)uVar4) {
        iVar2 = 0x10;
      }
      iVar6 = sound_sndmain_cpp_getAudioBitDepth_FUN_00575200();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioBitDepth_FUN_00575260(iVar2);
        goto LAB_0050c339;
      }
      break;
    case 6:
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
      iVar2 = (iVar2 == 1) + 1;
      uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
      if (0 < (int)uVar4) {
        iVar2 = 2;
      }
      iVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_00575240();
      if (iVar2 != iVar6) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
        sound_sndmain_cpp_setAudioChannelCount_FUN_00575280(iVar2);
        goto LAB_0050c339;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&local_a38);
      for (iVar2 = 0; iVar6 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), iVar2 < iVar6;
          iVar2 = iVar2 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_00575350(iVar2,&local_560);
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&local_a38.base,local_560.device_name);
      }
      uVar4 = 0;
      iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005756d0();
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                        (&local_a38,"Select sound device",iVar2,uVar4);
      if (-1 < iVar2) {
        sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
        sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(iVar2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
        uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
        if (0 < (int)uVar4) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&local_a38,0);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
      iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
      if (iVar2 < 1) {
        sound_sndmain_cpp_enableHwSoundMixing_FUN_00575580(2);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
      }
      else {
        sound_sndmain_cpp_enableHwSoundMixing_FUN_00575580(0);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0();
      }
LAB_0050c339:
      core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
    }
    iVar2 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}
