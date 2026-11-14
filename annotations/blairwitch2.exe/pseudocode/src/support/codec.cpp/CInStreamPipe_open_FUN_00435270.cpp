// Name: support_codec.cpp_CInStreamPipe_open_FUN_00435270
// Address: 00435270
// Address Range: [[00435270, 004352fd]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CInStreamPipe_open_FUN_00435270(CInStreamPipe *this_ptr,CCodec *param_2,void *param_3,int param_4,ulong param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_codec_cpp_CInStreamPipe_open_FUN_00435270(CInStreamPipe *this_ptr,CCodec *param_2,void *param_3,int param_4,ulong param_5)

{
  char *pcVar1;
  uint uVar2;
  
  support_codec_cpp_CInStreamPipe_close_FUN_004351e0(this_ptr);
  this_ptr->codec = param_2;
  this_ptr->source = param_3;
  this_ptr->owns_streams = param_4;
  this_ptr->buffer_size = param_5;
  pcVar1 = (char *)malloc(param_5);
  this_ptr->buffer = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _DAT_01d046a0 = "..\\support\\codec.cpp";
    _DAT_01d046a4 = 0x87b;
    core_main_c_FUN_004e4500("CInStreamPipe::open - out of memory for %d byte buffer",this_ptr->buffer_size);
  }
  this_ptr->buffer_length = 0;
  this_ptr->position = 0;
  this_ptr->codec_finished = 0;
  uVar2 = (**(code **)((int)this_ptr->codec->vtable + 4))(this_ptr->codec);
  return uVar2;
}
