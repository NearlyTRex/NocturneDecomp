// Name: sound_mp3.cpp_CMP3Decoder_putByte_FUN_0052f260
// Address: 0052f260
// Address Range: [[0052f260, 0052f2b5]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_putByte_FUN_0052f260(CMP3Decoder *this_ptr,uint byte_value,uint bits_per_byte)

{
  if (bits_per_byte != 8) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x2d5;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("hputbuf - Not Supported yet!!  File: %s",g_CurrentMp3Filename);
  }
  (this_ptr->memory_bitstream).frame_buffer[(this_ptr->memory_bitstream).buffer_size_limit & 0xfff]
       = byte_value;
  (this_ptr->memory_bitstream).buffer_size_limit =
       (this_ptr->memory_bitstream).buffer_size_limit + 1;
  return;
}
