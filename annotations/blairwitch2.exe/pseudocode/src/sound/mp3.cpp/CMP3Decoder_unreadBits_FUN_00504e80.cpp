// Name: sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00504e80
// Address: 00504e80
// Address Range: [[00504e80, 00504ed6]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_00504e80(CMP3Decoder *this_ptr,int num_bits)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_unreadBits_FUN_00504e80(CMP3Decoder *this_ptr,int num_bits)

{
  uint uVar1;
  
  uVar1 = *(int *)&this_ptr->field_0x531c + num_bits;
  *(uint *)&this_ptr->field_0x531c = uVar1;
  *(int *)&this_ptr->field_0x1314 = *(int *)&this_ptr->field_0x1314 - num_bits;
  while (7 < uVar1) {
    *(int *)&this_ptr->field_0x531c = *(int *)&this_ptr->field_0x531c + -8;
    uVar1 = *(uint *)&this_ptr->field_0x531c;
    *(int *)&this_ptr->field_0x1318 = *(int *)&this_ptr->field_0x1318 + -1;
  }
  return;
}
