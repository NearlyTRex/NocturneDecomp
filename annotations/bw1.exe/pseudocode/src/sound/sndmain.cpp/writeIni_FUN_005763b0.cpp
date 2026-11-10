// Name: sound_sndmain.cpp_writeIni_FUN_005763b0
// Address: 005763b0
// Address Range: [[005763b0, 0057658a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_writeIni_FUN_005763b0(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_writeIni_FUN_005763b0(CIniFile *ini_file)

{
  char cVar1;
  int iVar2;
  int channel_index;
  uint *puVar3;
  SSoundDeviceInfo *pSVar4;
  char *pcVar5;
  SSoundDeviceInfo local_29c;
  char local_29b [279];
  char local_184 [256];
  char acStack_84 [100];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  pSVar4 = &local_29c;
  puVar3 = &DAT_00623430;
  pcVar5 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar5 = pcVar5 + 4;
  }
  if ((-1 < DAT_006232fc) &&
     (iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(), DAT_006232fc < iVar2)) {
    sound_sndmain_cpp_getSoundDeviceInfo_FUN_00575350(DAT_006232fc,&local_29c);
    pcVar5 = local_184;
    do {
      cVar1 = *(char *)pSVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = *(char *)(pSVar4 + 1);
      pSVar4 = pSVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  (**(code **)(*(int *)&ini_file->field_0x200 + 8))(ini_file,"DeviceName",local_184);
  sound_sndmain_cpp_getAudioFormat_FUN_005751c0(&iStack_18,&iStack_20,&iStack_1c);
  engine_ini_cpp_FUN_004f4d70(ini_file,&DAT_005f4546,iStack_18);
  engine_ini_cpp_FUN_004f4d70(ini_file,"Channels",iStack_20);
  engine_ini_cpp_FUN_004f4d70(ini_file,&DAT_005f4554,iStack_1c);
  iVar2 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_00575570();
  engine_ini_cpp_FUN_004f4d70(ini_file,"AccelEnabled",iVar2);
  uStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00576030();
  engine_ini_cpp_FUN_004f4e20(ini_file,"MaxSwLatency",uStack_14);
  iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
  channel_index = 0;
  engine_ini_cpp_FUN_004f4d70(ini_file,&DAT_005f4571,iVar2);
  if (0 < DAT_006232e4) {
    do {
      _sprintf(acStack_84,"SfxChannel%dEnabled");
      iVar2 = sound_sndmain_cpp_isSfxChannelEnabled_FUN_00573cd0(channel_index);
      engine_ini_cpp_FUN_004f4d70(ini_file,acStack_84,iVar2);
      _sprintf(acStack_84,"SfxChannel%dVol");
      uStack_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_FUN_004f4e20(ini_file,acStack_84,uStack_14);
    } while (channel_index < DAT_006232e4);
  }
  return;
}
