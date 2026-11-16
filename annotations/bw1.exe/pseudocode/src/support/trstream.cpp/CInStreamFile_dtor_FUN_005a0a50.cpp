// Name: support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50
// Address: 005a0a50
// Address Range: [[005a0a50, 005a0aac]]
// Convention: __cdecl
// Signature: CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile *this_ptr,uint flags)

#include "nocturne.h"

CInStreamFile * __cdecl support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile *this_ptr,uint flags)

{
  CInStreamFile *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CInStreamFileTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamFileVTable;
  support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(this_ptr);
  ptr = (CInStreamFile *)support_trstream_cpp_CInStream_dtor_FUN_0059f550(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
