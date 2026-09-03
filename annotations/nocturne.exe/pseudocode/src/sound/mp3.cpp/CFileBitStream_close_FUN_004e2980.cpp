// Name: sound_mp3.cpp_CFileBitStream_close_FUN_004e2980
// Address: 004e2980
// Address Range: [[004e2980, 004e29c1]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_close_FUN_004e2980(CFileBitStream *this_ptr)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_close_FUN_004e2980(CFileBitStream *this_ptr)

{
  char *ptr;
  
  if (this_ptr->file_handle == (_FILE *)0x0) {
    ptr = this_ptr->buffer;
    if (ptr == (char *)0x0) {
      return;
    }
  }
  else {
    _fclose(this_ptr->file_handle);
    this_ptr->file_handle = (_FILE *)0x0;
    ptr = this_ptr->buffer;
    if (ptr == (char *)0x0) {
      return;
    }
  }
  free(ptr);
  this_ptr->buffer = (char *)0x0;
  return;
}
