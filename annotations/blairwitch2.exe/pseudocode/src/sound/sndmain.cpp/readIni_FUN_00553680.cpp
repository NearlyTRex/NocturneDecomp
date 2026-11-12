// Name: sound_sndmain.cpp_readIni_FUN_00553680
// Address: 00553680
// Address Range: [[00553680, 0055397a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_readIni_FUN_00553680(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_readIni_FUN_00553680(CIniFile *ini_file)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  SSoundDeviceInfo SStack_3b4;
  SRecordingDeviceInfo SStack_29c;
  char local_194 [256];
  char acStack_94 [100];
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  puVar3 = &DAT_0061bce0;
  pcVar4 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar4 = pcVar4 + 4;
  }
  (**(code **)((int)ini_file->vtable + 4))(ini_file,"@DeviceName" + 1,local_194,0x100);
  sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
  for (iVar2 = 0; iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(), iVar2 < iVar1;
      iVar2 = iVar2 + 1) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_00552920(iVar2,&SStack_3b4);
    iVar1 = _stricmp(SStack_3b4.device_name,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(iVar2);
      break;
    }
  }
  local_194[0] = '\0';
  (**(code **)((int)ini_file->vtable + 4))(ini_file,"RecordingDeviceName",local_194,0x100);
  iVar2 = 0;
  sound_sndmain_cpp_releaseRecordingDevice_FUN_00552f10();
  do {
    iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00552d00();
    if (iVar1 <= iVar2) {
LAB_0055377a:
      iStack_30 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00552b40();
      engine_ini_cpp_FUN_004d8b20(ini_file,"AccelEnabled",&iStack_30);
      sound_sndmain_cpp_FUN_00552b50(iStack_30);
      fStack_2c = sound_sndmain_cpp_getMaxSwLatency_FUN_00553600();
      fStack_14 = fStack_2c;
      engine_ini_cpp_FUN_004d8bc0(ini_file,"MaxSwLatency",&fStack_2c);
      sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00553610(fStack_2c);
      sound_sndmain_cpp_getAudioFormat_FUN_00552790(&iStack_28,&iStack_24,&iStack_20);
      engine_ini_cpp_FUN_004d8b20(ini_file,&DAT_005e9307,&iStack_28);
      engine_ini_cpp_FUN_004d8b20(ini_file,"Channels",&iStack_24);
      engine_ini_cpp_FUN_004d8b20(ini_file,&DAT_005e9315,&iStack_20);
      sound_sndmain_cpp_setSoundOutputMode_FUN_005526f0(iStack_28,iStack_24,iStack_20);
      iStack_30 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      engine_ini_cpp_FUN_004d8b20(ini_file,&DAT_005e9318,&iStack_30);
      iVar2 = 0;
      sound_sndmain_cpp_setSoundMuted_FUN_00550bd0(iStack_30);
      if (0 < DAT_0061bc94) {
        do {
          _sprintf(acStack_94,"SfxChannel%dEnabled");
          iStack_1c = sound_sndmain_cpp_isSfxChannelEnabled_FUN_005512a0(iVar2);
          engine_ini_cpp_FUN_004d8b20(ini_file,acStack_94,&iStack_1c);
          sound_sndmain_cpp_enableSfxChannel_FUN_00551220(iVar2,iStack_1c);
          _sprintf(acStack_94,"SfxChannel%dVol");
          fStack_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(iVar2);
          fStack_14 = fStack_18;
          engine_ini_cpp_FUN_004d8bc0(ini_file,acStack_94,&fStack_18);
          sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(iVar2,fStack_18);
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_0061bc94);
      }
      return;
    }
    sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00552d60(iVar2,&SStack_29c);
    iVar1 = _stricmp(SStack_29c.device_name,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_FUN_00552e40(iVar2);
      goto LAB_0055377a;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
