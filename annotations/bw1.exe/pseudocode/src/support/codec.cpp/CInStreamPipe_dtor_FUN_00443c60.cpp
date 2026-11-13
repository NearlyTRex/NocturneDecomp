// Name: support_codec.cpp_CInStreamPipe_dtor_FUN_00443c60
// Address: 00443c60
// Address Range: [[00443c60, 00443cbc]]
// Convention: __cdecl
// Signature: CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60(CInStreamPipe *this_ptr,uint flags)

#include "nocturne.h"

CInStreamPipe * __cdecl support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60(CInStreamPipe *this_ptr,uint flags)

{
  CInStreamPipe *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CInStreamPipeTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_CInStreamPipeVTable;
  support_codec_cpp_CInStreamPipe_close_FUN_00443f00(this_ptr);
  pCVar1 = (CInStreamPipe *)support_trstream_cpp_CInStream_dtor_FUN_0059f550(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
