// Name: sound_mp3.cpp_CFileBitStream_reset_FUN_004e2850
// Address: 004e2850
// Address Range: [[004e2850, 004e2890]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_reset_FUN_004e2850(CFileBitStream *this_ptr)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_reset_FUN_004e2850(CFileBitStream *this_ptr)

{
  _fseek(this_ptr->file_handle,this_ptr->stream_start_position,0);
  this_ptr->current_byte_index = 0;
  this_ptr->bits_available = 0;
  this_ptr->total_bits_read = 0;
  this_ptr->end_of_stream_flag = 0;
  this_ptr->error_flag = 0;
  this_ptr->bytes_remaining = this_ptr->stream_length;
  return;
}
