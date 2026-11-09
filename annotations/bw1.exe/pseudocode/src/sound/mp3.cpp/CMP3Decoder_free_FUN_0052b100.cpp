// Name: sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100
// Address: 0052b100
// Address Range: [[0052b100, 0052b16a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(CMP3Decoder *this_ptr)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(CMP3Decoder *this_ptr)

{
  int iVar1;
  
  *(uint *)&this_ptr->field_0x10c = 0;
  *(uint *)&this_ptr->field_0x108 = 0;
  iVar1 = *(int *)&this_ptr->field_0x5320;
  if (iVar1 == 0) {
    iVar1 = *(int *)&this_ptr->field_0x5324;
    if (iVar1 == 0) {
      *(byte *)this_ptr = 0;
      return;
    }
  }
  else {
    _fclose(iVar1);
    *(uint *)&this_ptr->field_0x5320 = 0;
    iVar1 = *(int *)&this_ptr->field_0x5324;
    if (iVar1 == 0) {
      *(byte *)this_ptr = 0;
      return;
    }
  }
  FUN_005c09f0(iVar1);
  *(uint *)&this_ptr->field_0x5324 = 0;
  *(byte *)this_ptr = 0;
  return;
}
