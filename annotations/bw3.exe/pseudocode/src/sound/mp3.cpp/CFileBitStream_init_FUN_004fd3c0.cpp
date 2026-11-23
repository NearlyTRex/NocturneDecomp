// Name: sound_mp3.cpp_CFileBitStream_init_FUN_004fd3c0
// Address: 004fd3c0
// Address Range: [[004fd3c0, 004fd497]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_init_FUN_004fd3c0(CFileBitStream *this_ptr,_FILE *file_handle,int buffer_size,int stream_length)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_init_FUN_004fd3c0(CFileBitStream *this_ptr,_FILE *file_handle,int buffer_size,int stream_length)

{
  long lVar1;
  char *pcVar2;
  
  if (this_ptr->file_handle != (_FILE *)0x0) {
    _fclose(this_ptr->file_handle);
    this_ptr->file_handle = (_FILE *)0x0;
  }
  if (this_ptr->buffer != (char *)0x0) {
    debugFree(this_ptr->buffer);
    this_ptr->buffer = (char *)0x0;
  }
  this_ptr->file_handle = file_handle;
  lVar1 = _ftell(file_handle);
  this_ptr->stream_start_position = lVar1;
  this_ptr->stream_length = stream_length;
  this_ptr->buffer_size = buffer_size;
  pcVar2 = (char *)malloc(buffer_size);
  this_ptr->buffer = pcVar2;
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 573;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Out of memory.  File: %s");
  }
  _fseek(this_ptr->file_handle,this_ptr->stream_start_position,0);
  this_ptr->current_byte_index = 0;
  this_ptr->bits_available = 0;
  this_ptr->total_bits_read = 0;
  this_ptr->end_of_stream_flag = 0;
  this_ptr->error_flag = 0;
  this_ptr->bytes_remaining = this_ptr->stream_length;
  return;
}
