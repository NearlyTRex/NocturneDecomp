// Name: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160
// Address: 0052f160
// Address Range: [[0052f160, 0052f16a]]
// Convention: __cdecl
// Signature: uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder * this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_0052f160(CMP3Decoder *this_ptr)

{
  return (this_ptr->memory_bitstream).total_bits_read;
}
