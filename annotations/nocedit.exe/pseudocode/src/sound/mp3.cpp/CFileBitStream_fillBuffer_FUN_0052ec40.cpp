// Name: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40
// Address: 0052ec40
// Address Range: [[0052ec40, 0052ec9f]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40(CFileBitStream * this_ptr)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_0052ec40(CFileBitStream *this_ptr)

{
  SIZE_T SVar1;
  char *buffer;
  int iVar2;
  
  iVar2 = (this_ptr->buffer_size + -2) - this_ptr->current_byte_index;
  do {
    if (iVar2 < 0) {
      return;
    }
    while( true ) {
      if (this_ptr->end_of_stream_flag != 0) {
        return;
      }
      SVar1 = 0;
      if (0 < this_ptr->bytes_remaining) {
        buffer = this_ptr->buffer + iVar2;
        iVar2 = iVar2 + -1;
        SVar1 = crt_stdio_c_fread_FUN_005fd990(buffer,1,1,this_ptr->file_handle);
      }
      if (SVar1 == 1) break;
      this_ptr->end_of_stream_flag = iVar2 + 1;
      if (iVar2 < 0) {
        return;
      }
    }
    this_ptr->bytes_remaining = this_ptr->bytes_remaining + -1;
  } while( true );
}
