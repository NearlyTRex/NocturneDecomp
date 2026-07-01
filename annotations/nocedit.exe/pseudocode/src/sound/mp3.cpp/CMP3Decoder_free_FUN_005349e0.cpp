// Name: sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0
// Address: 005349e0
// Address Range: [[005349e0, 00534a5e]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder *this_ptr)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(CMP3Decoder *this_ptr)

{
  _FILE *file_ptr;
  char *ptr;
  
  this_ptr->decode_buffer_pos = (short *)0x0;
  this_ptr->available_samples = 0;
  file_ptr = (this_ptr->file_bitstream).file_handle;
  if (file_ptr == (_FILE *)0x0) {
    ptr = (this_ptr->file_bitstream).buffer;
    if (ptr == (char *)0x0) {
      this_ptr->filename[0] = '\0';
      return;
    }
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\sound\\mp3.cpp",523);
    (this_ptr->file_bitstream).file_handle = (_FILE *)0x0;
    ptr = (this_ptr->file_bitstream).buffer;
    if (ptr == (char *)0x0) {
      this_ptr->filename[0] = '\0';
      return;
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\sound\\mp3.cpp",528);
  (this_ptr->file_bitstream).buffer = (char *)0x0;
  this_ptr->filename[0] = '\0';
  return;
}
