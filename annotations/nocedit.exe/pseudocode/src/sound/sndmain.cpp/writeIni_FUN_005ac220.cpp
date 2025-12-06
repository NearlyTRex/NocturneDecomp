// Name: sound_sndmain.cpp_writeIni_FUN_005ac220
// Address: 005ac220
// Address Range: [[005ac220, 005ac3fa]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_writeIni_FUN_005ac220(CIniFile * ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_writeIni_FUN_005ac220(CIniFile *ini_file)

{
  char cVar1;
  float value;
  int iVar2;
  int unaff_EBX;
  int channel_index;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar3;
  int unaff_EDI;
  uint *puVar4;
  char *pcVar5;
  float fStack00000014;
  uint local_184 [2];
  char acStack_17c [300];
  char acStack_50 [8];
  char acStack_48 [4];
  char acStack_44 [8];
  char acStack_3c [40];
  int local_14;
  
  pcVar5 = g_DefaultDeviceName;
  puVar4 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + 4;
    puVar4 = puVar4 + 1;
  }
  if (-1 < g_CurrentSoundDevice) {
    iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
    if (g_CurrentSoundDevice < iVar2) {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370
                (g_CurrentSoundDevice,(SSoundDeviceInfo *)&stack0xfffffd68);
      pcVar3 = &stack0xfffffd6c;
      pcVar5 = acStack_17c;
      do {
        cVar1 = *pcVar3;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
  }
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(ini_file,"DeviceName",acStack_17c);
  sound_sndmain_cpp_getAudioFormat_FUN_005ab210
            ((int *)&stack0xfffffff4,&local_14,(int *)&stack0xfffffff0);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Bits",unaff_ESI);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Channels",unaff_EDI);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Hz",unaff_EBX);
  iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"HwMixingEnabled",iVar2);
  fStack00000014 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30
            (ini_file,"MaxSwLatency",fStack00000014);
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  channel_index = 0;
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Mute",iVar2);
  if (0 < g_MaxSoundChannels) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_50,"SfxChannel%dEnabled");
      iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(channel_index);
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,acStack_48,iVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_44,"SfxChannel%dVol");
      value = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(ini_file,acStack_3c,value);
    } while (channel_index < g_MaxSoundChannels);
  }
  return;
}
