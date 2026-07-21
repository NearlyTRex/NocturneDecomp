// Name: sound_sndmain.cpp_writeIni_FUN_00528c80
// Address: 00528c80
// Address Range: [[00528c80, 00528e5a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_writeIni_FUN_00528c80(undefined4 param_1)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_writeIni_FUN_00528c80(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  char local_29c [280];
  char local_184 [256];
  byte local_84 [100];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  pcVar5 = local_29c;
  puVar4 = &DAT_005beba0;
  pcVar6 = local_184;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    pcVar6 = pcVar6 + 4;
  }
  if ((-1 < DAT_005bea74) &&
     (iVar3 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(), DAT_005bea74 < iVar3)) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_005282c0(DAT_005bea74,local_29c);
    pcVar6 = local_184;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  engine_ini_cpp_CIniFile_setString_FUN_004bd9a0(param_1,"DeviceName",local_184);
  sound_sndmain_cpp_getAudioFormat_FUN_00528160(&local_18,&local_20,&local_1c);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(param_1,&DAT_00593a8b,local_18);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(param_1,"Channels",local_20);
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(param_1,&DAT_00593a99,local_1c);
  uVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005284e0();
  engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(param_1,"HwMixingEnabled",uVar2);
  local_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00528970();
  engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(param_1,"MaxSwLatency",local_14);
  uVar2 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
  iVar3 = 0;
  uVar2 = engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(param_1,&DAT_00593ab9,uVar2);
  if (0 < 0x00000020) {
    do {
      _sprintf(local_84,"SfxChannel%dEnabled",iVar3);
      uVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00527490(iVar3);
      engine_ini_cpp_CIniFile_setInteger_FUN_004bda80(param_1,local_84,uVar2);
      _sprintf(local_84,"SfxChannel%dVol",iVar3);
      local_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00527380(iVar3);
      iVar3 = iVar3 + 1;
      uVar2 = engine_ini_cpp_CIniFile_setFloatValue_FUN_004bdb20(param_1,local_84,local_14);
    } while (iVar3 < 0x00000020);
  }
  return uVar2;
}
