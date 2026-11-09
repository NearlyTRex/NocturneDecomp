// Name: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_005260b0
// Address: 005260b0
// Address Range: [[005260b0, 005260df]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_005260b0(CMP3Decoder *this_ptr,int num_bytes)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_005260b0(CMP3Decoder *this_ptr,int num_bytes)

{
  *(int *)&this_ptr->field_0x1314 = *(int *)&this_ptr->field_0x1314 + num_bytes * -8;
  *(int *)&this_ptr->field_0x1318 = *(int *)&this_ptr->field_0x1318 - num_bytes;
  return;
}
