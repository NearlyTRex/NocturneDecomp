// Name: FUN_005289f0
// Address: 005289f0
// Address Range: [[005289f0, 00528c7a]]
// Convention: unknown
// Signature: undefined4 FUN_005289f0(undefined4 param_1)

#include "nocturne.h"

uint FUN_005289f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte local_2ac [280];
  uint local_194 [64];
  byte local_94 [100];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iVar3 = 0;
  puVar4 = &DAT_005beaa0;
  puVar5 = local_194;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  engine_ini_cpp_CIniFile_getString_FUN_004bd910(param_1,"@DeviceName" + 1,local_194,0x100)
  ;
  DAT_005bea74 = 0xffffffff;
  do {
    iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230();
    if (iVar2 <= iVar3) {
LAB_00528a76:
      sound_sndmain_cpp_getAudioFormat_FUN_00528160(&local_30,&local_2c,&local_28);
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,&DAT_00593a29,&local_30);
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,"Channels",&local_2c);
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,&DAT_00593a37,&local_28);
      local_24 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,"HwMixingEnabled",&local_24);
      sound_sndmain_cpp_enableHwSoundMixing_FUN_005284a0(local_24);
      local_20 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
      local_14 = local_20;
      engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(param_1,"MaxSwLatency",&local_20);
      sound_sndmain_cpp_setMaxSwSoundLatency_FUN_00528980(local_20);
      sound_sndmain_cpp_setSoundOutputMode_FUN_005280c0(local_30,local_2c,local_28);
      local_24 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,&DAT_00593a57,&local_24);
      iVar2 = 0;
      uVar1 = sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(local_24);
      if (0 < 0x00000020) {
        do {
          _sprintf(local_94,"SfxChannel%dEnabled",iVar2);
          local_1c = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(iVar2);
          engine_ini_cpp_CIniFile_getInteger_FUN_004bda20(param_1,local_94,&local_1c);
          sound_sndmain_cpp_enableSfxChannel_FUN_00527410(iVar2,local_1c);
          _sprintf(local_94,"SfxChannel%dVol",iVar2);
          local_18 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(iVar2);
          local_14 = local_18;
          engine_ini_cpp_CIniFile_getFloat_FUN_004bdac0(param_1,local_94,&local_18);
          uVar1 = sound_sndmain_cpp_setSfxChannelVol_FUN_005272e0(iVar2,local_18);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x00000020);
      }
      return uVar1;
    }
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(iVar3,local_2ac);
    iVar2 = _stricmp(local_2ac,local_194);
    if (iVar2 == 0) {
      sound_sndmain_cpp_selectSoundDevice_FUN_00528410(iVar3);
      goto LAB_00528a76;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}
