// Name: sound_mp3.cpp_CMP3Decoder_getTotalSamples_FUN_00534d10
// Address: 00534d10
// Address Range: [[00534d10, 00534d3a]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_getTotalSamples_FUN_00534d10(CMP3Decoder *this_ptr)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_getTotalSamples_FUN_00534d10(CMP3Decoder *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(this_ptr,0);
  while( true ) {
    iVar1 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(this_ptr,(short *)0x0);
    if (iVar1 < 1) break;
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}
