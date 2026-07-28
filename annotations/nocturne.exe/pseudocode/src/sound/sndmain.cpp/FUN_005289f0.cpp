// Name: sound_sndmain.cpp_FUN_005289f0
// Address: 005289f0
// Address Range: [[005289f0, 00528c7a]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005289f0(CIniFile *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005289f0(CIniFile *param_1)

{
  int iVar1;
  int device_id;
  uint *puVar2;
  char *pcVar3;
  SSoundDeviceInfo local_2ac;
  char local_194 [256];
  char local_94 [100];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  device_id = 0;
  puVar2 = &DAT_005beaa0;
  pcVar3 = local_194;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pcVar3 = pcVar3 + 4;
  }
  engine_ini_cpp_CIniFile_getString_FUN_004bd910(param_1,"DeviceName",local_194,0x100);
  DAT_005bea74 = 0xffffffff;
  do {
    iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
    if (iVar1 <= device_id) {
LAB_00528a76:
      sound_sndmain_cpp_getAudioFormat_FUN_00528160(&local_30,&local_2c,&local_28);
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,"Bits",&local_30);
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,"Channels",&local_2c);
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,"Hz",&local_28);
      local_24 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,"HwMixingEnabled",&local_24);
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0(local_24);
      local_20 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
      local_14 = local_20;
      engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(param_1,"MaxSwLatency",&local_20);
      sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00528980(local_20);
      sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(local_30,local_2c,local_28);
      local_24 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,"Mute",&local_24);
      iVar1 = 0;
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(local_24);
      if (0 < DAT_005bea60) {
        do {
          _sprintf(local_94,"SfxChannel%dEnabled",iVar1);
          local_1c = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(iVar1);
          engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,local_94,&local_1c);
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(iVar1,local_1c);
          _sprintf(local_94,"SfxChannel%dVol",iVar1);
          local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(iVar1);
          local_14 = local_18;
          engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(param_1,local_94,&local_18);
          sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(iVar1,local_18);
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_005bea60);
      }
      return;
    }
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(device_id,&local_2ac);
    iVar1 = _stricmp(local_2ac.device_name,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectSoundDevice_FUN_00528410(device_id);
      goto LAB_00528a76;
    }
    device_id = device_id + 1;
  } while( true );
}
