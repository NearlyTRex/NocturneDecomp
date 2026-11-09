// Name: sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004fdc50
// Address: 004fdc50
// Address Range: [[004fdc50, 004fdd0a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004fdc50(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004fdc50(CFileBitStream *this_ptr,SMpegFrameHeader **header_out)

{
  SMpegFrameHeader *pSVar1;
  uint uVar2;
  
  pSVar1 = *header_out;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0(this_ptr);
  *(uint *)pSVar1 = uVar2;
  uVar2 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,2);
  *(uint *)(pSVar1 + 4) = 4 - uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0(this_ptr);
  *(uint *)(pSVar1 + 8) = (uint)(uVar2 == 0);
  uVar2 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,4);
  *(uint *)(pSVar1 + 0xc) = uVar2;
  uVar2 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,2);
  *(uint *)(pSVar1 + 0x10) = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0(this_ptr);
  *(uint *)(pSVar1 + 0x14) = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0(this_ptr);
  *(uint *)(pSVar1 + 0x18) = uVar2;
  uVar2 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,2);
  *(uint *)(pSVar1 + 0x1c) = uVar2;
  uVar2 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,2);
  *(uint *)(pSVar1 + 0x20) = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0(this_ptr);
  *(uint *)(pSVar1 + 0x24) = uVar2;
  uVar2 = sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0(this_ptr);
  *(uint *)(pSVar1 + 0x28) = uVar2;
  uVar2 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,2);
  *(uint *)(pSVar1 + 0x2c) = uVar2;
  return;
}
