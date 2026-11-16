// Name: support_codec.cpp_CInStreamPipe_dtor_FUN_004418c0
// Address: 004418c0
// Address Range: [[004418c0, 0044191c]]
// Convention: __cdecl
// Signature: CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_dtor_FUN_004418c0(CInStreamPipe *this_ptr,uint flags)

#include "nocturne.h"

CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_dtor_FUN_004418c0(CInStreamPipe *this_ptr,uint flags)

{
  CInStreamPipe *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CInStreamPipeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamPipeVTable;
  support_codec_cpp_CInStreamPipe_close_FUN_00441b60(this_ptr);
  ptr = (CInStreamPipe *)support_trstream_cpp_CInStream_dtor_FUN_00572540(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
