// Name: sound_mp3.cpp_FUN_004fd900
// Address: 004fd900
// Address Range: [[004fd900, 004fd955]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_FUN_004fd900(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_FUN_004fd900(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

{
  if (bits_per_byte != 8) {
    _DAT_01d71de0 = "..\\sound\\mp3.cpp";
    _DAT_01d71de4 = 800;
    core_main_c_FUN_004e4330("hputbuf - Not Supported yet!!  File: %s",&DAT_01d94b98);
  }
  *(uint *)(&this_ptr->field_0x131c + (*(uint *)&this_ptr->field_0x1310 & 0xfff) * 4) = byte_value;
  *(int *)&this_ptr->field_0x1310 = *(int *)&this_ptr->field_0x1310 + 1;
  return;
}
