// Name: support_codec.cpp_CInStreamPipe_close_FUN_00441b60
// Address: 00441b60
// Address Range: [[00441b60, 00441bee]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CInStreamPipe_close_FUN_00441b60(CInStreamPipe *this_ptr)

#include "nocturne.h"

void __cdecl support_codec_cpp_CInStreamPipe_close_FUN_00441b60(CInStreamPipe *this_ptr)

{
  CCodec *pCVar1;
  uint *puVar2;
  
  pCVar1 = this_ptr->codec;
  if (pCVar1 != (CCodec *)0x0) {
    if ((this_ptr->owns_streams != 0) && (pCVar1 != (CCodec *)0x0)) {
      (**(code **)pCVar1->vtable)(pCVar1,2);
    }
    this_ptr->codec = (CCodec *)0x0;
  }
  puVar2 = this_ptr->source;
  if (puVar2 != (uint *)0x0) {
    if ((this_ptr->owns_streams != 0) && (puVar2 != (uint *)0x0)) {
      (**(code **)*puVar2)(puVar2,2);
    }
    this_ptr->source = (void *)0x0;
  }
  if (this_ptr->buffer != (char *)0x0) {
    FUN_005a3770(this_ptr->buffer);
    this_ptr->buffer = (char *)0x0;
  }
  this_ptr->buffer_size = 0;
  this_ptr->buffer_length = 0;
  this_ptr->position = 0;
  this_ptr->codec_finished = 0;
  this_ptr->owns_streams = 0;
  return;
}
