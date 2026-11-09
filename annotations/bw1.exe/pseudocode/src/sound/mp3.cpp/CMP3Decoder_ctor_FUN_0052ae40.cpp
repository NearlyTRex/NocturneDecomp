// Name: sound_mp3.cpp_CMP3Decoder_ctor_FUN_0052ae40
// Address: 0052ae40
// Address Range: [[0052ae40, 0052ae72]]
// Convention: __cdecl
// Signature: CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(CMP3Decoder *this_ptr)

#include "nocturne.h"

CMP3Decoder * __cdecl sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(CMP3Decoder *this_ptr)

{
  *(uint *)&this_ptr->field_0x108 = 0;
  *(uint *)&this_ptr->field_0x10c = 0;
  memset(&this_ptr->field_0x5320,0,0x2c);
  *(byte *)this_ptr = 0;
  return this_ptr;
}
