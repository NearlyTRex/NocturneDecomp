// Name: sound_sndmain.cpp_writeIni_FUN_00553980
// Address: 00553980
// Address Range: [[00553980, 00553b5a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_writeIni_FUN_00553980(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_writeIni_FUN_00553980(CIniFile *ini_file)

{
  char cVar1;
  int iVar2;
  int channel_index;
  SSoundDeviceInfo *pSVar3;
  char *pcVar4;
  char *pcVar5;
  SSoundDeviceInfo local_29c;
  char local_184 [256];
  char acStack_84 [100];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  pSVar3 = &local_29c;
  pcVar5 = g_DefaultDeviceName;
  pcVar4 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar4 = pcVar4 + 4;
  }
  if ((-1 < g_CurrentSoundDevice) &&
     (iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(), g_CurrentSoundDevice < iVar2)) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_00552920(g_CurrentSoundDevice,&local_29c);
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
  (**(code **)((int)ini_file->vtable + 8))(ini_file,"DeviceName",local_184);
  sound_sndmain_cpp_getAudioFormat_FUN_00552790(&iStack_18,&iStack_20,&iStack_1c);
  engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(ini_file,"Bits",iStack_18);
  engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(ini_file,"Channels",iStack_20);
  engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(ini_file,"Hz",iStack_1c);
  iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00552b40();
  engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(ini_file,"AccelEnabled",iVar2);
  fStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00553600();
  engine_ini_cpp_CIniFile_setFloatValue_FUN_004d8c30(ini_file,"MaxSwLatency",fStack_14);
  iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
  channel_index = 0;
  engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(ini_file,"Mute",iVar2);
  if (0 < g_MaxSoundChannels) {
    do {
      _sprintf(acStack_84,"SfxChannel%dEnabled");
      iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(channel_index);
      engine_ini_cpp_CIniFile_setInteger_FUN_004d8b80(ini_file,acStack_84,iVar2);
      _sprintf(acStack_84,"SfxChannel%dVol");
      fStack_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_CIniFile_setFloatValue_FUN_004d8c30(ini_file,acStack_84,fStack_14);
    } while (channel_index < g_MaxSoundChannels);
  }
  return;
}
