// Name: support_codec.cpp_CInStreamPipe_open_FUN_00435270
// Address: 00435270
// Address Range: [[00435270, 004352fd]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CInStreamPipe_open_FUN_00435270(CInStreamPipe *this_ptr,CCodec *codec,void *source,int owns_streams,int buffer_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_codec_cpp_CInStreamPipe_open_FUN_00435270(CInStreamPipe *this_ptr,CCodec *codec,void *source,int owns_streams,int buffer_size)

{
  char *pcVar1;
  
  support_codec_cpp_CInStreamPipe_close_FUN_004351e0(this_ptr);
  this_ptr->codec = codec;
  this_ptr->source = source;
  this_ptr->owns_streams = owns_streams;
  this_ptr->buffer_size = buffer_size;
  pcVar1 = (char *)malloc(buffer_size);
  this_ptr->buffer = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _DAT_01d046a0 = "..\\support\\codec.cpp";
    _DAT_01d046a4 = 0x87b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CInStreamPipe::open - out of memory for %d byte buffer");
  }
  this_ptr->buffer_length = 0;
  this_ptr->position = 0;
  this_ptr->codec_finished = 0;
  (**(code **)((int)this_ptr->codec->vtable + 4))(this_ptr->codec);
  return;
}
