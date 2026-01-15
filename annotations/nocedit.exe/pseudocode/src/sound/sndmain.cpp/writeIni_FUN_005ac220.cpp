// Name: sound_sndmain.cpp_writeIni_FUN_005ac220
// Address: 005ac220
// Address Range: [[005ac220, 005ac3fa]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_writeIni_FUN_005ac220(CIniFile * ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_writeIni_FUN_005ac220(CIniFile *ini_file)

{
  char cVar1;
  int iVar2;
  int channel_index;
  SSoundDeviceInfo *pSVar3;
  char *pcVar4;
  char *pcVar5;
  SSoundDeviceInfo local_29c;
  char local_184 [256];
  char local_84 [100];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  pSVar3 = &local_29c;
  pcVar5 = g_DefaultDeviceName;
  pcVar4 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar4 = pcVar4 + 4;
  }
  if ((-1 < g_CurrentSoundDevice) &&
     (iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), g_CurrentSoundDevice < iVar2)) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(g_CurrentSoundDevice,&local_29c);
    pcVar5 = local_184;
    do {
      cVar1 = pSVar3->device_name[0];
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = *(char *)((int)pSVar3 + 1);
      pSVar3 = (SSoundDeviceInfo *)((int)pSVar3 + 2);
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(ini_file,"DeviceName",local_184);
  sound_sndmain_cpp_getAudioFormat_FUN_005ab210(&local_18,&local_20,&local_1c);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Bits",local_18);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Channels",local_20);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Hz",local_1c);
  iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"HwMixingEnabled",iVar2);
  local_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(ini_file,"MaxSwLatency",local_14);
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  channel_index = 0;
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Mute",iVar2);
  if (0 < g_MaxSoundChannels) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_84,"SfxChannel%dEnabled",channel_index);
      iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(channel_index);
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,local_84,iVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_84,"SfxChannel%dVol",channel_index);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(ini_file,local_84,local_14);
    } while (channel_index < g_MaxSoundChannels);
  }
  return;
}
