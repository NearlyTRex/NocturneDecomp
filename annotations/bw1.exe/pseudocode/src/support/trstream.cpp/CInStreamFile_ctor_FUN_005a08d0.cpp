// Name: support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0
// Address: 005a08d0
// Address Range: [[005a08d0, 005a0922]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile *this_ptr)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile *this_ptr)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)support_trstream_cpp_CInStream_ctor_FUN_0059f540(&this_ptr->base);
  (pCVar1->base).vtable = &g_CInStreamFileVTable;
  pCVar1->file_handle = (HANDLE)0x0;
  pCVar1->file_size = 0;
  pCVar1->file_offset = 0;
  pCVar1->position = 0;
  pCVar1->buffer_alloc = (void *)0x0;
  pCVar1->buffer = (char *)0x0;
  pCVar1->buffer_start = 0;
  pCVar1->buffer_capacity = 0;
  pCVar1->buffer_length = 0;
  return pCVar1;
}
