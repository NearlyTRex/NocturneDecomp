// Name: sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0
// Address: 0052ecf0
// Address Range: [[0052ecf0, 0052ede8]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_init_FUN_0052ecf0 (CFileBitStream *this_ptr,FILE *file_handle,int buffer_size,int stream_length)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CFileBitStream_init_FUN_0052ecf0
          (CFileBitStream *this_ptr,FILE *file_handle,int buffer_size,int stream_length)

{
  long lVar1;
  char *pcVar2;
  
  if (this_ptr->file_handle != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(this_ptr->file_handle,"..\\sound\\mp3.cpp",0x20b);
    this_ptr->file_handle = (FILE *)0x0;
  }
  if (this_ptr->buffer != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->buffer,"..\\sound\\mp3.cpp",0x210);
    this_ptr->buffer = (char *)0x0;
  }
  this_ptr->file_handle = file_handle;
  lVar1 = crt_stdio_c_ftell_FUN_00601560(file_handle);
  this_ptr->stream_start_position = lVar1;
  this_ptr->stream_length = stream_length;
  this_ptr->buffer_size = buffer_size;
  pcVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(buffer_size,"..\\sound\\mp3.cpp",0x1ff);
  this_ptr->buffer = pcVar2;
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0x200;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Out of memory.  File: %s",g_CurrentMp3Filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc(this_ptr->file_handle,this_ptr->stream_start_position,0);
  this_ptr->current_byte_index = 0;
  this_ptr->bits_available = 0;
  this_ptr->total_bits_read = 0;
  this_ptr->end_of_stream_flag = 0;
  this_ptr->error_flag = 0;
  this_ptr->bytes_remaining = this_ptr->stream_length;
  return;
}
