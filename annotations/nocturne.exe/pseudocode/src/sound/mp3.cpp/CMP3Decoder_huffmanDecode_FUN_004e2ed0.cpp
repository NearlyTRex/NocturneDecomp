// Name: sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0
// Address: 004e2ed0
// Address Range: [[004e2ed0, 004e3127]]
// Convention: unknown
// Signature: undefined4 sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0(CMP3Decoder *param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_mp3_cpp_CMP3Decoder_huffmanDecode_FUN_004e2ed0(CMP3Decoder *param_1,char *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_14;
  
  uVar4 = 0x80000000;
  uVar3 = 0;
  local_14 = 1;
  if (param_2 == (char *)0xffffffe0) {
    return 2;
  }
  if (*(int *)(param_2 + 0x824) == 0) {
    *param_4 = 0;
    *param_3 = 0;
    return 0;
  }
  do {
    if (param_2[uVar3 * 2 + 0x20] == '\0') {
      *param_3 = (int)(uint)(byte)param_2[uVar3 * 2 + 0x21] >> 4;
      *param_4 = (uint)(param_2[uVar3 * 2 + 0x21] & 0xf);
      local_14 = 0;
      goto LAB_004e2f39;
    }
    uVar2 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(param_1);
    if (uVar2 == 0) {
      do {
        iVar1 = uVar3 * 2;
        uVar3 = uVar3 + (byte)param_2[iVar1 + 0x20];
      } while (0xf9 < (byte)param_2[iVar1 + 0x20]);
    }
    else {
      do {
        iVar1 = uVar3 * 2;
        uVar3 = uVar3 + (byte)param_2[iVar1 + 0x21];
      } while (0xf9 < (byte)param_2[iVar1 + 0x21]);
    }
    uVar4 = uVar4 >> 1;
  } while ((uVar4 != 0) || (uVar3 < _DAT_01cd944c));
  PTR_01cc4800 = "..\\sound\\mp3.cpp";
  INT_01cc4804 = 800;
  core_main_c_FUN_004c8440("Illegal Huffman code in data.  File: %s",&DAT_01cd8b28);
LAB_004e2f39:
  if ((*param_2 == '3') && ((param_2[1] == '2' || (param_2[1] == '3')))) {
    *param_5 = (int)*param_4 >> 3 & 1;
    *param_6 = (int)*param_4 >> 2 & 1;
    *param_3 = (int)*param_4 >> 1 & 1;
    *param_4 = *param_4 & 1;
    if ((*param_5 != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(param_1), uVar3 == 1)) {
      *param_5 = -*param_5;
    }
    if ((*param_6 != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(param_1), uVar3 == 1)) {
      *param_6 = -*param_6;
    }
    if ((*param_3 != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(param_1), uVar3 == 1)) {
      *param_3 = -*param_3;
    }
  }
  else {
    if ((*(uint *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 4) - 1U == *param_3)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(param_1,*(uint *)(param_2 + 0xc));
      *param_3 = *param_3 + uVar3;
    }
    if ((*param_3 != 0) &&
       (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(param_1), uVar3 == 1)) {
      *param_3 = -*param_3;
    }
    if ((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 8) - 1U == *param_4)) {
      uVar3 = sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(param_1,*(uint *)(param_2 + 0xc));
      *param_4 = *param_4 + uVar3;
    }
  }
  if ((*param_4 != 0) &&
     (uVar3 = sound_mp3_cpp_CMP3Decoder_readBit_FUN_004e2dd0(param_1), uVar3 == 1)) {
    *param_4 = -*param_4;
  }
  return local_14;
}
