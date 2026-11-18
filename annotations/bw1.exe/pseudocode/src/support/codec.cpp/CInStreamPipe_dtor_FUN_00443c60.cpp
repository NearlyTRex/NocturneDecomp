// Name: support_codec.cpp_CInStreamPipe_dtor_FUN_00443c60
// Address: 00443c60
// Address Range: [[00443c60, 00443cbc]]
// Convention: __cdecl
// Signature: CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60(CInStreamPipe *this_ptr,uint flags)

#include "nocturne.h"

CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60(CInStreamPipe *this_ptr,uint flags)

{
  CInStreamPipe *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CInStreamPipeTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = g_CInStreamPipeVTable;
  support_codec_cpp_CInStreamPipe_close_FUN_00443f00(this_ptr);
  ptr = (CInStreamPipe *)support_trstream_cpp_CInStream_dtor_FUN_0059f550(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
