// Name: sound_sndmain.cpp_FUN_005760b0
// Address: 005760b0
// Address Range: [[005760b0, 005763aa]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_005760b0(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_005760b0(CIniFile *ini_file)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  SSoundDeviceInfo aSStack_3b4 [280];
  char acStack_29c [264];
  char local_194 [256];
  byte auStack_94 [100];
  int iStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  puVar3 = &DAT_00623330;
  pcVar4 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar4 = pcVar4 + 4;
  }
  (**(code **)(*(int *)&ini_file->field_0x200 + 4))
            (ini_file,"@DeviceName" + 1,local_194,0x100);
  sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
  for (iVar2 = 0; iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), iVar2 < iVar1;
      iVar2 = iVar2 + 1) {
    sound_sndmain_cpp_FUN_00575350(iVar2,aSStack_3b4);
    iVar1 = _stricmp((char *)aSStack_3b4,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(iVar2);
      break;
    }
  }
  local_194[0] = '\0';
  (**(code **)(*(int *)&ini_file->field_0x200 + 4))
            (ini_file,"RecordingDeviceName",local_194,0x100);
  iVar2 = 0;
  sound_sndmain_cpp_releaseRecordingDevice_FUN_00575940();
  do {
    iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730();
    if (iVar1 <= iVar2) {
LAB_005761aa:
      iStack_30 = sound_sndmain_cpp_FUN_00575570();
      engine_ini_cpp_FUN_004f4d10(ini_file,"AccelEnabled",&iStack_30);
      sound_sndmain_cpp_FUN_00575580(iStack_30);
      fStack_2c = (float)sound_sndmain_cpp_getMaxSwLatency_FUN_00576030();
      fStack_14 = fStack_2c;
      engine_ini_cpp_FUN_004f4db0(ini_file,"MaxSwLatency",&fStack_2c);
      sound_sndmain_cpp_FUN_00576040(fStack_2c);
      sound_sndmain_cpp_getAudioFormat_FUN_005751c0(&iStack_28,&iStack_24,&iStack_20);
      engine_ini_cpp_FUN_004f4d10(ini_file,&DAT_005f4501,&iStack_28);
      engine_ini_cpp_FUN_004f4d10(ini_file,"Channels",&iStack_24);
      engine_ini_cpp_FUN_004f4d10(ini_file,&DAT_005f450f,&iStack_20);
      sound_sndmain_cpp_setSoundOutputMode_FUN_00575120(iStack_28,iStack_24,iStack_20);
      iStack_30 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      engine_ini_cpp_FUN_004f4d10(ini_file,&DAT_005f4512,&iStack_30);
      iVar2 = 0;
      sound_sndmain_cpp_setSoundMuted_FUN_00573600(iStack_30);
      if (0 < DAT_006232e4) {
        do {
          FUN_005bfb40(auStack_94,"SfxChannel%dEnabled",iVar2);
          iStack_1c = sound_sndmain_cpp_FUN_00573cd0(iVar2);
          engine_ini_cpp_FUN_004f4d10(ini_file,auStack_94,&iStack_1c);
          sound_sndmain_cpp_enableSfxChannel_FUN_00573c50(iVar2,iStack_1c);
          FUN_005bfb40(auStack_94,"SfxChannel%dVol",iVar2);
          fStack_18 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(iVar2);
          fStack_14 = fStack_18;
          engine_ini_cpp_FUN_004f4db0(ini_file,auStack_94,&fStack_18);
          sound_sndmain_cpp_setSfxChannelVol_FUN_00573b30(iVar2,fStack_18);
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_006232e4);
      }
      return;
    }
    sound_sndmain_cpp_getRecordingDeviceInfo_FUN_00575790(iVar2,acStack_29c);
    iVar1 = _stricmp(acStack_29c,local_194);
    if (iVar1 == 0) {
      sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(iVar2);
      goto LAB_005761aa;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}
