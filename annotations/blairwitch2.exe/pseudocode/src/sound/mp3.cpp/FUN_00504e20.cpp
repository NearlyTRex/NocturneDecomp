// Name: sound_mp3.cpp_FUN_00504e20
// Address: 00504e20
// Address Range: [[00504e20, 00504e75]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_FUN_00504e20(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_FUN_00504e20(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

{
  if (bits_per_byte != 8) {
    _DAT_01d046a0 = "..\\sound\\mp3.cpp";
    _DAT_01d046a4 = 800;
    core_main_c_FUN_004e4500("hputbuf - Not Supported yet!!  File: %s",&DAT_01d23558);
  }
  *(uint *)(&this_ptr->field_0x131c + (*(uint *)&this_ptr->field_0x1310 & 0xfff) * 4) = byte_value;
  *(int *)&this_ptr->field_0x1310 = *(int *)&this_ptr->field_0x1310 + 1;
  return;
}
