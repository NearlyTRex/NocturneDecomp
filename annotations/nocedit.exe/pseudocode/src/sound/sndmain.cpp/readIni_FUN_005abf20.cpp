// Name: sound_sndmain.cpp_readIni_FUN_005abf20
// Address: 005abf20
// Address Range: [[005abf20, 005ac21a]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_readIni_FUN_005abf20(CIniFile * ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_readIni_FUN_005abf20(CIniFile *ini_file)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_fffffc4c;
  SRecordingDeviceInfo local_29c;
  char local_194 [256];
  char local_94 [100];
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  pcVar3 = g_DefaultRecordingDeviceName;
  pcVar4 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (ini_file,"DeviceName",local_194,0x100,in_stack_fffffc4c);
  sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
  for (iVar2 = 0; iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(), iVar2 < iVar1;
      iVar2 = iVar2 + 1) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,(SSoundDeviceInfo *)&stack0xfffffc4c);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xfffffc4c,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(iVar2);
      break;
    }
  }
  local_194[0] = '\0';
  engine_ini_cpp_CIniFile_getString_FUN_004fbb20
            (ini_file,"RecordingDeviceName",local_194,0x100,in_stack_fffffc4c);
  iVar2 = 0;
  sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930();
  do {
    iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
    if (iVar1 <= iVar2) {
LAB_005ac012:
      local_20 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,"HwMixingEnabled",&local_20)
      ;
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(local_20);
      local_30 = sound_sndmain_cpp_getMaxSwLatency_FUN_005abea0();
      local_14 = local_30;
      engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(ini_file,"MaxSwLatency",&local_30);
      sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005abeb0(local_30);
      sound_sndmain_cpp_getAudioFormat_FUN_005ab210(&local_24,&local_2c,&local_28);
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,"Bits",&local_24);
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,"Channels",&local_2c);
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,"Hz",&local_28);
      sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(local_24,local_2c,local_28);
      local_20 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,"Mute",&local_20);
      iVar2 = 0;
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(local_20);
      if (0 < g_MaxSoundChannels) {
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_94,"SfxChannel%dEnabled",iVar2);
          local_1c = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(iVar2);
          engine_ini_cpp_CIniFile_getInteger_FUN_004fbc30(ini_file,local_94,&local_1c);
          sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(iVar2,local_1c);
          crt_stdio_c_sprintf_FUN_005fdbd0(local_94,"SfxChannel%dVol",iVar2);
          local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(iVar2);
          local_14 = local_18;
          engine_ini_cpp_CIniFile_getFloat_FUN_004fbcd0(ini_file,local_94,&local_18);
          sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(iVar2,local_18);
          iVar2 = iVar2 + 1;
        } while (iVar2 < g_MaxSoundChannels);
      }
      return;
    }
    sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780(iVar2,&local_29c);
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(local_29c.device_name,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860(iVar2);
      goto LAB_005ac012;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
