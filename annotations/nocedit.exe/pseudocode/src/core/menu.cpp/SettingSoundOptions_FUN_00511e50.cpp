// Name: core_menu.cpp_SettingSoundOptions_FUN_00511e50
// Address: 00511e50
// Address Range: [[00511e50, 00512d1b]]
// Convention: unknown
// Signature: undefined core_menu.cpp_SettingSoundOptions_FUN_00511e50()
// Cross-references:
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512eb2 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00511e20 = 005126ce
//   TerminatedCString s_Sound_00636c07
//   TerminatedCString s_Muted_00636c10
//   TerminatedCString s_On_00636c16
//   TerminatedCString s_Sound_effects_00636c19
//   TerminatedCString s_d_00636c2a
//   TerminatedCString s_anon_00636c2d
//   TerminatedCString s_Sound_effects_Off_00636c30
//   TerminatedCString s_Dialog_00636c44
//   TerminatedCString s_d_00636c4e
//   TerminatedCString s_anon_00636c51
//   TerminatedCString s_Dialog_Off_00636c54
//   TerminatedCString s_Music_Vol_00636c61
//   TerminatedCString s_d_00636c6e
//   TerminatedCString s_anon_00636c71
//   TerminatedCString s_Music_Vol_Off_00636c74
//   TerminatedCString s_Output_rate_00636c84
//   TerminatedCString s_d_00636c93
//   TerminatedCString s_hz_00636c96
//   TerminatedCString s_Output_quality_00636c99
//   TerminatedCString s_d_00636cab
//   TerminatedCString s_bit_00636cae
//   TerminatedCString s_Output_type_MONO_00636cb2
//   TerminatedCString s_Output_type_STEREO_00636cc5
//   TerminatedCString s_Device_00636cda
//   TerminatedCString s_Hardware_mixing_On_00636ce4
//   TerminatedCString s_Hardware_mixing_Off_00636cf8
//   TerminatedCString s_Sound_Options_00636d0d
//   TerminatedCString s_colt45_0_wav_00636d1b
//   TerminatedCString s_Select_sound_device_00636d28
//   float FLOAT_00636d3f = 100
//   float FLOAT_00636d43 = 0.25
//   double DOUBLE_00636d47 = 0.00100000000000000
//   double DOUBLE_00636d4f = 50
//   float FLOAT_00636d57 = 0.2000000
//   double DOUBLE_00636d5f = 1.01000000000000
//   double DOUBLE_00636d67 = 0.990000000000000
//   float FLOAT_00636d6f = -0.2000000
//   double DOUBLE_00636d77 = 0.0100000000000000
//   undefined4 DAT_00661330
//   undefined4 DAT_00661334
//   undefined4 DAT_00661338
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CSound* g_CSoundPtr = 03f6af64
//   int g_GlobalDeltaTimeInt
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   undefined4 DAT_02f21590
//   undefined4 DAT_02f26cac
//   undefined4 DAT_02f26cb4
//   undefined1 DAT_02f28028
//   undefined1 DAT_02f28029
//   undefined1 DAT_02f2802a
//   undefined1 DAT_02f2802b
//   undefined4 DAT_02f28128
//   undefined4 DAT_02f28228
//   undefined4 DAT_02f28a28
//   undefined4 DAT_02f28a2c
//   CSound g_CSoundInstance
// Function calls:
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_menu.cpp_FUN_0050fe70
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   core_moon.cpp_CMoon_FUN_00529d60
//   core_moon.cpp_CMoon_FUN_00529ed0
//   core_sound.cpp_CSound_FUN_005b3830
//   crt_math.c_pow_FUN_005ffd76
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   sound_sndmain.cpp_CallToSetSoundMode_FUN_005ab280
//   sound_sndmain.cpp_CallToSetSoundOutputMode2_FUN_005ab2a0
//   sound_sndmain.cpp_CallToSetSoundOutputMode3_FUN_005ab2c0
//   sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   sound_sndmain.cpp_FUN_005a8b70
//   sound_sndmain.cpp_FUN_005ab130
//   sound_sndmain.cpp_FUN_005ab5a0
//   sound_sndmain.cpp_FUN_005ab5b0
//   sound_sndmain.cpp_FUN_005ab660
//   sound_sndmain.cpp_FUN_005ac400
//   sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   sound_sndmain.cpp_startSfx_FUN_005a8e90
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_menu.cpp_SettingSoundOptions() */

