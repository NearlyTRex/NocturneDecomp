// Name: sound_mp3.cpp_CMP3Decoder_ctor_FUN_00502750
// Address: 00502750
// Address Range: [[00502750, 00502782]]
// Convention: __cdecl
// Signature: CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(CMP3Decoder *this_ptr)

#include "nocturne.h"

CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(CMP3Decoder *this_ptr)

{
  this_ptr->available_samples = 0;
  this_ptr->decode_buffer_pos = (short *)0x0;
  memset(&this_ptr->file_bitstream,0,0x2c);
  this_ptr->filename[0] = '\0';
  return this_ptr;
}
