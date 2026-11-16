// Name: support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10
// Address: 0057dc10
// Address Range: [[0057dc10, 0057dc6c]]
// Convention: __cdecl
// Signature: COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile *this_ptr,uint flags)

#include "nocturne.h"

COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile *this_ptr,uint flags)

{
  COutStreamFile *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_COutStreamFileTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_COutStreamFileVTable;
  support_trstream_cpp_COutStreamFile_close_FUN_0057dd60(this_ptr);
  ptr = (COutStreamFile *)support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
