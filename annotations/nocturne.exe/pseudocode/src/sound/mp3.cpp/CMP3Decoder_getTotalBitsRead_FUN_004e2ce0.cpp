// Name: sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
// Address: 004e2ce0
// Address Range: [[004e2ce0, 004e2cea]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(CMP3Decoder *this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0(CMP3Decoder *this_ptr)

{
  return (this_ptr->memory_bitstream).total_bits_read;
}
