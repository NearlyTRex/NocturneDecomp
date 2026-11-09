// Name: sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_00504ee0
// Address: 00504ee0
// Address Range: [[00504ee0, 00504f0f]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_00504ee0(CMP3Decoder *this_ptr,int num_bytes)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_00504ee0(CMP3Decoder *this_ptr,int num_bytes)

{
  *(int *)&this_ptr->field_0x1314 = *(int *)&this_ptr->field_0x1314 + num_bytes * -8;
  *(int *)&this_ptr->field_0x1318 = *(int *)&this_ptr->field_0x1318 - num_bytes;
  return;
}
