// Name: support_codec.cpp_CInStreamPipe_ctor_FUN_004417f0
// Address: 004417f0
// Address Range: [[004417f0, 0044183b]]
// Convention: unknown
// Signature: CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_004417f0(CInStreamPipe *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_004417f0(CInStreamPipe *this_ptr)

{
  CInStreamPipe *pCVar1;
  
  pCVar1 = (CInStreamPipe *)support_trstream_cpp_FUN_00572530(this_ptr);
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
