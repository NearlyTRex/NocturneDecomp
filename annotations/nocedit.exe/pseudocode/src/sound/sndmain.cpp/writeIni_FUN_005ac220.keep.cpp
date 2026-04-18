// Name: sound_sndmain.cpp_writeIni_FUN_005ac220
// Address: 005ac220
// MANUAL RECONSTRUCTION
// Address Range: [[005ac220, 005ac3fa]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_writeIni_FUN_005ac220(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_writeIni_FUN_005ac220(CIniFile *ini_file)

{
  int iVar3;
  int channel_index;
  SSoundDeviceInfo local_29c;
  char local_184 [256];
  char local_84 [100];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;

  memcpy(local_184,g_DefaultDeviceName,256);
  if ((-1 < g_CurrentSoundDevice) &&
     (iVar3 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), g_CurrentSoundDevice < iVar3)) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(g_CurrentSoundDevice,&local_29c);
    strcpy(local_184,local_29c.device_name);
  }
  engine_ini_cpp_CIniFile_setString_FUN_004fbbb0(ini_file,"DeviceName",local_184);
  sound_sndmain_cpp_getAudioFormat_FUN_005ab210(&local_18,&local_20,&local_1c);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Bits",local_18);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Channels",local_20);
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Hz",local_1c);
  iVar3 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"HwMixingEnabled",iVar3);
  local_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
  engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(ini_file,"MaxSwLatency",local_14);
  iVar3 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
  channel_index = 0;
  engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,"Mute",iVar3);
  if (0 < g_MaxSoundChannels) {
    do {
      _sprintf(local_84,"SfxChannel%dEnabled",channel_index);
      iVar3 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(channel_index);
      engine_ini_cpp_CIniFile_setInteger_FUN_004fbc90(ini_file,local_84,iVar3);
      _sprintf(local_84,"SfxChannel%dVol",channel_index);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_CIniFile_setFloatValue_FUN_004fbd30(ini_file,local_84,local_14);
    } while (channel_index < g_MaxSoundChannels);
  }
  return;
}
