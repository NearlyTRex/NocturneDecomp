// Name: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_005260b0
// Address: 005260b0
// Address Range: [[005260b0, 005260df]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_005260b0(CMP3Decoder *this_ptr,int num_bytes)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_005260b0(CMP3Decoder *this_ptr,int num_bytes)

{
  (this_ptr->memory_bitstream).total_bits_read =
       (this_ptr->memory_bitstream).total_bits_read + num_bytes * -8;
  (this_ptr->memory_bitstream).current_dword_index =
       (this_ptr->memory_bitstream).current_dword_index - num_bytes;
  return;
}
