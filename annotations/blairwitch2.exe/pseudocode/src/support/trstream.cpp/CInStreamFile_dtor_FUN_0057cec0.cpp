// Name: support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0
// Address: 0057cec0
// Address Range: [[0057cec0, 0057cf1c]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile *this_ptr,uint flags)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile *this_ptr,uint flags)

{
  CInStreamFile *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CInStreamFileTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamFileVTable;
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(this_ptr);
  ptr = (CInStreamFile *)support_trstream_cpp_CInStream_dtor_FUN_0057b9d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
