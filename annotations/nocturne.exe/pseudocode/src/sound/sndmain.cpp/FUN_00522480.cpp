// Name: sound_sndmain.cpp_FUN_00522480
// Address: 00522480
// Address Range: [[00522480, 00522962]]
// Convention: unknown
// Signature: char * sound_sndmain_cpp_FUN_00522480(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * sound_sndmain_cpp_FUN_00522480(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  byte bVar9;
  char *pcVar10;
  char local_114;
  byte local_113 [255];
  int local_14;
  
  bVar9 = 0;
  pcVar5 = (char *)0x2dc1edc;
  iVar6 = 0;
  do {
    iVar2 = _stricmp(pcVar5,param_1);
    if (iVar2 == 0) {
      return pcVar5;
    }
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0x168;
  } while (iVar6 < 0x40);
  iVar6 = 0;
  do {
    _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
    if (0x3f < _DAT_02dc1ed8) {
      _DAT_02dc1ed8 = 0;
    }
    iVar2 = _DAT_02dc1ed8 * 0x168;
    if ((*(int *)(iVar2 + 0x2dc2004) == 0) && (*(int *)(iVar2 + 0x2dc2008) == 0)) {
      pcVar5 = (char *)(iVar2 + 0x2dc1edc);
      bVar8 = pcVar5 == (char *)0x0;
      goto LAB_005224ea;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  pcVar5 = (char *)0x0;
  bVar8 = true;
LAB_005224ea:
  if (bVar8) {
    return pcVar5;
  }
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(pcVar5);
  if ((DAT_02db1110 & 1) == 0) {
    DAT_02db1110 = DAT_02db1110 | 1;
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(0x2da8ae0);
    FUN_00564bb0(&DAT_005bea30);
  }
  local_14 = 0;
  iVar6 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",param_1);
  pcVar10 = param_1;
  pcVar7 = pcVar5;
  if (iVar6 < 1) goto LAB_005226f8;
  do {
    cVar1 = *pcVar10;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar7[1] = cVar1;
    pcVar10 = pcVar10 + 2;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  splitpath(param_1,0,0,0,&local_114);
  if (local_114 == '.') {
    uVar4 = 0xffffffff;
    pcVar10 = &local_114;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_114,local_113,~uVar4 - 1);
  }
  iVar6 = _stricmp(&local_114,"wav");
  if (iVar6 == 0) {
    local_14 = engine_dosio_cpp_getFile_FUN_00456a60("sound",param_1,"rb");
    if (local_14 == 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x300;
      core_main_c_FUN_004c8440("Can't open %s",param_1);
    }
    uVar3 = _ftell(local_14);
    *(uint *)(pcVar5 + 0x148) = uVar3;
    iVar6 = sound_sndmain_cpp_parseWavFile_FUN_00521830(local_14,pcVar5 + 0x148,pcVar5);
    if (iVar6 == 0) goto LAB_005226f8;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(pcVar5);
    pcVar5[0x128] = '\0';
    pcVar5[0x129] = '\0';
    pcVar5[0x12a] = '\0';
    pcVar5[299] = '\0';
    pcVar5[300] = '\0';
    pcVar5[0x12d] = '\0';
    pcVar5[0x12e] = '\0';
    pcVar5[0x12f] = '\0';
    pcVar5[0x130] = '\0';
    pcVar5[0x131] = '\0';
    pcVar5[0x132] = '\0';
    pcVar5[0x133] = '\0';
    pcVar5[0x134] = -1;
    pcVar5[0x135] = -1;
    pcVar5[0x136] = -1;
    pcVar5[0x137] = -1;
    uVar3 = *(uint *)(pcVar5 + 0x110);
    *(uint *)(pcVar5 + 0x138) = uVar3;
    *(uint *)(pcVar5 + 0x13c) = uVar3;
    *(uint *)(pcVar5 + 0x140) = uVar3;
    iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pcVar5);
    if (iVar6 == 0) goto LAB_005226f8;
    _fseek(local_14,*(uint *)(pcVar5 + 0x148),0);
    iVar6 = sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(pcVar5,0,*(uint *)(pcVar5 + 0x110))
    ;
    if (iVar6 == 0) {
      pcVar10 = "Failed to lock sample %s\n";
    }
    else {
      uVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                        (pcVar5,*(uint *)(pcVar5 + 0x110),local_14);
      iVar6 = _fread(iVar6,uVar3);
      if ((iVar6 == *(int *)(pcVar5 + 0x110)) && ((*(byte *)(local_14 + 0xc) & 0x20) == 0)) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(pcVar5);
        _fclose(local_14);
        return pcVar5;
      }
      pcVar10 = "Error reading file data for %s\n";
    }
  }
  else {
    iVar6 = _stricmp(&local_114,"mp3");
    if (iVar6 != 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x37d;
      core_main_c_FUN_004c8440("Unknown sample file format extension: %s",param_1);
      return pcVar5;
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(0x2da8ae0,param_1);
    pcVar5[0x104] = '\x10';
    pcVar5[0x105] = '\0';
    pcVar5[0x106] = '\0';
    pcVar5[0x107] = '\0';
    *(uint *)(pcVar5 + 0x108) = _DAT_02da8be4;
    uVar3 = _DAT_02da8be0;
    pcVar5[0x110] = -1;
    pcVar5[0x111] = -1;
    pcVar5[0x112] = -1;
    pcVar5[0x113] = -1;
    *(uint *)(pcVar5 + 0x10c) = uVar3;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(pcVar5);
    if (*(int *)(pcVar5 + 0x110) < 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x34f;
      core_main_c_FUN_004c8440("Don't know length of sample %s",param_1);
    }
    pcVar5[0x128] = '\0';
    pcVar5[0x129] = '\0';
    pcVar5[0x12a] = '\0';
    pcVar5[299] = '\0';
    pcVar5[300] = '\0';
    pcVar5[0x12d] = '\0';
    pcVar5[0x12e] = '\0';
    pcVar5[0x12f] = '\0';
    pcVar5[0x130] = '\0';
    pcVar5[0x131] = '\0';
    pcVar5[0x132] = '\0';
    pcVar5[0x133] = '\0';
    pcVar5[0x134] = -1;
    pcVar5[0x135] = -1;
    pcVar5[0x136] = -1;
    pcVar5[0x137] = -1;
    uVar3 = *(uint *)(pcVar5 + 0x110);
    *(uint *)(pcVar5 + 0x138) = uVar3;
    *(uint *)(pcVar5 + 0x13c) = uVar3;
    *(uint *)(pcVar5 + 0x140) = uVar3;
    iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pcVar5);
    if (iVar6 == 0) goto LAB_005226f8;
    iVar6 = sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(pcVar5,0,*(uint *)(pcVar5 + 0x110))
    ;
    if (iVar6 == 0) {
      pcVar10 = "Failed to lock sample %s\n";
    }
    else {
      iVar6 = sound_mp3_cpp_CMP3Decoder_read_FUN_004e82d0
                        (0x2da8ae0,iVar6,*(uint *)(pcVar5 + 0x110));
      if (iVar6 == *(int *)(pcVar5 + 0x110)) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(pcVar5);
        return pcVar5;
      }
      pcVar10 = "Error decoding file data from %s\n";
    }
  }
  sound_sndmain_cpp_FUN_00529980(pcVar10,param_1);
LAB_005226f8:
  sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260(0x2da8ae0);
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(pcVar5);
  if (local_14 != 0) {
    _fclose(local_14);
  }
  return (char *)0x0;
}
