// Name: sound_mp3.cpp_CMP3Decoder_putByte_FUN_004e2de0
// Address: 004e2de0
// Address Range: [[004e2de0, 004e2e35]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0(int param_1,uint param_2,int param_3)

{
  if (param_3 != 8) {
    PTR_01cc4800 = "..\\sound\\mp3.cpp";
    INT_01cc4804 = 0x2d4;
    core_main_c_FUN_004c8440("hputbuf - Not Supported yet!!  File: %s",&DAT_01cd8b28);
  }
  *(uint *)(param_1 + 0x131c + (*(uint *)(param_1 + 0x1310) & 0xfff) * 4) = param_2;
  *(int *)(param_1 + 0x1310) = *(int *)(param_1 + 0x1310) + 1;
  return;
}
