// Name: sound_mp3.cpp_CMP3Decoder_putByte_FUN_00525ff0
// Address: 00525ff0
// Address Range: [[00525ff0, 00526045]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_00525ff0(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_00525ff0(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

{
  if (bits_per_byte != 8) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 800;
    core_main_c_FUN_005030e0("hputbuf - Not Supported yet!!  File: %s",&DAT_01d404c8);
  }
  (this_ptr->memory_bitstream).frame_buffer[(this_ptr->memory_bitstream).buffer_size_limit & 0xfff]
       = byte_value;
  (this_ptr->memory_bitstream).buffer_size_limit =
       (this_ptr->memory_bitstream).buffer_size_limit + 1;
  return;
}
