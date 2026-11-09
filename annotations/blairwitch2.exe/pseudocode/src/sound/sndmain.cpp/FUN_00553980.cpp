// Name: sound_sndmain.cpp_FUN_00553980
// Address: 00553980
// Address Range: [[00553980, 00553b5a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00553980(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_00553980(CIniFile *ini_file)

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
  byte auStack_84 [100];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  pSVar4 = &local_29c;
  puVar3 = &DAT_0061bde0;
  pcVar5 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar5 = pcVar5 + 4;
  }
  if ((-1 < DAT_0061bcac) &&
     (iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(), DAT_0061bcac < iVar2)) {
    sound_sndmain_cpp_FUN_00552920(DAT_0061bcac,&local_29c);
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
  sound_sndmain_cpp_getAudioFormat_FUN_00552790(&iStack_18,&iStack_20,&iStack_1c);
  engine_ini_cpp_FUN_004d8b80(ini_file,&DAT_005e934c,iStack_18);
  engine_ini_cpp_FUN_004d8b80(ini_file,"Channels",iStack_20);
  engine_ini_cpp_FUN_004d8b80(ini_file,&DAT_005e935a,iStack_1c);
  iVar2 = sound_sndmain_cpp_FUN_00552b40();
  engine_ini_cpp_FUN_004d8b80(ini_file,"AccelEnabled",iVar2);
  uStack_14 = sound_sndmain_cpp_getMaxSwLatency_FUN_00553600();
  engine_ini_cpp_FUN_004d8c30(ini_file,"MaxSwLatency",uStack_14);
  iVar2 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
  channel_index = 0;
  engine_ini_cpp_FUN_004d8b80(ini_file,&DAT_005e9377,iVar2);
  if (0 < DAT_0061bc94) {
    do {
      FUN_005b7790(auStack_84,"SfxChannel%dEnabled",channel_index);
      iVar2 = sound_sndmain_cpp_FUN_005512a0(channel_index);
      engine_ini_cpp_FUN_004d8b80(ini_file,auStack_84,iVar2);
      FUN_005b7790(auStack_84,"SfxChannel%dVol",channel_index);
      uStack_14 = sound_sndmain_cpp_getSfxChannelVol_FUN_00551190(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_FUN_004d8c30(ini_file,auStack_84,uStack_14);
    } while (channel_index < DAT_0061bc94);
  }
  return;
}
