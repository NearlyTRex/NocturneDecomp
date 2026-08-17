// Name: sound_mp3.cpp_CMP3Decoder_putByte_FUN_004e2de0
// Address: 004e2de0
// Address Range: [[004e2de0, 004e2e35]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

{
  if (bits_per_byte != 8) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 724;
    core_main_c_displayErrorAndQuit_FUN_004c8440("hputbuf - Not Supported yet!!  File: %s",&DAT_01cd8b28);
  }
  (this_ptr->memory_bitstream).frame_buffer[(this_ptr->memory_bitstream).buffer_size_limit & 0xfff]
       = byte_value;
  (this_ptr->memory_bitstream).buffer_size_limit =
       (this_ptr->memory_bitstream).buffer_size_limit + 1;
  return;
}
