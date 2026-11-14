// Name: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170
// Address: 00505170
// Address Range: [[00505170, 0050522a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_00505170(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_00505170(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)

{
  SMpegFrameHeader *pSVar1;
  uint uVar2;
  
  pSVar1 = *header_out;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(this_ptr);
  pSVar1->mpeg_version = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,2);
  pSVar1->layer = 4 - uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(this_ptr);
  pSVar1->protection = (uint)(uVar2 == 0);
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,4);
  pSVar1->bitrate_index = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,2);
  pSVar1->sampling_rate_index = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(this_ptr);
  pSVar1->padding = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(this_ptr);
  pSVar1->private_bit = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,2);
  pSVar1->channel_mode = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,2);
  pSVar1->mode_extension = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(this_ptr);
  pSVar1->copyright = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_00504a10(this_ptr);
  pSVar1->original = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,2);
  pSVar1->emphasis = uVar2;
  return;
}
