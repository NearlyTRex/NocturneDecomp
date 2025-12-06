// Name: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_0052f0e0
// Address: 0052f0e0
// Address Range: [[0052f0e0, 0052f153]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_0052f0e0(CFileBitStream * this_ptr, uint sync_pattern, uint pattern_bits)

#include "nocturne.h"

int __cdecl
sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_0052f0e0
          (CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this_ptr->total_bits_read & 7;
  if (uVar1 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,8 - uVar1);
  }
  uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,pattern_bits);
  while (((uVar1 & (2 << ((byte)pattern_bits & 0x1f)) - 1U) != sync_pattern &&
         (this_ptr->error_flag == 0))) {
    uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,8);
    uVar1 = uVar1 << 8 | uVar2;
  }
  return (uint)(this_ptr->error_flag == 0);
}
