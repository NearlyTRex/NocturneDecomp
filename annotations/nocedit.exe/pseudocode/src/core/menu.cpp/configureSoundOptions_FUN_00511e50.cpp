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
  char *pcVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  int y_top;
  int iVar9;
  char (*pacVar10) [256];
  int extraout_EDX;
  int height_half;
  DWORD *pDVar11;
  SSoundDeviceInfo *pSVar12;
  char (*pacVar13) [256];
  char *pcVar14;
  int iVar15;
  char (*pacVar16) [256];
  char *pcVar17;
  byte bVar18;
  float10 fVar19;
  double dVar20;
  ulonglong in_stack_fffff5b4;
  ulonglong uVar21;
  uint uVar23;
  uint uVar24;
  longlong lVar22;
  uint in_stack_fffff5bc;
  uint in_stack_fffff5c0;
  uint in_stack_fffff5c4;
  uint in_stack_fffff5c8;
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
  CGame *n2;
  
  bVar18 = 0;
  n2 = (CGame *)((ulonglong)in_stack_fffff5b4 >> 0x20);
  uVar21 = CONCAT44 /* combine 2-byte values */(n2,g_CGamePtr);
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,n2);
  pacVar10 = g_SoundMenuTextBuffers;
  iVar3 = 0;
  do {
    *(char (**) [256])((int)g_SoundOptionsMenuPointers + iVar3) = pacVar10;
    iVar3 = iVar3 + 4;
    pacVar10 = pacVar10 + 1;
  } while (iVar3 != 0x28);
  do {
    uVar23 = (uint)((ulonglong)uVar21 >> 0x20);
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    local_2c = 0;
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
    iVar3 = local_2c;
    iVar9 = -1;
    pacVar10 = g_SoundMenuTextBuffers;
    do {
      pacVar13 = pacVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pacVar13 = (char (*) [256])((int)pacVar10 + (uint)bVar18 * -2 + 1);
      pcVar14 = *pacVar10;
      pacVar10 = pacVar13;
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
    iVar15 = local_2c + 1;
    iVar9 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_34 = iVar3 + 2;
    pacVar10 = g_SoundMenuTextBuffers + iVar15;
    local_2c = iVar15;
    if (iVar9 == 0) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      iVar3 = local_34;
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar10,pcVar4);
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      crt_stdio_c_sprintf_FUN_005fdbd0(*pacVar10,pcVar4);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      uVar21 = CONCAT44 /* combine 2-byte values */(uVar23,0x511fbd);
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar20);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_34c,"%d",local_18,uVar21);
      uVar23 = (uint)((ulonglong)uVar21 >> 0x20);
      pcVar4 = acStack_34c;
      iVar3 = -1;
      pacVar13 = pacVar10;
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
        pacVar13 = pacVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pacVar13 = (char (*) [256])((int)pacVar10 + (uint)bVar18 * -2 + 1);
        pcVar14 = *pacVar10;
        pacVar10 = pacVar13;
      } while (*pcVar14 != '\0');
      pcVar14 = pacVar13[-1] + 0xff;
      do {
        cVar1 = *pcVar4;
        *pcVar14 = cVar1;
        iVar3 = iStack_38;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
    }
    iVar15 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    iVar9 = iVar3 + 1;
    pcVar4 = g_SoundMenuTextBuffers[iVar3];
    local_30 = iVar9;
    if (iVar15 == 0) {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,pcVar14);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar14 = pcVar4;
      do {
        cVar1 = *pcVar5;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      uVar21 = CONCAT44 /* combine 2-byte values */(uVar23,0x5120c3);
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((local_14 * 100.0f) / 1.0f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar20);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"%d",local_18,uVar21);
      uVar23 = (uint)((ulonglong)uVar21 >> 0x20);
      pcVar14 = acStack_14c;
      iVar3 = -1;
      pcVar5 = pcVar4;
      do {
        pcVar17 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar17 = pcVar5 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar17;
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
        pcVar5 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar4 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar14;
        *pcVar5 = cVar1;
        iVar9 = local_34;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    pcVar4 = g_SoundMenuTextBuffers[iVar9];
    uStack_44 = (double)CONCAT44 /* combine 2-byte values */(iVar9 + 1,(float)uStack_44);
    if (iVar3 == 0) {
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      local_24 = iVar9 + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,pcVar14);
    }
    else {
      pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar14 = pcVar4;
      do {
        cVar1 = *pcVar5;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      uVar21 = CONCAT44 /* combine 2-byte values */(uVar23,0x5121c7);
      dVar20 = crt_math_c_round_FUN_005fe6b0
                         ((double)((local_14 * 100.0f) / 0.25f +
                                  (float)0.001));
      local_18 = (int)ROUND(dVar20);
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)&local_560.device_value2,"%d",local_18,uVar21);
      uVar23 = (uint)((ulonglong)uVar21 >> 0x20);
      pDVar11 = &local_560.device_value2;
      iVar3 = -1;
      pcVar14 = pcVar4;
      do {
        pcVar5 = pcVar14;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar14 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        DVar2 = *pDVar11;
        *pcVar5 = (char)DVar2;
        if ((char)DVar2 == '\0') break;
        cVar1 = *(char *)((int)pDVar11 + 1);
        pDVar11 = (DWORD *)((int)pDVar11 + 2);
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      pcVar14 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar3 = -1;
      do {
        pcVar5 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar4 + (uint)bVar18 * -2 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -1;
      do {
        cVar1 = *pcVar14;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      local_28 = (float)uStack_44;
    }
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar4 = g_SoundMenuTextBuffers[local_24];
    pcVar14 = pcVar4;
    do {
      cVar1 = *pcVar5;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    iVar3 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"%d",iVar3);
    pcVar14 = local_248;
    iVar3 = -1;
    pcVar5 = pcVar4;
    do {
      pcVar17 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar17 = pcVar5 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar17;
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
    iVar9 = -1;
    do {
      pcVar5 = pcVar4;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar5 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar9 = local_24 + 1;
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar4 = g_SoundMenuTextBuffers[iVar9];
    pcVar14 = pcVar4;
    do {
      cVar1 = *pcVar5;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar9;
    iVar9 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    crt_stdio_c_sprintf_FUN_005fdbd0(local_248,"%d",iVar9);
    pcVar14 = local_248;
    iVar9 = -1;
    pcVar5 = pcVar4;
    do {
      pcVar17 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar17 = pcVar5 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar17;
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
    iVar9 = -1;
    do {
      pcVar5 = pcVar4;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar5 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar9 = iVar3 + 2;
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    local_24 = iVar9;
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar3 = local_24 + 1;
      iVar9 = local_24;
    }
    else {
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar3 = iVar3 + 3;
    }
    local_24 = iVar3;
    crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundMenuTextBuffers[iVar9],pcVar4);
    iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar3 < 0) ||
       (iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar9 <= iVar3)) {
      local_678.device_value1 = 0;
      local_678.device_name[0] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&local_678);
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
    pSVar12 = &local_678;
    iVar9 = local_24 + 1;
    iVar3 = -1;
    pcVar4 = g_SoundMenuTextBuffers[local_24];
    do {
      pcVar14 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar4 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = pSVar12->device_name[0];
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pSVar12->device_name[1];
      pSVar12 = (SSoundDeviceInfo *)(pSVar12->device_name + 2);
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    local_24 = iVar9;
    if (local_678.device_value1 != 0) {
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      pcVar4 = g_SoundMenuTextBuffers[iVar9];
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
      local_24 = local_24 + 1;
    }
    g_AudioVisualizationCounter = g_AudioVisualizationCounter + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < g_AudioVisualizationCounter) {
      g_AudioVisualizationCounter = g_AudioVisualizationCounter + -0x80000;
    }
    iVar3 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar3 != 0) {
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      local_1c = g_WindowWidth / 0x14;
      local_18 = g_WindowWidth / iVar3;
      iVar9 = local_18 + local_1c * -2;
      iVar15 = iVar9 >> 0x1f;
      fVar7 = (float)((int)((iVar9 + iVar15 * -4) - (uint)(iVar15 << 1 < 0)) >> 2);
      local_20 = iVar3;
      local_14 = fVar7;
      fVar19 = crt_math_c_pow_FUN_005ffd76
                         ((float10)50,(float10)1 / (float10)(int)fVar7);
      iVar9 = 0;
      dVar20 = (double)fVar19;
      uVar23 = (uint)((ulonglong)dVar20 >> 0x20);
      if (0 < iVar3) {
        do {
          in_stack_fffff5c0 = 0;
          in_stack_fffff5c4 = 0x40690000;
          if (0 < (int)fVar7) {
            iVar3 = local_18 * iVar9 + local_1c;
            iVar15 = (int)fVar7 * 4 + iVar3;
            uVar23 = 0;
            uStack_44._0_4_ = (float)0x40690000;
            do {
              fVar19 = (float10)(double)CONCAT44 /* combine 2-byte values */(in_stack_fffff5c8,(float)uStack_44) *
                       (float10)(double)CONCAT44 /* combine 2-byte values */(uVar23,in_stack_fffff5bc);
              dVar20 = (double)CONCAT44 /* combine 2-byte values */(in_stack_fffff5c8,(float)uStack_44);
              uStack_44 = (double)fVar19;
              fVar8 = (float)sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400
                                       (iVar9,(float)dVar20,(float)fVar19);
              uVar24 = 0x512634;
              dVar20 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float)g_WindowHeight -
                                          fVar8 * (float)g_WindowHeight * 0.25f));
              local_14 = (float)(int)ROUND(dVar20);
              height_half = (extraout_EDX - (int)local_14) + 1;
              dVar20 = (double)CONCAT44 /* combine 2-byte values */(uVar24,height_half);
              core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(iVar3,y_top,height_half);
              iVar3 = iVar3 + 4;
              in_stack_fffff5c0 = local_48;
              uVar23 = local_48;
              in_stack_fffff5c4 = (uint)(float)uStack_44;
            } while (iVar3 < iVar15);
          }
          uVar23 = (uint)((ulonglong)dVar20 >> 0x20);
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_20);
      }
    }
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    iVar3 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (g_SoundOptionsMenuPointers,local_24,&local_3c,0xe1,(int)pcVar4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_28 = 0.2;
    switch(iVar3) {
    case 0:
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar3 == 0));
      iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      if (iVar3 == 0) goto LAB_005126f5;
      break;
    case 1:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      local_a24 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
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
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar3 == 0) {
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
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,local_a30 * 1.0f);
      break;
    case 3:
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      local_a28 = local_14 / 0.25f;
      if (g_MenuLeftRightPressed == 1) {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        dVar20 = (double)(ulonglong)in_stack_fffff5c8;
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          dVar20 = (double)(ulonglong)in_stack_fffff5c8;
          local_a28 = 1.0;
        }
        else {
          local_a28 = local_a28 + -0.2f;
          if (local_a28 < (float)0.01) {
LAB_00512a67:
            uVar6 = SUB84 /* extract 2-byte value */(dVar20,0);
            local_a28 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,0);
            dVar20 = (double)(ulonglong)uVar6;
          }
        }
      }
      else {
        iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar3 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1,1);
          core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
          dVar20 = (double)(ulonglong)in_stack_fffff5c8;
          local_a28 = 0.2;
        }
        else {
          local_a28 = local_a28 + 0.2f;
          dVar20 = (double)local_a28;
          if ((float)1.01 < local_a28) goto LAB_00512a67;
          if (0.98999999999999999 < dVar20) {
            local_a28 = 1.0;
          }
        }
      }
      in_stack_fffff5c8 = SUB84 /* extract 2-byte value */(dVar20,0);
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
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar3 = 0xac44;
      }
      iVar9 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (iVar3 != iVar9) {
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
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar3 = 0x10;
      }
      iVar9 = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
      if (iVar3 != iVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(iVar3);
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar3 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      iVar3 = (iVar3 == 1) + 1;
      uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
      if (uVar6 != 0) {
        iVar3 = 2;
      }
      iVar9 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (iVar3 != iVar9) {
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(iVar3);
        goto LAB_005126f5;
      }
      break;
    case 7:
      uVar21 = CONCAT44 /* combine 2-byte values */(uVar23,&local_a20);
      iVar3 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_a20);
      while( true ) {
        uVar23 = (uint)((ulonglong)uVar21 >> 0x20);
        iVar9 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
        if (iVar9 <= iVar3) break;
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar3,&local_560);
        uVar21 = CONCAT44 /* combine 2-byte values */(uVar23,&local_560);
        iVar3 = iVar3 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_a20.base_strlist,local_560.device_name);
      }
      lVar22 = (ulonglong)uVar23 << 0x20;
      iVar3 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_a20,"Select sound device",iVar3,(int)lVar22);
      uVar23 = (uint)((ulonglong)lVar22 >> 0x20);
      if (-1 < iVar3) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar3);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        uVar6 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
        if (uVar6 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_a20,0,uVar23,in_stack_fffff5bc,in_stack_fffff5c0,in_stack_fffff5c4,
                 in_stack_fffff5c8);
      break;
    case 8:
      sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
      iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar3 == 0));
      sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    uVar21 = CONCAT44 /* combine 2-byte values */(uVar23,1);
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}
