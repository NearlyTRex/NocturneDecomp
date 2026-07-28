// Name: sound_mp3.cpp_CMP3Decoder_ctor_FUN_004e7d90
// Address: 004e7d90
// Address Range: [[004e7d90, 004e7dc2]]
// Convention: __cdecl
// Signature: CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(CMP3Decoder *this_ptr)

#include "nocturne.h"

CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(CMP3Decoder *this_ptr)

{
  this_ptr->available_samples = 0;
  this_ptr->decode_buffer_pos = (short *)0x0;
  memset(&this_ptr->file_bitstream,0,0x2c);
  this_ptr->filename[0] = '\0';
  return this_ptr;
}
