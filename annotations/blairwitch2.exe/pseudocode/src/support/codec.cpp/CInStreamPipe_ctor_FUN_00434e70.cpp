// Name: support_codec.cpp_CInStreamPipe_ctor_FUN_00434e70
// Address: 00434e70
// Address Range: [[00434e70, 00434ebb]]
// Convention: __cdecl
// Signature: CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_ctor_FUN_00434e70(CInStreamPipe *this_ptr)

#include "nocturne.h"

CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_ctor_FUN_00434e70(CInStreamPipe *this_ptr)

{
  CInStreamPipe *pCVar1;
  
  pCVar1 = (CInStreamPipe *)support_trstream_cpp_CInStream_ctor_FUN_0057b9c0(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamPipeVTable;
  pCVar1->codec = (CCodec *)0x0;
  pCVar1->source = (void *)0x0;
  pCVar1->owns_streams = 0;
  pCVar1->buffer = (char *)0x0;
  pCVar1->buffer_size = 0;
  pCVar1->buffer_length = 0;
  pCVar1->position = 0;
  pCVar1->codec_finished = 0;
  return pCVar1;
}
