// Name: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130
// Address: 004e3130
// Address Range: [[004e3130, 004e31ea]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)

{
  SMpegFrameHeader *pSVar1;
  uint uVar2;
  
  pSVar1 = *header_out;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(this_ptr);
  pSVar1->mpeg_version = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,2);
  pSVar1->layer = 4 - uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(this_ptr);
  pSVar1->protection = (uint)(uVar2 == 0);
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,4);
  pSVar1->bitrate_index = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,2);
  pSVar1->sampling_rate_index = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(this_ptr);
  pSVar1->padding = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(this_ptr);
  pSVar1->private_bit = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,2);
  pSVar1->channel_mode = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,2);
  pSVar1->mode_extension = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(this_ptr);
  pSVar1->copyright = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0(this_ptr);
  pSVar1->original = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,2);
  pSVar1->emphasis = uVar2;
  return;
}
