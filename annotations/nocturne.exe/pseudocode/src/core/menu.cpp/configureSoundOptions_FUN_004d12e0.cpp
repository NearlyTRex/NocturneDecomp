// Name: core_menu.cpp_configureSoundOptions_FUN_004d12e0
// Address: 004d12e0
// Address Range: [[004d12e0, 004d21a9]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_configureSoundOptions_FUN_004d12e0(void)

{
  double dVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int y_top;
  int iVar9;
  byte *puVar10;
  int height_half;
  DWORD *pDVar11;
  SSoundDeviceInfo *pSVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  byte bVar17;
  float10 fVar18;
  double dVar19;
  ulonglong in_stack_fffff7ec;
  ulonglong uVar20;
  uint window_flags;
  uint uVar21;
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
  bVar17 = 0;
  uVar20 = CONCAT44((int)((ulonglong)in_stack_fffff7ec >> 0x20),g_CGame_PTR_005b9354);
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(g_CGame_PTR_005b9354);
  puVar10 = &DAT_01cc6ed8;
  iVar4 = 0;
  do {
    *(byte **)(iVar4 + 0x1cc78d8) = puVar10;
    iVar4 = iVar4 + 4;
    puVar10 = puVar10 + 0x100;
  } while (iVar4 != 0x28);
  do {
    local_800 = SUB84(__BITCAST_UINT64(dVar1),0);
    window_flags = (uint)((ulonglong)uVar20 >> 0x20);
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(g_CGame_PTR_005b9354);
    core_moon_cpp_CMoon_update_FUN_004deae0
              (&g_CMoon_01cc5780,g_CGame_PTR_005b9354->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50(&g_CMoon_01cc5780);
    local_2c = 0;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound : ");
    pcVar13 = &DAT_01cc6ed8;
    do {
      cVar2 = *pcVar5;
      *pcVar13 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar13[1] = cVar2;
      pcVar13 = pcVar13 + 2;
    } while (cVar2 != '\0');
    iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
    if (iVar4 == 0) {
      pcVar5 = "On";
    }
    else {
      pcVar5 = "Muted";
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar5);
    iVar4 = local_2c;
    iVar9 = -1;
    pcVar5 = &DAT_01cc6ed8;
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
    iVar9 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(0);
    local_34 = iVar4 + 2;
    pcVar5 = &DAT_01cc6ed8 + iVar15 * 0x100;
    local_2c = iVar15;
    if (iVar9 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound effects : Off");
      iVar4 = local_34;
      _sprintf(pcVar5,pcVar13);
    }
    else {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound effects : ");
      _sprintf(pcVar5,pcVar13);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
      uVar20 = CONCAT44(window_flags,0x4d144d);
      dVar19 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar19);
      _sprintf(acStack_34c,"%d",local_18,uVar20);
      window_flags = (uint)((ulonglong)uVar20 >> 0x20);
      pcVar13 = acStack_34c;
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
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("%.");
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
        iVar4 = iStack_38;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar14[1] = cVar2;
        pcVar14 = pcVar14 + 2;
      } while (cVar2 != '\0');
    }
    iVar15 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(2);
    iVar9 = iVar4 + 1;
    pcVar5 = &DAT_01cc6ed8 + iVar4 * 0x100;
    local_30 = iVar9;
    if (iVar15 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Dialog : Off");
      _sprintf(pcVar5,pcVar13);
    }
    else {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Dialog : ");
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
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(2);
      uVar20 = CONCAT44(window_flags,0x4d1553);
      dVar19 = round
                         ((double)((local_14 * 100.0f) / 1.0f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar19);
      _sprintf(acStack_14c,"%d",local_18,uVar20);
      window_flags = (uint)((ulonglong)uVar20 >> 0x20);
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
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("%.");
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
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(1);
    pcVar5 = &DAT_01cc6ed8 + iVar9 * 0x100;
    uStack_44 = __BITCAST_DOUBLE(CONCAT44(iVar9 + 1,(float)uStack_44));
    if (iVar4 == 0) {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Music Vol : Off");
      local_24 = iVar9 + 1;
      _sprintf(pcVar5,pcVar13);
    }
    else {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Music Vol : ");
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
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(1);
      uVar20 = CONCAT44(window_flags,0x4d1657);
      dVar19 = round
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar19);
      _sprintf((char *)&local_560.is_emulated,"%d",local_18,uVar20);
      window_flags = (uint)((ulonglong)uVar20 >> 0x20);
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
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("%.");
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
      local_28 = (float)uStack_44;
    }
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output rate : ");
    pcVar5 = &DAT_01cc6ed8 + local_24 * 0x100;
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
    iVar4 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
    _sprintf(local_248,"%d",iVar4);
    pcVar13 = local_248;
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
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("hz");
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
    pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output quality : ");
    pcVar5 = &DAT_01cc6ed8 + iVar9 * 0x100;
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
    iVar9 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
    _sprintf(local_248,"%d",iVar9);
    pcVar13 = local_248;
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
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("bit");
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
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
    local_24 = iVar9;
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output type : MONO");
      iVar4 = local_24 + 1;
      iVar9 = local_24;
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Output type : STEREO");
      iVar4 = iVar4 + 3;
    }
    local_24 = iVar4;
    _sprintf(&DAT_01cc6ed8 + iVar9 * 0x100,pcVar5);
    iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610();
    if ((iVar4 < 0) ||
       (iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(), iVar9 <= iVar4)) {
      local_678.has_hardware_mixing = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar4,&local_678);
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Device : ");
    iVar4 = local_24 * 0x100;
    pcVar5 = &DAT_01cc6ed8 + iVar4;
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
    pcVar5 = &DAT_01cc6ed8 + iVar4;
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
    if (local_678.has_hardware_mixing != 0) {
      iVar9 = local_24 * 0x100;
      iVar4 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
      pcVar5 = &DAT_01cc6ed8 + iVar9;
      if (iVar4 == 0) {
        pcVar13 = "Hardware mixing: Off";
      }
      else {
        pcVar13 = "Hardware mixing: On";
      }
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(pcVar13);
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
    _DAT_01cc5b64 = _DAT_01cc5b64 + _DAT_01bd1d80 * 0x18;
    if (0x7ffff < _DAT_01cc5b64) {
      _DAT_01cc5b64 = _DAT_01cc5b64 + -0x80000;
    }
    iVar4 = sound_sndmain_cpp_isSoundBusy_FUN_00528490();
    if (iVar4 != 0) {
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      local_1c = g_WindowWidth / 0x14;
      local_18 = g_WindowWidth / iVar4;
      iVar9 = local_18 + local_1c * -2;
      iVar15 = iVar9 >> 0x1f;
      fVar7 = (float)((int)((iVar9 + iVar15 * -4) - (uint)(iVar15 << 1 < 0)) >> 2);
      local_20 = iVar4;
      local_14 = fVar7;
      fVar18 = pow
                         ((float10)50,(float10)1 / (float10)(int)fVar7);
      iVar9 = 0;
      dVar19 = (double)fVar18;
      window_flags = (uint)((ulonglong)dVar19 >> 0x20);
      if (0 < iVar4) {
        do {
          local_808 = 0;
          uStack_804 = 0x40690000;
          if (0 < (int)fVar7) {
            iVar4 = local_18 * iVar9 + local_1c;
            iVar15 = (int)fVar7 * 4 + iVar4;
            do {
              fVar18 = (float10)__BITCAST_DOUBLE(CONCAT44(local_800,uStack_804)) *
                       (float10)__BITCAST_DOUBLE(CONCAT44(local_808,uStack_80c));
              uStack_44 = (double)fVar18;
              fVar8 = sound_sndmain_cpp_analyzeFrequencyBand_FUN_00528e60
                                (iVar9,(float)__BITCAST_DOUBLE(CONCAT44(local_800,uStack_804)),(float)fVar18);
              y_top = g_WindowHeight + -1;
              uVar21 = 0x4d1ac4;
              dVar19 = round
                                 ((double)((float)g_WindowHeight -
                                          fVar8 * (float)g_WindowHeight * 0.25f));
              local_14 = (float)(int)ROUND(dVar19);
              height_half = (y_top - (int)local_14) + 1;
              dVar19 = __BITCAST_DOUBLE(CONCAT44(uVar21,height_half));
              core_menu_cpp_renderAudioSpectrumBar_FUN_004cf2b0(iVar4,y_top,height_half);
              local_808 = local_48;
              uStack_804 = (float)uStack_44;
              iVar4 = iVar4 + 4;
            } while (iVar4 < iVar15);
          }
          window_flags = (uint)((ulonglong)dVar19 >> 0x20);
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_20);
      }
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Sound Options");
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      ((char **)0x1cc78d8,local_24,&local_3c,0xe1,pcVar5);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    local_28 = 0.2;
    switch(iVar4) {
    case 0:
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0((uint)(iVar4 == 0));
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      if (iVar4 == 0) goto LAB_004d1b85;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(0);
      local_7ec = local_14 / 0.25f;
      if (_DAT_01cc5b5c == 1) {
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
      if (_DAT_01cc5b5c == 1) {
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
      if (_DAT_01cc5b5c == 1) {
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
      if (_DAT_01cc5b5c == 1) {
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
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar6 != 0) {
        iVar4 = 0xac44;
      }
      iVar9 = sound_sndmain_cpp_getAudioSampleRate_FUN_005281b0();
      if (iVar4 != iVar9) {
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
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar6 != 0) {
        iVar4 = 0x10;
      }
      iVar9 = sound_sndmain_cpp_getAudioBitDepth_FUN_005281a0();
      if (iVar4 != iVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005281d0(iVar4);
        goto LAB_004d1b85;
      }
      break;
    case 6:
      iVar4 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      iVar4 = (iVar4 == 1) + 1;
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
      if (uVar6 != 0) {
        iVar4 = 2;
      }
      iVar9 = sound_sndmain_cpp_getAudioChannelCount_FUN_005281c0();
      if (iVar4 != iVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005281f0(iVar4);
        goto LAB_004d1b85;
      }
      break;
    case 7:
      uVar20 = CONCAT44(window_flags,&local_7e8);
      iVar4 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&local_7e8);
      while( true ) {
        window_flags = (uint)((ulonglong)uVar20 >> 0x20);
        iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
        if (iVar9 <= iVar4) break;
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar4,&local_560);
        uVar20 = CONCAT44(window_flags,&local_560);
        iVar4 = iVar4 + 1;
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_7e8.base,local_560.device_name);
      }
      iVar4 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_00528610();
      iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                        (&local_7e8,"Select sound device",iVar4,window_flags);
      if (-1 < iVar4) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005285b0();
        sound_sndmain_cpp_selectSoundDevice_FUN_00528410(iVar4);
        sound_sndmain_cpp_initializeSoundDevice_FUN_00528500();
        uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
        if (uVar6 != 0) {
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
    uVar20 = CONCAT44(window_flags,1);
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar4 != 0) {
      return;
    }
  } while( true );
}
