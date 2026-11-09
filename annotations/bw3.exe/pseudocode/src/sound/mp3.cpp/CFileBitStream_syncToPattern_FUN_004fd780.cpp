// Name: sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004fd780
// Address: 004fd780
// Address Range: [[004fd780, 004fd7f3]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004fd780(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004fd780(CFileBitStream *this_ptr,uint sync_pattern,uint pattern_bits)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(uint *)(this_ptr + 0xc) & 7) != 0) {
    sound_mp3_cpp_FUN_004fd5e0(this_ptr,8 - (*(uint *)(this_ptr + 0xc) & 7));
  }
  uVar1 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,pattern_bits);
  while (((uVar1 & (2 << ((byte)pattern_bits & 0x1f)) - 1U) != sync_pattern &&
         (*(int *)(this_ptr + 0x1c) == 0))) {
    uVar2 = sound_mp3_cpp_FUN_004fd5e0(this_ptr,8);
    uVar1 = uVar1 << 8 | uVar2;
  }
  return (uint)(*(int *)(this_ptr + 0x1c) == 0);
}
