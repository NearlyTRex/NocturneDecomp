// Name: sound_sndmain.cpp_readIni_FUN_00559220
// Address: 00559220
// Address Range: [[00559220, 0055951a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_readIni_FUN_00559220(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_readIni_FUN_00559220(CIniFile *ini_file)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  SSoundDeviceInfo aSStack_3b4 [280];
  char acStack_29c [264];
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
  
  puVar3 = &DAT_00604268;
  pcVar4 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar4 = pcVar4 + 4;
  }
  (**(code **)(*(int *)&ini_file->field_0x200 + 4))
            (ini_file,"@DeviceName" + 1,local_194,0x100);
  sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
  for (iVar2 = 0; iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), iVar2 < iVar1;
      iVar2 = iVar2 + 1) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005584c0(iVar2,aSStack_3b4);
    iVar1 = _stricmp((char *)aSStack_3b4,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectSoundDevice_FUN_00558640(iVar2);
      break;
    }
  }
  local_194[0] = '\0';
  (**(code **)(*(int *)&ini_file->field_0x200 + 4))
            (ini_file,"RecordingDeviceName",local_194,0x100);
  iVar2 = 0;
  sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0();
  do {
    iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0();
    if (iVar1 <= iVar2) {
LAB_0055931a:
      iStack_30 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005586e0();
      engine_ini_cpp_FUN_004d8c30(ini_file,"AccelEnabled",&iStack_30);
      sound_sndmain_cpp_FUN_005586f0(iStack_30);
      fStack_2c = sound_sndmain_cpp_getMaxSwLatency_FUN_005591a0();
      fStack_14 = fStack_2c;
      engine_ini_cpp_FUN_004d8cd0(ini_file,"MaxSwLatency",&fStack_2c);
      sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005591b0(fStack_2c);
      sound_sndmain_cpp_getAudioFormat_FUN_00558330(&iStack_28,&iStack_24,&iStack_20);
      engine_ini_cpp_FUN_004d8c30(ini_file,&DAT_005d3dfb,&iStack_28);
      engine_ini_cpp_FUN_004d8c30(ini_file,"Channels",&iStack_24);
      engine_ini_cpp_FUN_004d8c30(ini_file,&DAT_005d3e09,&iStack_20);
      sound_sndmain_cpp_setSoundOutputMode_FUN_00558290(iStack_28,iStack_24,iStack_20);
      iStack_30 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
      engine_ini_cpp_FUN_004d8c30(ini_file,&DAT_005d3e0c,&iStack_30);
      iVar2 = 0;
      sound_sndmain_cpp_setSoundMuted_FUN_00556760(iStack_30);
      if (0 < DAT_00604224) {
        do {
          _sprintf(acStack_94,"SfxChannel%dEnabled");
          iStack_1c = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(iVar2);
          engine_ini_cpp_FUN_004d8c30(ini_file,acStack_94,&iStack_1c);
          sound_sndmain_cpp_enableSfxChannel_FUN_00556db0(iVar2,iStack_1c);
          _sprintf(acStack_94,"SfxChannel%dVol");
          fStack_18 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(iVar2);
          fStack_14 = fStack_18;
          engine_ini_cpp_FUN_004d8cd0(ini_file,acStack_94,&fStack_18);
          sound_sndmain_cpp_setSfxChannelVol_FUN_00556c90(iVar2,fStack_18);
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_00604224);
      }
      return;
    }
    sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00558900(iVar2,acStack_29c);
    iVar1 = _stricmp(acStack_29c,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectRecordingDevice_FUN_005589e0(iVar2);
      goto LAB_0055931a;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
