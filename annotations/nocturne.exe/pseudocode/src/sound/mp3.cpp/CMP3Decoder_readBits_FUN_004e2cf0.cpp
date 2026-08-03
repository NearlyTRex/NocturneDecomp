// Name: sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0
// Address: 004e2cf0
// Address Range: [[004e2cf0, 004e2dce]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(CMP3Decoder *this_ptr,uint num_bits)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0(CMP3Decoder *this_ptr,uint num_bits)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte local_14;
  
  uVar3 = 0;
  (this_ptr->memory_bitstream).total_bits_read =
       (this_ptr->memory_bitstream).total_bits_read + num_bits;
  while (0 < (int)num_bits) {
    if ((this_ptr->memory_bitstream).bits_available == 0) {
      (this_ptr->memory_bitstream).bits_available = 8;
      uVar2 = (this_ptr->memory_bitstream).current_dword_index + 1;
      (this_ptr->memory_bitstream).current_dword_index = uVar2;
      if ((this_ptr->memory_bitstream).buffer_size_limit < uVar2) {
        g_CHAR_PTR_01cc4800 = "..\\sound\\mp3.cpp";
        g_INT_01cc4804 = 0x2c0;
        core_main_c_FUN_004c8440("Buffer overflow!!  File: %s",&DAT_01cd8b28);
      }
    }
    uVar2 = (this_ptr->memory_bitstream).bits_available;
    if (num_bits < uVar2) {
      uVar2 = num_bits;
    }
    uVar1 = (this_ptr->memory_bitstream).bits_available;
    num_bits = num_bits - uVar2;
    uVar2 = uVar1 - uVar2;
    local_14 = (byte)uVar2;
    uVar3 = uVar3 | (((this_ptr->memory_bitstream).frame_buffer
                      [(this_ptr->memory_bitstream).current_dword_index & 0xfff] &
                     *(uint *)(&DAT_005bc010 + uVar1 * 4)) >> (local_14 & 0x1f)) <<
                    ((byte)num_bits & 0x1f);
    (this_ptr->memory_bitstream).bits_available = uVar2;
  }
  return uVar3;
}
