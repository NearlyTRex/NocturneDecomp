// Name: support_codec.cpp_CInStreamPipe_open_FUN_00443f90
// Address: 00443f90
// Address Range: [[00443f90, 0044401d]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CInStreamPipe_open_FUN_00443f90(CInStreamPipe *this_ptr,CCodec *codec,void *source,int owns_streams,int buffer_size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_codec_cpp_CInStreamPipe_open_FUN_00443f90(CInStreamPipe *this_ptr,CCodec *codec,void *source,int owns_streams,int buffer_size)

{
  char *pcVar1;
  
  support_codec_cpp_CInStreamPipe_close_FUN_00443f00(this_ptr);
  this_ptr->codec = codec;
  this_ptr->source = source;
  this_ptr->owns_streams = owns_streams;
  this_ptr->buffer_size = buffer_size;
  pcVar1 = (char *)malloc(buffer_size);
  this_ptr->buffer = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _DAT_01d1d400 = "..\\support\\codec.cpp";
    _DAT_01d1d404 = 0x881;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CInStreamPipe::open - out of memory for %d byte buffer");
  }
  this_ptr->buffer_length = 0;
  this_ptr->position = 0;
  this_ptr->codec_finished = 0;
  (**(code **)((int)this_ptr->codec->vtable + 4))(this_ptr->codec);
  return;
}
