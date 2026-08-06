// Name: sound_sndmain.cpp_writeIni_FUN_00528c80
// Address: 00528c80
// Address Range: [[00528c80, 00528e5a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_writeIni_FUN_00528c80(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_writeIni_FUN_00528c80(CIniFile *ini_file)

{
  char cVar1;
  int iVar2;
  int channel_index;
  uint *puVar3;
  SSoundDeviceInfo *pSVar4;
  char *pcVar5;
  SSoundDeviceInfo local_29c;
  char local_184 [256];
  char local_84 [100];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  pSVar4 = &local_29c;
  puVar3 = &DAT_005beba0;
  pcVar5 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar5 = pcVar5 + 4;
  }
  if ((-1 < DAT_005bea74) &&
     (iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(), DAT_005bea74 < iVar2)) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(DAT_005bea74,&local_29c);
    pcVar5 = local_184;
    do {
      cVar1 = pSVar4->device_name[0];
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = *(char *)((int)pSVar4 + 1);
      pSVar4 = (SSoundDeviceInfo *)((int)pSVar4 + 2);
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(ini_file,"DeviceName",local_184);
  sound_sndmain_cpp_getAudioFormat_FUN_00528160(&local_18,&local_20,&local_1c);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(ini_file,"Bits",local_18);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(ini_file,"Channels",local_20);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(ini_file,"Hz",local_1c);
  iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(ini_file,"HwMixingEnabled",iVar2);
  local_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
  engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(ini_file,"MaxSwLatency",local_14);
  iVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
  channel_index = 0;
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(ini_file,"Mute",iVar2);
  if (0 < DAT_005bea60) {
    do {
      _sprintf(local_84,"SfxChannel%dEnabled",channel_index);
      iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(channel_index);
      engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(ini_file,local_84,iVar2);
      _sprintf(local_84,"SfxChannel%dVol",channel_index);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(ini_file,local_84,local_14);
    } while (channel_index < DAT_005bea60);
  }
  return;
}