void core_menu_cpp_SettingSoundOptions_FUN_00511e50(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar11;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  byte bVar16;
  float10 fVar17;
  int in_stack_00000004;
  float in_stack_00000020;
  int in_stack_0000002c;
  int in_stack_00000044;
  int in_stack_00000058;
  float in_stack_00000070;
  float in_stack_00000080;
  CGame *in_stack_fffff5b8;
  uint in_stack_fffff664;
  uint in_stack_fffff668;
  double in_stack_fffff66c;
  float in_stack_fffff674;
  char **ppcStack_988;
  undefined1 auStack_984 [896];
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
  undefined4 local_3c;
  undefined4 local_1c;
  int local_14;
  
  bVar16 = 0;
  local_3c = 0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff5b8);
  puVar10 = &DAT_02f28028;
  iVar2 = 0;
  do {
    *(undefined1 **)((int)&DAT_02f28a28 + iVar2) = puVar10;
    iVar2 = iVar2 + 4;
    puVar10 = puVar10 + 0x100;
  } while (iVar2 != 0x28);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_FUN_00529d60();
    core_moon_cpp_CMoon_FUN_00529ed0();
    local_1c = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound : ");
    pcVar12 = &DAT_02f28028;
    do {
      cVar1 = *pcVar3;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
    if (iVar2 == 0) {
      pcVar3 = "On";
    }
    else {
      pcVar3 = "Muted";
    }
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar3);
    iVar2 = -1;
    pcVar3 = &DAT_02f28028;
    do {
      pcVar13 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar13 = pcVar3 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar2 = unaff_EBP + 1;
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
    local_14 = unaff_EBP + 2;
    pcVar3 = &DAT_02f28028 + iVar2 * 0x100;
    if (iVar4 == 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar12);
      iVar2 = unaff_EBP;
    }
    else {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound effects : ");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar12);
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      fVar17 = ((float10)fVar5 * (float10)FLOAT_00636d3f) / (float10)_DAT_00661334 +
               (float10)DOUBLE_00636d47;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fVar5));
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_328,"%d",(int)ROUND(fVar17));
      pcVar12 = acStack_324;
      iVar4 = -1;
      pcVar13 = pcVar3;
      do {
        pcVar14 = pcVar13;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar14 = pcVar13 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar4 = -1;
      do {
        pcVar13 = pcVar3;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar13 = pcVar3 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
    pcVar3 = &DAT_02f28028 + iVar2 * 0x100;
    if (iVar4 == 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar12);
      iVar2 = iVar2 + 1;
    }
    else {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Dialog : ");
      pcVar12 = pcVar3;
      do {
        cVar1 = *pcVar13;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      fVar17 = ((float10)fVar5 * (float10)FLOAT_00636d3f) / (float10)_DAT_00661338 +
               (float10)DOUBLE_00636d47;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,fVar5));
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_11c,"%d",(int)ROUND(fVar17));
      pcVar12 = acStack_118;
      iVar2 = -1;
      pcVar13 = pcVar3;
      do {
        pcVar14 = pcVar13;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar14 = pcVar13 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar13 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar13 = pcVar3 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        iVar2 = in_stack_00000004;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    iVar4 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
    pcVar3 = &DAT_02f28028 + iVar2 * 0x100;
    if (iVar4 == 0) {
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : Off");
      crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,pcVar12);
    }
    else {
      pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Music Vol : ");
      pcVar12 = pcVar3;
      do {
        cVar1 = *pcVar13;
        *pcVar12 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar12[1] = cVar1;
        pcVar12 = pcVar12 + 2;
      } while (cVar1 != '\0');
      in_stack_00000020 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      fVar17 = ((float10)in_stack_00000020 * (float10)FLOAT_00636d3f) / (float10)_DAT_00661330 +
               (float10)DOUBLE_00636d47;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,in_stack_00000020));
      crt_stdio_c_sprintf_FUN_005fdbd0
                (SStack_4d4.device_name + 0xc4,"%d",(int)ROUND(fVar17));
      pcVar12 = SStack_4d4.device_name + 200;
      iVar2 = -1;
      pcVar13 = pcVar3;
      do {
        pcVar14 = pcVar13;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar14 = pcVar13 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar14 = pcVar14 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("%.");
      iVar2 = -1;
      do {
        pcVar13 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar13 = pcVar3 + (uint)bVar16 * -2 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      pcVar13 = pcVar13 + -1;
      do {
        cVar1 = *pcVar12;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
    }
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output rate : ");
    pcVar3 = &DAT_02f28028 + (int)in_stack_00000020 * 0x100;
    pcVar12 = pcVar3;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_200,"%d",iVar2);
    pcVar12 = acStack_1fc;
    iVar2 = -1;
    pcVar13 = pcVar3;
    do {
      pcVar14 = pcVar13;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar14 = pcVar13 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("hz");
    iVar2 = -1;
    do {
      pcVar13 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar13 = pcVar3 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar13 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output quality : ");
    pcVar3 = &DAT_02f28028 + (in_stack_0000002c + 1) * 0x100;
    pcVar12 = pcVar3;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    iVar2 = sound_sndmain_cpp_getAudioBitsPerSample_FUN_005ab250();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1f0,"%d",iVar2);
    pcVar12 = acStack_1ec;
    iVar2 = -1;
    pcVar13 = pcVar3;
    do {
      pcVar14 = pcVar13;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar14 = pcVar13 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("bit");
    iVar2 = -1;
    do {
      pcVar13 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar13 = pcVar3 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    iVar2 = in_stack_0000002c + 2;
    uVar6 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    if (((uVar6 == 0) || (uVar6 < 2)) || (uVar6 != 2)) {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : MONO");
      iVar4 = in_stack_00000044 + 1;
      iVar2 = in_stack_00000044;
    }
    else {
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Output type : STEREO");
      iVar4 = in_stack_0000002c + 3;
    }
    in_stack_00000044 = iVar4;
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02f28028 + iVar2 * 0x100,pcVar3);
    iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
    if ((iVar2 < 0) ||
       (iVar4 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar4 <= iVar2)) {
      SStack_604.flags = 0;
      SStack_604.device_name[4] = '\0';
    }
    else {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&SStack_604);
    }
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Device : ");
    iVar2 = in_stack_00000058 * 0x100;
    pcVar3 = &DAT_02f28028 + iVar2;
    do {
      cVar1 = *pcVar12;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    pcVar3 = SStack_604.device_name + 8;
    in_stack_00000058 = in_stack_00000058 + 1;
    iVar4 = -1;
    pcVar12 = &DAT_02f28028 + iVar2;
    do {
      pcVar13 = pcVar12;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar13 = pcVar12 + (uint)bVar16 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar3;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    if (SStack_604.device_guid != 0) {
      iVar2 = sound_sndmain_cpp_getHardwareMixingEnabled_FUN_005ab590();
      pcVar3 = &DAT_02f28028 + in_stack_00000058 * 0x100;
      if (iVar2 == 0) {
        pcVar12 = "Hardware mixing: Off";
      }
      else {
        pcVar12 = "Hardware mixing: On";
      }
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(pcVar12);
      do {
        cVar1 = *pcVar12;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
    }
    DAT_02f26cb4 = DAT_02f26cb4 + g_GlobalDeltaTimeInt * 0x18;
    if (0x7ffff < DAT_02f26cb4) {
      DAT_02f26cb4 = DAT_02f26cb4 + -0x80000;
    }
    iVar2 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
    if (iVar2 != 0) {
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      in_stack_00000070 = (float)(g_WindowWidth / 0x14);
      iVar4 = g_WindowWidth / iVar2;
      iVar7 = iVar4 + (int)in_stack_00000070 * -2;
      iVar11 = iVar7 >> 0x1f;
      iVar7 = (int)((iVar7 + iVar11 * -4) - (uint)(iVar11 << 1 < 0)) >> 2;
      crt_math_c_pow_FUN_005ffd76((float10)DOUBLE_00636d4f,(float10)1 / (float10)iVar7);
      iVar11 = 0;
      if (0 < iVar2) {
        do {
          if (0 < (int)in_stack_fffff664) {
            iVar2 = iVar7 * iVar11 + iVar4;
            iVar15 = in_stack_fffff664 * 4 + iVar2;
            do {
              in_stack_00000080 = (float)sound_sndmain_cpp_FUN_005ac400();
              crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44(g_WindowHeight + -1,g_WindowHeight + -1));
              core_menu_cpp_FUN_0050fe70();
              iVar2 = iVar2 + 4;
            } while (iVar2 < iVar15);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)in_stack_00000070);
      }
    }
    support_newmsg_cpp_getLocalizedString_FUN_005441f0("Sound Options");
    pcVar3 = (char *)0xe1;
    uVar8 = core_menu_cpp_GetGameMainMenuChoice_FUN_00510000();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(uVar8) {
    case 0:
      sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(0x5126e3);
      iVar2 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
      if (iVar2 == 0) goto LAB_005126f5;
      break;
    case 1:
      in_stack_00000080 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(0);
      in_stack_fffff66c =
           (double)CONCAT44(in_stack_00000080 / _DAT_00661334,SUB84(in_stack_fffff66c,0));
      if (DAT_02f26cac == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0);
          ppcStack_988 = (char **)0x3f800000;
        }
        else {
          in_stack_fffff674 = in_stack_fffff674 - in_stack_00000070;
          if (in_stack_fffff674 < (float)DOUBLE_00636d77) {
LAB_00512841:
            in_stack_fffff674 = 0.0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(0);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(0);
          ppcStack_988 = (char **)0x3e4ccccd;
        }
        else {
          in_stack_fffff674 = in_stack_fffff674 + in_stack_00000070;
          if ((float)DOUBLE_00636d5f < in_stack_fffff674) goto LAB_00512841;
          if ((float)DOUBLE_00636d67 < in_stack_fffff674) {
            in_stack_fffff674 = 1.0;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(0,(float)ppcStack_988 * _DAT_00661334);
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_FUN_005a8b70();
      sound_sndmain_cpp_startSfx_FUN_005a8e90();
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      break;
    case 2:
      in_stack_fffff674 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(2);
      in_stack_fffff674 = in_stack_fffff674 / _DAT_00661338;
      if (DAT_02f26cac == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2);
          auStack_984._0_4_ = (CStrList_vtable *)0x3f800000;
        }
        else {
          ppcStack_988 = (char **)((float)ppcStack_988 - in_stack_00000080);
          if ((float)ppcStack_988 < (float)DOUBLE_00636d77) {
LAB_00512966:
            ppcStack_988 = (char **)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(2);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(2);
          auStack_984._0_4_ = (CStrList_vtable *)0x3e4ccccd;
        }
        else {
          ppcStack_988 = (char **)((float)ppcStack_988 + in_stack_00000080);
          if ((float)DOUBLE_00636d5f < (float)ppcStack_988) goto LAB_00512966;
          if ((float)DOUBLE_00636d67 < (float)ppcStack_988) {
            ppcStack_988 = (char **)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(2,(float)auStack_984._0_4_ * _DAT_00661338);
      break;
    case 3:
      fVar5 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(1);
      ppcStack_988 = (char **)(fVar5 / _DAT_00661330);
      if (DAT_02f26cac == 1) {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1);
          core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
          auStack_984._8_4_ = (char **)0x3f800000;
        }
        else {
          auStack_984._0_4_ = (float)auStack_984._0_4_ + FLOAT_00636d6f;
          if ((float)auStack_984._0_4_ < (float)DOUBLE_00636d77) {
LAB_00512a67:
            auStack_984._0_4_ = (CStrList_vtable *)0x0;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1);
          }
        }
      }
      else {
        iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(1);
        if (iVar2 == 0) {
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(1);
          core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
          auStack_984._8_4_ = (char **)0x3e4ccccd;
        }
        else {
          auStack_984._0_4_ = (float)auStack_984._0_4_ + FLOAT_00636d57;
          in_stack_fffff66c = (double)(float)auStack_984._0_4_;
          if ((float)DOUBLE_00636d5f < (float)auStack_984._0_4_) goto LAB_00512a67;
          if (DOUBLE_00636d67 < in_stack_fffff66c) {
            auStack_984._0_4_ = (CStrList_vtable *)0x3f800000;
          }
        }
      }
      sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(1,(float)auStack_984._8_4_ * _DAT_00661330);
      break;
    case 4:
      iVar2 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (DAT_02f26cac == 1) {
        if (iVar2 == 0x5622) {
LAB_00512b46:
          uVar6 = 0x2b2a;
        }
        else if (iVar2 == 0xac44) {
          uVar6 = 0x5622;
        }
        else {
          uVar6 = 0xac44;
        }
      }
      else if (iVar2 < 0x5622) {
        uVar6 = 0x5622;
      }
      else {
        if (0xac43 < iVar2) goto LAB_00512b46;
        uVar6 = 0xac44;
      }
      iVar2 = sound_sndmain_cpp_FUN_005ab5a0();
      if (iVar2 != 0) {
        uVar6 = 0xac44;
      }
      uVar9 = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
      if (uVar6 != uVar9) {
        sound_sndmain_cpp_FUN_005ab130();
        sound_sndmain_cpp_CallToSetSoundOutputMode3_FUN_005ab2c0();
        in_stack_fffff668 = uVar6;
        goto LAB_005126f5;
      }
      break;
    case 5:
      iVar2 = sound_sndmain_cpp_getAudioBitsPerSample_FUN_005ab250();
      if (iVar2 == 0x10) {
        uVar6 = 8;
      }
      else {
        uVar6 = 0x10;
      }
      iVar2 = sound_sndmain_cpp_FUN_005ab5a0();
      if (iVar2 != 0) {
        uVar6 = 0x10;
      }
      uVar9 = sound_sndmain_cpp_getAudioBitsPerSample_FUN_005ab250();
      if (uVar6 != uVar9) {
        sound_sndmain_cpp_FUN_005ab130();
        sound_sndmain_cpp_CallToSetSoundMode_FUN_005ab280();
        in_stack_fffff668 = uVar6;
        goto LAB_005126f5;
      }
      break;
    case 6:
      iVar2 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      uVar6 = (iVar2 == 1) + 1;
      iVar2 = sound_sndmain_cpp_FUN_005ab5a0();
      if (iVar2 != 0) {
        uVar6 = 2;
      }
      uVar9 = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
      if (uVar6 != uVar9) {
        sound_sndmain_cpp_FUN_005ab130();
        sound_sndmain_cpp_CallToSetSoundOutputMode2_FUN_005ab2a0();
        in_stack_fffff668 = uVar6;
        goto LAB_005126f5;
      }
      break;
    case 7:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_984);
      for (iVar2 = 0; iVar4 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar2 < iVar4;
          iVar2 = iVar2 + 1) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&SStack_4d4);
        pcVar3 = SStack_4d4.device_name + 4;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff670,pcVar3);
      }
      iVar2 = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff670,"Select sound device",iVar2,
                         (int)pcVar3);
      if (-1 < iVar2) {
        sound_sndmain_cpp_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar2);
        sound_sndmain_cpp_FUN_005ab5b0();
        iVar2 = sound_sndmain_cpp_FUN_005ab5a0();
        if (iVar2 != 0) {
          sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(0x10,2,0xac44);
        }
        core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_984 + 0x10),0,in_stack_fffff664,in_stack_fffff668,
                 SUB84(in_stack_fffff66c,0),(uint)((ulonglong)in_stack_fffff66c >> 0x20),
                 (uint)in_stack_fffff674);
      break;
    case 8:
      sound_sndmain_cpp_FUN_005ab660();
      iVar2 = sound_sndmain_cpp_getHardwareMixingEnabled_FUN_005ab590();
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550((uint)(iVar2 == 0));
      sound_sndmain_cpp_FUN_005ab5b0();
LAB_005126f5:
      core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
    }
    in_stack_fffff664 = 1;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}


