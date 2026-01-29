// Name: sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0
// Address: 0052edf0
// Address Range: [[0052edf0, 0052ee45]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_close_FUN_0052edf0(CFileBitStream *this_ptr)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_close_FUN_0052edf0(CFileBitStream *this_ptr)

{
  char *ptr;
  
  if (this_ptr->file_handle == (_FILE *)0x0) {
    ptr = this_ptr->buffer;
    if (ptr == (char *)0x0) {
      return;
    }
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(this_ptr->file_handle,"..\\sound\\mp3.cpp",0x20b);
    this_ptr->file_handle = (_FILE *)0x0;
    ptr = this_ptr->buffer;
    if (ptr == (char *)0x0) {
      return;
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\sound\\mp3.cpp",0x210);
  this_ptr->buffer = (char *)0x0;
  return;
}
