// Name: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0
// Address: 00525ef0
// Address Range: [[00525ef0, 00525efa]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder *this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder *this_ptr)

{
  return (this_ptr->memory_bitstream).total_bits_read;
}