// Assembly code:
// 00511e50: PUSH EBX
//   Label: core_menu.cpp_SettingSoundOptions_FUN_00511e50
// 00511e51: PUSH ESI
// 00511e52: PUSH EDI
// 00511e53: PUSH EBP
// 00511e54: MOV EBP,ESP
// 00511e56: SUB ESP,0xa38
// 00511e5c: AND ESP,0xfffffff8
// 00511e5f: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00511e65: XOR EDX,EDX
// 00511e67: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 00511e68: MOV dword ptr [ESP + 0xa10],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00511e6f: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 00511e74: MOV EDX,0x2f28028
//   XREF to: 02f28028 (DATA)
// 00511e79: ADD ESP,0x4
// 00511e7c: XOR EAX,EAX
// 00511e7e: MOV dword ptr [EAX + 0x2f28a28],EDX
//   Label: LAB_00511e7e
//   XREF to: 02f28a28 (WRITE)
//   XREF to: 02f28a2c (WRITE)
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28128 (DATA)
// 00511e84: ADD EAX,0x4
// 00511e87: ADD EDX,0x100
//   XREF to: 02f28228 (PARAM)
// 00511e8d: CMP EAX,0x28
// 00511e90: JNZ 0x00511e7e
//   XREF to: 00511e7e (CONDITIONAL_JUMP)
// 00511e92: MOV EBX,dword ptr [0x0067b654]
//   Label: LAB_00511e92
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00511e98: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 00511e99: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 00511e9e: ADD ESP,0x4
// 00511ea1: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00511ea6: SUB ESP,0x4
// 00511ea9: MOV EDX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00511eaf: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0xa4c] (DATA)
// 00511eb2: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00511eb7: CALL core_moon.cpp_CMoon_FUN_00529d60
//   XREF to: 00529d60 (UNCONDITIONAL_CALL)
// 00511ebc: ADD ESP,0x8
// 00511ebf: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00511ec4: CALL core_moon.cpp_CMoon_FUN_00529ed0
//   XREF to: 00529ed0 (UNCONDITIONAL_CALL)
// 00511ec9: ADD ESP,0x4
// 00511ecc: XOR ESI,ESI
// 00511ece: PUSH 0x636c07
//   XREF to: 00636c07 (DATA)
// 00511ed3: MOV dword ptr [ESP + 0xa20],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 00511eda: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511edf: ADD ESP,0x4
// 00511ee2: MOV EDI,0x2f28028
//   XREF to: 02f28028 (DATA)
// 00511ee7: MOV ESI,EAX
// 00511ee9: PUSH EDI
//   XREF to: 02f28028 (DATA)
// 00511eea: MOV AL,byte ptr [ESI]
//   Label: LAB_00511eea
// 00511eec: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (WRITE)
//   XREF to: 02f2802a (WRITE)
// 00511eee: CMP AL,0x0
// 00511ef0: JZ 0x00511f02
//   XREF to: 00511f02 (CONDITIONAL_JUMP)
// 00511ef2: MOV AL,byte ptr [ESI + 0x1]
// 00511ef5: ADD ESI,0x2
// 00511ef8: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (WRITE)
//   XREF to: 02f2802b (WRITE)
// 00511efb: ADD EDI,0x2
// 00511efe: CMP AL,0x0
// 00511f00: JNZ 0x00511eea
//   XREF to: 00511eea (CONDITIONAL_JUMP)
// 00511f02: POP EDI
//   Label: LAB_00511f02
// 00511f03: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 00511f08: TEST EAX,EAX
// 00511f0a: JNZ 0x0051271c
//   XREF to: 0051271c (CONDITIONAL_JUMP)
// 00511f10: PUSH 0x636c16
//   XREF to: 00636c16 (DATA)
// 00511f15: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_00511f15
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511f1a: ADD ESP,0x4
// 00511f1d: MOV ESI,EAX
// 00511f1f: PUSH EDI
//   XREF to: 02f28028 (DATA)
// 00511f20: SUB ECX,ECX
// 00511f22: DEC ECX
// 00511f23: MOV AL,0x0
// 00511f25: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (READ)
//   XREF to: 02f28029 (READ)
// 00511f27: DEC EDI
// 00511f28: MOV AL,byte ptr [ESI]
//   Label: LAB_00511f28
// 00511f2a: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (WRITE)
//   XREF to: 02f28029 (WRITE)
//   XREF to: 02f2802a (WRITE)
// 00511f2c: CMP AL,0x0
// 00511f2e: JZ 0x00511f40
//   XREF to: 00511f40 (CONDITIONAL_JUMP)
// 00511f30: MOV AL,byte ptr [ESI + 0x1]
// 00511f33: ADD ESI,0x2
// 00511f36: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (WRITE)
//   XREF to: 02f2802a (WRITE)
//   XREF to: 02f2802b (WRITE)
// 00511f39: ADD EDI,0x2
// 00511f3c: CMP AL,0x0
// 00511f3e: JNZ 0x00511f28
//   XREF to: 00511f28 (CONDITIONAL_JUMP)
// 00511f40: POP EDI
//   Label: LAB_00511f40
// 00511f41: MOV EDI,dword ptr [ESP + 0xa1c]
//   XREF to: Stack[-0x2c] (READ)
// 00511f48: PUSH 0x0
// 00511f4a: INC EDI
// 00511f4b: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 00511f50: MOV dword ptr [ESP + 0xa20],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00511f57: MOV EBX,EDI
// 00511f59: ADD ESP,0x4
// 00511f5c: SHL EBX,0x8
// 00511f5f: LEA EDX,[EDI + 0x1]
// 00511f62: ADD EBX,0x2f28028
//   XREF to: 02f28028 (DATA)
// 00511f68: MOV dword ptr [ESP + 0xa14],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00511f6f: TEST EAX,EAX
// 00511f71: JZ 0x00512726
//   XREF to: 00512726 (CONDITIONAL_JUMP)
// 00511f77: PUSH 0x636c19
//   XREF to: 00636c19 (DATA)
// 00511f7c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00511f81: ADD ESP,0x4
// 00511f84: PUSH EAX
// 00511f85: PUSH EBX
// 00511f86: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511f8b: ADD ESP,0x8
// 00511f8e: PUSH 0x0
// 00511f90: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 00511f95: MOV dword ptr [ESP + 0xa38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00511f9c: FLD float ptr [ESP + 0xa38]
//   XREF to: Stack[-0x14] (READ)
// 00511fa3: FMUL float ptr [0x00636d3f]
//   XREF to: 00636d3f (READ)
// 00511fa9: FDIV float ptr [0x00661334]
//   XREF to: 00661334 (READ)
// 00511faf: FADD double ptr [0x00636d47]
//   XREF to: 00636d47 (READ)
// 00511fb5: ADD ESP,0x4
// 00511fb8: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00511fbd: FISTP dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (WRITE)
// 00511fc4: MOV EAX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (READ)
// 00511fcb: PUSH EAX
// 00511fcc: PUSH 0x636c2a
//   XREF to: 00636c2a (DATA)
// 00511fd1: LEA EAX,[ESP + 0x708]
//   XREF to: Stack[-0x348] (DATA)
// 00511fd8: PUSH EAX
// 00511fd9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00511fde: ADD ESP,0xc
// 00511fe1: LEA ESI,[ESP + 0x700]
//   XREF to: Stack[-0x348] (DATA)
// 00511fe8: MOV EDI,EBX
// 00511fea: PUSH EDI
// 00511feb: SUB ECX,ECX
// 00511fed: DEC ECX
// 00511fee: MOV AL,0x0
// 00511ff0: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 00511ff2: DEC EDI
// 00511ff3: MOV AL,byte ptr [ESI]
//   Label: LAB_00511ff3
//   XREF to: Stack[-0x348] (DATA)
// 00511ff5: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 00511ff7: CMP AL,0x0
// 00511ff9: JZ 0x0051200b
//   XREF to: 0051200b (CONDITIONAL_JUMP)
// 00511ffb: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x347] (READ)
// 00511ffe: ADD ESI,0x2
// 00512001: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 00512004: ADD EDI,0x2
// 00512007: CMP AL,0x0
// 00512009: JNZ 0x00511ff3
//   XREF to: 00511ff3 (CONDITIONAL_JUMP)
// 0051200b: POP EDI
//   Label: LAB_0051200b
// 0051200c: PUSH 0x636c2d
//   XREF to: 00636c2d (DATA)
// 00512011: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512016: ADD ESP,0x4
// 00512019: MOV ESI,EAX
// 0051201b: PUSH EDI
// 0051201c: SUB ECX,ECX
// 0051201e: DEC ECX
// 0051201f: MOV AL,0x0
// 00512021: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 00512023: DEC EDI
// 00512024: MOV AL,byte ptr [ESI]
//   Label: LAB_00512024
// 00512026: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 00512028: CMP AL,0x0
// 0051202a: JZ 0x0051203c
//   XREF to: 0051203c (CONDITIONAL_JUMP)
// 0051202c: MOV AL,byte ptr [ESI + 0x1]
// 0051202f: ADD ESI,0x2
// 00512032: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 00512035: ADD EDI,0x2
// 00512038: CMP AL,0x0
// 0051203a: JNZ 0x00512024
//   XREF to: 00512024 (CONDITIONAL_JUMP)
// 0051203c: POP EDI
//   Label: LAB_0051203c
// 0051203d: MOV ESI,dword ptr [ESP + 0xa14]
//   XREF to: Stack[-0x34] (READ)
// 00512044: PUSH 0x2
//   Label: LAB_00512044
// 00512046: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 0051204b: MOV EBX,ESI
// 0051204d: ADD ESP,0x4
// 00512050: SHL EBX,0x8
// 00512053: INC ESI
// 00512054: ADD EBX,0x2f28028
//   XREF to: 02f28028 (DATA)
// 0051205a: MOV dword ptr [ESP + 0xa18],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00512061: TEST EAX,EAX
// 00512063: JZ 0x00512749
//   XREF to: 00512749 (CONDITIONAL_JUMP)
// 00512069: PUSH 0x636c44
//   XREF to: 00636c44 (DATA)
// 0051206e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512073: ADD ESP,0x4
// 00512076: MOV EDI,EBX
// 00512078: MOV ESI,EAX
// 0051207a: PUSH EDI
// 0051207b: MOV AL,byte ptr [ESI]
//   Label: LAB_0051207b
// 0051207d: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f2802a (DATA)
// 0051207f: CMP AL,0x0
// 00512081: JZ 0x00512093
//   XREF to: 00512093 (CONDITIONAL_JUMP)
// 00512083: MOV AL,byte ptr [ESI + 0x1]
// 00512086: ADD ESI,0x2
// 00512089: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802b (DATA)
// 0051208c: ADD EDI,0x2
// 0051208f: CMP AL,0x0
// 00512091: JNZ 0x0051207b
//   XREF to: 0051207b (CONDITIONAL_JUMP)
// 00512093: POP EDI
//   Label: LAB_00512093
// 00512094: PUSH 0x2
// 00512096: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 0051209b: MOV dword ptr [ESP + 0xa38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005120a2: FLD float ptr [ESP + 0xa38]
//   XREF to: Stack[-0x14] (READ)
// 005120a9: FMUL float ptr [0x00636d3f]
//   XREF to: 00636d3f (READ)
// 005120af: FDIV float ptr [0x00661338]
//   XREF to: 00661338 (READ)
// 005120b5: FADD double ptr [0x00636d47]
//   XREF to: 00636d47 (READ)
// 005120bb: ADD ESP,0x4
// 005120be: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005120c3: FISTP dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (WRITE)
// 005120ca: MOV EDX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (READ)
// 005120d1: PUSH EDX
// 005120d2: PUSH 0x636c4e
//   XREF to: 00636c4e (DATA)
// 005120d7: LEA EAX,[ESP + 0x908]
//   XREF to: Stack[-0x148] (DATA)
// 005120de: PUSH EAX
// 005120df: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005120e4: ADD ESP,0xc
// 005120e7: LEA ESI,[ESP + 0x900]
//   XREF to: Stack[-0x148] (DATA)
// 005120ee: PUSH EDI
// 005120ef: SUB ECX,ECX
// 005120f1: DEC ECX
// 005120f2: MOV AL,0x0
// 005120f4: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 005120f6: DEC EDI
// 005120f7: MOV AL,byte ptr [ESI]
//   Label: LAB_005120f7
//   XREF to: Stack[-0x148] (DATA)
// 005120f9: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 005120fb: CMP AL,0x0
// 005120fd: JZ 0x0051210f
//   XREF to: 0051210f (CONDITIONAL_JUMP)
// 005120ff: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x147] (READ)
// 00512102: ADD ESI,0x2
// 00512105: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 00512108: ADD EDI,0x2
// 0051210b: CMP AL,0x0
// 0051210d: JNZ 0x005120f7
//   XREF to: 005120f7 (CONDITIONAL_JUMP)
// 0051210f: POP EDI
//   Label: LAB_0051210f
// 00512110: PUSH 0x636c51
//   XREF to: 00636c51 (DATA)
// 00512115: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051211a: ADD ESP,0x4
// 0051211d: MOV ESI,EAX
// 0051211f: PUSH EDI
// 00512120: SUB ECX,ECX
// 00512122: DEC ECX
// 00512123: MOV AL,0x0
// 00512125: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 00512127: DEC EDI
// 00512128: MOV AL,byte ptr [ESI]
//   Label: LAB_00512128
// 0051212a: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 0051212c: CMP AL,0x0
// 0051212e: JZ 0x00512140
//   XREF to: 00512140 (CONDITIONAL_JUMP)
// 00512130: MOV AL,byte ptr [ESI + 0x1]
// 00512133: ADD ESI,0x2
// 00512136: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 00512139: ADD EDI,0x2
// 0051213c: CMP AL,0x0
// 0051213e: JNZ 0x00512128
//   XREF to: 00512128 (CONDITIONAL_JUMP)
// 00512140: POP EDI
//   Label: LAB_00512140
// 00512141: MOV ESI,dword ptr [ESP + 0xa18]
//   XREF to: Stack[-0x30] (READ)
// 00512148: PUSH 0x1
//   Label: LAB_00512148
// 0051214a: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 0051214f: MOV EBX,ESI
// 00512151: ADD ESP,0x4
// 00512154: SHL EBX,0x8
// 00512157: INC ESI
// 00512158: ADD EBX,0x2f28028
//   XREF to: 02f28028 (DATA)
// 0051215e: MOV dword ptr [ESP + 0xa08],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00512165: TEST EAX,EAX
// 00512167: JZ 0x00512765
//   XREF to: 00512765 (CONDITIONAL_JUMP)
// 0051216d: PUSH 0x636c61
//   XREF to: 00636c61 (DATA)
// 00512172: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512177: ADD ESP,0x4
// 0051217a: MOV EDI,EBX
// 0051217c: MOV ESI,EAX
// 0051217e: PUSH EDI
// 0051217f: MOV AL,byte ptr [ESI]
//   Label: LAB_0051217f
// 00512181: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f2802a (DATA)
// 00512183: CMP AL,0x0
// 00512185: JZ 0x00512197
//   XREF to: 00512197 (CONDITIONAL_JUMP)
// 00512187: MOV AL,byte ptr [ESI + 0x1]
// 0051218a: ADD ESI,0x2
// 0051218d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802b (DATA)
// 00512190: ADD EDI,0x2
// 00512193: CMP AL,0x0
// 00512195: JNZ 0x0051217f
//   XREF to: 0051217f (CONDITIONAL_JUMP)
// 00512197: POP EDI
//   Label: LAB_00512197
// 00512198: PUSH 0x1
// 0051219a: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 0051219f: MOV dword ptr [ESP + 0xa38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005121a6: FLD float ptr [ESP + 0xa38]
//   XREF to: Stack[-0x14] (READ)
// 005121ad: FMUL float ptr [0x00636d3f]
//   XREF to: 00636d3f (READ)
// 005121b3: FDIV float ptr [0x00661330]
//   XREF to: 00661330 (READ)
// 005121b9: FADD double ptr [0x00636d47]
//   XREF to: 00636d47 (READ)
// 005121bf: ADD ESP,0x4
// 005121c2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005121c7: FISTP dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (WRITE)
// 005121ce: MOV ECX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (READ)
// 005121d5: PUSH ECX
// 005121d6: PUSH 0x636c6e
//   XREF to: 00636c6e (DATA)
// 005121db: LEA EAX,[ESP + 0x608]
//   XREF to: Stack[-0x448] (DATA)
// 005121e2: PUSH EAX
// 005121e3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005121e8: ADD ESP,0xc
// 005121eb: LEA ESI,[ESP + 0x600]
//   XREF to: Stack[-0x448] (DATA)
// 005121f2: PUSH EDI
// 005121f3: SUB ECX,ECX
// 005121f5: DEC ECX
// 005121f6: MOV AL,0x0
// 005121f8: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 005121fa: DEC EDI
// 005121fb: MOV AL,byte ptr [ESI]
//   Label: LAB_005121fb
//   XREF to: Stack[-0x448] (DATA)
// 005121fd: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 005121ff: CMP AL,0x0
// 00512201: JZ 0x00512213
//   XREF to: 00512213 (CONDITIONAL_JUMP)
// 00512203: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x447] (READ)
// 00512206: ADD ESI,0x2
// 00512209: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 0051220c: ADD EDI,0x2
// 0051220f: CMP AL,0x0
// 00512211: JNZ 0x005121fb
//   XREF to: 005121fb (CONDITIONAL_JUMP)
// 00512213: POP EDI
//   Label: LAB_00512213
// 00512214: PUSH 0x636c71
//   XREF to: 00636c71 (DATA)
// 00512219: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051221e: ADD ESP,0x4
// 00512221: MOV ESI,EAX
// 00512223: PUSH EDI
// 00512224: SUB ECX,ECX
// 00512226: DEC ECX
// 00512227: MOV AL,0x0
// 00512229: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 0051222b: DEC EDI
// 0051222c: MOV AL,byte ptr [ESI]
//   Label: LAB_0051222c
// 0051222e: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 00512230: CMP AL,0x0
// 00512232: JZ 0x00512244
//   XREF to: 00512244 (CONDITIONAL_JUMP)
// 00512234: MOV AL,byte ptr [ESI + 0x1]
// 00512237: ADD ESI,0x2
// 0051223a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 0051223d: ADD EDI,0x2
// 00512240: CMP AL,0x0
// 00512242: JNZ 0x0051222c
//   XREF to: 0051222c (CONDITIONAL_JUMP)
// 00512244: POP EDI
//   Label: LAB_00512244
// 00512245: MOV EAX,dword ptr [ESP + 0xa08]
//   XREF to: Stack[-0x40] (READ)
// 0051224c: MOV dword ptr [ESP + 0xa24],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00512253: PUSH 0x636c84
//   Label: LAB_00512253
//   XREF to: 00636c84 (DATA)
// 00512258: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051225d: ADD ESP,0x4
// 00512260: MOV EDI,dword ptr [ESP + 0xa24]
//   XREF to: Stack[-0x24] (READ)
// 00512267: SHL EDI,0x8
// 0051226a: MOV ESI,EAX
// 0051226c: ADD EDI,0x2f28028
//   XREF to: 02f28028 (DATA)
// 00512272: PUSH EDI
// 00512273: MOV AL,byte ptr [ESI]
//   Label: LAB_00512273
// 00512275: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f2802a (DATA)
// 00512277: CMP AL,0x0
// 00512279: JZ 0x0051228b
//   XREF to: 0051228b (CONDITIONAL_JUMP)
// 0051227b: MOV AL,byte ptr [ESI + 0x1]
// 0051227e: ADD ESI,0x2
// 00512281: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802b (DATA)
// 00512284: ADD EDI,0x2
// 00512287: CMP AL,0x0
// 00512289: JNZ 0x00512273
//   XREF to: 00512273 (CONDITIONAL_JUMP)
// 0051228b: POP EDI
//   Label: LAB_0051228b
// 0051228c: CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   XREF to: 005ab260 (UNCONDITIONAL_CALL)
// 00512291: PUSH EAX
// 00512292: PUSH 0x636c93
//   XREF to: 00636c93 (DATA)
// 00512297: LEA EAX,[ESP + 0x808]
//   XREF to: Stack[-0x248] (DATA)
// 0051229e: PUSH EAX
// 0051229f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005122a4: ADD ESP,0xc
// 005122a7: LEA ESI,[ESP + 0x800]
//   XREF to: Stack[-0x248] (DATA)
// 005122ae: PUSH EDI
// 005122af: SUB ECX,ECX
// 005122b1: DEC ECX
// 005122b2: MOV AL,0x0
// 005122b4: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 005122b6: DEC EDI
// 005122b7: MOV AL,byte ptr [ESI]
//   Label: LAB_005122b7
//   XREF to: Stack[-0x248] (DATA)
// 005122b9: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 005122bb: CMP AL,0x0
// 005122bd: JZ 0x005122cf
//   XREF to: 005122cf (CONDITIONAL_JUMP)
// 005122bf: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x247] (READ)
// 005122c2: ADD ESI,0x2
// 005122c5: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 005122c8: ADD EDI,0x2
// 005122cb: CMP AL,0x0
// 005122cd: JNZ 0x005122b7
//   XREF to: 005122b7 (CONDITIONAL_JUMP)
// 005122cf: POP EDI
//   Label: LAB_005122cf
// 005122d0: PUSH 0x636c96
//   XREF to: 00636c96 (DATA)
// 005122d5: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005122da: ADD ESP,0x4
// 005122dd: MOV ESI,EAX
// 005122df: PUSH EDI
// 005122e0: SUB ECX,ECX
// 005122e2: DEC ECX
// 005122e3: MOV AL,0x0
// 005122e5: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 005122e7: DEC EDI
// 005122e8: MOV AL,byte ptr [ESI]
//   Label: LAB_005122e8
// 005122ea: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 005122ec: CMP AL,0x0
// 005122ee: JZ 0x00512300
//   XREF to: 00512300 (CONDITIONAL_JUMP)
// 005122f0: MOV AL,byte ptr [ESI + 0x1]
// 005122f3: ADD ESI,0x2
// 005122f6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 005122f9: ADD EDI,0x2
// 005122fc: CMP AL,0x0
// 005122fe: JNZ 0x005122e8
//   XREF to: 005122e8 (CONDITIONAL_JUMP)
// 00512300: POP EDI
//   Label: LAB_00512300
// 00512301: MOV EBX,dword ptr [ESP + 0xa24]
//   XREF to: Stack[-0x24] (READ)
// 00512308: PUSH 0x636c99
//   XREF to: 00636c99 (DATA)
// 0051230d: INC EBX
// 0051230e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512313: MOV dword ptr [ESP + 0xa28],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0051231a: MOV EDI,EBX
// 0051231c: ADD ESP,0x4
// 0051231f: SHL EDI,0x8
// 00512322: MOV ESI,EAX
// 00512324: ADD EDI,0x2f28028
//   XREF to: 02f28028 (DATA)
// 0051232a: PUSH EDI
// 0051232b: MOV AL,byte ptr [ESI]
//   Label: LAB_0051232b
// 0051232d: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f2802a (DATA)
// 0051232f: CMP AL,0x0
// 00512331: JZ 0x00512343
//   XREF to: 00512343 (CONDITIONAL_JUMP)
// 00512333: MOV AL,byte ptr [ESI + 0x1]
// 00512336: ADD ESI,0x2
// 00512339: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802b (DATA)
// 0051233c: ADD EDI,0x2
// 0051233f: CMP AL,0x0
// 00512341: JNZ 0x0051232b
//   XREF to: 0051232b (CONDITIONAL_JUMP)
// 00512343: POP EDI
//   Label: LAB_00512343
// 00512344: CALL sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   XREF to: 005ab250 (UNCONDITIONAL_CALL)
// 00512349: PUSH EAX
// 0051234a: PUSH 0x636cab
//   XREF to: 00636cab (DATA)
// 0051234f: LEA EAX,[ESP + 0x808]
//   XREF to: Stack[-0x248] (DATA)
// 00512356: PUSH EAX
// 00512357: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051235c: ADD ESP,0xc
// 0051235f: LEA ESI,[ESP + 0x800]
//   XREF to: Stack[-0x248] (DATA)
// 00512366: PUSH EDI
// 00512367: SUB ECX,ECX
// 00512369: DEC ECX
// 0051236a: MOV AL,0x0
// 0051236c: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 0051236e: DEC EDI
// 0051236f: MOV AL,byte ptr [ESI]
//   Label: LAB_0051236f
//   XREF to: Stack[-0x248] (DATA)
// 00512371: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 00512373: CMP AL,0x0
// 00512375: JZ 0x00512387
//   XREF to: 00512387 (CONDITIONAL_JUMP)
// 00512377: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x247] (READ)
// 0051237a: ADD ESI,0x2
// 0051237d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 00512380: ADD EDI,0x2
// 00512383: CMP AL,0x0
// 00512385: JNZ 0x0051236f
//   XREF to: 0051236f (CONDITIONAL_JUMP)
// 00512387: POP EDI
//   Label: LAB_00512387
// 00512388: PUSH 0x636cae
//   XREF to: 00636cae (DATA)
// 0051238d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512392: ADD ESP,0x4
// 00512395: MOV ESI,EAX
// 00512397: PUSH EDI
// 00512398: SUB ECX,ECX
// 0051239a: DEC ECX
// 0051239b: MOV AL,0x0
// 0051239d: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 0051239f: DEC EDI
// 005123a0: MOV AL,byte ptr [ESI]
//   Label: LAB_005123a0
// 005123a2: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 005123a4: CMP AL,0x0
// 005123a6: JZ 0x005123b8
//   XREF to: 005123b8 (CONDITIONAL_JUMP)
// 005123a8: MOV AL,byte ptr [ESI + 0x1]
// 005123ab: ADD ESI,0x2
// 005123ae: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 005123b1: ADD EDI,0x2
// 005123b4: CMP AL,0x0
// 005123b6: JNZ 0x005123a0
//   XREF to: 005123a0 (CONDITIONAL_JUMP)
// 005123b8: POP EDI
//   Label: LAB_005123b8
// 005123b9: LEA ESI,[EBX + 0x1]
// 005123bc: CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   XREF to: 005ab270 (UNCONDITIONAL_CALL)
// 005123c1: MOV dword ptr [ESP + 0xa24],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005123c8: CMP EAX,0x1
// 005123cb: JNC 0x005127b0
//   XREF to: 005127b0 (CONDITIONAL_JUMP)
// 005123d1: PUSH 0x636cb2
//   Label: LAB_005123d1
//   XREF to: 00636cb2 (DATA)
// 005123d6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005123db: ADD ESP,0x4
// 005123de: PUSH EAX
// 005123df: MOV EAX,dword ptr [ESP + 0xa28]
//   XREF to: Stack[-0x24] (READ)
// 005123e6: SHL EAX,0x8
// 005123e9: MOV EDX,dword ptr [ESP + 0xa28]
//   XREF to: Stack[-0x24] (READ)
// 005123f0: ADD EAX,0x2f28028
//   XREF to: 02f28028 (DATA)
// 005123f5: INC EDX
// 005123f6: PUSH EAX
// 005123f7: MOV dword ptr [ESP + 0xa2c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005123fe: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   Label: LAB_005123fe
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00512403: ADD ESP,0x8
// 00512406: CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)
// 0051240b: MOV EBX,EAX
// 0051240d: TEST EAX,EAX
// 0051240f: JL 0x0051241e
//   XREF to: 0051241e (CONDITIONAL_JUMP)
// 00512411: CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
// 00512416: CMP EBX,EAX
// 00512418: JL 0x005127c0
//   XREF to: 005127c0 (CONDITIONAL_JUMP)
// 0051241e: XOR ECX,ECX
//   Label: LAB_0051241e
// 00512420: XOR AH,AH
// 00512422: MOV dword ptr [ESP + 0x4d8],ECX
//   XREF to: Stack[-0x570] (WRITE)
// 00512429: MOV byte ptr [ESP + 0x3d0],AH
//   XREF to: Stack[-0x678] (WRITE)
// 00512430: PUSH 0x636cda
//   Label: LAB_00512430
//   XREF to: 00636cda (DATA)
// 00512435: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051243a: ADD ESP,0x4
// 0051243d: MOV EDI,dword ptr [ESP + 0xa24]
//   XREF to: Stack[-0x24] (READ)
// 00512444: SHL EDI,0x8
// 00512447: MOV ESI,EAX
// 00512449: ADD EDI,0x2f28028
//   XREF to: 02f28028 (DATA)
// 0051244f: MOV EBX,dword ptr [ESP + 0xa24]
//   XREF to: Stack[-0x24] (READ)
// 00512456: PUSH EDI
// 00512457: MOV AL,byte ptr [ESI]
//   Label: LAB_00512457
// 00512459: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f2802a (DATA)
// 0051245b: CMP AL,0x0
// 0051245d: JZ 0x0051246f
//   XREF to: 0051246f (CONDITIONAL_JUMP)
// 0051245f: MOV AL,byte ptr [ESI + 0x1]
// 00512462: ADD ESI,0x2
// 00512465: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802b (DATA)
// 00512468: ADD EDI,0x2
// 0051246b: CMP AL,0x0
// 0051246d: JNZ 0x00512457
//   XREF to: 00512457 (CONDITIONAL_JUMP)
// 0051246f: POP EDI
//   Label: LAB_0051246f
// 00512470: LEA ESI,[ESP + 0x3d0]
//   XREF to: Stack[-0x678] (DATA)
// 00512477: INC EBX
// 00512478: PUSH EDI
// 00512479: SUB ECX,ECX
// 0051247b: DEC ECX
// 0051247c: MOV AL,0x0
// 0051247e: SCASB.REPNE ES:EDI
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
// 00512480: DEC EDI
// 00512481: MOV AL,byte ptr [ESI]
//   Label: LAB_00512481
//   XREF to: Stack[-0x678] (DATA)
// 00512483: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
// 00512485: CMP AL,0x0
// 00512487: JZ 0x00512499
//   XREF to: 00512499 (CONDITIONAL_JUMP)
// 00512489: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x677] (READ)
// 0051248c: ADD ESI,0x2
// 0051248f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802a (DATA)
//   XREF to: 02f2802b (DATA)
// 00512492: ADD EDI,0x2
// 00512495: CMP AL,0x0
// 00512497: JNZ 0x00512481
//   XREF to: 00512481 (CONDITIONAL_JUMP)
// 00512499: POP EDI
//   Label: LAB_00512499
// 0051249a: MOV ESI,dword ptr [ESP + 0x4d8]
//   XREF to: Stack[-0x570] (READ)
// 005124a1: MOV dword ptr [ESP + 0xa24],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 005124a8: TEST ESI,ESI
// 005124aa: JZ 0x005124f4
//   XREF to: 005124f4 (CONDITIONAL_JUMP)
// 005124ac: MOV EDI,EBX
// 005124ae: SHL EDI,0x8
// 005124b1: CALL sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   XREF to: 005ab590 (UNCONDITIONAL_CALL)
// 005124b6: ADD EDI,0x2f28028
//   XREF to: 02f28028 (DATA)
// 005124bc: TEST EAX,EAX
// 005124be: JZ 0x005127d6
//   XREF to: 005127d6 (CONDITIONAL_JUMP)
// 005124c4: PUSH 0x636ce4
//   XREF to: 00636ce4 (DATA)
// 005124c9: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   Label: LAB_005124c9
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005124ce: ADD ESP,0x4
// 005124d1: MOV ESI,EAX
// 005124d3: PUSH EDI
// 005124d4: MOV AL,byte ptr [ESI]
//   Label: LAB_005124d4
// 005124d6: MOV byte ptr [EDI],AL
//   XREF to: 02f28028 (DATA)
//   XREF to: 02f2802a (DATA)
// 005124d8: CMP AL,0x0
// 005124da: JZ 0x005124ec
//   XREF to: 005124ec (CONDITIONAL_JUMP)
// 005124dc: MOV AL,byte ptr [ESI + 0x1]
// 005124df: ADD ESI,0x2
// 005124e2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28029 (DATA)
//   XREF to: 02f2802b (DATA)
// 005124e5: ADD EDI,0x2
// 005124e8: CMP AL,0x0
// 005124ea: JNZ 0x005124d4
//   XREF to: 005124d4 (CONDITIONAL_JUMP)
// 005124ec: POP EDI
//   Label: LAB_005124ec
// 005124ed: INC dword ptr [ESP + 0xa24]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 005124f4: IMUL EAX,dword ptr [0x02cf6a80],0x18
//   Label: LAB_005124f4
//   XREF to: 02cf6a80 (READ)
// 005124fb: MOV ECX,dword ptr [0x02f26cb4]
//   XREF to: 02f26cb4 (READ)
// 00512501: ADD ECX,EAX
// 00512503: MOV dword ptr [0x02f26cb4],ECX
//   XREF to: 02f26cb4 (WRITE)
// 00512509: CMP ECX,0x80000
// 0051250f: JL 0x0051251d
//   XREF to: 0051251d (CONDITIONAL_JUMP)
// 00512511: LEA ESI,[ECX + 0xfff80000]
// 00512517: MOV dword ptr [0x02f26cb4],ESI
//   XREF to: 02f26cb4 (WRITE)
// 0051251d: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   Label: LAB_0051251d
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 00512522: TEST EAX,EAX
// 00512524: JZ 0x0051267f
//   XREF to: 0051267f (CONDITIONAL_JUMP)
// 0051252a: CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   XREF to: 005ab270 (UNCONDITIONAL_CALL)
// 0051252f: MOV EBX,EAX
// 00512531: MOV dword ptr [ESP + 0xa28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00512538: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0051253d: MOV EDX,EAX
// 0051253f: MOV ESI,0x14
// 00512544: SAR EDX,0x1f
// 00512547: IDIV ESI
// 00512549: MOV dword ptr [ESP + 0xa2c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00512550: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00512555: MOV EDX,EAX
// 00512557: SAR EDX,0x1f
// 0051255a: IDIV EBX
// 0051255c: MOV EDX,dword ptr [ESP + 0xa2c]
//   XREF to: Stack[-0x1c] (READ)
// 00512563: ADD EDX,EDX
// 00512565: MOV dword ptr [ESP + 0xa30],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051256c: SUB EAX,EDX
// 0051256e: MOV EDX,EAX
// 00512570: SAR EDX,0x1f
// 00512573: SHL EDX,0x2
// 00512576: SBB EAX,EDX
// 00512578: SAR EAX,0x2
// 0051257b: MOV dword ptr [ESP + 0xa34],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00512582: FILD dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (READ)
// 00512589: FLD1
// 0051258b: FDIVRP
// 0051258d: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xa2c] (WRITE)
// 00512591: FLD double ptr [0x00636d4f]
//   XREF to: 00636d4f (READ)
// 00512597: CALL crt_math.c_pow_FUN_005ffd76
//   XREF to: 005ffd76 (UNCONDITIONAL_CALL)
// 0051259c: XOR ESI,ESI
// 0051259e: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa48] (DATA)
// 005125a1: TEST EBX,EBX
// 005125a3: JLE 0x0051267f
//   XREF to: 0051267f (CONDITIONAL_JUMP)
// 005125a9: MOV EDX,0x40690000
//   Label: LAB_005125a9
// 005125ae: XOR EAX,EAX
// 005125b0: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xa2c] (READ)
// 005125b4: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xa40] (WRITE)
// 005125b8: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0xa3c] (WRITE)
// 005125bc: TEST ECX,ECX
// 005125be: JLE 0x0051266f
//   XREF to: 0051266f (CONDITIONAL_JUMP)
// 005125c4: MOV EAX,dword ptr [ESP + 0xa30]
//   XREF to: Stack[-0x18] (READ)
// 005125cb: IMUL EAX,ESI
// 005125ce: ADD EAX,dword ptr [ESP + 0xa2c]
//   XREF to: Stack[-0x1c] (READ)
// 005125d5: LEA EDI,[ECX*0x4 + 0x0]
// 005125dc: MOV EBX,EAX
// 005125de: ADD EDI,EAX
// 005125e0: FLD double ptr [ESP + 0x8]
//   Label: LAB_005125e0
//   XREF to: Stack[-0xa40] (READ)
// 005125e4: FMUL double ptr [ESP]
//   XREF to: Stack[-0xa48] (DATA)
// 005125e7: FST double ptr [ESP + 0xa00]
//   XREF to: Stack[-0x48] (WRITE)
// 005125ee: SUB ESP,0x4
// 005125f1: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa4c] (DATA)
// 005125f4: FLD double ptr [ESP + 0xc]
//   XREF to: Stack[-0xa40] (READ)
// 005125f8: SUB ESP,0x4
// 005125fb: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa50] (DATA)
// 005125fe: PUSH ESI
// 005125ff: CALL sound_sndmain.cpp_FUN_005ac400
//   XREF to: 005ac400 (UNCONDITIONAL_CALL)
// 00512604: MOV dword ptr [ESP + 0xa40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051260b: FLD float ptr [ESP + 0xa40]
//   XREF to: Stack[-0x14] (READ)
// 00512612: ADD ESP,0xc
// 00512615: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0051261b: FXCH
// 0051261d: FMUL ST1
// 0051261f: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00512624: FMUL float ptr [0x00636d43]
//   XREF to: 00636d43 (READ)
// 0051262a: DEC EAX
// 0051262b: FSUBP
// 0051262d: MOV EDX,EAX
// 0051262f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00512634: FISTP dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (WRITE)
// 0051263b: SUB EDX,dword ptr [ESP + 0xa34]
//   XREF to: Stack[-0x14] (READ)
// 00512642: INC EDX
// 00512643: PUSH EDX
// 00512644: PUSH EAX
// 00512645: PUSH EBX
// 00512646: CALL core_menu.cpp_FUN_0050fe70
//   XREF to: 0050fe70 (UNCONDITIONAL_CALL)
// 0051264b: ADD ESP,0xc
// 0051264e: MOV EAX,dword ptr [ESP + 0xa00]
//   XREF to: Stack[-0x48] (READ)
// 00512655: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xa40] (WRITE)
// 00512659: MOV EAX,dword ptr [ESP + 0xa04]
//   XREF to: Stack[-0x44] (READ)
// 00512660: ADD EBX,0x4
// 00512663: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xa3c] (WRITE)
// 00512667: CMP EBX,EDI
// 00512669: JL 0x005125e0
//   XREF to: 005125e0 (CONDITIONAL_JUMP)
// 0051266f: MOV EDI,dword ptr [ESP + 0xa28]
//   Label: LAB_0051266f
//   XREF to: Stack[-0x20] (READ)
// 00512676: INC ESI
// 00512677: CMP ESI,EDI
// 00512679: JL 0x005125a9
//   XREF to: 005125a9 (CONDITIONAL_JUMP)
// 0051267f: PUSH 0x636d0d
//   Label: LAB_0051267f
//   XREF to: 00636d0d (DATA)
// 00512684: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512689: ADD ESP,0x4
// 0051268c: PUSH EAX
// 0051268d: PUSH 0xe1
// 00512692: LEA EAX,[ESP + 0xa14]
//   XREF to: Stack[-0x3c] (DATA)
// 00512699: PUSH EAX
// 0051269a: MOV ESI,dword ptr [ESP + 0xa30]
//   XREF to: Stack[-0x24] (READ)
// 005126a1: PUSH ESI
// 005126a2: PUSH 0x2f28a28
//   XREF to: 02f28a28 (DATA)
// 005126a7: CALL core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   XREF to: 00510000 (UNCONDITIONAL_CALL)
// 005126ac: ADD ESP,0x14
// 005126af: MOV EDI,0x3e4ccccd
// 005126b4: MOV EBX,EAX
// 005126b6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005126bb: MOV dword ptr [ESP + 0xa20],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005126c2: CMP EBX,0x8
// 005126c5: JA 0x005126fd
//   XREF to: 005126fd (CONDITIONAL_JUMP)
// 005126c7: JMP dword ptr [EBX*0x4 + 0x511e20]
//   Label: switchD
//   XREF to: 005126ce (COMPUTED_JUMP)
//   XREF to: 005127e0 (COMPUTED_JUMP)
//   XREF to: 00512908 (COMPUTED_JUMP)
//   XREF to: 00512a08 (COMPUTED_JUMP)
//   XREF to: 00512b2d (COMPUTED_JUMP)
//   XREF to: 00512bb1 (COMPUTED_JUMP)
//   XREF to: 00512bfc (COMPUTED_JUMP)
//   XREF to: 00512c44 (COMPUTED_JUMP)
//   XREF to: 00512cf5 (COMPUTED_JUMP)
//   XREF to: 00511e20 (DATA)
// 005126ce: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   Label: caseD_0
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 005126d3: TEST EAX,EAX
// 005126d5: SETZ AL
// 005126d8: AND EAX,0xff
// 005126dd: PUSH EAX
// 005126de: CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   XREF to: 005a96c0 (UNCONDITIONAL_CALL)
// 005126e3: ADD ESP,0x4
// 005126e6: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 005126eb: TEST EAX,EAX
// 005126ed: JNZ 0x005126fd
//   XREF to: 005126fd (CONDITIONAL_JUMP)
// 005126ef: MOV EAX,[0x00681ef8]
//   Label: LAB_005126ef
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005126f4: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 005126f5: CALL core_sound.cpp_CSound_FUN_005b3830
//   Label: LAB_005126f5
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 005126fa: ADD ESP,0x4
// 005126fd: PUSH 0x1
//   Label: default
// 005126ff: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00512704: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00512705: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00512707: CALL dword ptr [EDX + 0x4]
// 0051270a: ADD ESP,0x8
// 0051270d: TEST EAX,EAX
// 0051270f: JZ 0x00511e92
//   XREF to: 00511e92 (CONDITIONAL_JUMP)
// 00512715: MOV ESP,EBP
// 00512717: POP EBP
// 00512718: POP EDI
// 00512719: POP ESI
// 0051271a: POP EBX
// 0051271b: RET
// 0051271c: PUSH 0x636c10
//   Label: LAB_0051271c
//   XREF to: 00636c10 (DATA)
// 00512721: JMP 0x00511f15
//   XREF to: 00511f15 (UNCONDITIONAL_JUMP)
// 00512726: PUSH 0x636c30
//   Label: LAB_00512726
//   XREF to: 00636c30 (DATA)
// 0051272b: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512730: ADD ESP,0x4
// 00512733: PUSH EAX
// 00512734: PUSH EBX
// 00512735: MOV ESI,dword ptr [ESP + 0xa1c]
//   XREF to: Stack[-0x34] (READ)
// 0051273c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00512741: ADD ESP,0x8
// 00512744: JMP 0x00512044
//   XREF to: 00512044 (UNCONDITIONAL_JUMP)
// 00512749: PUSH 0x636c54
//   Label: LAB_00512749
//   XREF to: 00636c54 (DATA)
// 0051274e: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512753: ADD ESP,0x4
// 00512756: PUSH EAX
// 00512757: PUSH EBX
// 00512758: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0051275d: ADD ESP,0x8
// 00512760: JMP 0x00512148
//   XREF to: 00512148 (UNCONDITIONAL_JUMP)
// 00512765: PUSH 0x636c74
//   Label: LAB_00512765
//   XREF to: 00636c74 (DATA)
// 0051276a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 0051276f: ADD ESP,0x4
// 00512772: PUSH EAX
// 00512773: PUSH EBX
// 00512774: MOV dword ptr [ESP + 0xa2c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0051277b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00512780: ADD ESP,0x8
// 00512783: JMP 0x00512253
//   XREF to: 00512253 (UNCONDITIONAL_JUMP)
// 00512788: PUSH 0x636cc5
//   Label: LAB_00512788
//   XREF to: 00636cc5 (DATA)
// 0051278d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00512792: ADD ESP,0x4
// 00512795: PUSH EAX
// 00512796: MOV EAX,ESI
// 00512798: SHL EAX,0x8
// 0051279b: ADD EAX,0x2f28028
//   XREF to: 02f28028 (DATA)
// 005127a0: LEA EDI,[ESI + 0x1]
// 005127a3: PUSH EAX
// 005127a4: MOV dword ptr [ESP + 0xa2c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005127ab: JMP 0x005123fe
//   XREF to: 005123fe (UNCONDITIONAL_JUMP)
// 005127b0: JBE 0x005123d1
//   Label: LAB_005127b0
//   XREF to: 005123d1 (CONDITIONAL_JUMP)
// 005127b6: CMP EAX,0x2
// 005127b9: JZ 0x00512788
//   XREF to: 00512788 (CONDITIONAL_JUMP)
// 005127bb: JMP 0x005123d1
//   XREF to: 005123d1 (UNCONDITIONAL_JUMP)
// 005127c0: LEA EAX,[ESP + 0x3d0]
//   Label: LAB_005127c0
//   XREF to: Stack[-0x678] (DATA)
// 005127c7: PUSH EAX
// 005127c8: PUSH EBX
// 005127c9: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005127ce: ADD ESP,0x8
// 005127d1: JMP 0x00512430
//   XREF to: 00512430 (UNCONDITIONAL_JUMP)
// 005127d6: PUSH 0x636cf8
//   Label: LAB_005127d6
//   XREF to: 00636cf8 (DATA)
// 005127db: JMP 0x005124c9
//   XREF to: 005124c9 (UNCONDITIONAL_JUMP)
// 005127e0: PUSH 0x0
//   Label: caseD_1
// 005127e2: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005127e7: MOV dword ptr [ESP + 0xa38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005127ee: FLD float ptr [ESP + 0xa38]
//   XREF to: Stack[-0x14] (READ)
// 005127f5: FDIV float ptr [0x00661334]
//   XREF to: 00661334 (READ)
// 005127fb: ADD ESP,0x4
// 005127fe: MOV EDX,dword ptr [0x02f26cac]
//   XREF to: 02f26cac (READ)
// 00512804: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0xa24] (WRITE)
// 00512808: CMP EDX,0x1
// 0051280b: JNZ 0x0051289f
//   XREF to: 0051289f (CONDITIONAL_JUMP)
// 00512811: PUSH 0x0
// 00512813: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 00512818: ADD ESP,0x4
// 0051281b: TEST EAX,EAX
// 0051281d: JZ 0x00512889
//   XREF to: 00512889 (CONDITIONAL_JUMP)
// 0051281f: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xa24] (READ)
// 00512823: FSUB float ptr [ESP + 0xa20]
//   XREF to: Stack[-0x28] (READ)
// 0051282a: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0xa24] (WRITE)
// 0051282e: FCOMP double ptr [0x00636d77]
//   XREF to: 00636d77 (READ)
// 00512834: FNSTSW AX
// 00512836: SAHF
// 00512837: JNC 0x00512849
//   XREF to: 00512849 (CONDITIONAL_JUMP)
// 00512839: XOR EDI,EDI
// 0051283b: PUSH EDI
// 0051283c: PUSH EDI
// 0051283d: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0xa24] (WRITE)
// 00512841: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   Label: LAB_00512841
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 00512846: ADD ESP,0x8
// 00512849: FLD float ptr [ESP + 0x24]
//   Label: LAB_00512849
//   XREF to: Stack[-0xa24] (READ)
// 0051284d: FMUL float ptr [0x00661334]
//   XREF to: 00661334 (READ)
// 00512853: SUB ESP,0x4
// 00512856: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa4c] (DATA)
// 00512859: PUSH 0x0
// 0051285b: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 00512860: ADD ESP,0x8
// 00512863: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 00512868: PUSH 0x1
// 0051286a: CALL sound_sndmain.cpp_FUN_005a8b70
//   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
// 0051286f: ADD ESP,0x4
// 00512872: PUSH 0x636d1b
//   XREF to: 00636d1b (DATA)
// 00512877: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 0051287c: ADD ESP,0x4
// 0051287f: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 00512884: JMP 0x005126fd
//   XREF to: 005126fd (UNCONDITIONAL_JUMP)
// 00512889: PUSH 0x1
//   Label: LAB_00512889
// 0051288b: PUSH EAX
// 0051288c: MOV ESI,0x3f800000
// 00512891: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 00512896: ADD ESP,0x8
// 00512899: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0xa24] (WRITE)
// 0051289d: JMP 0x00512849
//   XREF to: 00512849 (UNCONDITIONAL_JUMP)
// 0051289f: PUSH 0x0
//   Label: LAB_0051289f
// 005128a1: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005128a6: ADD ESP,0x4
// 005128a9: TEST EAX,EAX
// 005128ab: JZ 0x005128f4
//   XREF to: 005128f4 (CONDITIONAL_JUMP)
// 005128ad: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xa24] (READ)
// 005128b1: FADD float ptr [ESP + 0xa20]
//   XREF to: Stack[-0x28] (READ)
// 005128b8: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0xa24] (WRITE)
// 005128bc: FCOMP double ptr [0x00636d5f]
//   XREF to: 00636d5f (READ)
// 005128c2: FNSTSW AX
// 005128c4: SAHF
// 005128c5: JA 0x005128e7
//   XREF to: 005128e7 (CONDITIONAL_JUMP)
// 005128c7: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xa24] (READ)
// 005128cb: FCOMP double ptr [0x00636d67]
//   XREF to: 00636d67 (READ)
// 005128d1: FNSTSW AX
// 005128d3: SAHF
// 005128d4: JBE 0x00512849
//   XREF to: 00512849 (CONDITIONAL_JUMP)
// 005128da: MOV dword ptr [ESP + 0x24],0x3f800000
//   XREF to: Stack[-0xa24] (WRITE)
// 005128e2: JMP 0x00512849
//   XREF to: 00512849 (UNCONDITIONAL_JUMP)
// 005128e7: XOR EBX,EBX
//   Label: LAB_005128e7
// 005128e9: PUSH EBX
// 005128ea: PUSH EBX
// 005128eb: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0xa24] (WRITE)
// 005128ef: JMP 0x00512841
//   XREF to: 00512841 (UNCONDITIONAL_JUMP)
// 005128f4: PUSH 0x1
//   Label: LAB_005128f4
// 005128f6: PUSH EAX
// 005128f7: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005128fc: ADD ESP,0x8
// 005128ff: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0xa24] (WRITE)
// 00512903: JMP 0x00512849
//   XREF to: 00512849 (UNCONDITIONAL_JUMP)
// 00512908: PUSH 0x2
//   Label: caseD_2
// 0051290a: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 0051290f: MOV dword ptr [ESP + 0xa38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00512916: FLD float ptr [ESP + 0xa38]
//   XREF to: Stack[-0x14] (READ)
// 0051291d: FDIV float ptr [0x00661338]
//   XREF to: 00661338 (READ)
// 00512923: ADD ESP,0x4
// 00512926: MOV ECX,dword ptr [0x02f26cac]
//   XREF to: 02f26cac (READ)
// 0051292c: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa30] (WRITE)
// 00512930: CMP ECX,0x1
// 00512933: JNZ 0x005129a4
//   XREF to: 005129a4 (CONDITIONAL_JUMP)
// 00512935: PUSH 0x2
// 00512937: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 0051293c: ADD ESP,0x4
// 0051293f: TEST EAX,EAX
// 00512941: JZ 0x0051298d
//   XREF to: 0051298d (CONDITIONAL_JUMP)
// 00512943: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa30] (READ)
// 00512947: FSUB float ptr [ESP + 0xa20]
//   XREF to: Stack[-0x28] (READ)
// 0051294e: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa30] (WRITE)
// 00512952: FCOMP double ptr [0x00636d77]
//   XREF to: 00636d77 (READ)
// 00512958: FNSTSW AX
// 0051295a: SAHF
// 0051295b: JNC 0x0051296e
//   XREF to: 0051296e (CONDITIONAL_JUMP)
// 0051295d: XOR EAX,EAX
// 0051295f: PUSH EAX
// 00512960: PUSH 0x2
// 00512962: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xa30] (WRITE)
// 00512966: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   Label: LAB_00512966
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 0051296b: ADD ESP,0x8
// 0051296e: FLD float ptr [ESP + 0x18]
//   Label: LAB_0051296e
//   XREF to: Stack[-0xa30] (READ)
// 00512972: FMUL float ptr [0x00661338]
//   XREF to: 00661338 (READ)
// 00512978: SUB ESP,0x4
// 0051297b: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa4c] (DATA)
// 0051297e: PUSH 0x2
// 00512980: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 00512985: ADD ESP,0x8
// 00512988: JMP 0x005126fd
//   XREF to: 005126fd (UNCONDITIONAL_JUMP)
// 0051298d: PUSH 0x1
//   Label: LAB_0051298d
// 0051298f: PUSH 0x2
// 00512991: MOV EDI,0x3f800000
// 00512996: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 0051299b: ADD ESP,0x8
// 0051299e: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0xa30] (WRITE)
// 005129a2: JMP 0x0051296e
//   XREF to: 0051296e (UNCONDITIONAL_JUMP)
// 005129a4: PUSH 0x2
//   Label: LAB_005129a4
// 005129a6: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 005129ab: ADD ESP,0x4
// 005129ae: TEST EAX,EAX
// 005129b0: JZ 0x005129f3
//   XREF to: 005129f3 (CONDITIONAL_JUMP)
// 005129b2: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa30] (READ)
// 005129b6: FADD float ptr [ESP + 0xa20]
//   XREF to: Stack[-0x28] (READ)
// 005129bd: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa30] (WRITE)
// 005129c1: FCOMP double ptr [0x00636d5f]
//   XREF to: 00636d5f (READ)
// 005129c7: FNSTSW AX
// 005129c9: SAHF
// 005129ca: JA 0x005129e5
//   XREF to: 005129e5 (CONDITIONAL_JUMP)
// 005129cc: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xa30] (READ)
// 005129d0: FCOMP double ptr [0x00636d67]
//   XREF to: 00636d67 (READ)
// 005129d6: FNSTSW AX
// 005129d8: SAHF
// 005129d9: JBE 0x0051296e
//   XREF to: 0051296e (CONDITIONAL_JUMP)
// 005129db: MOV dword ptr [ESP + 0x18],0x3f800000
//   XREF to: Stack[-0xa30] (WRITE)
// 005129e3: JMP 0x0051296e
//   XREF to: 0051296e (UNCONDITIONAL_JUMP)
// 005129e5: XOR ESI,ESI
//   Label: LAB_005129e5
// 005129e7: PUSH ESI
// 005129e8: PUSH 0x2
// 005129ea: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0xa30] (WRITE)
// 005129ee: JMP 0x00512966
//   XREF to: 00512966 (UNCONDITIONAL_JUMP)
// 005129f3: PUSH 0x1
//   Label: LAB_005129f3
// 005129f5: PUSH 0x2
// 005129f7: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 005129fc: ADD ESP,0x8
// 005129ff: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0xa30] (WRITE)
// 00512a03: JMP 0x0051296e
//   XREF to: 0051296e (UNCONDITIONAL_JUMP)
// 00512a08: PUSH 0x1
//   Label: caseD_3
// 00512a0a: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 00512a0f: MOV dword ptr [ESP + 0xa38],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00512a16: FLD float ptr [ESP + 0xa38]
//   XREF to: Stack[-0x14] (READ)
// 00512a1d: FDIV float ptr [0x00661330]
//   XREF to: 00661330 (READ)
// 00512a23: ADD ESP,0x4
// 00512a26: MOV EAX,[0x02f26cac]
//   XREF to: 02f26cac (READ)
// 00512a2b: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0xa28] (WRITE)
// 00512a2f: CMP EAX,0x1
// 00512a32: JNZ 0x00512ab4
//   XREF to: 00512ab4 (CONDITIONAL_JUMP)
// 00512a38: PUSH EAX
// 00512a39: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 00512a3e: ADD ESP,0x4
// 00512a41: TEST EAX,EAX
// 00512a43: JZ 0x00512a8e
//   XREF to: 00512a8e (CONDITIONAL_JUMP)
// 00512a45: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0xa28] (READ)
// 00512a49: FADD float ptr [0x00636d6f]
//   XREF to: 00636d6f (READ)
// 00512a4f: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0xa28] (WRITE)
// 00512a53: FCOMP double ptr [0x00636d77]
//   XREF to: 00636d77 (READ)
// 00512a59: FNSTSW AX
// 00512a5b: SAHF
// 00512a5c: JNC 0x00512a6f
//   XREF to: 00512a6f (CONDITIONAL_JUMP)
// 00512a5e: XOR EDX,EDX
// 00512a60: PUSH EDX
// 00512a61: PUSH 0x1
// 00512a63: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0xa28] (WRITE)
// 00512a67: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   Label: LAB_00512a67
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 00512a6c: ADD ESP,0x8
// 00512a6f: FLD float ptr [ESP + 0x20]
//   Label: LAB_00512a6f
//   XREF to: Stack[-0xa28] (READ)
// 00512a73: FMUL float ptr [0x00661330]
//   XREF to: 00661330 (READ)
// 00512a79: SUB ESP,0x4
// 00512a7c: FSTP float ptr [ESP]
//   XREF to: Stack[-0xa4c] (DATA)
// 00512a7f: PUSH 0x1
// 00512a81: CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0
//   XREF to: 005a9cf0 (UNCONDITIONAL_CALL)
// 00512a86: ADD ESP,0x8
// 00512a89: JMP 0x005126fd
//   XREF to: 005126fd (UNCONDITIONAL_JUMP)
// 00512a8e: PUSH 0x1
//   Label: LAB_00512a8e
// 00512a90: PUSH 0x1
// 00512a92: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 00512a97: ADD ESP,0x8
// 00512a9a: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 00512aa0: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 00512aa1: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 00512aa6: MOV EAX,0x3f800000
// 00512aab: ADD ESP,0x4
// 00512aae: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xa28] (WRITE)
// 00512ab2: JMP 0x00512a6f
//   XREF to: 00512a6f (UNCONDITIONAL_JUMP)
// 00512ab4: PUSH 0x1
//   Label: LAB_00512ab4
// 00512ab6: CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0
//   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
// 00512abb: ADD ESP,0x4
// 00512abe: TEST EAX,EAX
// 00512ac0: JZ 0x00512b09
//   XREF to: 00512b09 (CONDITIONAL_JUMP)
// 00512ac2: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0xa28] (READ)
// 00512ac6: FADD float ptr [0x00636d57]
//   XREF to: 00636d57 (READ)
// 00512acc: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0xa28] (WRITE)
// 00512ad0: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0xa38] (WRITE)
// 00512ad4: FCOMP double ptr [0x00636d5f]
//   XREF to: 00636d5f (READ)
// 00512ada: FNSTSW AX
// 00512adc: SAHF
// 00512add: JA 0x00512afb
//   XREF to: 00512afb (CONDITIONAL_JUMP)
// 00512adf: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xa38] (READ)
// 00512ae3: FCOMP double ptr [0x00636d67]
//   XREF to: 00636d67 (READ)
// 00512ae9: FNSTSW AX
// 00512aeb: SAHF
// 00512aec: JBE 0x00512a6f
//   XREF to: 00512a6f (CONDITIONAL_JUMP)
// 00512aee: MOV dword ptr [ESP + 0x20],0x3f800000
//   XREF to: Stack[-0xa28] (WRITE)
// 00512af6: JMP 0x00512a6f
//   XREF to: 00512a6f (UNCONDITIONAL_JUMP)
// 00512afb: XOR ESI,ESI
//   Label: LAB_00512afb
// 00512afd: PUSH ESI
// 00512afe: PUSH 0x1
// 00512b00: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0xa28] (WRITE)
// 00512b04: JMP 0x00512a67
//   XREF to: 00512a67 (UNCONDITIONAL_JUMP)
// 00512b09: PUSH 0x1
//   Label: LAB_00512b09
// 00512b0b: PUSH 0x1
// 00512b0d: CALL sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20
//   XREF to: 005a9e20 (UNCONDITIONAL_CALL)
// 00512b12: ADD ESP,0x8
// 00512b15: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00512b1b: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 00512b1c: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 00512b21: ADD ESP,0x4
// 00512b24: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0xa28] (WRITE)
// 00512b28: JMP 0x00512a6f
//   XREF to: 00512a6f (UNCONDITIONAL_JUMP)
// 00512b2d: CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   Label: caseD_4
//   XREF to: 005ab260 (UNCONDITIONAL_CALL)
// 00512b32: MOV ESI,dword ptr [0x02f26cac]
//   XREF to: 02f26cac (READ)
// 00512b38: MOV EBX,EAX
// 00512b3a: CMP ESI,0x1
// 00512b3d: JNZ 0x00512b95
//   XREF to: 00512b95 (CONDITIONAL_JUMP)
// 00512b3f: CMP EAX,0x5622
// 00512b44: JNZ 0x00512b80
//   XREF to: 00512b80 (CONDITIONAL_JUMP)
// 00512b46: MOV EBX,0x2b2a
//   Label: LAB_00512b46
// 00512b4b: CALL sound_sndmain.cpp_FUN_005ab5a0
//   Label: LAB_00512b4b
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 00512b50: TEST EAX,EAX
// 00512b52: JZ 0x00512b59
//   XREF to: 00512b59 (CONDITIONAL_JUMP)
// 00512b54: MOV EBX,0xac44
// 00512b59: CALL sound_sndmain.cpp_getAudioSampleRate_FUN_005ab260
//   Label: LAB_00512b59
//   XREF to: 005ab260 (UNCONDITIONAL_CALL)
// 00512b5e: CMP EBX,EAX
// 00512b60: JZ 0x005126fd
//   XREF to: 005126fd (CONDITIONAL_JUMP)
// 00512b66: CALL sound_sndmain.cpp_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00512b6b: PUSH EBX
// 00512b6c: CALL sound_sndmain.cpp_CallToSetSoundOutputMode3_FUN_005ab2c0
//   XREF to: 005ab2c0 (UNCONDITIONAL_CALL)
// 00512b71: ADD ESP,0x4
// 00512b74: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 00512b7a: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 00512b7b: JMP 0x005126f5
//   XREF to: 005126f5 (UNCONDITIONAL_JUMP)
// 00512b80: CMP EAX,0xac44
//   Label: LAB_00512b80
// 00512b85: JNZ 0x00512b8e
//   XREF to: 00512b8e (CONDITIONAL_JUMP)
// 00512b87: MOV EBX,0x5622
// 00512b8c: JMP 0x00512b4b
//   XREF to: 00512b4b (UNCONDITIONAL_JUMP)
// 00512b8e: MOV EBX,0xac44
//   Label: LAB_00512b8e
// 00512b93: JMP 0x00512b4b
//   XREF to: 00512b4b (UNCONDITIONAL_JUMP)
// 00512b95: CMP EAX,0x5622
//   Label: LAB_00512b95
// 00512b9a: JGE 0x00512ba3
//   XREF to: 00512ba3 (CONDITIONAL_JUMP)
// 00512b9c: MOV EBX,0x5622
// 00512ba1: JMP 0x00512b4b
//   XREF to: 00512b4b (UNCONDITIONAL_JUMP)
// 00512ba3: CMP EAX,0xac44
//   Label: LAB_00512ba3
// 00512ba8: JGE 0x00512b46
//   XREF to: 00512b46 (CONDITIONAL_JUMP)
// 00512baa: MOV EBX,0xac44
// 00512baf: JMP 0x00512b4b
//   XREF to: 00512b4b (UNCONDITIONAL_JUMP)
// 00512bb1: CALL sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   Label: caseD_5
//   XREF to: 005ab250 (UNCONDITIONAL_CALL)
// 00512bb6: CMP EAX,0x10
// 00512bb9: JNZ 0x00512bf5
//   XREF to: 00512bf5 (CONDITIONAL_JUMP)
// 00512bbb: MOV EBX,0x8
// 00512bc0: CALL sound_sndmain.cpp_FUN_005ab5a0
//   Label: LAB_00512bc0
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 00512bc5: TEST EAX,EAX
// 00512bc7: JZ 0x00512bce
//   XREF to: 00512bce (CONDITIONAL_JUMP)
// 00512bc9: MOV EBX,0x10
// 00512bce: CALL sound_sndmain.cpp_getAudioBitsPerSample_FUN_005ab250
//   Label: LAB_00512bce
//   XREF to: 005ab250 (UNCONDITIONAL_CALL)
// 00512bd3: CMP EBX,EAX
// 00512bd5: JZ 0x005126fd
//   XREF to: 005126fd (CONDITIONAL_JUMP)
// 00512bdb: CALL sound_sndmain.cpp_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00512be0: PUSH EBX
// 00512be1: CALL sound_sndmain.cpp_CallToSetSoundMode_FUN_005ab280
//   XREF to: 005ab280 (UNCONDITIONAL_CALL)
// 00512be6: ADD ESP,0x4
// 00512be9: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00512bef: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 00512bf0: JMP 0x005126f5
//   XREF to: 005126f5 (UNCONDITIONAL_JUMP)
// 00512bf5: MOV EBX,0x10
//   Label: LAB_00512bf5
// 00512bfa: JMP 0x00512bc0
//   XREF to: 00512bc0 (UNCONDITIONAL_JUMP)
// 00512bfc: CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   Label: caseD_6
//   XREF to: 005ab270 (UNCONDITIONAL_CALL)
// 00512c01: CMP EAX,0x1
// 00512c04: SETZ AL
// 00512c07: AND EAX,0xff
// 00512c0c: LEA EBX,[EAX + 0x1]
// 00512c0f: CALL sound_sndmain.cpp_FUN_005ab5a0
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 00512c14: TEST EAX,EAX
// 00512c16: JZ 0x00512c1d
//   XREF to: 00512c1d (CONDITIONAL_JUMP)
// 00512c18: MOV EBX,0x2
// 00512c1d: CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005ab270
//   Label: LAB_00512c1d
//   XREF to: 005ab270 (UNCONDITIONAL_CALL)
// 00512c22: CMP EBX,EAX
// 00512c24: JZ 0x005126fd
//   XREF to: 005126fd (CONDITIONAL_JUMP)
// 00512c2a: CALL sound_sndmain.cpp_FUN_005ab130
//   XREF to: 005ab130 (UNCONDITIONAL_CALL)
// 00512c2f: PUSH EBX
// 00512c30: CALL sound_sndmain.cpp_CallToSetSoundOutputMode2_FUN_005ab2a0
//   XREF to: 005ab2a0 (UNCONDITIONAL_CALL)
// 00512c35: ADD ESP,0x4
// 00512c38: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00512c3e: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 00512c3f: JMP 0x005126f5
//   XREF to: 005126f5 (UNCONDITIONAL_JUMP)
// 00512c44: LEA EAX,[ESP + 0x28]
//   Label: caseD_7
//   XREF to: Stack[-0xa20] (DATA)
// 00512c48: PUSH EAX
// 00512c49: XOR EBX,EBX
// 00512c4b: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00512c50: ADD ESP,0x4
// 00512c53: CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   Label: LAB_00512c53
//   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
// 00512c58: CMP EBX,EAX
// 00512c5a: JGE 0x00512c85
//   XREF to: 00512c85 (CONDITIONAL_JUMP)
// 00512c5c: LEA EAX,[ESP + 0x4e8]
//   XREF to: Stack[-0x560] (DATA)
// 00512c63: PUSH EAX
// 00512c64: PUSH EBX
// 00512c65: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 00512c6a: ADD ESP,0x8
// 00512c6d: LEA EAX,[ESP + 0x4e8]
//   XREF to: Stack[-0x560] (DATA)
// 00512c74: PUSH EAX
// 00512c75: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0xa20] (DATA)
// 00512c79: PUSH EAX
// 00512c7a: INC EBX
// 00512c7b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00512c80: ADD ESP,0x8
// 00512c83: JMP 0x00512c53
//   XREF to: 00512c53 (UNCONDITIONAL_JUMP)
// 00512c85: PUSH 0x0
//   Label: LAB_00512c85
// 00512c87: CALL sound_sndmain.cpp_getCurrentSoundDevice_FUN_005ab6c0
//   XREF to: 005ab6c0 (UNCONDITIONAL_CALL)
// 00512c8c: PUSH EAX
// 00512c8d: PUSH 0x636d28
//   XREF to: 00636d28 (DATA)
// 00512c92: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0xa20] (DATA)
// 00512c96: PUSH EAX
// 00512c97: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00512c9c: MOV EBX,EAX
// 00512c9e: ADD ESP,0x10
// 00512ca1: TEST EAX,EAX
// 00512ca3: JL 0x00512ce1
//   XREF to: 00512ce1 (CONDITIONAL_JUMP)
// 00512ca5: CALL sound_sndmain.cpp_FUN_005ab660
//   XREF to: 005ab660 (UNCONDITIONAL_CALL)
// 00512caa: PUSH EBX
// 00512cab: CALL sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0
//   XREF to: 005ab4c0 (UNCONDITIONAL_CALL)
// 00512cb0: ADD ESP,0x4
// 00512cb3: CALL sound_sndmain.cpp_FUN_005ab5b0
//   XREF to: 005ab5b0 (UNCONDITIONAL_CALL)
// 00512cb8: CALL sound_sndmain.cpp_FUN_005ab5a0
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 00512cbd: TEST EAX,EAX
// 00512cbf: JZ 0x00512cd2
//   XREF to: 00512cd2 (CONDITIONAL_JUMP)
// 00512cc1: PUSH 0xac44
// 00512cc6: PUSH 0x2
// 00512cc8: PUSH 0x10
// 00512cca: CALL sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
//   XREF to: 005ab170 (UNCONDITIONAL_CALL)
// 00512ccf: ADD ESP,0xc
// 00512cd2: MOV EDX,dword ptr [0x00681ef8]
//   Label: LAB_00512cd2
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00512cd8: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 00512cd9: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 00512cde: ADD ESP,0x4
// 00512ce1: PUSH 0x0
//   Label: LAB_00512ce1
// 00512ce3: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0xa20] (DATA)
// 00512ce7: PUSH EAX
// 00512ce8: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00512ced: ADD ESP,0x8
// 00512cf0: JMP 0x005126fd
//   XREF to: 005126fd (UNCONDITIONAL_JUMP)
// 00512cf5: CALL sound_sndmain.cpp_FUN_005ab660
//   Label: caseD_8
//   XREF to: 005ab660 (UNCONDITIONAL_CALL)
// 00512cfa: CALL sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   XREF to: 005ab590 (UNCONDITIONAL_CALL)
// 00512cff: TEST EAX,EAX
// 00512d01: SETZ AL
// 00512d04: AND EAX,0xff
// 00512d09: PUSH EAX
// 00512d0a: CALL sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550
//   XREF to: 005ab550 (UNCONDITIONAL_CALL)
// 00512d0f: ADD ESP,0x4
// 00512d12: CALL sound_sndmain.cpp_FUN_005ab5b0
//   XREF to: 005ab5b0 (UNCONDITIONAL_CALL)
// 00512d17: JMP 0x005126ef
//   XREF to: 005126ef (UNCONDITIONAL_JUMP)
