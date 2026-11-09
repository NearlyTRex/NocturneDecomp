// Name: sound_mp3.cpp_CMP3Decoder_seek_FUN_00502bc0
// Address: 00502bc0
// Address Range: [[00502bc0, 00502d26]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00502bc0(CMP3Decoder *this_ptr,int sample_offset)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00502bc0(CMP3Decoder *this_ptr,int sample_offset)

{
  int iVar1;
  
  *(uint *)&this_ptr->field_0x108 = 0;
  *(uint *)&this_ptr->field_0x10c = 0;
  _fseek(*(uint *)&this_ptr->field_0x5320,*(uint *)&this_ptr->field_0x5340,0);
  *(uint *)&this_ptr->field_0x5330 = 0;
  *(uint *)&this_ptr->field_0x5334 = 0;
  *(uint *)&this_ptr->field_0x532c = 0;
  *(uint *)&this_ptr->field_0x5338 = 0;
  *(uint *)&this_ptr->field_0x533c = 0;
  *(uint *)&this_ptr->field_0x5348 = *(uint *)&this_ptr->field_0x5344;
  *(uint *)&this_ptr->field_0x534c = 0;
  *(uint *)&this_ptr->field_0x1310 = 0;
  *(uint *)&this_ptr->field_0x1314 = 0;
  *(uint *)&this_ptr->field_0x1318 = 0;
  *(uint *)&this_ptr->field_0x531c = 8;
  *(uint *)&this_ptr->field_0x7350 = 0x40;
  *(uint *)&this_ptr->field_0x7354 = 0x40;
  memset(&this_ptr->field_0x5350,0,0x2000);
  memset(&this_ptr->field_0x7430,0,0x1200);
  for (; 0x8ff < sample_offset; sample_offset = sample_offset - iVar1) {
    iVar1 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00502d60(this_ptr,(short *)0x0);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (0 < sample_offset) {
    while( true ) {
      iVar1 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00502d60
                        (this_ptr,(short *)&this_ptr->field_0x110);
      *(int *)&this_ptr->field_0x108 = iVar1;
      if (iVar1 < 1) {
        return 0;
      }
      if (sample_offset < iVar1) break;
      *(uint *)&this_ptr->field_0x108 = 0;
      sample_offset = sample_offset - iVar1;
      if (sample_offset < 1) {
        return 1;
      }
    }
    *(int *)&this_ptr->field_0x108 = iVar1 - sample_offset;
    *(byte **)&this_ptr->field_0x10c =
         &this_ptr->field_0x110 + sample_offset * *(int *)&this_ptr->field_0x104 * 2;
    return 1;
  }
  return 1;
}
