// Name: support_codec.cpp_CInStreamPipe_ctor_FUN_00443b90
// Address: 00443b90
// Address Range: [[00443b90, 00443bdb]]
// Convention: unknown
// Signature: CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_00443b90(CInStreamPipe *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_00443b90(CInStreamPipe *this_ptr)

{
  CInStreamPipe *pCVar1;
  
  pCVar1 = (CInStreamPipe *)support_trstream_cpp_FUN_0059f540(this_ptr);
  pCVar1->vtable = &g_CInStreamPipeVTable;
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
