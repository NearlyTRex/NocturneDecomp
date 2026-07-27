// Name: sound_sndmain.cpp_FUN_005229f0
// Address: 005229f0
// Address Range: [[005229f0, 00522d06]]
// Convention: unknown
// Signature: char * sound_sndmain_cpp_FUN_005229f0(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * sound_sndmain_cpp_FUN_005229f0(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  float10 fVar6;
  uint uVar7;
  byte local_114 [256];
  char *local_14;
  
  iVar4 = 0;
  do {
    _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
    if (0x3f < _DAT_02dc1ed8) {
      _DAT_02dc1ed8 = 0;
    }
    iVar3 = _DAT_02dc1ed8 * 0x168;
    if ((*(int *)(iVar3 + 0x2dc2004) == 0) && (*(int *)(iVar3 + 0x2dc2008) == 0)) {
      local_14 = (char *)(iVar3 + 0x2dc1edc);
      goto LAB_00522a32;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  local_14 = (char *)0x0;
LAB_00522a32:
  pcVar2 = local_14;
  if (local_14 == (char *)0x0) {
    return (char *)0x0;
  }
  splitpath(param_2,0,0,0,local_114);
  iVar4 = _stricmp(local_114,"mp3");
  if ((iVar4 == 0) ||
     (iVar4 = _stricmp(local_114,".mp3"), iVar4 == 0)) {
    iVar4 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",param_2);
    if (iVar4 < 1) goto LAB_00522ceb;
    iVar3 = FUN_0056497c(0x8630);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(iVar3);
    }
    *(int *)(pcVar2 + 0x144) = iVar4;
    if (iVar4 == 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x3c8;
      core_main_c_FUN_004c8440("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(*(uint *)(pcVar2 + 0x144),param_2);
    pcVar5 = pcVar2;
    do {
      cVar1 = *param_2;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar2[0x100] = '\x01';
    pcVar2[0x101] = '\0';
    pcVar2[0x102] = '\0';
    pcVar2[0x103] = '\0';
    iVar4 = *(int *)(pcVar2 + 0x144);
    pcVar2[0x104] = '\x10';
    pcVar2[0x105] = '\0';
    pcVar2[0x106] = '\0';
    pcVar2[0x107] = '\0';
    *(uint *)(pcVar2 + 0x108) = *(uint *)(iVar4 + 0x104);
    uVar7 = *(uint *)(*(int *)(pcVar2 + 0x144) + 0x100);
    pcVar2[0x110] = -1;
    pcVar2[0x111] = -1;
    pcVar2[0x112] = -1;
    pcVar2[0x113] = -1;
    *(uint *)(pcVar2 + 0x10c) = uVar7;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(pcVar2);
    pcVar2[0x128] = '\0';
    pcVar2[0x129] = '\0';
    pcVar2[0x12a] = '\0';
    pcVar2[299] = '\0';
    pcVar2[300] = '\0';
    pcVar2[0x12d] = '\0';
    pcVar2[0x12e] = '\0';
    pcVar2[0x12f] = '\0';
    iVar4 = *(int *)(pcVar2 + 0x10c);
    pcVar2[0x130] = '\0';
    pcVar2[0x131] = '\0';
    pcVar2[0x132] = '\0';
    pcVar2[0x133] = '\0';
    fVar6 = (float10)2.0f;
    pcVar2[0x13c] = '\0';
    pcVar2[0x13d] = '\0';
    pcVar2[0x13e] = '\0';
    pcVar2[0x13f] = '\0';
    pcVar2[0x140] = '\0';
    pcVar2[0x141] = '\0';
    pcVar2[0x142] = '\0';
    pcVar2[0x143] = '\0';
    uVar7 = 0x522bb8;
    pcVar5 = pcVar2;
    fVar6 = (float10)round((float10)iVar4 * fVar6);
    *(int *)(pcVar2 + 0x138) = (int)ROUND(fVar6);
    *(uint *)(pcVar2 + 0x134) = param_1;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(uVar7,pcVar5);
  }
  else {
    iVar4 = engine_dosio_cpp_getFile_FUN_00456a60("sound",param_2,"rb");
    *(int *)(pcVar2 + 0x14c) = iVar4;
    pcVar5 = pcVar2;
    if (iVar4 == 0) goto LAB_00522ceb;
    do {
      cVar1 = *param_2;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_2[1];
      param_2 = param_2 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    uVar7 = _ftell(*(uint *)(pcVar2 + 0x14c));
    *(uint *)(pcVar2 + 0x148) = uVar7;
    iVar4 = sound_sndmain_cpp_parseWavFile_FUN_00521830
                      (*(uint *)(pcVar2 + 0x14c),pcVar2 + 0x148,pcVar2);
    if (iVar4 == 0) goto LAB_00522ceb;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(pcVar2);
    pcVar2[0x128] = '\0';
    pcVar2[0x129] = '\0';
    pcVar2[0x12a] = '\0';
    pcVar2[299] = '\0';
    pcVar2[300] = '\0';
    pcVar2[0x12d] = '\0';
    pcVar2[0x12e] = '\0';
    pcVar2[0x12f] = '\0';
    iVar4 = *(int *)(pcVar2 + 0x10c);
    pcVar2[0x130] = '\0';
    pcVar2[0x131] = '\0';
    pcVar2[0x132] = '\0';
    pcVar2[0x133] = '\0';
    fVar6 = (float10)2.0f;
    pcVar2[0x13c] = '\0';
    pcVar2[0x13d] = '\0';
    pcVar2[0x13e] = '\0';
    pcVar2[0x13f] = '\0';
    pcVar2[0x140] = '\0';
    pcVar2[0x141] = '\0';
    pcVar2[0x142] = '\0';
    pcVar2[0x143] = '\0';
    uVar7 = 0x522ccf;
    pcVar5 = pcVar2;
    fVar6 = (float10)round((float10)iVar4 * fVar6);
    *(int *)(pcVar2 + 0x138) = (int)ROUND(fVar6);
    *(uint *)(pcVar2 + 0x134) = param_1;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(uVar7,pcVar5);
  }
  if (iVar4 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(pcVar2,0,0);
    return pcVar2;
  }
LAB_00522ceb:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(pcVar2);
  return (char *)0x0;
}
