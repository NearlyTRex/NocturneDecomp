// Name: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00504e80
// Address: 00504e80
// Address Range: [[00504e80, 00504ed6]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_00504e80(CMP3Decoder *this_ptr,int num_bits)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_00504e80(CMP3Decoder *this_ptr,int num_bits)

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
