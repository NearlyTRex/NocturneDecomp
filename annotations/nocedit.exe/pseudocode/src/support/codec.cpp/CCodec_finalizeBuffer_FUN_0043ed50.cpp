// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
// Address: 0043ed50
// Address Range: [[0043ed50, 0043edc7]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

#include "nocturne.h"

int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  int iVar1;
  int iVar2;
  _ostrstream local_8c;
  
  crt_strstream_cpp_ostrstream_ctor_FUN_005ff384(&local_8c,0,buffer_ptr,*buffer_size_ptr,2);
  iVar1 = (*this_ptr->vtable->finalize)(this_ptr,&local_8c._ostream_core.destructor_vtable);
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d(&local_8c._ostream_core.destructor_vtable)
  ;
  *buffer_size_ptr = *buffer_size_ptr - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(&local_8c,0);
  return iVar1;
}
