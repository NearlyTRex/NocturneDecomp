// Name: sound_sndmain.cpp_FUN_00559520
// Address: 00559520
// Address Range: [[00559520, 005596fa]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00559520(CIniFile *ini_file)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_00559520(CIniFile *ini_file)

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
  float fStack_14;
  
  pSVar4 = &local_29c;
  puVar3 = &DAT_00604368;
  pcVar5 = local_184;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    pcVar5 = pcVar5 + 4;
  }
  if ((-1 < DAT_0060423c) &&
     (iVar2 = sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(), DAT_0060423c < iVar2)) {
    sound_sndmain_cpp_FUN_005584c0(DAT_0060423c,&local_29c);
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
  sound_sndmain_cpp_getAudioFormat_FUN_00558330(&iStack_18,&iStack_20,&iStack_1c);
  engine_ini_cpp_FUN_004d8c90(ini_file,&DAT_005d3e40,iStack_18);
  engine_ini_cpp_FUN_004d8c90(ini_file,"Channels",iStack_20);
  engine_ini_cpp_FUN_004d8c90(ini_file,&DAT_005d3e4e,iStack_1c);
  iVar2 = sound_sndmain_cpp_FUN_005586e0();
  engine_ini_cpp_FUN_004d8c90(ini_file,"AccelEnabled",iVar2);
  fStack_14 = sound_sndmain_cpp_FUN_005591a0();
  engine_ini_cpp_FUN_004d8d40(ini_file,"MaxSwLatency",fStack_14);
  iVar2 = sound_sndmain_cpp_FUN_00556750();
  channel_index = 0;
  engine_ini_cpp_FUN_004d8c90(ini_file,&DAT_005d3e6b,iVar2);
  if (0 < DAT_00604224) {
    do {
      FUN_005a28c0(auStack_84,"SfxChannel%dEnabled",channel_index);
      iVar2 = sound_sndmain_cpp_FUN_00556e30(channel_index);
      engine_ini_cpp_FUN_004d8c90(ini_file,auStack_84,iVar2);
      FUN_005a28c0(auStack_84,"SfxChannel%dVol",channel_index);
      fStack_14 = (float)sound_sndmain_cpp_getSfxChannelVol_FUN_00556d20(channel_index);
      channel_index = channel_index + 1;
      engine_ini_cpp_FUN_004d8d40(ini_file,auStack_84,fStack_14);
    } while (channel_index < DAT_00604224);
  }
  return;
}
