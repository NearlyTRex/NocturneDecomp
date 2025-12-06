// Name: sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0
// Address: 00534ba0
// Address Range: [[00534ba0, 00534d06]]
// Convention: __cdecl
// Signature: int sound_mp3.cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder * this_ptr, int sample_offset)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_seek_FUN_00534ba0(CMP3Decoder *this_ptr,int sample_offset)

{
  int iVar1;
  
  this_ptr->available_samples = 0;
  this_ptr->decode_buffer_pos = (short *)0x0;
  crt_stdio_c_fseek_FUN_005ffacc
            ((this_ptr->file_bitstream).file_handle,(this_ptr->file_bitstream).stream_start_position
             ,0);
  (this_ptr->file_bitstream).current_byte_index = 0;
  (this_ptr->file_bitstream).bits_available = 0;
  (this_ptr->file_bitstream).total_bits_read = 0;
  (this_ptr->file_bitstream).end_of_stream_flag = 0;
  (this_ptr->file_bitstream).error_flag = 0;
  (this_ptr->file_bitstream).bytes_remaining = (this_ptr->file_bitstream).stream_length;
  this_ptr->field8_0x534c = 0;
  (this_ptr->memory_bitstream).buffer_size_limit = 0;
  (this_ptr->memory_bitstream).total_bits_read = 0;
  (this_ptr->memory_bitstream).current_dword_index = 0;
  (this_ptr->memory_bitstream).bits_available = 8;
  this_ptr->synthesis_buffer_index[0] = 0x40;
  this_ptr->synthesis_buffer_index[1] = 0x40;
  crt_memory_c_memset_FUN_005fde40(this_ptr->synthesis_v_buffer,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(this_ptr->synthesis_history,0,0x1200);
  if (0x8ff < sample_offset) {
    do {
      iVar1 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(this_ptr);
      if (iVar1 < 1) {
        return 0;
      }
      sample_offset = sample_offset - iVar1;
    } while (0x8ff < sample_offset);
  }
  if (0 < sample_offset) {
    while( true ) {
      iVar1 = sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00534d40(this_ptr);
      this_ptr->available_samples = iVar1;
      if (iVar1 < 1) {
        return 0;
      }
      if (sample_offset < iVar1) break;
      this_ptr->available_samples = 0;
      sample_offset = sample_offset - iVar1;
      if (sample_offset < 1) {
        return 1;
      }
    }
    this_ptr->available_samples = iVar1 - sample_offset;
    this_ptr->decode_buffer_pos = this_ptr->decode_buffer + sample_offset * this_ptr->num_channels;
    return 1;
  }
  return 1;
}
