// Name: support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
// Address: 00573a40
// Address Range: [[00573a40, 00573a9c]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile *this_ptr,uint flags)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile *this_ptr,uint flags)

{
  CInStreamFile *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CInStreamFileTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamFileVTable;
  support_trstream_cpp_CInStreamFile_close_FUN_00573db0(this_ptr);
  ptr = (CInStreamFile *)support_trstream_cpp_CInStream_dtor_FUN_00572540(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
