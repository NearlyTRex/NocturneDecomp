// Name: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0
// Address: 0052f5b0
// Address Range: [[0052f5b0, 0052f66a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(CFileBitStream *this_ptr,SMpegFrameHeader *header_out)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_0052f5b0(CFileBitStream *this_ptr,SMpegFrameHeader *header_out)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)header_out->mpeg_version;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(this_ptr);
  *puVar1 = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,2);
  puVar1[1] = 4 - uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(this_ptr);
  puVar1[2] = (uint)(uVar2 == 0);
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,4);
  puVar1[3] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,2);
  puVar1[4] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(this_ptr);
  puVar1[5] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(this_ptr);
  puVar1[6] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,2);
  puVar1[7] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,2);
  puVar1[8] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(this_ptr);
  puVar1[9] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_0052ee50(this_ptr);
  puVar1[10] = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,2);
  puVar1[0xb] = uVar2;
  return;
}
