// Name: sound_mp3.cpp_CFileBitStream_init_FUN_004e28a0
// Address: 004e28a0
// Address Range: [[004e28a0, 004e2977]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_init_FUN_004e28a0(CFileBitStream *this_ptr,_FILE *param_2,ulong param_3,int param_4)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_init_FUN_004e28a0(CFileBitStream *this_ptr,_FILE *param_2,ulong param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  
  if (this_ptr->file_handle != (_FILE *)0x0) {
    _fclose(this_ptr->file_handle);
    this_ptr->file_handle = (_FILE *)0x0;
  }
  if (this_ptr->buffer != (char *)0x0) {
    free(this_ptr->buffer);
    this_ptr->buffer = (char *)0x0;
  }
  this_ptr->file_handle = param_2;
  lVar1 = _ftell(param_2);
  this_ptr->stream_start_position = lVar1;
  this_ptr->stream_length = param_4;
  this_ptr->buffer_size = param_3;
  pcVar2 = (char *)malloc(param_3);
  this_ptr->buffer = pcVar2;
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 511;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Out of memory.  File: %s",&DAT_01cd8b28);
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
