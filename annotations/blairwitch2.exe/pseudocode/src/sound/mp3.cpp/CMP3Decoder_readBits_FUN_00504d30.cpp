// Name: sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30
// Address: 00504d30
// Address Range: [[00504d30, 00504e0e]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder *this_ptr,uint num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder *this_ptr,uint num_bits)

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
        _DAT_01d046a0 = "..\\sound\\mp3.cpp";
        _DAT_01d046a4 = 0x30a;
        core_main_c_FUN_004e4500("Buffer overflow!!  File: %s",&DAT_01d23558);
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
                     *(uint *)(&DAT_00619250 + uVar1 * 4)) >> (local_14 & 0x1f)) <<
                    ((byte)num_bits & 0x1f);
    (this_ptr->memory_bitstream).bits_available = uVar2;
  }
  return uVar3;
}
