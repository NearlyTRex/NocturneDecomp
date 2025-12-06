// Name: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0
// Address: 0052f2c0
// Address Range: [[0052f2c0, 0052f316]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_0052f2c0(CMP3Decoder * this_ptr, int num_bits)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_0052f2c0(CMP3Decoder *this_ptr,int num_bits)

{
  uint uVar1;
  
  uVar1 = (this_ptr->memory_bitstream).bits_available + num_bits;
  (this_ptr->memory_bitstream).bits_available = uVar1;
  (this_ptr->memory_bitstream).total_bits_read =
       (this_ptr->memory_bitstream).total_bits_read - num_bits;
  while (7 < uVar1) {
    (this_ptr->memory_bitstream).bits_available = (this_ptr->memory_bitstream).bits_available - 8;
    uVar1 = (this_ptr->memory_bitstream).bits_available;
    (this_ptr->memory_bitstream).current_dword_index =
         (this_ptr->memory_bitstream).current_dword_index - 1;
  }
  return;
}
