// Name: sound_mp3.cpp_CMP3Decoder_free_FUN_0052b100
// Address: 0052b100
// Address Range: [[0052b100, 0052b16a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(CMP3Decoder *this_ptr)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(CMP3Decoder *this_ptr)

{
  _FILE *file_handle;
  char *ptr;
  
  this_ptr->decode_buffer_pos = (short *)0x0;
  this_ptr->available_samples = 0;
  file_handle = (this_ptr->file_bitstream).file_handle;
  if (file_handle == (_FILE *)0x0) {
    ptr = (this_ptr->file_bitstream).buffer;
    if (ptr == (char *)0x0) {
      this_ptr->filename[0] = '\0';
      return;
    }
  }
  else {
    _fclose(file_handle);
    (this_ptr->file_bitstream).file_handle = (_FILE *)0x0;
    ptr = (this_ptr->file_bitstream).buffer;
    if (ptr == (char *)0x0) {
      this_ptr->filename[0] = '\0';
      return;
    }
  }
  debugFree(ptr);
  (this_ptr->file_bitstream).buffer = (char *)0x0;
  this_ptr->filename[0] = '\0';
  return;
}
